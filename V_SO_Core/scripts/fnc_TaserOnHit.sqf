#define CSW_TASETIME 20

params ["_victim","_shooter"];
if ( _victim == _shooter )exitWith {};
if ( getText(configFile>>"CfgVehicles">> typeOf _victim >> "simulation") == "UAVPilot") exitWith{};	// gpgpgpgp: not gonna work on Robots!
private _weapon = currentWeapon _shooter;
private _mag = currentMagazine _shooter;
private _ammo = getText(configFile>>"CfgMagazines">>_mag>>"ammo");
if((_ammo == "OPTRE_B_127x40_NARQ") || {_ammo == "OPTRE_B_8Gauge_Beanbag"} || {_ammo == "OPTRE_B_145x114_NARQ"} || {_ammo == "OPTRE_B_145x114_NARQT"})then
{
	private _oldTasedUntilTime = _victim getVariable ["CSW_isTasedUntil",CBA_missionTime - 1];
	_victim setVariable ["CSW_isTasedUntil",CBA_missionTime + CSW_TASETIME ,true];
	if ( _oldTasedUntilTime >= CBA_missionTime )exitWith
	{
		// systemChat str [(_oldTasedUntilTime - CBA_missionTime),CBA_missionTime];
		private _weap = currentWeapon _victim;
		if( (_weap != "") && {_weap != "ACE_FakePrimaryWeapon"} && {vehicle _victim == _victim} && {_oldTasedUntilTime < CBA_missionTime + CSW_TASETIME - 2} ) then
		{
			_victim removeWeapon _weap;
			if( isTouchingGround _victim )then
			{
				private _dir = getDir _victim;
				private _droppedWeap = createVehicle ["groundweaponHolder",(ASLToAGL getPosASL _victim) vectorAdd [-cos ( -25 + _dir) * 1.4,sin (-25 + _dir) * 1.4,0], [], 0, "CAN_COLLIDE"];
				_droppedWeap addWeaponCargoGlobal [_weap,1];
				F setDir (190 + _dir);
			};
		};
	};
	[_victim,_shooter,_oldTasedUntilTime] spawn 
	{
		params ["_victim","_shooter","_oldTasedUntilTime"];

		private _stop = false;
		// systemChat str [(_oldTasedUntilTime - CBA_missionTime),CBA_missionTime];
		if(vehicle _victim == _victim)then
		{
			[_victim,"AcinPercMstpSrasWrflDnon_agony"] remoteExecCall ["switchMove",0,false];
			sleep 5;
			[_victim,"Static_Dead"] remoteExecCall ["switchMove",0,false];
			_victim setDir (195 + getDir _victim);
			if(isNil "ace_medical_fnc_setUnconscious")then
			{
				_stop = !(stopped _victim);
				if (_stop) then
				{
					[_victim,true] remoteExecCall ["stop",0,false];
					[_victim,true] remoteExecCall ["ace_common_fnc_disableAI",_victim,false];
				};
			};
			private _time = CBA_missionTime;
			waitUntil { (CBA_missionTime > _time + 0.99) || { animationState _victim == "Static_Dead" } };
			private _weap = currentWeapon _victim;
			if( (_weap != "") && {_weap != "ACE_FakePrimaryWeapon"} ) then
			{
				_victim removeWeapon _weap;
				if( isTouchingGround _victim )then
				{
					private _dir = getDir _victim;
					private _droppedWeap = createVehicle ["groundweaponHolder",(ASLToAGL getPosASL _victim) vectorAdd [-cos ( -25 + _dir) * 1.4,sin (-25 + _dir) * 1.4,0], [], 0, "CAN_COLLIDE"];
					_droppedWeap addWeaponCargoGlobal [_weap,1];
					_droppedWeap setDir (190 + _dir);
				};
			};
			if !( (isNil "ace_medical_fnc_setUnconscious") || {_victim call ace_common_fnc_isZombie} )then
			{
				sleep 0.5;
				[_victim, true, CSW_TASETIME , true] call ace_medical_fnc_setUnconscious;
			};
		}
		else
		{
			if( (isNil "ace_medical_fnc_setUnconscious") || {_victim call ace_common_fnc_isZombie} )then
			{
				_victim setVariable ["CSW_WakeUpAnimVehicle",[animationState _victim, vehicle _victim],true];
				private _anim = [_victim] call ace_common_fnc_getDeathAnim;
				[_victim,_anim] remoteExecCall ["playActionNow",0,false];
				_stop = !(stopped _victim);
				if (_stop) then
				{
					[_victim,true] remoteExecCall ["stop",0,false];
					[_victim,true] remoteExecCall ["ace_common_fnc_disableAI",_victim,false];
				};
			}
			else
			{
				[_victim, true, CSW_TASETIME , true] call ace_medical_fnc_setUnconscious;
			};
		};
		[_victim,_stop] spawn 
		{
			while { (_this select 0) getVariable ["CSW_isTasedUntil",CBA_missionTime - 1] >= CBA_missionTime } do
			{
				sleep 1;
				private _anim = [(_this select 0)] call ace_common_fnc_getDeathAnim;
				if( animationState (_this select 0) != _anim ) then
				{
					[(_this select 0),_anim] remoteExecCall ["switchMove",0,false];
				};
				(_this select 0) setVariable ["CSW_isTasedUntil",((_this select 0) getVariable ["CSW_isTasedUntil",CBA_missionTime - 1]) - 1,true];
			};
			if( _this select 1 )then
			{
				[(_this select 0),false] remoteExecCall ["stop",0,false];
				[(_this select 0),false] remoteExecCall ["ace_common_fnc_disableAI",_this select 0,false];
			};
			if( (isNil "ace_medical_fnc_setUnconscious") || {(_this select 0) call ace_common_fnc_isZombie} )then
			{
				if (vehicle (_this select 0) == (_this select 0)) then
				{
					[(_this select 0),"AmovPpneMstpSnonWnonDnon"] remoteExecCall ["switchMove",0,false];
				}
				else
				{
					((_this select 0) getVariable ["CSW_WakeUpAnimVehicle",["", objNull]]) params ["_awakeInVehicleAnimation","_oldVehicle"];
					private _vehicle = vehicle (_this select 0);
					if ((_awakeInVehicleAnimation != "") && {_vehicle == _oldVehicle} && {getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> _awakeInVehicleAnimation >> "terminal") == 0}) then
					{
						[(_this select 0), _awakeInVehicleAnimation] remoteExecCall ["switchMove",0,false];
					}
					else
					{
						private _slotInfo = [];
						{
							if ( (_this select 0) == (_x select 0) ) exitWith
							{
								_slotInfo = _x;
							};
						} forEach (fullCrew _vehicle);
						if (_slotInfo isEqualTo []) exitWith {};
						(_this select 0) setPosASL ((getPosASL (_this select 0)) vectorAdd [0,0,100]);
						if ((_slotInfo select 1) == "driver") then
						{
							(_this select 0) moveInDriver _vehicle;
						}
						else
						{
							if ((_slotInfo select 1) == "cargo") then
							{
								(_this select 0) moveInCargo [_vehicle, (_slotInfo select 2)];
							}
							else
							{
								(_this select 0) moveInTurret [_vehicle, (_slotInfo select 3)];
							};
						};
					};
				};
			};
		};
	};
};
