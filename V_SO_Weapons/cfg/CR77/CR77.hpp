class OPTRE_CR77: OPTRE_M395X
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "CR77 Tactical Rifle";
	baseWeapon 					= "OPTRE_CR77";
	model 						= "\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\DMR_05_F";
	picture 					= "\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\UI\gear_DMR_05_X_CA";
	handAnim[] 					= {"OFP2_ManSkeleton","\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\data\Anim\DMR_05.rtm"};
	reloadAction 				= "GestureReloadDMR05";
	
	Eye 						= "";
	Glasses 					= "";
	ODST_1 						= "";
	pictureWire 				= "\V_SO_Weapons\data\CR77\V_CR77_HUD_CA";
	
	recoil 						= "recoil_dmr_05";
	
	magazines[] =
	{
		"OPTRE_10Rnd_86x70_Mag",
		"OPTRE_10Rnd_86x70_Mag_Tracer",
		"OPTRE_10Rnd_86x70_Mag_AP",
		"OPTRE_10Rnd_86x70_Mag_APT",
		"OPTRE_10Rnd_86x70_Mag_JHP",
		"OPTRE_10Rnd_86x70_Mag_JHPT",
		"OPTRE_10Rnd_86x70_Mag_SS",
		"OPTRE_10Rnd_86x70_Mag_FS",
		"OPTRE_10Rnd_86x70_Mag_FST",
		"OPTRE_20Rnd_86x70_Mag",
		"OPTRE_20Rnd_86x70_Mag_Tracer",
		"OPTRE_20Rnd_86x70_Mag_AP",
		"OPTRE_20Rnd_86x70_Mag_APT",
		"OPTRE_20Rnd_86x70_Mag_JHP",
		"OPTRE_20Rnd_86x70_Mag_JHPT",
		"OPTRE_20Rnd_86x70_Mag_SS"
	};
	magazineWell[] = {};
	
	hiddenSelections[] = 
	{
		"Camo1",
		"Camo2"
	};
	
	hiddenSelectionsMaterials[] = 
	{
		"\V_SO_Weapons\Data\CR77\V_CR77.rvmat",
		"\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02.rvmat"
	};
	
	hiddenSelectionsTextures[] = 
	{
		"\V_SO_Weapons\Data\CR77\V_CR77_CO",
		"\V_SO_Weapons\Data\CR77\V_CR77_A_CO"
	};
	
	class Single: Single
	{
		class SilencedSound
		{
			soundSetShot[] = {"DMR05_silencerShot_SoundSet","DMR05_silencerTail_SoundSet","DMR05_silencerInteriorTail_SoundSet"};
		};
		class StandardSound
		{
			soundSetShot[] = {"DMR05_Shot_SoundSet","DMR05_tail_SoundSet","DMR05_InteriorTail_SoundSet"};
		};
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
 	{
		mass = 206;
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
				"optic_ico_01_black_f",
				"optic_aco_smg",
				"optic_aco_grn_smg",
				"optic_holosight_smg_blk_f",
				"optic_mrd_black",

				"optre_srs99_scope",
				"optre_srs99c_scope",
				"optre_ma5_buis",
				"optre_m393_eotech",
				"optre_m7_sight",
				"optre_m393_acog",
				"optre_hmg38_carryhandle",
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
};