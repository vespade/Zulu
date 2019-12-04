_warthog = _this;
	
	_onlights = attachedObjects _warthog;
	
	_lightbar1 = "VES_light" createVehicle [0,0,0]; 
	_lightbar1 attachTo [_warthog, [-.15,.575,-.41]];
	_lightbar1 setDir 180;
	_lightbar2 = "VES_light" createVehicle [0,0,0]; 
	_lightbar2 attachTo [_warthog, [-.30,.575,-.41]];
	_lightbar2 setDir 180;
	_lightbar3 = "VES_light" createVehicle [0,0,0]; 
	_lightbar3 attachTo [_warthog, [0,.575,-.41]];
	_lightbar3 setDir 180;
	_lightbar4 = "VES_light" createVehicle [0,0,0]; 
	_lightbar4 attachTo [_warthog, [-.45,.575,-.41]];
	_lightbar4 setDir 180;
	_lightbar5 = "VES_light" createVehicle [0,0,0]; 
	_lightbar5 attachTo [_warthog, [.15,.575,-.41]];
	_lightbar5 setDir 180;
	_lightbar6 = "VES_light" createVehicle [0,0,0]; 
	_lightbar6 attachTo [_warthog, [-.6,.575,-.41]];
	_lightbar6 setDir 180;
	_lightbar7 = "VES_light" createVehicle [0,0,0]; 
	_lightbar7 attachTo [_warthog, [.30,.575,-.41]];
	_lightbar7 setDir 180;
	_lightbar8 = "VES_light" createVehicle [0,0,0]; 
	_lightbar8 attachTo [_warthog, [-.75,.575,-.41]];
	_lightbar8 setDir 180;
	_lightbar9 = "VES_light" createVehicle [0,0,0]; 
	_lightbar9 attachTo [_warthog, [.45,.575,-.41]];
	_lightbar9 setDir 180;
	
	{
		deleteVehicle _x;
	} forEach _onlights;
	
	_warthog setVariable ["VES_Warthog_LightbarStatus", false];