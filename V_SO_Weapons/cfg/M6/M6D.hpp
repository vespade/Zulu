class OPTRE_M6G;
class SO_M6G_Base: OPTRE_M6G
{
	class WeaponSlotsInfo;
};

class OPTRE_M6D: SO_M6G_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M6D Magnum";
	baseWeapon 					= "OPTRE_M6D";
	model                       = "\OPTRE_Weapons\Pistol\M6G.p3d";
	
	magazines[]=
	{
		"OPTRE_8Rnd_127x40_Mag",
		"OPTRE_8Rnd_127x40_Mag_AP",
		"OPTRE_8Rnd_127x40_Mag_APT",
		"OPTRE_8Rnd_127x40_Mag_HE",
		"OPTRE_8Rnd_127x40_Mag_HET",
		"OPTRE_8Rnd_127x40_Mag_HVAP",
		"OPTRE_8Rnd_127x40_Mag_HVAPT",
		"OPTRE_8Rnd_127x40_Mag_JHP",
		"OPTRE_8Rnd_127x40_Mag_JHPT",
		"OPTRE_8Rnd_127x40_Mag_SAPHE",
		"OPTRE_8Rnd_127x40_Mag_SAPHET",
		"OPTRE_8Rnd_127x40_Mag_SS",
		"OPTRE_8Rnd_127x40_Mag_NARQ",
		"OPTRE_8Rnd_127x40_Mag_FR",
		"OPTRE_8Rnd_127x40_Mag_FG"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: CowsSlot
		{
			compatibleitems[]=
			{
				"OPTRE_M6G_Scope",
				"REC_HOLO_v2"
			};
		};
		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"OPTRE_M6C_Compensator",
				"OPTRE_M6_Silencer"
			};
		};
	};
};