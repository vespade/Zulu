class OPTRE_M6D: OPTRE_M6G
{
	dlc							= "SO";
	author						= "Fireteam Zulu & Forky";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M6D PDWS Magnum";
	baseWeapon 					= "OPTRE_M6D";
	model                       = "\V_SO_Weapons\data\M6\M6D";
	
	magazines[]=
	{
		"OPTRE_12Rnd_127x40_Mag",
		"OPTRE_12Rnd_127x40_Mag_Tracer",
		"OPTRE_12Rnd_127x40_Mag_AP",
		"OPTRE_12Rnd_127x40_Mag_APT",
		"OPTRE_12Rnd_127x40_Mag_HE",
		"OPTRE_12Rnd_127x40_Mag_HET",
		"OPTRE_12Rnd_127x40_Mag_HVAP",
		"OPTRE_12Rnd_127x40_Mag_HVAPT",
		"OPTRE_12Rnd_127x40_Mag_JHP",
		"OPTRE_12Rnd_127x40_Mag_JHPT",
		"OPTRE_12Rnd_127x40_Mag_SAPHE",
		"OPTRE_12Rnd_127x40_Mag_SAPHET",
		"OPTRE_12Rnd_127x40_Mag_SS",
		"OPTRE_12Rnd_127x40_Mag_SST",
		"OPTRE_12Rnd_127x40_Mag_NARQ",
		"OPTRE_12Rnd_127x40_Mag_NARQY"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
 	{
		mass = 47;
		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"optre_m6_silencer"
			};
		};
	};
};

class OPTRE_M6G_Flashlight;
class OPTRE_M6D_Flashlight: OPTRE_M6G_Flashlight
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "M6D Flashlight";
	model 						= "\V_SO_Weapons\data\M6\M6D_Flashlight";
};