// FALCON ACTIONS

_falcon = _this select 0;

_falcon lockTurret [2, true];
_falcon lockTurret [3, true];

_falcon addEventHandler ["Killed", 
{
    params ["_unit", "_killer", "_instigator", "_useEffects"];
	removeAllActions _unit;
}];

_falcongetinright = _falcon addAction ["", {
    _falcon = _this select 0;
    _caller = _this select 1;
    _rightgun = attachedObjects _falcon select 0;
    _caller moveInAny _rightgun;
}, [], 5.25, false, false, "", "(!(_this in [driver _originalTarget]) AND (cursorObject == _originalTarget)) AND ((count (crew ((attachedObjects _originalTarget) select 0))) < 1)", 3, false, "", "pos_cargo_r"]; 
_falcon setUserActionText [_falcongetinright, "Get in M247T Side Turret (Right) as Gunner", "<img size='1.8' img image='\a3\ui_f\data\IGUI\Cfg\Actions\getingunner_ca.paa'/>"];

_falcongetinleft = _falcon addAction ["", {
    _falcon = _this select 0; 
    _caller = _this select 1;
    _leftgun = attachedObjects _falcon select 1; 
    _caller moveInAny _leftgun;
}, [], 5.25, false, false, "", "(!(_this in [driver _originalTarget]) AND (cursorObject == _originalTarget)) AND ((count (crew ((attachedObjects _originalTarget) select 1))) < 1)", 3, false, "", "pos_cargo_l"];
_falcon setUserActionText [_falcongetinleft, "Get in M247T Side Turret (Left) as Gunner", "<img size='1.8' img image='\a3\ui_f\data\IGUI\Cfg\Actions\getingunner_ca.paa'/>"];

if ((isDedicated) OR (hasInterface && isServer)) then
{
	_falcon = _this select 0;

	[] spawn {sleep 3;};
	
	// RIGHT MG
 
	_falconrightmg = createVehicle ["VES_UH144_Turret_R", [0,0,0], [], 0, "CAN_COLLIDE"];
	_falconrightmg attachTo [_falcon, [.87,-.089,-1.38]];
	_falconrightmg setDir 90;
	_falconrightmg removeWeaponGlobal "OPTRE_M247";
	_falconrightmg addWeapon "OPTRE_M247H";
	_falconrightmg addMagazine "OPTRE_200Rnd_127x99_M247H";
	_falconrightmg addMagazine "OPTRE_200Rnd_127x99_M247H";
	_falconrightmg addMagazine "OPTRE_200Rnd_127x99_M247H";
	_falconrightmg addMagazine "OPTRE_200Rnd_127x99_M247H";
	_falconrightmg addMagazine "OPTRE_200Rnd_127x99_M247H";

	// LEFT MG
 
	_falconleftmg = createVehicle ["VES_UH144_Turret_L", [0,0,0], [], 0, "CAN_COLLIDE"];
	_falconleftmg attachTo [_falcon, [-.87,-.089,-1.38]];
	_falconleftmg setDir -90;
	_falconleftmg removeWeaponGlobal "OPTRE_M247";
	_falconleftmg addWeapon "OPTRE_M247H";
	_falconleftmg addMagazine "OPTRE_200Rnd_127x99_M247H";
	_falconleftmg addMagazine "OPTRE_200Rnd_127x99_M247H";
	_falconleftmg addMagazine "OPTRE_200Rnd_127x99_M247H";
	_falconleftmg addMagazine "OPTRE_200Rnd_127x99_M247H";
	_falconleftmg addMagazine "OPTRE_200Rnd_127x99_M247H";
	
	// Spawn Gunners
	if (alive (driver _falcon)) then
	{
		_crew = group (driver _falcon);
		if ((side (driver _falcon)) isEqualTo west) then
		{
			_rightcrewman = _crew createUnit ["VES_Rifleman_Crew_URB", [0,0,0], [], 0, ""];
			_rightcrewman moveInAny _falconrightmg;
			_leftcrewman = _crew createUnit ["VES_Rifleman_Crew_URB", [0,0,0], [], 0, ""];
			_leftcrewman moveInAny _falconleftmg;
		};
		if ((side (driver _falcon)) isEqualTo resistance) then
		{
			_rightcrewman = _crew createUnit ["VES_Rifleman_MA5B_SFP", [0,0,0], [], 0, ""];
			_rightcrewman moveInAny _falconrightmg;
			_leftcrewman = _crew createUnit ["VES_Rifleman_MA5B_SFP", [0,0,0], [], 0, ""];
			_leftcrewman moveInAny _falconleftmg;
		};
	};
	
	// MOVE OR DEATH
	
	_falcon addEventHandler ["Killed",
	{
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		{
			_x setDamage 1;
		} forEach attachedObjects _unit;
	}];

	_falcon addEventHandler ["Deleted", 
	{
		params ["_entity"];
		{
			deleteVehicle _x;
		} forEach attachedObjects _entity;
	}];

	// GET OUT

	_falconrightmg = attachedObjects _falcon select 0;
	_falconleftmg = attachedObjects _falcon select 1;

	_falconrightmg addEventHandler ["GetOut",  
	{  
		params ["_vehicle", "_role", "_unit", "_turret"];
		[_vehicle, _unit] spawn
		{
			_gun = _this select 0;
			_unit = _this select 1;
			_falcon = attachedTo _gun;
			_unit allowDamage false;
			_unit setDir (direction _falcon + 90);
			_unit setPos (_falcon modelToWorld [2,-.089,-3]);
			uiSleep .2;
			_unit allowDamage true;
		};
	}];
	
	_falconleftmg addEventHandler ["GetOut",  
	{  
		params ["_vehicle", "_role", "_unit", "_turret"];
		[_vehicle, _unit] spawn
		{
			_gun = _this select 0;
			_unit = _this select 1;
			_falcon = attachedTo _gun;
			_unit allowDamage false;
			_unit setDir (direction _falcon - 90);
			_unit setPos (_falcon modelToWorld [-2,-.089,-3]);
			uiSleep .2;
			_unit allowDamage true;
		};
	}];
};