	_warthog = _this select 0;
	
	_lightbar1 = "VES_Light" createVehicle [0,0,0];   
	_lightbar1 attachTo [_warthog, [-0.025,-0.7,-.45]];  
	_lightbar1 setDir 180;
	
	_lightbar2 = "VES_Light" createVehicle [0,0,0]; 
	_lightbar2 attachTo [_warthog, [-.175,-0.7,-.45]];
	_lightbar2 setDir 180;
	
	_lightbar3 = "VES_Light" createVehicle [0,0,0]; 
	_lightbar3 attachTo [_warthog, [.125,-0.7,-.45]];
	_lightbar3 setDir 180;
	
	if (_warthog isKindOf "VES_M12_APC_MED") then
	{
	
		_lightbar4 = "VES_Light" createVehicle [0,0,0]; 
		_lightbar4 attachTo [_warthog, [-.325,-0.7,-.45]];
		_lightbar4 setDir 180;
		
		_lightbar6 = "VES_Light" createVehicle [0,0,0]; 
		_lightbar6 attachTo [_warthog, [-.475,-0.7,-.45]];
		_lightbar6 setDir 180;
		
		_lightbar8 = "VES_Light" createVehicle [0,0,0]; 
		_lightbar8 attachTo [_warthog, [-.625,-0.7,-.45]];
		_lightbar8 setDir 180;
	
		_lightbar9 = "VES_Light" createVehicle [0,0,0]; 
		_lightbar9 attachTo [_warthog, [.575,-0.7,-.45]];
		_lightbar9 setDir 180;
	
		_lightbar5 = "VES_Light" createVehicle [0,0,0]; 
		_lightbar5 attachTo [_warthog, [.275,-0.7,-.45]];
		_lightbar5 setDir 180;
	
		_lightbar7 = "VES_Light" createVehicle [0,0,0]; 
		_lightbar7 attachTo [_warthog, [.425,-0.7,-.45]];
		_lightbar7 setDir 180;
	} 
	else
	{
		// Left
		_lightbar4 = "VES_Light" createVehicle [0,0,0];
		_lightbar4 setDir 180; 
		_lightbar4 attachTo [_warthog, [-.325,-0.7,-.45]];
	
		_lightbar6 = "VES_Light" createVehicle [0,0,0];
		_lightbar6 setDir 180; 
		_lightbar6 attachTo [_warthog, [-.475,-0.7,-.45]];
	
		_lightbar8 = "VES_Light" createVehicle [0,0,0];
		_lightbar8 setDir 180;
		_lightbar8 attachTo [_warthog, [-.625,-0.7,-.45]];
	
		_lightgrill1 = "VES_Light" createVehicle [0,0,0];
		_lightgrill1 attachTo [_warthog, [-0.565,1.45,-1.27]]; 
		_lightgrill1 setVectorDirAndUp [[-0.4,0,-1],[0,1,0]];

		_lightgrill2 = "VES_Light" createVehicle [0,0,0];
		_lightgrill2 attachTo [_warthog, [-0.65,1.4,-1.25]];  
		_lightgrill2 setVectorDirAndUp [[-0.4,0,-1],[0,1,0]]; 
		
		_lightrear4 = "VES_Light" createVehicle position _warthog;     
		_lightrear4 attachTo [_warthog, [-0.58,-4.10,-1.15]]; 
		_lightrear4 setVectorDirAndUp [[0,0,1],[0,-1,0]];

		_lightrear5 = "VES_Light" createVehicle position _warthog;     
		_lightrear5 attachTo [_warthog, [-0.50,-4.10,-1.15]]; 
		_lightrear5 setVectorDirAndUp [[0,0,1],[0,-1,0]];

		_lightrear6 = "VES_Light" createVehicle position _warthog;     
		_lightrear6 attachTo [_warthog, [-0.42,-4.10,-1.15]]; 
		_lightrear6 setVectorDirAndUp [[0,0,1],[0,-1,0]];
	
		// Right
		_lightbar9 = "VES_Light" createVehicle [0,0,0];
		_lightbar9 setDir 180; 
		_lightbar9 attachTo [_warthog, [.575,-0.7,-.45]];

		_lightbar5 = "VES_Light" createVehicle [0,0,0];
		_lightbar5 setDir 180;
		_lightbar5 attachTo [_warthog, [.275,-0.7,-.45]];
	
		_lightbar7 = "VES_Light" createVehicle [0,0,0];
		_lightbar7 setDir 180;
		_lightbar7 attachTo [_warthog, [.425,-0.7,-.45]];
	
		_lightgrill3 = "VES_Light" createVehicle [0,0,0];
		_lightgrill3 attachTo [_warthog, [0.525,1.45,-1.27]]; 
		_lightgrill3 setVectorDirAndUp [[0.4,0,-1],[0,1,0]];
		
		_lightgrill4 = "VES_Light" createVehicle [0,0,0];
		_lightgrill4 attachTo [_warthog, [0.6,1.4,-1.25]]; 
		_lightgrill4 setVectorDirAndUp [[0.4,0,-1],[0,1,0]];
		
		_lightrear1 = "VES_Light" createVehicle position _warthog;     
		_lightrear1 attachTo [_warthog, [0.54,-4.10,-1.15]]; 
		_lightrear1 setVectorDirAndUp [[0,0,1],[0,-1,0]];

		_lightrear2 = "VES_Light" createVehicle position _warthog;     
		_lightrear2 attachTo [_warthog, [0.46,-4.10,-1.15]]; 
		_lightrear2 setVectorDirAndUp [[0,0,1],[0,-1,0]];

		_lightrear3 = "VES_Light" createVehicle position _warthog;     
		_lightrear3 attachTo [_warthog, [0.38,-4.10,-1.15]]; 
		_lightrear3 setVectorDirAndUp [[0,0,1],[0,-1,0]];
	};
	
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