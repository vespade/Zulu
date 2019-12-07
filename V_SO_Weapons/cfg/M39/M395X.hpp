class OPTRE_M395X: OPTRE_M392X
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M395X DMR";
	baseWeapon 					= "OPTRE_M395X";
	model                       = "\OPTRE_Weapons\DMR\M395.p3d";
	picture 					= "\OPTRE_Weapons\DMR\icons\M395_Icon.paa";
	
	class Single;
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"muzzle_snds_B",
				"OPTRE_M7_Silencer",
				"muzzle_snds_65_TI_blk_F",
				"OPTRE_M393_Suppressor"
			};
		};
	};
};