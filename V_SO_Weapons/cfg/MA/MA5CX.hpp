class OPTRE_MA5CX: OPTRE_MA5BX
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA5CX ICWS Assault Rifle";
	baseWeapon 					= "OPTRE_MA5CX";
	model                       = "\OPTRE_Weapons\AR\MA5C.p3d";
	
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