class OPTRE_M295X: OPTRE_M392X
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M295X BMR";
	baseWeapon 					= "OPTRE_M295X";
	model                       = "\OPTRE_Weapons\BR\BMR.p3d";
	picture 					= "\OPTRE_Weapons\BR\icons\br.paa";
	
	handAnim[] = 
	{
		"OFP2_ManSkeleton", "\OPTRE_Weapons\BR\data\anim\bmr_handanim.rtm",
		"Spartan_ManSkeleton", "\OPTRE_Weapons\br\data\anim\bmr_handanim_Spartan.rtm"
	};
	
	class FullAuto: Single
	{
		aiDispersionCoefX 		= 2;
		aiDispersionCoefY 		= 3;
		burst 					= 1;
		autoFire 				= 1;
		dispersion			 	= 0.0005;
		displayName 			= "Full";
		maxRange 				= 80;
		maxRangeProbab 			= 0.04;
		midRange 				= 30;
		midRangeProbab 			= 0.58;
		minRange 				= 1;
		minRangeProbab 			= 0.2;
		recoil 					= "recoil_auto_primary_3outof10";
		recoilProne 			= "recoil_auto_primary_prone_3outof10";
		reloadTime 				= 0.08;
		sound[] 				= {"",10,1};
		soundBurst 				= 0;
		soundContinuous 		= 0;
		soundEnd[] 				= {"sound",1};
		textureType 			= "fullAuto";
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
 	{
		mass = 123;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"muzzle_snds_b",
				"muzzle_snds_h_mg_blk_f",
				"ace_muzzle_mzls_b",
				
				"optre_ma5suppressor",
				"optre_m7_silencer",
				"optre_m6_silencer"
			};
		};
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
				"optic_aco_smg",
				"optic_aco_grn_smg",
				"optic_holosight_smg_blk_f",
				"optic_mrd_black",

				"optre_srs99_scope",
				"optre_srs99c_scope",
				"optre_ma5_buis",
				"optre_m393_eotech",
				"optre_m73_smartlink",
				"optre_m7_sight",
				"optre_m393_acog",
				"optre_m393_scope",
				"optre_m392_scope",
				"optre_br55hb_scope",
				"optre_m6c_scope",
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
				"OPTRE_BMR_Scope_v2",
				"OPTRE_BMR_Scope_v2"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"acc_pointer_ir",
				"ace_acc_pointer_green",
				"acc_flashlight",

				"optre_m45_flashlight",
				"optre_m45_flashlight_red",
				"OPTRE_BMR_Laser",
				"OPTRE_BMR_Flashlight"
			};
		};
	};
};