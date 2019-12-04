_vehicles = ((_this select 0) getVariable ["OPTRE_Pelican_AttachedToVehiclesEffect",[]]);
	
if (
		(
			{
				(_x isKindOf "OPTRE_M808B_base") OR
				(_x isKindOf "OPTRE_M12A1_LRV") OR 
				(_x isKindOf "OPTRE_M12_LRV") OR
				(_x isKindOf "OPTRE_M12G1_LRV") OR 
				(_x isKindOf "OPTRE_M12R_AA") OR 
				(_x isKindOf "OPTRE_M12_FAV_APC") OR 
				(_x isKindOf "OPTRE_M12_FAV") OR
				(_x isKindOf "OPTRE_M813_TT") OR
				(_x isKindOf "OPTRE_M413_base") OR
				(_x isKindOf "OPTRE_EscapePod") OR
				(_x isKindOf "VES_IFV76_A") OR
				(_x isKindOf "Truck_03_base_F") OR
				(_x isKindOf "B_Boat_Armed_01_minigun_F") OR
				(_x isKindOf "B_Boat_Transport_01_F") OR
				(_x isKindOf "Land_Device_slingloadable_F")
			} count _vehicles > 0
		)
) then {

	if ((((getPos (_this select 0)) select 2) < 2) and ({(_x isKindOf "OPTRE_M808B_base") OR (_x isKindOf "optre_hornet_base")} count _vehicles > 0)) then {
		
		titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>RELEASE FAILED!</t><br/>-------------------------------------------<br/>Your landing gears must be raised to unload larger vehicles! Your landing gears will automatically raise when unloading large vehicles if you're flying above 2m.", "PLAIN DOWN", -1, true, true];
		playSound "FD_CP_Not_Clear_F";
		
	} else { 
		
		(_this select 0) allowDamage false;
		(_this select 0) setVariable ["OPTRE_Pelican_AttachedToVehiclesEffect", [], true];
		if ((((getPosATL (_this select 0)) select 2) >= 200) and !({(_x isKindOf "optre_hornet_base") OR (_x isKindOf "OPTRE_EscapePod") OR (_x isKindOf "Land_Device_slingloadable_F")} count _vehicles > 0)) then
		{
			titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLIFT AIRDROPPED!</t><br/>-------------------------------------------", "PLAIN DOWN", -1, true, true];
			playSound "FD_Finish_F"; 
			{
				if ({(_x isKindOf "OPTRE_M808B_base") OR (_x isKindOf "optre_hornet_base")} count _vehicles > 0) then {player action ["LandGearUp", (_this select 0)]; Sleep 2;};
				detach _x;
				_vel = velocity (_this select 0);
				_x setVelocity [(_vel select 0) / 2, (_vel select 1) / 2, (_vel select 2) -25];
				_x allowDamage false;
				sleep .2;
				waitUntil {((position _x) select 2) <= 185};
				_para = createVehicle ["B_Parachute_02_F", position _x, [], 0, "CAN_COLLIDE"];
				_velx = velocity _x;
				_para setVelocity [(_velx select 0), (_velx select 1), (_velx select 2)];
				_para setDir (direction _x);
				_x attachTo [_para, [0,0,1]];
				sleep 2;
				_smoke = createVehicle ["SmokeShellRed", position _x, [], 0, "CAN_COLLIDE"];
				_smoke attachTo [_x, [0,0,0]];
				if ((daytime > 17.5) OR (daytime < 7)) then {_flare = createVehicle ["F_20mm_Red", position _smoke, [], 0, "CAN_COLLIDE"]; _flare attachTo [_smoke, [0,0,0]];};
				sleep 1;
				waitUntil {(((position _x) select 2) < 8) AND (((position _x) select 2) > 4)};
				detach _x;
				waitUntil {(((position _smoke) select 2) < 2) AND (((position _smoke) select 2) > 1)};
				detach _smoke;
			} forEach _vehicles;
		} else {
			titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>MAGLIFT RELEASED!</t><br/>-------------------------------------------", "PLAIN DOWN", -1, true, true];
			playSound "FD_Finish_F"; 
			{
				if ({(_x isKindOf "OPTRE_M808B_base") OR (_x isKindOf "optre_hornet_base")} count _vehicles > 0) then {player action ["LandGearUp", (_this select 0)]; Sleep 2;};
				if (_x isKindOf "Land_Device_slingloadable_F") then {_x setVectorUp [0,0,1]};
				detach _x;
				_vel = velocity (_this select 0);
				_x setVelocity [(_vel select 0) / 1.5, (_vel select 1) / 1.5, (_vel select 2) / 1.5];
				_x allowDamage false;
			} forEach _vehicles;
		};
		
		sleep 0.5;
		
		{
			_x allowDamage true;
		} forEach _vehicles;
		(_this select 0) allowDamage true;
		};
		
} else {
	
	0 = (_this select 0) spawn OPTRE_fnc_PelicanLoad_UnloadAllSupplyPods;
	
}; 