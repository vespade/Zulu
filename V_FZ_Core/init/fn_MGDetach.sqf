/*if ((isDedicated) OR (hasInterface && isServer)) then
{*/
	_mg = _this;
	_player = (crew _mg) select 0;

	moveOut _player;
	_player setDir (getDir _player + 180);
	playSound "FD_Target_PopDown_Small_F";
	playSound "FD_Target_PopDown_Small_F";
	playSound "FD_Target_PopDown_Small_F";
	sleep 0.25;
	deleteVehicle _mg;
	_weapon = primaryWeapon _player;
	_magazine = (primaryWeaponMagazine _player) select 0;
	_attachments = primaryWeaponItems _player;
	_player removeWeapon _weapon;
	_player addMagazineGlobal "OPTRE_100Rnd_762x51_Box";
	_player addWeaponGlobal "OPTRE_M247";
	_player selectWeapon "OPTRE_M247";
	_player forceWalk true;
	/*while {(currentWeapon _player) == ("OPTRE_M247") AND (_mgammo > 1)} do
	{
		_mgammo = (currentMagazineDetail player) splitString "(/" select 1;
		sleep .2;
	};*/
	waitUntil
	{
		((primaryWeapon _player) isEqualTo "")
		/*OR
		(_mgammo < 1)*/
	};
	_player forceWalk false;
	if !(isNil _magazine) then {_player addMagazineGlobal _magazine;};
	_player addWeaponGlobal _weapon;
	_player addPrimaryWeaponItem (_attachments select 0);
	_player addPrimaryWeaponItem (_attachments select 1);
	_player addPrimaryWeaponItem (_attachments select 2);
	_player addPrimaryWeaponItem (_attachments select 3);
	_player selectWeapon _weapon;
/*};*/