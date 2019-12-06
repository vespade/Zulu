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
		"OPTRE_16Rnd_Faf_Mag",
		"OPTRE_16Rnd_Faf_Mag_Tracer",
		"OPTRE_16Rnd_Faf_Mag_JHP",
		"OPTRE_16Rnd_Faf_Mag_SS",
		"OPTRE_16Rnd_Faf_Mag_HighEx"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
 	{
		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"OPTRE_SRS99D_Suppressor"
			};
		};
	};
};