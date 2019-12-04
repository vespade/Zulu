_pelican = _this select 0;
_veh = _this select 1;
_loaded = false;

_veh setVariable ["VES_DeviceAvailable", false];
_veh setObjectTextureGlobal [3,""];
_veh setObjectTextureGlobal [4,""];
_device = "Land_Device_slingloadable_F" createVehicle [0,0,0];
_device attachTo [_pelican, [0, -4.5, 0]];
_device setDir 180;
_device setVectorUp [0,0,-1];
_veh = _device;
_loaded = true;

// ACTIONS
_devicearm = _device addAction ["", 
{
	_device = (_this select 0);
	_device setVariable ["VES_DeviceArmed", true];
	playSound3D ["V_FZ_Core\sounds\zulu_armed.ogg", _device, false, getPOS _device, 0.5, 1, 0];
	[_device] spawn
	{
		_timer = 30;
		_device = _this select 0;
		while {(_timer > .01) AND (_device getVariable "VES_DeviceArmed")} do
		{
			_time = diag_tickTime;
			sleep .02;
			_timesincelast = diag_tickTime - _time;
			_timer = _timer - _timesincelast;
			_seconds = ":";
			if (_timer < 10) then {_seconds = ":0"};
			hintSilent parseText format ["<t size='1.5'>Time Remaining:</t><br/><t size='2'>00%1%2</t>", _seconds, (((_timer toFixed 2) splitString ".") joinString ":")];
		};
		waitUntil {_timer < 0.1};
		hintSilent parseText "<t size='1.5'>Time Remaining:</t><br/><t size='2'>00:00:00</t>";
		[_device] spawn
		{
			_source = "Land_HelipadEmpty_F" createVehicle position (_this select 0);
			//_source = _this select 0;
			_source setVectorUp [0,0,1];
			_center = position _source;
			
			// EARTHQUAKE (PORTAL)
			[4] spawn BIS_fnc_earthquake;
	
			_light = "#lightpoint" createVehicleLocal (_center vectorAdd [0,0,200]);
			_light setLightAmbient [0,0,0];
			_light setLightColor [100, 200, 400];
			_light setLightBrightness 80.0;
			_light setLightDayLight true;
	
			// OUTER RING SMOKE
			_border = "#particlesource" createVehicleLocal _center;
			_border setParticleParams [
			["A3\Data_F\ParticleEffects\Universal\smoke.p3d", 1, 0, 1], "",
			"Billboard",
			1,
			1.25,
			[0, 0, 0],
			[0, 0, 0], 
			0, 1.5, 1, 0,
			[40, 60, 30],
			[[0.1, 0.5, 1, 0], [0.05, 0.05, 0.05, 5], [0.05, 0.05, 0.05, 10], [0.025, 0.025, 0.025, 0]],
			[1,0.5],
			0.1,
			1,
			"",
			"",
			_center];
			_border setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0, 360];
			_border setDropInterval 0.0002;
			_border setParticleCircle [100, [300, 300, 5]];
			sleep 0.5;
	
	
			// CENTER BLUE SMOKE
			_origin = "#particlesource" createVehicleLocal _center;
			_origin setParticleParams [
			["A3\Data_F\ParticleEffects\Universal\smoke.p3d", 1, 0, 1], "",
			"Billboard",
			1,
			1.45,
			[0, 0, 0],
			[0, 0, 0], 
			0, 1.5, 1, 0,
			[20, 45],
			[[0.1, 0.5, 1, -15], [0.1, 0.5, 1, -10], [0.05, 0.25, 1, -5], [0.05, 0.25, 1, 0]],
			[1,0.5],
			0.1,
			1,
			"",
			"",
			_center];
			_origin setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0, 360];
			_origin setParticleCircle [2, [250, 250, 2.5]];
			_origin setDropInterval 0.0002;
	
			// CENTER FIRE
			_fire = "#particlesource" createVehicleLocal _center;
			_fire setVectorUp [0,1,0];
			_fire setParticleParams [
			["A3\Data_F\ParticleEffects\Universal\universal.p3d", 16, 3, 48, 0], "",
			"Billboard",
			1,
			1.75,
			[0, 0, 0],
			[0, 0, 0],
			4, 1.5, 1, 0,
			[70,90,120,30],
			[[0, 0.25, 1, -10],[0, 0.25, 1, -7],[0, 0.25, 1, -5],[0, 0.25, 1, -2],[0, 0.25, 1, -1]], 
			[0.05], 
			1, 
			1, 
			"", 
			"",
			_center];
			_fire setParticleRandom [0, [75, 75, 15], [17, 17, 10], 0, 0, [0, 0, 0, 0], 0, 0, 360];
			_fire setDropInterval 0.002;
			_fire setParticleCircle [25, [200, 200, 2.5]];
	
			sleep 0.5;
			// OUTER SMOKE
			_border setParticleParams [
			["A3\Data_F\ParticleEffects\Universal\smoke.p3d", 1, 0, 1], "",
			"Billboard",
			1,
			3,
			[0, 0, 0],
			[0, 0, 0], 
			0, 1.5, 1, 0,
			[20, 80, 20],
			[[0.025, 0.025, 0.025, 10], [0.05, 0.05, 0.05, 6], [0.08, 0.08, 0.08, 3], [0.05, 0.05, 0.05, 0]],
			[1,0.5],
			0.1,
			1,
			"",
			"",
			_center];
			_border setParticleCircle [550, [5, 5, 1]];
	
	
			// Destroy Objects (Portal)
			_lightning = createGroup [west, true];
			_radius = 0;
			while {_radius < 500} do
			{
				_radius = _radius + 100;
				{
					if (!((_x isEqualTo _light) OR (_x isEqualTo _border) OR (_x isEqualTo _origin) OR (_x isEqualTo _fire))) then 
					{
						_x setDamage 1;
					};
				} forEach nearestObjects [_center, [], _radius];
				_unit = _lightning createUnit ["ModuleLightning_F", [[[_center, 500]], []] call BIS_fnc_randomPos, [], 0, "CAN_COLLIDE"];
			};
			
			{
				if (!((_x isEqualTo _light) OR (_x isEqualTo _border) OR (_x isEqualTo _origin) OR (_x isEqualTo _fire))) then
				{
					deleteVehicle _x;
				};
			} forEach nearestObjects [_center, [], _radius];
			
			// Delete Fire
			sleep 1;
			deleteVehicle _light;
			deleteVehicle _fire;
			_fire = nil;
			
			_border setParticleCircle [400, [-500, -500, 1.25]];
			sleep 0.15;
			_border setParticleCircle [250, [-500, -500, 1.25]];
			sleep 0.15;
			_border setParticleCircle [100, [-500, -500, 1.25]];
			sleep 0.15;
			_border setParticleCircle [5, [-500, -500, 0.15]];
			
			// Delete Rest
			deleteVehicle _border;
			deleteVehicle _origin;
			
			sleep 1;
			[2] spawn BIS_fnc_earthquake;
			sleep 0.5;
			private _light = "#lightpoint" createVehicleLocal (_center vectorAdd [0,0,200]);
			_light setLightAmbient[400, 400, 400];
			_light setLightColor[400, 400, 400];
			_brightness = 2000;
			_light setLightBrightness _brightness;
			_light setLightDayLight true;
			
			// Blast
			_wave = "#particlesource" createVehicleLocal _center;
			_wave setParticleParams [
			["A3\Data_F\ParticleEffects\Universal\universal.p3d", 16, 7, 48], "",
			"Billboard",
			1,
			25,
			[0, 0, 0],
			[0, 0, 0],
			0, 1.5, 1, 0,
			[100, 100, 80, 70, 60, 30, 20, 5],
			[[0.1, 0.1, 0.1, 0.5], [0.5, 0.5, 0.5, 0.5], [1, 1, 1, 0.3], [1, 1, 1, 0]],
			[1,0.5],
			0.1,
			1,
			"",
			"",
			_center];
			_wave setParticleRandom [2, [20, 20, 20], [5, 5, 0], 0, 0, [0, 0, 0, 0.1], 0, 0];
			_wave setParticleCircle [50, [-120, -120, 2.5]];
			_wave setDropInterval 0.0002;
			
			while {_radius < 1500} do
			{
				_radius = _radius + 100;
				{
					if (!((_x isEqualTo _light) OR (_x isEqualTo _border) OR (_x isEqualTo _origin))) then 
					{
						_damage = 1000/_radius;
						if (alive _x) then {_x setDamage _damage;};
					};
				} forEach nearestObjects [_center, [], _radius];
			};
			
			_wave setDropInterval 0.001;
			while {_brightness > 10} do 
			{
				_brightness = _brightness - 100;
				_light setLightBrightness _brightness;
				sleep 0.02;
			}; 
			deleteVehicle _light;
			_wave setDropInterval 0.01;
			sleep 1;
			deleteVehicle _wave;
		};
	};
}, [], 5.25, false, false, "", "not(_target getVariable [""VES_DeviceArmed"", false])", 5, false];
_device setUserActionText [_devicearm, "<t color='#FF2F00'>Arm Shaw-Fujikawa Slipspace Device</t>", "<img size='1.8' img image='\a3\ui_f\data\IGUI\Cfg\Actions\settimer_ca.paa'/>"];

_devicedisarm = _device addAction ["", 
{
	_device = (_this select 0);
	_device setVariable ["VES_DeviceArmed", false];
	playSound3D ["V_FZ_Core\sounds\zulu_disarmed.ogg", _device, false, getPOS _device, 0.5, 1, 0];
}, [], 5.25, false, false, "", "(_target getVariable [""VES_DeviceArmed"", false])", 5, false];
_device setUserActionText [_devicedisarm, "<t color='#009E3A'>Disarm Shaw-Fujikawa Slipspace Device</t>", "<img size='1.8' img image='\a3\ui_f\data\IGUI\Cfg\Actions\Obsolete\ui_action_deactivate_ca.paa'/>"];

// KaBoom
_device addEventHandler ["Dammaged",
{  
	params ["_unit", "_selection", "_damage", "_hitIndex", "_hitPoint", "_shooter", "_projectile"];
	[_unit] spawn
	{
		_pelican = attachedTo _unit;
		_pelican setDammage 1;
	};
}];

// RELOAD
_veh addEventHandler ["EpeContactStart", 
{
	params ["_object1", "_object2", "_selection1", "_selection2", "_force"];
	if (_object2 isKindOf "VES_HDV134_Fujikawa") then
	{
		_object2 setObjectTextureGlobal [3,"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa"];
		_object2 setObjectTextureGlobal [4,"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"];
		_object2 setVariable ["VES_DeviceAvailable", true];
		deleteVehicle _object1;
	};
}];

if (_loaded) then 
{
	_pelican setVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", [_veh], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLOCK SUCCESSFUL!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CARGO UNSUPPORTED!</t><br/>-------------------------------------------<br/>Your vehicle has not been design to be mag lifted by the pelican.", "PLAIN DOWN", -1, true, true];
	//hint "Your vehicle has not been designed to be lifted via maglock. Operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};