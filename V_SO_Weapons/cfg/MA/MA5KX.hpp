class OPTRE_MA5KX: OPTRE_MA5CX
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA5KX ICWS Assault Rifle";
	baseWeapon 					= "OPTRE_MA5KX";
	model                       = "\OPTRE_Weapons\AR\MA5K.p3d";
	
	magazines[] = 
	{
		"OPTRE_32Rnd_762x51_Mag",
		"OPTRE_32Rnd_762x51_Mag_Tracer",
		"OPTRE_32Rnd_762x51_Mag_AP",
		"OPTRE_32Rnd_762x51_Mag_APT",
		"OPTRE_32Rnd_762x51_Mag_JHP",
		"OPTRE_32Rnd_762x51_Mag_JHPT",
		"OPTRE_32Rnd_762x51_Mag_SS",
		"OPTRE_32Rnd_762x51_Mag_UW"
	};
	
	handanim[] = 
	{
		"OFP2_ManSkeleton","OPTRE_Weapons\ar\data\anim\hand_anim_ma5k.rtm",
		"Spartan_ManSkeleton","OPTRE_Weapons\ar\data\anim\ma5k_handanim_Spartan.rtm"
	};
	
	class Single: Single
	{
		reloadTime 				= 0.05;
	};
	class FullAuto: FullAuto
	{
		reloadTime 				= 0.05;
	};
};