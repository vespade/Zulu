class OPTRE_BR55AM: OPTRE_BR55XHB
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "BR55AM 'Fafnir' Battle Rifle";
	baseWeapon 					= "OPTRE_BR55AM";
	
	recoil						= "recoil_dmr_04";
	
	magazines[]=
	{
		"OPTRE_16Rnd_127x40_Mag",
		"OPTRE_16Rnd_127x40_Mag_AP",
		"OPTRE_16Rnd_127x40_Mag_APT",
		"OPTRE_16Rnd_127x40_Mag_HE",
		"OPTRE_16Rnd_127x40_Mag_HET",
		"OPTRE_16Rnd_127x40_Mag_HVAP",
		"OPTRE_16Rnd_127x40_Mag_HVAPT",
		"OPTRE_16Rnd_127x40_Mag_JHP",
		"OPTRE_16Rnd_127x40_Mag_JHPT",
		"OPTRE_16Rnd_127x40_Mag_SAPHE",
		"OPTRE_16Rnd_127x40_Mag_SAPHET",
		"OPTRE_16Rnd_127x40_Mag_SS"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
 	{
		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"OPTRE_M6_Silencer"
			};
		};
	};
};