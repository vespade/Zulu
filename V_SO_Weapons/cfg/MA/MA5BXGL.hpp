class OPTRE_MA5BGL;
class SO_MA5BGL_Base: OPTRE_MA5BGL
{
	class WeaponSlotsInfo;
	class Single;
	class FullAuto;
};
class OPTRE_MA5BXGL: SO_MA5BGL_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA5BX + M301 GL Assault Rifle";
	baseWeapon 					= "OPTRE_MA5BXGL";
	model                       = "\OPTRE_Weapons\AR\MA5BGL.p3d";
	
	magazines[] = 
	{
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag_Tracer",
		"OPTRE_60Rnd_762x51_Mag_AP",
		"OPTRE_60Rnd_762x51_Mag_APT",
		"OPTRE_60Rnd_762x51_Mag_JHP",
		"OPTRE_60Rnd_762x51_Mag_JHPT"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 60;
		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[] = 
			{
				"muzzle_snds_B";
				"muzzle_snds_65_TI_blk_F";
				"OPTRE_M7_Silencer"
			};
		};
		class CowsSlot: CowsSlot
		{
			compatibleitems[] = 
			{
				"optic_hamr",
				"optic_Arco_blk_F",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Holosight_smg_blk_F",
				"optic_ico_01_black_f",
				
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
			compatibleitems[] = 
			{
				"acc_pointer_IR",
				"acc_flashlight",
			};
		};
		class UnderBarrelSlot: UnderBarrelSlot
		{
			compatibleitems[] = {};
		};
	};
};
	