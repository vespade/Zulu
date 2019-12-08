class OPTRE_MA5CXGL: OPTRE_MA5BXGL
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA5CX + M301 GL Assault Rifle";
	baseWeapon 					= "OPTRE_MA5CXGL";
	model                       = "\OPTRE_Weapons\AR\MA5CGL.p3d";
	
	magazines[] = 
	{
		"OPTRE_32Rnd_762x51_Mag",
		"OPTRE_32Rnd_762x51_Mag_Tracer",
		"OPTRE_32Rnd_762x51_Mag_AP",
		"OPTRE_32Rnd_762x51_Mag_APT",
		"OPTRE_32Rnd_762x51_Mag_JHP",
		"OPTRE_32Rnd_762x51_Mag_JHPT",
		"OPTRE_32Rnd_762x51_Mag_SS"
	};
	
	HUD_TotalPosibleBullet 		= 32;
	class Single: Single
	{
		reloadTime 				= 0.095;
	};
	class FullAuto: FullAuto
	{
		reloadTime 				= 0.095;
	};
};