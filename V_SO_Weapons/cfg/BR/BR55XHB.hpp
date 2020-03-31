class OPTRE_BR55HB: OPTRE_Rifle_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "BR55XHB Battle Rifle";
	baseWeapon 					= "OPTRE_BR55XHB";
	model                       = "\OPTRE_Weapons\BR\BRHB";
	
	modes[] = 
	{
		"Single",
		"Burst",
		"FullAuto"
	};
	
	magazines[]=
	{
		"OPTRE_36Rnd_95x40_Mag",
		"OPTRE_36Rnd_95x40_Mag_Tracer",
		"OPTRE_36Rnd_95x40_Mag_JHP",
		"OPTRE_36Rnd_95x40_Mag_JHPT",
		"OPTRE_36Rnd_95x40_Mag_HPSAP",
		"OPTRE_36Rnd_95x40_Mag_HPSAPT",
		"OPTRE_36Rnd_95x40_Mag_SAPHE",
		"OPTRE_36Rnd_95x40_Mag_SAPHET",
		"OPTRE_36Rnd_95x40_Mag_SS"
	};
	
	class WeaponSlotsInfo
 	{
		mass = 85;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"muzzle_snds_h_mg_blk_f",
				"muzzle_snds_l",

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
				"ace_optic_sos_2d",
				"ace_optic_sos_pip",
				"ace_optic_mrco_2d",
				"ace_optic_hamr_2d",
				"ace_optic_hamr_pip",
				"optic_aco_smg",
				"optic_aco_grn_smg",
				"optic_holosight_smg_blk_f",

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
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"acc_pointer_ir",
				"ace_acc_pointer_green",
				"acc_flashlight",

				"optre_m45_flashlight",
				"optre_m45_flashlight_red",
				"OPTRE_BMR_Laser"
			};
		};
	};
	
	class FullAuto: Burst
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
};