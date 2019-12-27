class OPTRE_M7;
class SO_M7_Base: OPTRE_M7
{
	class WeaponSlotsInfo;
};

class OPTRE_M7X: SO_M7_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M7X Caseless SMG";
	baseWeapon 					= "OPTRE_M7X";
	model 						= "\OPTRE_Weapons\SMG\SMG.p3d";
	
	recoil						= "recoil_M7X";
	
	class Single;
	class FullAuto;
	
	magazines[]=
	{
		"OPTRE_60Rnd_5x23mm_Mag",
		"OPTRE_60Rnd_5x23mm_Mag_tracer",
		"OPTRE_60Rnd_5x23mm_Mag_FMJ",
		"OPTRE_60Rnd_5x23mm_Mag_FMJT",
		"OPTRE_60Rnd_5x23mm_Mag_HV",
		"OPTRE_60Rnd_5x23mm_Mag_HVT",
		"OPTRE_60Rnd_5x23mm_Mag_JHP",
		"OPTRE_60Rnd_5x23mm_Mag_JHPT",
		"OPTRE_48Rnd_5x23mm_Mag",
		"OPTRE_48Rnd_5x23mm_Mag_tracer",
		"OPTRE_48Rnd_5x23mm_Mag_FMJ",
		"OPTRE_48Rnd_5x23mm_Mag_FMJT",
		"OPTRE_48Rnd_5x23mm_Mag_HV",
		"OPTRE_48Rnd_5x23mm_Mag_HVT",
		"OPTRE_48Rnd_5x23mm_Mag_JHP",
		"OPTRE_48Rnd_5x23mm_Mag_JHPT"
	};
	magazineWell[] = {};
	
	class WeaponSlotsInfo
 	{
		mass = 29;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"muzzle_snds_b",
				"muzzle_snds_h_mg_blk_f",
				"ace_muzzle_mzls_b",

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
				
				"optre_ma5_buis",
				"optre_m393_eotech",
				"optre_m73_smartlink",
				"optre_m7_sight",
				"optre_m393_scope",
				"optre_m392_scope",
				"optre_br55hb_scope",
				"optre_m6c_scope",
				
				"OPTRE_M73_Smartlink_v2",
				"OPTRE_M6S_Scope",
				"OPTRE_M7_Sight_v2",
				"OPTRE_M392_Scope_v2",
				"OPTRE_M393_Scope_v2",
				"OPTRE_M393_ACOG_v2",
				"OPTRE_M393_EOTECH_v2",
				"OPTRE_BR55HB_Scope_v2"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"optre_m45_flashlight",
				"optre_m45_flashlight_red",
				"optre_m7_laser",
				"optre_m7_flashlight"
			};
		};
	};
};

class OPTRE_M7X_Folded: OPTRE_M7X
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName                                                             	= "M7X Caseless SMG (Folded)";
	descriptionShort                                                    		= "UNSC M7X SMG (Folded)";
	baseWeapon 																	= "OPTRE_M7X_Folded";
	model                                                                   	= "\OPTRE_Weapons\SMG\SMG_folded.p3d";
	
	handAnim[]                                                            		= {"OFP2_ManSkeleton"};
	reloadAction 																= "GestureReloadPistol";
	type 																		= 2;
	
	class Single: Single
	{	
		recoil 																	= "recoil_single_mx";
		recoilProne 															= "recoil_single_prone_mx";
	};
	class FullAuto: FullAuto
	{	
		recoil 																	= "recoil_single_mx";
		recoilProne 															= "recoil_single_prone_mx";
	};
};	