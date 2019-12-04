_warthog = _this;

    _offlights = attachedObjects _warthog;
	
	_lightbar1 = "PortableHelipadLight_01_white_F" createVehicle [0,0,0]; 
	_lightbar1 attachTo [_warthog, [-.15,.575,-.41]];
	_lightbar1 setDir 180;	
	_lightbar2 = "PortableHelipadLight_01_white_F" createVehicle [0,0,0]; 
	_lightbar2 attachTo [_warthog, [-.30,.575,-.41]];
	_lightbar2 setDir 180;	
	_lightbar3 = "PortableHelipadLight_01_white_F" createVehicle [0,0,0]; 
	_lightbar3 attachTo [_warthog, [0,.575,-.41]];
	_lightbar3 setDir 180;
	_lightbar4 = "PortableHelipadLight_01_red_F" createVehicle [0,0,0]; 
	_lightbar4 attachTo [_warthog, [-.45,.575,-.41]];
	_lightbar4 setDir 180;	
	_lightbar5 = "PortableHelipadLight_01_red_F" createVehicle [0,0,0]; 
	_lightbar5 attachTo [_warthog, [.15,.575,-.41]];
	_lightbar5 setDir 180;
	_lightbar6 = "PortableHelipadLight_01_red_F" createVehicle [0,0,0]; 
	_lightbar6 attachTo [_warthog, [-.6,.575,-.41]];
	_lightbar6 setDir 180;
	_lightbar7 = "PortableHelipadLight_01_red_F" createVehicle [0,0,0]; 
	_lightbar7 attachTo [_warthog, [.30,.575,-.41]];
	_lightbar7 setDir 180;
	_lightbar8 = "PortableHelipadLight_01_red_F" createVehicle [0,0,0]; 
	_lightbar8 attachTo [_warthog, [-.75,.575,-.41]];
	_lightbar8 setDir 180;
	_lightbar9 = "PortableHelipadLight_01_red_F" createVehicle [0,0,0]; 
	_lightbar9 attachTo [_warthog, [.45,.575,-.41]];
	_lightbar9 setDir 180;

	{
		deleteVehicle _x;
	} forEach _offlights;
	
	_warthog setVariable ["VES_Warthog_LightbarStatus", true];