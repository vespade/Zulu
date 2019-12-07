class OPTRE_M392_DMR;
class SO_M392_Base: OPTRE_M392_DMR
{
	class WeaponSlotsInfo;
	class ItemInfo;
};

class OPTRE_M392X: SO_M392_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M392X DMR";
	baseWeapon 					= "OPTRE_M392X";
	model                       = "\OPTRE_Weapons\DMR\DMR.p3d";
	
	magazines[]=
	{
		"OPTRE_15Rnd_762x51_Mag",
		"OPTRE_15Rnd_762x51_Mag_Tracer",
		"OPTRE_15Rnd_762x51_SS_Mag",
		"OPTRE_15Rnd_762x51_AP_Mag",
		"OPTRE_15Rnd_762x51_AP_Mag_Tracer",
		"OPTRE_15Rnd_762x51_FS_Mag",
		"OPTRE_15Rnd_762x51_FS_Mag_Tracer"
	};

	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"muzzle_snds_B",
				"OPTRE_M7_Silencer",
				"muzzle_snds_65_TI_blk_F"
			};
		};
		class CowsSlot: CowsSlot
		{
			compatibleitems[]=
			{
				"optic_hamr",
				"optic_Arco_blk_F",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Holosight_smg_blk_F",
				
				"OPTRE_M392_Scope",
				"OPTRE_M392_Scope_v2",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_v2",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M393_EOTECH_v2",
				"OPTRE_M393_Scope_v2",
				"OPTRE_M393_ACOG_v2",
				"OPTRE_M7_Sight",
				"OPTRE_M7_Sight_v2",
				"OPTRE_MA5_SmartLink_legacy",
				"OPTRE_MA5C_SmartLink_legacy",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5C_Smartlink",
				"OPTRE_MA5_SmartLink_v2",
				"OPTRE_MA5C_Smartlink_v2",
				"OPTRE_SRS99C_Scope",
				"OPTRE_SRS99_Scope",
				"OPTRE_MA5_BUIS",
				"OPTRE_M73_Smartlink_v2",
				"OPTRE_M73_SmartLink",
				"OPTRE_HMG38_CarryHandle"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"acc_pointer_IR"
			};
		};
		class UnderBarrelSlot: UnderBarrelSlot
		{
			compatibleItems[]=
			{
				"bipod_01_F_blk",
				"bipod_02_F_blk",
				"bipod_03_F_blk"
			};
		};
		mass=50;
	};
};