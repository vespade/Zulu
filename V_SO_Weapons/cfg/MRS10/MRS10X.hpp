class OPTRE_MRS10X: OPTRE_M395X
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MRS10X DMR";
	baseWeapon 					= "OPTRE_MRS10X";
	model 						= "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\DMR_02_F.p3d";
	picture 					= "\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\UI\gear_DMR_02_X_CA.paa";
	handAnim[] 					= {"OFP2_ManSkeleton","\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\data\Anim\DMR_02.rtm"};
	reloadAction 				= "GestureReloadDMR02";
	
	recoil 						= "recoil_dmr_02";
	
	magazines[]=
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
	
	hiddenSelections[] = 
	{
		"Camo1",
		"Camo2"
	};
	
	hiddenSelectionsMaterials[] = 
	{
		"\V_SO_Weapons\Data\MRS10\V_MRS10.rvmat",
		"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_02.rvmat";
	};
	
	hiddenSelectionsTextures[] = 
	{
		"\V_SO_Weapons\Data\MRS10\V_MRS10_CO.paa",
		"\V_SO_Weapons\Data\MRS10\V_MRS10_A_CO.paa"
	};
	
	class Single: Single
	{
		class SilencedSound
		{
			SoundSetShot[] 				= {"DMR02_silencerShot_SoundSet","DMR02_silencerTail_SoundSet","DMR02_silencerInteriorTail_SoundSet"};
		};
		class StandardSound
		{
			soundSetShot[] 				= {"DMR02_Shot_SoundSet","DMR02_tail_SoundSet","DMR02_InteriorTail_SoundSet"};
		};
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
 	{
		mass = 143;
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
				"optre_m6c_scope"
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
				"optre_m45_flashlight_red"
			};
		};
	};
};