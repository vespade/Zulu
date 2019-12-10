class Rifle_Base_F;
class OPTRE_M28: OPTRE_M395X
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M28 DMR";
	baseWeapon 					= "OPTRE_M28";
	model                       = "\A3\Weapons_F_Exp\Rifles\ARX\ARX_F.p3d";
	picture						= "\A3\Weapons_F_Exp\Rifles\ARX\Data\UI\arifle_ARX_blk_F_X_CA.paa";
	handAnim[]					= {"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\ARX\data\anim\arx.rtm"};
	modes[] 					= {"Single"/*, "Secondary"*/};
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
	
	/*class Single: Single
	{
		class SilencedSound
		{
			SoundSetShot[] 				= {"DMR03_silencerShot_SoundSet","DMR03_silencerTail_SoundSet","DMR03_silencerInteriorTail_SoundSet"};
		};
		class StandardSound
		{
			soundSetShot[] 				= {"DMR03_Shot_SoundSet","DMR03_tail_SoundSet","DMR03_InteriorTail_SoundSet"};
		};
	};*/
	
	class Secondary: Rifle_Base_F
	{
		changeFiremodeSound[]			= {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
		cursor							= "srifle";
		displayName						= "M6MWS Magnum";
		drySound[]						= {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five",0.398107,1,20};
		htMax							= 300;
		htMin							= 1;
		magazines[] = 
		{
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag_AP",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_HE",
			"OPTRE_8Rnd_127x40_Mag_HET",
			"OPTRE_8Rnd_127x40_Mag_HVAP",
			"OPTRE_8Rnd_127x40_Mag_HVAPT",
			"OPTRE_8Rnd_127x40_Mag_JHP",
			"OPTRE_8Rnd_127x40_Mag_JHPT",
			"OPTRE_8Rnd_127x40_Mag_SAPHE",
			"OPTRE_8Rnd_127x40_Mag_SAPHET",
			"OPTRE_8Rnd_127x40_Mag_SS",
			"OPTRE_8Rnd_127x40_Mag_NARQ",
			"OPTRE_8Rnd_127x40_Mag_FR",
			"OPTRE_8Rnd_127x40_Mag_FG"
		};
		maxZeroing						= 100;
		modes[]							= {"Single"};
		recoil							= "recoil_ARX_secondary";
		reloadAction					= "GestureReloadARX2";
		reloadMagazineSound[]			= {"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\reload_4_five",0.562341,1,30};
		soundContinuous					= 0;
		HUD_BulletInARows				= 1;
		HUD_TotalPosibleBullet			= 8;
		ODST_1							= "OPTRE_ODST_HUD_AmmoCount_PistolSmart";
		Glasses							= "OPTRE_GLASS_HUD_AmmoCount_PistolSmart";
		Eye								= "OPTRE_EYE_HUD_AmmoCount_PistolSmart";
		class Single: Mode_SemiAuto
		{
			aiRateOfFire				= 2;
			aiRateOfFireDistance		= 500;
			dispersion					= 5e-005;
			maxRange					= 100;
			maxRangeProbab				= .05;
			midRange					= 25;
			midRangeProbab				= .1;
			minRange					= 10;
			minRangeProbab				= .25;
			recoil						= "recoil_pistol_heavy";
			recoilProne					= "recoil_prone_pistol_heavy";
			reloadTime					= .25;
			sounds[]					= {"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] 				= {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",1.3,1,200};
				begin2[] 				= {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_2.wss",1.3,1,200};
				soundBegin[] 			= {"begin1",1,"begin1",1};
			};
		};
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
 	{
		mass = 50;
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