_warthog = _this;
	
	_onlights = attachedObjects _warthog;
	
	_lightbar1 = "VES_Light" createVehicle position _warthog;   
	_lightbar1 attachTo [_warthog, [-0.025,-0.7,-.45]];  
	_lightbar1 setDir 180;
	
	_lightbar2 = "VES_Light" createVehicle position _warthog; 
	_lightbar2 attachTo [_warthog, [-.175,-0.7,-.45]];
	_lightbar2 setDir 180;
	
	_lightbar3 = "VES_Light" createVehicle position _warthog; 
	_lightbar3 attachTo [_warthog, [.125,-0.7,-.45]];
	_lightbar3 setDir 180;
	
	_lightbar4 = "VES_Light" createVehicle position _warthog; 
	_lightbar4 attachTo [_warthog, [-.325,-0.7,-.45]];
	_lightbar4 setDir 180;
	
	_lightbar6 = "VES_Light" createVehicle position _warthog; 
	_lightbar6 attachTo [_warthog, [-.475,-0.7,-.45]];
	_lightbar6 setDir 180;
	
	_lightbar8 = "VES_Light" createVehicle position _warthog; 
	_lightbar8 attachTo [_warthog, [-.625,-0.7,-.45]];
	_lightbar8 setDir 180;
	
	_lightbar9 = "VES_Light" createVehicle position _warthog; 
	_lightbar9 attachTo [_warthog, [.575,-0.7,-.45]];
	_lightbar9 setDir 180;
	
	_lightbar5 = "VES_Light" createVehicle position _warthog; 
	_lightbar5 attachTo [_warthog, [.275,-0.7,-.45]];
	_lightbar5 setDir 180;
	
	_lightbar7 = "VES_Light" createVehicle position _warthog; 
	_lightbar7 attachTo [_warthog, [.425,-0.7,-.45]];
	_lightbar7 setDir 180;
	
	{
		deleteVehicle _x;
	} forEach _onlights;
	
	_warthog setVariable ["VES_Warthog_LightbarStatus", false];