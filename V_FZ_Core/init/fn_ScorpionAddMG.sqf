_scorpion = _this select 0;

// SCORPION ACTION

_scorpion addAction ["Get in M247H Mounted Machinegun Turret as Gunner", {   
    _scorpion = _this select 0; 
    _caller = _this select 1; 
    _gun = attachedObjects _scorpion select 0; 
    _caller moveInAny _gun; 
}, [], 5.2, false, false, "", "(!(_this in [driver _originalTarget]) AND (cursorObject == _originalTarget))", 12, false];

// ATTACH

_scorpionmg = "VES_M247H_Turret" createVehicle position _scorpion;
_scorpionmg attachTo [_scorpion, [.87,.25,.05]];
//createVehicleCrew _scorpionmg;
_scorpionmg addEventHandler ["GetOut",   
{
	params ["_vehicle", "_role", "_unit", "_turret"];
	[_vehicle, _unit] spawn
	{
		_scorpion = attachedTo (_this select 0);
		_unit = (_this select 1);
		_unit allowDamage false;
		_unit setPos (_scorpion modelToWorld [3.5,1,-2.5]);
		_unit setDir (direction _scorpion + 180);
		uiSleep .2;
		_unit allowDamage true;
	};
}];

/*_scorpionbarrel = "Land_MetalBarrel_empty_F" createVehicle position _scorpion;
_scorpionbarrel attachTo [_scorpion, [.75,-.42,-.90]];

_scorpionchair = "Land_OfficeChair_01_F" createVehicle position _scorpion;
_scorpionchair attachTo [_scorpion, [.75,-.32,-.9]];
_scorpionchair setDir 180;

_scorpionchair1 = "Land_OfficeChair_01_F" createVehicle position _scorpion;
_scorpionchair1 attachTo [_scorpion, [.75,-.33,-.9]];
_scorpionchair1 setDir 180;

_scorpionchair2 = "Land_OfficeChair_01_F" createVehicle position _scorpion;
_scorpionchair2 attachTo [_scorpion, [.75,-.34,-.9]];
_scorpionchair2 setDir 180;*/

// MOVE OR DEATH

_scorpion addEventHandler ["Killed", 
{
    params ["_unit", "_killer", "_instigator", "_useEffects"];
    {
		_x setDamage 1;
	} forEach attachedObjects _unit;
}];

_scorpion addEventHandler ["Deleted", 
{
    params ["_entity"];
    {
		deleteVehicle _x;
	} forEach attachedObjects _entity;
}];