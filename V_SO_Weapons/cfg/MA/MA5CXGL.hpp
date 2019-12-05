class OPTRE_MA5CXGL: OPTRE_MA5BXGL
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA5CX + M301 GL";
	baseWeapon 					= "OPTRE_MA5CXGL";
	model                       = "\OPTRE_Weapons\AR\MA5CGL.p3d";
	
	magazines[] = 
	{
		"OPTRE_32Rnd_762x51_Mag",
		"OPTRE_32Rnd_762x51_Mag_Tracer",
		"OPTRE_JHP32Rnd_762x51_Mag",
		"OPTRE_SS32Rnd_762x51_Mag",
		"OPTRE_AP32Rnd_762x51_Mag"
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