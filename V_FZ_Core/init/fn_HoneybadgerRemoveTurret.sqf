_honeybadger = _this select 0;

// REMOVE TURRET TEXTURE

_honeybadger setObjectTextureGlobal [2,""];


// HONEYBADGER REMOVE ACTION

_honeybadger deleteVehicleCrew gunner _honeybadger;
_honeybadger deleteVehicleCrew commander _honeybadger;
_honeybadger lockturret [[0,0],true];
_honeybadger lockturret [[0],true];

// KEEP TURRET GONE

_honeybadger animate ["HideTurret",1];

_honeybadger addEventHandler ["CuratorObjectEdited", 
{
	params ["_curator", "_entity"];
	_entity animate ["HideTurret",1];
}];