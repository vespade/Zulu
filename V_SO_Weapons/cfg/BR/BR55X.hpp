class OPTRE_BR55: OPTRE_BR55HB
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "BR55X Battle Rifle";
	baseWeapon 					= "OPTRE_BR55X";
	model                       = "\OPTRE_Weapons\BR\BR";
	
	magazines[]=
	{
		"OPTRE_36Rnd_95x40_Mag",
		"OPTRE_36Rnd_95x40_Mag_Tracer",
		"OPTRE_36Rnd_95x40_Mag_JHP",
		"OPTRE_36Rnd_95x40_Mag_JHPT",
		"OPTRE_36Rnd_95x40_Mag_HPSAP",
		"OPTRE_36Rnd_95x40_Mag_HPSAPT",
		"OPTRE_36Rnd_95x40_Mag_SAPHE",
		"OPTRE_36Rnd_95x40_Mag_SAPHET",
		"OPTRE_36Rnd_95x40_Mag_SS"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
 	{
		mass = 82;
	};
};