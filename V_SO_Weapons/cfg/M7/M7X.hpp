class SMG_01_F;
class OPTRE_SubMachineGun_Base: SMG_01_F
{
	class WeaponSlotsInfo;
};

class OPTRE_M7: OPTRE_SubMachineGun_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M7X Caseless SMG";
	
	recoil						= "recoil_M7X";
	
	class Single;
	class FullAuto;
	
	magazines[]=
	{
		"OPTRE_60Rnd_5x23mm_Mag",
		"OPTRE_60Rnd_5x23mm_Mag_Tracer",
		"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow",
		"OPTRE_60Rnd_5x23mm_Mag_FMJ",
		"OPTRE_60Rnd_5x23mm_Mag_FMJT",
		"OPTRE_60Rnd_5x23mm_Mag_HV",
		"OPTRE_60Rnd_5x23mm_Mag_HVT",
		"OPTRE_60Rnd_5x23mm_Mag_JHP",
		"OPTRE_60Rnd_5x23mm_Mag_JHPT",
		"OPTRE_60Rnd_5x23mm_Mag_SS",
		"OPTRE_60Rnd_5x23mm_Mag_SST",
		"OPTRE_48Rnd_5x23mm_Mag",
		"OPTRE_48Rnd_5x23mm_Mag_Tracer",
		"OPTRE_48Rnd_5x23mm_Mag_Tracer_Yellow",
		"OPTRE_48Rnd_5x23mm_Mag_FMJ",
		"OPTRE_48Rnd_5x23mm_Mag_FMJT",
		"OPTRE_48Rnd_5x23mm_Mag_HV",
		"OPTRE_48Rnd_5x23mm_Mag_HVT",
		"OPTRE_48Rnd_5x23mm_Mag_JHP",
		"OPTRE_48Rnd_5x23mm_Mag_JHPT",
		"OPTRE_48Rnd_5x23mm_Mag_SS",
		"OPTRE_48Rnd_5x23mm_Mag_SST",
		
		"OPTRE_60Rnd_5x23mm_FMJ_Mag",
		"OPTRE_60Rnd_5x23mm_JHP_Mag",
		"OPTRE_48Rnd_5x23mm_FMJ_Mag",
		"OPTRE_48Rnd_5x23mm_JHP_Mag"
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
				"OPTRE_BMR_Scope",
				
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
				"optre_m7_laser",
				"optre_m7_flashlight",
				"OPTRE_BMR_Laser"
			};
		};
	};
};

class OPTRE_M7_Folded: OPTRE_M7
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M7X Caseless SMG (Folded)";
	descriptionShort			= "UNSC M7X SMG (Folded)";
	
	handAnim[]					= {"OFP2_ManSkeleton"};
	reloadAction				= "GestureReloadPistol";
	type						= 2;
	
	class Single: Single
	{	
		recoil					= "recoil_single_mx";
		recoilProne 			= "recoil_single_prone_mx";
	};
	class FullAuto: FullAuto
	{	
		recoil					= "recoil_single_mx";
		recoilProne				= "recoil_single_prone_mx";
	};
};	