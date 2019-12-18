class OPTRE_M28A2: OPTRE_M395X
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M28A2 IMWS DMR";
	baseWeapon 					= "OPTRE_M28A2";
	model                       = "\A3\Weapons_F_Exp\Rifles\ARX\ARX_F.p3d";
	picture						= "\A3\Weapons_F_Exp\Rifles\ARX\Data\UI\arifle_ARX_blk_F_X_CA.paa";
	pictureWire 				= "\V_SO_Weapons\data\M28\V_M28_HUD_CA.paa";
	handAnim[]					= {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\ARX\data\anim\arx.rtm"};
	muzzles[]					= {"this", "Secondary"};
	reloadAction				= "GestureReloadARX";
	
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
		"OPTRE_15Rnd_762x51_Mag_FST",
		"OPTRE_32Rnd_762x51_Mag",
		"OPTRE_32Rnd_762x51_Mag_Tracer",
		"OPTRE_32Rnd_762x51_Mag_AP",
		"OPTRE_32Rnd_762x51_Mag_APT",
		"OPTRE_32Rnd_762x51_Mag_JHP",
		"OPTRE_32Rnd_762x51_Mag_JHPT",
		"OPTRE_32Rnd_762x51_Mag_SS"
	};
	
	hiddenSelectionsTextures[]=
	{
		"\V_SO_Weapons\Data\M28\V_M28_CO.paa",
		"\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co.paa"
	};
	
	class Single: Single
	{
		class SilencedSound
		{
			SoundSetShot[] 				= {"DMR03_silencerShot_SoundSet","DMR03_silencerTail_SoundSet","DMR03_silencerInteriorTail_SoundSet"};
		};
		class StandardSound
		{
			soundSetShot[] 				= {"DMR03_Shot_SoundSet","DMR03_tail_SoundSet","DMR03_InteriorTail_SoundSet"};
		};
	};
	
	class Secondary: OPTRE_M6D
	{
		displayName						= "M6MWS Magnum";
		recoil							= "recoil_ARX_secondary";
		reloadAction					= "GestureReloadARX2";
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
 	{
		mass = 163;
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