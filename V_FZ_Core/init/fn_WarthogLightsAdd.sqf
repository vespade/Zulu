	_warthog = _this select 0;
	
	_lightbar1 = "VES_light" createVehicle position _warthog; 
	_lightbar1 attachTo [_warthog, [-.15,.575,-.41]];
	_lightbar1 setDir 180;
	_lightbar2 = "VES_light" createVehicle position _warthog; 
	_lightbar2 attachTo [_warthog, [-.30,.575,-.41]];
	_lightbar2 setDir 180;
	_lightbar3 = "VES_light" createVehicle position _warthog; 
	_lightbar3 attachTo [_warthog, [0,.575,-.41]];
	_lightbar3 setDir 180;
	_lightbar4 = "VES_light" createVehicle position _warthog; 
	_lightbar4 attachTo [_warthog, [-.45,.575,-.41]];
	_lightbar4 setDir 180;
	_lightbar5 = "VES_light" createVehicle position _warthog; 
	_lightbar5 attachTo [_warthog, [.15,.575,-.41]];
	_lightbar5 setDir 180;
	_lightbar6 = "VES_light" createVehicle position _warthog; 
	_lightbar6 attachTo [_warthog, [-.6,.575,-.41]];
	_lightbar6 setDir 180;
	_lightbar7 = "VES_light" createVehicle position _warthog; 
	_lightbar7 attachTo [_warthog, [.30,.575,-.41]];
	_lightbar7 setDir 180;
	_lightbar8 = "VES_light" createVehicle position _warthog; 
	_lightbar8 attachTo [_warthog, [-.75,.575,-.41]];
	_lightbar8 setDir 180;
	_lightbar9 = "VES_light" createVehicle position _warthog; 
	_lightbar9 attachTo [_warthog, [.45,.575,-.41]];
	_lightbar9 setDir 180;
	
	_warthog setvariable ["VES_Warthog_LightbarServer",false,true];
	_warthog addEventHandler ["Killed", 
	{
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		{
			_x setDamage 1;
		} forEach attachedObjects _unit;
	}];
	
	_warthog addEventHandler ["Deleted", 
	{
		params ["_entity"];
		{
			deleteVehicle _x;
		} forEach attachedObjects _entity;
	}];
	
	_warthog setVariable ["VES_Warthog_LightbarStatus", false];