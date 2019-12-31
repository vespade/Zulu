class OPTRE_MA32XGL: OPTRE_MA5CXGL
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA32X + M301 GL Assault Rifle";
	baseWeapon 					= "OPTRE_MA32XGL";
	model                       = "\OPTRE_Weapons\AR\MA37IGL.p3d";
	
	handAnim[] = 
	{
		"OFP2_ManSkeleton", "\OPTRE_Weapons\AR\data\anim\hand_anim_ma37.rtm",
		"Spartan_ManSkeleton", "\OPTRE_Weapons\AR\data\anim\hand_anim_ma37_Spartan.rtm"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
 	{
		mass = 99.6;
		class CowsSlot: CowsSlot
		{
			compatibleitems[]=
			{
				"optic_arco_ak_blk_f",
				"optic_dms",
				"optic_aco_grn",
				"optic_aco",
				"optic_arco_blk_f",
				"optic_holosight_blk_f",
				"optic_mrco",
				"optic_khs_blk",
				"optic_hamr",
				"optic_sos",
				"optic_lrps",
				"optic_nightstalker",
				"optic_erco_blk_f",
				"optic_ams",
				"ace_optic_lrps_2d",
				"ace_optic_lrps_pip",
				"optic_yorris",
				"ace_optic_sos_2d",
				"ace_optic_sos_pip",
				"ace_optic_mrco_2d",
				"ace_optic_hamr_2d",
				"ace_optic_hamr_pip",
				"optic_ico_01_black_f",
				"optic_aco_smg",
				"optic_aco_grn_smg",
				"optic_holosight_smg_blk_f",
				"optic_mrd_black",

				"optre_srs99_scope",
				"optre_srs99c_scope",
				"optre_ma5_buis",
				"optre_ma5_smartlink",
				"optre_m393_eotech",
				"optre_m7_sight",
				"optre_m393_acog",
				"optre_m392_scope",
				"optre_br55hb_scope",
				"OPTRE_BMR_Scope",
				
				"OPTRE_SRS99_Scope_v2",
				"OPTRE_SRS99C_Scope_v2",
				"OPTRE_M73_Smartlink_v2",
				"OPTRE_M6S_Scope",
				"OPTRE_M7_Sight_v2",
				"OPTRE_M392_Scope_v2",
				"OPTRE_M393_Scope_v2",
				"OPTRE_M393_ACOG_v2",
				"OPTRE_M393_EOTECH_v2",
				"OPTRE_BR55HB_Scope_v2",
				"OPTRE_BMR_Scope_v2"
			};
		};
	};
};

class OPTRE_MA32BXGL: OPTRE_MA5BXGL
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA32BXGL + M301 GL Assault Rifle";
	baseWeapon 					= "OPTRE_MA32BXGL";
	model                       = "\OPTRE_Weapons\AR\MA37BIGL.p3d";
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 99.6;
	};
};
