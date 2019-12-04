if (isServer) then
{

	_pelican = _this select 0;

	[] spawn {sleep 3;};

	// SPAWN MG
	
	_pelican animate ["cargoDoor_1",1]; 
	_pelican animate ["cargoDoor_2",1];
	[] spawn {sleep 2;};
	_pelicanmg = "VES_M247H_Turret" createVehicle position _pelican;
	_pelicanmg attachTo [_pelican, [-.15,1.20,-1.35]];
	_pelicanmg setDir 180;

	// MOVE OR DEATH
	
	_pelican addEventHandler ["Killed",
	{
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		{
			if (_x isKindof "OPTRE_Static_M247H_Shielded_Tripod") then {_x setDamage 1;};
		} forEach attachedObjects _unit;
	}];
	
	_pelican addEventHandler ["Deleted", 
	{
		params ["_entity"];
		{
			deleteVehicle _x;
		} forEach attachedObjects _entity;
	}];

	// GET OUT

	_pelicanmg = attachedObjects _pelican select 0;
	
	_pelicanmg addEventHandler ["GetOut",
	{  
		params ["_vehicle", "_role", "_unit", "_turret"];
		[_vehicle, _unit] spawn
		{
			_gun = _this select 0;
			_unit = _this select 1;
			_pelican = attachedTo _gun;
			_unit allowDamage false;
			_unit setDir (direction _pelican + 180);
			_unit setPos (_pelican modelToWorld [0,-2,-5]);
			uiSleep .2;
			_unit allowDamage true;
		};
	}];
};

// ACTIONS

_pelican = _this select 0;

_pelican addEventHandler ["Killed", 
{
    params ["_unit", "_killer", "_instigator", "_useEffects"];
	removeAllActions _unit;
}];

_pelicangetingun = _pelican addAction ["", 
{
    _pelican = _this select 0;
    _caller = _this select 1;
    _gun = attachedObjects _pelican select 0;
    _caller moveInAny _gun;
}, [], 5.25, false, false, "", "(!(_this in [driver _originalTarget]) AND (cursorObject == _originalTarget))", 5, false]; 
_pelican setUserActionText [_pelicangetingun, "Get in M247H Back Turret as Gunner", "<img size='1.8' img image='\a3\ui_f\data\IGUI\Cfg\Actions\getingunner_ca.paa'/>"];