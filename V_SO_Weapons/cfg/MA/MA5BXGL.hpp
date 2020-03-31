class OPTRE_MA5BGL: OPTRE_MA5B
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA5BX + M301 GL Assault Rifle";
	baseWeapon 					= "OPTRE_MA5BXGL";
	model                       = "\OPTRE_Weapons\AR\MA5BGL.p3d";
	
	// Inclusion of new UGL
	muzzles[] 					= {"this","OPTRE_M301X"};
	class OPTRE_M301X: OPTRE_M301X{};
	
	magazines[] = 
	{
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag_Tracer",
		"OPTRE_60Rnd_762x51_Mag_AP",
		"OPTRE_60Rnd_762x51_Mag_APT",
		"OPTRE_60Rnd_762x51_Mag_JHP",
		"OPTRE_60Rnd_762x51_Mag_JHPT"
	};
	
	class WeaponSlotsInfo
 	{
		mass = 117;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"muzzle_snds_b",
				"muzzle_snds_h_mg_blk_f",
				"ace_muzzle_mzls_b",

				"optre_ma5suppressor",
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
				"OPTRE_MA5_Smartlink",
				"OPTRE_MA5_SmartLink_v2",
				"OPTRE_MA5C_SmartLink_v2",
				"OPTRE_MA5_SmartLink_legacy",
				"OPTRE_MA5C_SmartLink_legacy",
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
	
	class Single: Mode_SemiAuto
	{
		sounds[] 																= {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect 												= "DefaultRifle";
			closure1[] 														= {};
			closure2[] 														= {};
			soundClosure[] 													= {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] 														= {"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",1.0,1,2000};
			begin2[] 														= {"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",1.0,1,2000};
			soundBegin[] 													= {"begin1",0.34,"begin2",0.33};
			class SoundTails
			{
				class TailTrees
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1.0,1,1400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*trees";
				};
				class TailForest
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1.0,1,1400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*forest";
				};
				class TailInterior
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
					frequency 													= 1;
					volume 														= "interior";
				};
				class TailMeadows
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1.0,1,1400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				class TailHouses
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1.0,1,1400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*houses";
				};
			};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] 															= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
			begin2[] 															= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
			begin3[] 															= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
			soundBegin[] 														= {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			class SoundTails
			{
				class TailTrees
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*trees";
				};
				class TailForest
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*forest";
				};
				class TailInterior
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
					frequency 													= 1;
					volume 														= "interior";
				};
				class TailMeadows
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				class TailHouses
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*houses";
				};
			};
		};
		reloadTime 																= 0.065;
		dispersion 																= 0.00075;
		recoil 																	= "recoil_single_trg";
		recoilProne 															= "recoil_single_prone_trg";
		minRange																= 2;
		minRangeProbab															= 0.0099999998;
		midRange																= 200;
		midRangeProbab															= 0.0099999998;
		maxRange																= 400;
		maxRangeProbab															= 0.0099999998;
	};
	class FullAuto: Mode_FullAuto
	{
		sounds[] 																= {"StandardSound","SilencedSound"};
		class BaseSoundModeType
		{
			weaponSoundEffect 													= "DefaultRifle";
			closure1[] 															= {};
			closure2[] 															= {};
			soundClosure[] 														= {"closure1",0.5,"closure2",0.5};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] 															= {"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",1.0,1,2000};
			begin2[] 															= {"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",1.0,1,2000};
			soundBegin[] 														= {"begin1",0.34,"begin2",0.33};
			class SoundTails
			{
				class TailTrees
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1.0,1,1400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*trees";
				};
				class TailForest
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1.0,1,1400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*forest";
				};
				class TailInterior
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
					frequency 													= 1;
					volume 														= "interior";
				};
				class TailMeadows
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1.0,1,1400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				class TailHouses
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1.0,1,1400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*houses";
				};
			};
		};
		class SilencedSound: BaseSoundModeType
		{
			begin1[] 															= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
			begin2[] 															= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
			begin3[] 															= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
			soundBegin[] 														= {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			class SoundTails
			{
				class TailTrees
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*trees";
				};
				class TailForest
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*forest";
				};
				class TailInterior
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
					frequency 													= 1;
					volume 														= "interior";
				};
				class TailMeadows
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				class TailHouses
				{
					sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
					frequency 													= 1;
					volume 														= "(1-interior/1.4)*houses";
				};
			};
		};
		reloadTime 																= 0.065;
		dispersion 																= 0.00085;
		recoil 																	= "recoil_auto_trg";
		recoilProne 															= "recoil_auto_prone_trg";
		minRange																= 2;
		minRangeProbab															= 0.0099999998;
		midRange																= 200;
		midRangeProbab															= 0.0099999998;
		maxRange																= 400;
		maxRangeProbab															= 0.0099999998;
	};
};
	