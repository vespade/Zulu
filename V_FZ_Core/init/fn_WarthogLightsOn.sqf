	_warthog = _this;

    _offlights = attachedObjects _warthog;
	
	{
		deleteVehicle _x;
	} forEach _offlights;
	
	_warthog setVariable ["VES_Warthog_LightbarStatus", true];
	
	_lightbar1 = "PortableHelipadLight_01_white_F" createVehicle [0,0,0];   
	_lightbar1 attachTo [_warthog, [-0.025,-0.7,-.45]];  
	_lightbar1 setDir 180;
	
	_lightbar2 = "PortableHelipadLight_01_white_F" createVehicle [0,0,0]; 
	_lightbar2 attachTo [_warthog, [-.175,-0.7,-.45]];
	_lightbar2 setDir 180;
	
	_lightbar3 = "PortableHelipadLight_01_white_F" createVehicle [0,0,0]; 
	_lightbar3 attachTo [_warthog, [.125,-0.7,-.45]];
	_lightbar3 setDir 180;
	
	if (_warthog isKindOf "VES_M12_APC_MED") then
	{
	
		_lightbar4 = "PortableHelipadLight_01_red_F" createVehicle [0,0,0]; 
		_lightbar4 attachTo [_warthog, [-.325,-0.7,-.45]];
		_lightbar4 setDir 180;
		
		_lightbar6 = "PortableHelipadLight_01_red_F" createVehicle [0,0,0]; 
		_lightbar6 attachTo [_warthog, [-.475,-0.7,-.45]];
		_lightbar6 setDir 180;
		
		_lightbar8 = "PortableHelipadLight_01_red_F" createVehicle [0,0,0]; 
		_lightbar8 attachTo [_warthog, [-.625,-0.7,-.45]];
		_lightbar8 setDir 180;
	
		_lightbar9 = "PortableHelipadLight_01_red_F" createVehicle [0,0,0]; 
		_lightbar9 attachTo [_warthog, [.575,-0.7,-.45]];
		_lightbar9 setDir 180;
	
		_lightbar5 = "PortableHelipadLight_01_red_F" createVehicle [0,0,0]; 
		_lightbar5 attachTo [_warthog, [.275,-0.7,-.45]];
		_lightbar5 setDir 180;
	
		_lightbar7 = "PortableHelipadLight_01_red_F" createVehicle [0,0,0]; 
		_lightbar7 attachTo [_warthog, [.425,-0.7,-.45]];
		_lightbar7 setDir 180;
	} 
	else
	{
		// Left
		_lightbar4 = "VES_Light" createVehicle [0,0,0];
		_lightbar4 animateSource ["Light_1_source", 1];
		_lightbar4 setDir 180; 
		_lightbar4 attachTo [_warthog, [-.325,-0.7,-.45]];
	
		_lightbar6 = "VES_Light" createVehicle [0,0,0];
		_lightbar6 animateSource ["Light_1_source", 1];
		_lightbar6 setDir 180; 
		_lightbar6 attachTo [_warthog, [-.475,-0.7,-.45]];
	
		_lightbar8 = "VES_Light" createVehicle [0,0,0];
		_lightbar8 animateSource ["Light_1_source", 1];
		_lightbar8 setDir 180;
		_lightbar8 attachTo [_warthog, [-.625,-0.7,-.45]];
	
		_lightgrill1 = "VES_Light" createVehicle [0,0,0];
		_lightgrill1 animateSource ["Light_1_source", 1];
		_lightgrill1 attachTo [_warthog, [-0.565,1.45,-1.27]]; 
		_lightgrill1 setVectorDirAndUp [[-0.4,0,-1],[0,1,0]];

		_lightgrill2 = "VES_Light" createVehicle [0,0,0];
		_lightgrill2 animateSource ["Light_1_source", 1];      
		_lightgrill2 attachTo [_warthog, [-0.65,1.4,-1.25]];  
		_lightgrill2 setVectorDirAndUp [[-0.4,0,-1],[0,1,0]]; 
		
		_lightrear4 = "VES_Light" createVehicle position _warthog;
		_lightrear4 animateSource ["Light_1_source", 1];     
		_lightrear4 attachTo [_warthog, [-0.58,-4.10,-1.15]]; 
		_lightrear4 setVectorDirAndUp [[0,0,1],[0,-1,0]];

		_lightrear5 = "VES_Light" createVehicle position _warthog;
		_lightrear5 animateSource ["Light_1_source", 1]; 
		_lightrear5 attachTo [_warthog, [-0.50,-4.10,-1.15]]; 
		_lightrear5 setVectorDirAndUp [[0,0,1],[0,-1,0]];

		_lightrear6 = "VES_Light" createVehicle position _warthog;
		_lightrear6 animateSource ["Light_1_source", 1];
		_lightrear6 attachTo [_warthog, [-0.42,-4.10,-1.15]]; 
		_lightrear6 setVectorDirAndUp [[0,0,1],[0,-1,0]];
	
		// Right
		_lightbar9 = "VES_Light" createVehicle [0,0,0];
		_lightbar9 animateSource ["Light_1_source", 1];
		_lightbar9 setDir 180; 
		_lightbar9 attachTo [_warthog, [.575,-0.7,-.45]];

		_lightbar5 = "VES_Light" createVehicle [0,0,0];
		_lightbar5 animateSource ["Light_1_source", 1];
		_lightbar5 setDir 180;
		_lightbar5 attachTo [_warthog, [.275,-0.7,-.45]];
	
		_lightbar7 = "VES_Light" createVehicle [0,0,0];
		_lightbar7 animateSource ["Light_1_source", 1];
		_lightbar7 setDir 180;
		_lightbar7 attachTo [_warthog, [.425,-0.7,-.45]];
	
		_lightgrill3 = "VES_Light" createVehicle [0,0,0];
		_lightgrill3 animateSource ["Light_1_source", 1];    
		_lightgrill3 attachTo [_warthog, [0.525,1.45,-1.27]]; 
		_lightgrill3 setVectorDirAndUp [[0.4,0,-1],[0,1,0]];
		
		_lightgrill4 = "VES_Light" createVehicle [0,0,0];
		_lightgrill4 animateSource ["Light_1_source", 1];
		_lightgrill4 attachTo [_warthog, [0.6,1.4,-1.25]]; 
		_lightgrill4 setVectorDirAndUp [[0.4,0,-1],[0,1,0]];
		
		_lightrear1 = "VES_Light" createVehicle position _warthog;
		_lightrear1 animateSource ["Light_1_source", 1];
		_lightrear1 attachTo [_warthog, [0.54,-4.10,-1.15]]; 
		_lightrear1 setVectorDirAndUp [[0,0,1],[0,-1,0]];

		_lightrear2 = "VES_Light" createVehicle position _warthog; 
		_lightrear2 animateSource ["Light_1_source", 1];		
		_lightrear2 attachTo [_warthog, [0.46,-4.10,-1.15]]; 
		_lightrear2 setVectorDirAndUp [[0,0,1],[0,-1,0]];

		_lightrear3 = "VES_Light" createVehicle position _warthog;  
		_lightrear3 animateSource ["Light_1_source", 1];
		_lightrear3 attachTo [_warthog, [0.38,-4.10,-1.15]]; 
		_lightrear3 setVectorDirAndUp [[0,0,1],[0,-1,0]];
		
		_light1 = "#lightpoint" createVehicle getpos _warthog;
		_light1 lightAttachObject [_warthog, [-0.65,1.4,-1.25]]; 
		_light1 setLightBrightness 0.15;

		_light2 = "#lightpoint" createVehicle getpos _warthog;
		_light2 lightAttachObject [_warthog, [0.6,1.4,-1.25]]; 
		_light2 setLightBrightness 0.15;

		_light3 = "#lightpoint" createVehicle getpos _warthog;
		_light3 lightAttachObject [_warthog, [-.475,-0.7,-.45]]; 
		_light3 setLightBrightness 0.15;

		_light4 = "#lightpoint" createVehicle getpos _warthog;
		_light4 lightAttachObject [_warthog, [.275,-0.7,-.45]]; 
		_light4 setLightBrightness 0.15;

		_light5 = "#lightpoint" createVehicle getpos _warthog;
		_light5 lightAttachObject [_warthog, [-0.50,-4.10,-1.15]]; 
		_light5 setLightBrightness 0.15;

		_light6 = "#lightpoint" createVehicle getpos _warthog;
		_light6 lightAttachObject [_warthog, [0.46,-4.10,-1.15]]; 
		_light6 setLightBrightness 0.15;
		
		while {(_warthog getvariable ["VES_Warthog_LightbarStatus", true])} do 
		{
			// Left (RED)
			_lightbar4 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightbar4 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightbar4 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightbar4 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
			
			_lightbar6 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightbar6 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightbar6 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightbar6 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
			
			_lightbar8 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightbar8 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightbar8 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightbar8 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
		
			_lightgrill1 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightgrill1 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightgrill1 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightgrill1 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
	
			_lightgrill2 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightgrill2 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightgrill2 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightgrill2 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
			
			_lightrear4 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightrear4 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightrear4 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightrear4 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
			
			_lightrear5 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightrear5 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightrear5 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightrear5 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
			
			_lightrear6 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightrear6 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightrear6 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightrear6 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
		
	
			// Right (Blue)
			_lightbar9 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightbar9 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightbar9 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightbar9 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
		
			_lightbar5 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightbar5 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightbar5 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightbar5 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
			
			_lightbar7 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightbar7 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightbar7 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightbar7 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
			
			_lightgrill3 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightgrill3 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightgrill3 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightgrill3 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
			
			_lightgrill4 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightgrill4 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightgrill4 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightgrill4 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
			
			_lightrear1 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightrear1 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightrear1 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightrear1 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
			
			_lightrear2 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightrear2 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightrear2 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightrear2 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
			
			_lightrear3 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightrear3 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightrear3 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightrear3 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];	
			
			_light1 setLightColor [5,0,0];
			_light2 setLightColor [0,0,5];
			_light3 setLightColor [5,0,0];
			_light4 setLightColor [0,0,5];
			_light5 setLightColor [5,0,0];
			_light6 setLightColor [0,0,5];
			
			sleep 0.35;
			
			// Left (BLUE)
			_lightbar4 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightbar4 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightbar4 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightbar4 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
			
			_lightbar6 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightbar6 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightbar6 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightbar6 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
			
			_lightbar8 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightbar8 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightbar8 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightbar8 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
		
			_lightgrill1 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightgrill1 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightgrill1 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightgrill1 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
	
			_lightgrill2 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightgrill2 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightgrill2 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightgrill2 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
			
			_lightrear4 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightrear4 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightrear4 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightrear4 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
			
			_lightrear5 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightrear5 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightrear5 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightrear5 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
			
			_lightrear6 setObjectTextureGlobal [0, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightrear6 setObjectTextureGlobal [1, "#(argb,8,8,3)color(0,0,1,1.0,co)"];
			_lightrear6 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightrear6 setObjectMaterial [1, "\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"];
		
	
			// Right (RED)
			_lightbar9 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightbar9 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightbar9 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightbar9 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
		
			_lightbar5 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightbar5 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightbar5 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightbar5 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
			
			_lightbar7 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightbar7 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightbar7 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightbar7 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
			
			_lightgrill3 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightgrill3 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightgrill3 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightgrill3 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
			
			_lightgrill4 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightgrill4 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightgrill4 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightgrill4 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
			
			_lightrear1 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightrear1 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightrear1 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightrear1 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
			
			_lightrear2 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightrear2 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightrear2 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightrear2 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
			
			_lightrear3 setObjectTextureGlobal [0, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightrear3 setObjectTextureGlobal [1, "#(argb,8,8,3)color(1,0,0,1.0,co)"];
			_lightrear3 setObjectMaterial [0, "\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat"];
			_lightrear3 setObjectMaterial [1, "\A3\Data_f\Lights\Building_LandingLights_Red.rvmat"];
			
			_light1 setLightColor [0,0,5];
			_light2 setLightColor [5,0,0];
			_light3 setLightColor [0,0,5];
			_light4 setLightColor [5,0,0];
			_light5 setLightColor [0,0,5];
			_light6 setLightColor [5,0,0];
			
			sleep 0.35;
		};
		
		
		deleteVehicle _light1;
		deleteVehicle _light2;
		deleteVehicle _light3;
		deleteVehicle _light4;
		deleteVehicle _light5;
		deleteVehicle _light6;
	};