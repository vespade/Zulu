class OPTRE_M319: OPTRE_Rifle_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M319X Individual Grenade Launcher";
	
	magazines[] = 
	{
		// Specialized Ordnance
		"UGL_8Gauge_Pellet",
		"UGL_8Gauge_Slug",
		"UGL_8Gauge_Beanbag",
		"UGL_FlareBlue_F",
		"UGL_Potato",
		"3Rnd_UGL_8Gauge_Pellet",
		"3Rnd_UGL_8Gauge_Slug",
		"3Rnd_UGL_8Gauge_Beanbag",
		"3Rnd_UGL_FlareBlue_F",
		"ACE_40mm_Flare_blue",
		
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
	magazineWell[] = {"UGL_40x36","CBA_40mm_M203","CBA_40mm_EGLM"};
	
	class WeaponSlotsInfo
 	{
		mass = 88;
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"acc_pointer_ir",
				"ace_acc_pointer_green",
				"acc_flashlight",

				"optre_m45_flashlight",
				"optre_m45_flashlight_red",
				"OPTRE_BMR_Laser"
			};
		};
	};
};