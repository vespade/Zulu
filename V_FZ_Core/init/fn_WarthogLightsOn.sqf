	_warthog = _this;

    _offlights = attachedObjects _warthog;
	
	_lightbar1 = "PortableHelipadLight_01_white_F" createVehicle position _warthog;   
	_lightbar1 attachTo [_warthog, [-0.025,-0.7,-.45]];  
	_lightbar1 setDir 180;
	
	_lightbar2 = "PortableHelipadLight_01_white_F" createVehicle position _warthog; 
	_lightbar2 attachTo [_warthog, [-.175,-0.7,-.45]];
	_lightbar2 setDir 180;
	
	_lightbar3 = "PortableHelipadLight_01_white_F" createVehicle position _warthog; 
	_lightbar3 attachTo [_warthog, [.125,-0.7,-.45]];
	_lightbar3 setDir 180;
	
	_lightbar4 = "PortableHelipadLight_01_red_F" createVehicle position _warthog; 
	_lightbar4 attachTo [_warthog, [-.325,-0.7,-.45]];
	_lightbar4 setDir 180;
	
	_lightbar6 = "PortableHelipadLight_01_red_F" createVehicle position _warthog; 
	_lightbar6 attachTo [_warthog, [-.475,-0.7,-.45]];
	_lightbar6 setDir 180;
		
	_lightbar8 = "PortableHelipadLight_01_red_F" createVehicle position _warthog; 
	_lightbar8 attachTo [_warthog, [-.625,-0.7,-.45]];
	_lightbar8 setDir 180;
	
	if (_warthog isKindOf "VES_M12_APC_MED") then
	{
		_lightbar9 = "PortableHelipadLight_01_red_F" createVehicle position _warthog; 
		_lightbar9 attachTo [_warthog, [.575,-0.7,-.45]];
		_lightbar9 setDir 180;
	
		_lightbar5 = "PortableHelipadLight_01_red_F" createVehicle position _warthog; 
		_lightbar5 attachTo [_warthog, [.275,-0.7,-.45]];
		_lightbar5 setDir 180;
	
		_lightbar7 = "PortableHelipadLight_01_red_F" createVehicle position _warthog; 
		_lightbar7 attachTo [_warthog, [.425,-0.7,-.45]];
		_lightbar7 setDir 180;
	
	} 
	else
	{
		_lightbar9 = "PortableHelipadLight_01_blue_F" createVehicle position _warthog; 
		_lightbar9 attachTo [_warthog, [.575,-0.7,-.45]];
		_lightbar9 setDir 180;
	
		_lightbar5 = "PortableHelipadLight_01_blue_F" createVehicle position _warthog; 
		_lightbar5 attachTo [_warthog, [.275,-0.7,-.45]];
		_lightbar5 setDir 180;
	
		_lightbar7 = "PortableHelipadLight_01_blue_F" createVehicle position _warthog; 
		_lightbar7 attachTo [_warthog, [.425,-0.7,-.45]];
		_lightbar7 setDir 180;
	};

	{
		deleteVehicle _x;
	} forEach _offlights;
	
	_warthog setVariable ["VES_Warthog_LightbarStatus", true];