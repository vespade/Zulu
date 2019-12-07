class OPTRE_M6C;
class SO_M6C_Base: OPTRE_M6C
{
	class WeaponSlotsInfo;
};

class OPTRE_M6S: SO_M6C_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M6C/SOCOM Magnum";
	baseWeapon 					= "OPTRE_M6S";
	model                       = "\OPTRE_Weapons\Pistol\M6C.p3d";
	
	magazines[]=
	{
		"OPTRE_16Rnd_127x40_Mag",
		"OPTRE_16Rnd_127x40_Mag_JHP",
		"OPTRE_16Rnd_127x40_Mag_HVAP",
		"OPTRE_16Rnd_127x40_Mag_NARQ",
		"OPTRE_8Rnd_127x40_Mag_Flare"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: CowsSlot
		{
			compatibleitems[]=
			{
				"OPTRE_M6S_Scope",
				"REC_HOLO_v2"
			};
		};
	};
};