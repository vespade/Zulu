class UGL_F;
class OPTRE_M301X: UGL_F
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "M301X Grenade Launcher";
	descriptionShort 			= "M301X GL";
	baseWeapon 					= "OPTRE_M301X";
	
	magazines[] = 
	{
		// Specialized Ordnance
		"UGL_8Gauge_Pellet",
		"UGL_8Gauge_Slug",
		"UGL_8Gauge_Beanbag",
		"UGL_FlareBlue_F",
		"3Rnd_UGL_8Gauge_Pellet",
		"3Rnd_UGL_8Gauge_Slug",
		"3Rnd_UGL_8Gauge_Beanbag",
		"3Rnd_UGL_FlareBlue_F",
		
		// Standard
		"1Rnd_HE_Grenade_shell",
		"UGL_FlareWhite_F",
		"UGL_FlareGreen_F",
		"UGL_FlareRed_F",
		"UGL_FlareYellow_F",
		"UGL_FlareCIR_F",
		"1Rnd_Smoke_Grenade_shell",
		"1Rnd_SmokeRed_Grenade_shell",
		"1Rnd_SmokeGreen_Grenade_shell",
		"1Rnd_SmokeYellow_Grenade_shell",
		"1Rnd_SmokePurple_Grenade_shell",
		"1Rnd_SmokeBlue_Grenade_shell",
		"1Rnd_SmokeOrange_Grenade_shell",
		"3Rnd_HE_Grenade_shell",
		"3Rnd_UGL_FlareWhite_F",
		"3Rnd_UGL_FlareGreen_F",
		"3Rnd_UGL_FlareRed_F",
		"3Rnd_UGL_FlareYellow_F",
		"3Rnd_UGL_FlareCIR_F",
		"3Rnd_Smoke_Grenade_shell",
		"3Rnd_SmokeRed_Grenade_shell",
		"3Rnd_SmokeGreen_Grenade_shell",
		"3Rnd_SmokeYellow_Grenade_shell",
		"3Rnd_SmokePurple_Grenade_shell",
		"3Rnd_SmokeBlue_Grenade_shell",
		"3Rnd_SmokeOrange_Grenade_shell"
	};
	
	cameraDir 					= "OP_look";
	discreteDistanceInitIndex 	= 0;
	reloadAction 				= "GestureReloadMXUGL";
	useExternalOptic 			= 0;
	useModelOptics 				= 0;
	
	discreteDistance[] = 
	{
		100,
		200,
		300
	};
	discreteDistanceCameraPoint[] = 
	{
		"OP_eye",
		"OP_eye2",
		"OP_eye3"
	};
};