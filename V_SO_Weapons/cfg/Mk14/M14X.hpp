class srifle_DMR_06_camo_F;
class OPTRE_M14X: srifle_DMR_06_camo_F
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "Mk14X DMR";
	baseWeapon 					= "OPTRE_M14X";
	
	hiddenSelectionsTextures[] = 
	{
		"\V_SO_Weapons\Data\Mk14\V_M14X_CO",
		"\V_SO_Weapons\Data\Mk14\V_M14X_A_CO"
	};
	
	Eye 						= "";
	Glasses 					= "";
	ODST_1 						= "";
	pictureWire 				= "\V_SO_Weapons\data\Mk14\V_M14X_HUD_CA";
	picture						= "\V_SO_Weapons\data\Mk14\V_M14X_CA";
	
	magazines[]=
	{
		"OPTRE_15Rnd_762x51_Mag",
		"OPTRE_15Rnd_762x51_Mag_Tracer",
		"OPTRE_15Rnd_762x51_Mag_AP",
		"OPTRE_15Rnd_762x51_Mag_APT",
		"OPTRE_15Rnd_762x51_Mag_JHP",
		"OPTRE_15Rnd_762x51_Mag_JHPT",
		"OPTRE_15Rnd_762x51_Mag_SS",
		"OPTRE_15Rnd_762x51_Mag_FS",
		"OPTRE_15Rnd_762x51_Mag_FST"
	};
	magazineWell[] = {};
	
	class WeaponSlotsInfo
 	{
		mass = 92;
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
		class UnderBarrelSlot: UnderBarrelSlot
		{
			compatibleitems[]=
			{
				"bipod_01_f_blk",
				"bipod_02_f_blk",
				"bipod_03_f_blk"
			};
		};
	};
};