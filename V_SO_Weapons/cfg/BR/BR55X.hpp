class OPTRE_BR55;
class SO_BR55_Base: OPTRE_BR55
{
	class WeaponSlotsInfo;
	
	scope						= 1;
	scopeArsenal				= 1;
	baseWeapon					= "SO_BR55_Base";
};

class OPTRE_BR55X: SO_BR55_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "BR55X Battle Rifle";
	baseWeapon 					= "OPTRE_BR55X";
	model                       = "\OPTRE_Weapons\BR\BR.p3d";
	
	magazines[]=
	{
		"OPTRE_36Rnd_95x40_Mag",
		"OPTRE_36Rnd_95x40_Mag_Tracer",
		"OPTRE_36Rnd_95x40_Mag_JHP",
		"OPTRE_36Rnd_95x40_Mag_SS",
		"OPTRE_36Rnd_95x40_Mag_HPSAP"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
 	{
		mass = 50;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"muzzle_snds_B",
				"muzzle_snds_L",
				"OPTRE_M7_Silencer";
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
				"OPTRE_M73_SmartLink"
			};
		};
		class PointerSlot: PointerSlot
		{
			access=1;
			compatibleitems[]=
			{
				"acc_pointer_IR",
				"acc_flashlight"
			};
			displayname="Pointer Slot";
			linkproxy="\A3\data_f\proxies\weapon_slots\SIDE";
			scope=2;
		};
	};
};