class OPTRE_M7;
class SO_M7_Base: OPTRE_M7
{
	class WeaponSlotsInfo;
};

class cfgRecoils
{
	class M7X_Recoil
	{
		muzzleOuter[] 			= {"0.075*0.2","0.64*1","0.315*1","0.21*1"};
		kickBack[] 				= {"0.015*1.4","0.04*1.4"};
		temporary 				= "0.010*1.2";
		muzzleInner[] 			= {0,0,0.05,0.05};
		permanent 				= "0.05*0.4";
	};
};

class OPTRE_M7X: OPTRE_M7
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M7X Caseless SMG";
	baseWeapon 					= "OPTRE_M7X";
	model                       = "\OPTRE_Weapons\SMG\SMG.p3d";
	recoil						= "M7X_Recoil";
	
	magazines[]=
	{
		"OPTRE_60Rnd_5x23mm_Mag",
		"OPTRE_60Rnd_5x23mm_Mag_tracer",	
		"OPTRE_60Rnd_5x23mm_JHP_Mag",
		"OPTRE_60Rnd_5x23mm_HV_Mag",
		"OPTRE_60Rnd_5x23mm_FMJ_Mag",
		"OPTRE_60Rnd_5x23mm_Mag_SS",
		"OPTRE_48Rnd_5x23mm_Mag",
		"OPTRE_48Rnd_5x23mm_Mag_tracer",
		"OPTRE_48Rnd_5x23mm_JHP_Mag",
		"OPTRE_48Rnd_5x23mm_HV_Mag",
		"OPTRE_48Rnd_5x23mm_FMJ_Mag",
		"OPTRE_48Rnd_5x23mm_Mag_SS"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			access = 1;
			compatibleitems[]=
			{
				"OPTRE_M7_Silencer";
				"muzzle_snds_L"
			};
			displayname = "Muzzle Slot";
			linkproxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
			scope = 2;
		};
		class CowsSlot: CowsSlot
		{
			access=1;
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
			displayname = "Optics Slot";
			linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
			scope = 2;
		};
		class PointerSlot: PointerSlot
		{
			access=1;
			compatibleitems[]=
			{
				"OPTRE_M7_Laser",
				"acc_flashlight"
			};
			displayname = "Pointer Slot";
			linkproxy = "\A3\data_f\proxies\weapon_slots\SIDE";
			scope = 2;
		};
		mass = 35;
	};
};