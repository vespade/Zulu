class UserActions
		{
			class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
            class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID=58;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};    
            class Afterburners900Engage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Engage";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				userActionID=54;
			};
			class Afterburners900Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=55;
			}; 
			class PelLift_LoadPodMenu
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				displayName="<t color='#FFBF00'>Load Supply Pods";
				displayNameDefault="<t color='#FFBF00'>Load Supply Pods";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
				textToolTip="<t color='#FFBF00'>Load Supply Pods";
				userActionID=9;
			};
			class PelLift_LoadVehicle
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				displayName="<t color='#FFBF00'>Maglock Cargo";
				displayNameDefault="<t color='#FFBF00'>Maglock Cargo";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_PelicanLoadValidate;";
				textToolTip="<t color='#FFBF00'>Maglock Cargo";
				userActionID=6;
			};
			class PelLift_LoadDevice
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player) AND ((vehicle player) isKindOf ""VES_HDV134_Fujikawa"") AND (vehicle player getvariable [""VES_DeviceAvailable"",true])";
				displayName="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				displayNameDefault="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=4;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_SlipspaceRuptureDetected;";
				textToolTip="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				userActionID=6;
			};
			class PelLift_OpenDetatchPodMenu
			{
				condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				displayNameDefault="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
				textToolTip="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				userActionID=8;
			};
			class PelLift_UnLoadVehicle
			{
				condition="(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Release Maglock";
				displayNameDefault="<t color='#DF3A01'>Release Maglock";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = [this] spawn V_FZ_fnc_PelicanUnLoadValidate;";
				textToolTip="<t color='#DF3A01'>Release Maglock";
				userActionID=7;
			};
			class RampClose
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))";
				displayName="Close Ramp";
				displayNameDefault="Close Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				textToolTip="Close Ramp";
				userActionID=51;
			};
			class RampOpen
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this))";
				displayName="Open Ramp";
				displayNameDefault="Open Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				textToolTip="Open Ramp";
				userActionID=50;
			};
		};