class OPTRE_MA5B;
class SO_MA5B_Base: OPTRE_MA5B
{
	class WeaponSlotsInfo;
	class Single;
	class FullAuto;
	
	scope						= 1;
	scopeArsenal				= 1;
	baseWeapon					= "SO_MA5B_Base";
};

class OPTRE_MA5BX: SO_MA5B_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA5BX ICWS Assault Rifle";
	baseWeapon 					= "OPTRE_MA5BX";
	model                       = "\OPTRE_Weapons\AR\MA5B.p3d";
	
	magazines[] = 
	{
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag_Tracer",
		"OPTRE_60Rnd_762x51_Mag_AP",
		"OPTRE_60Rnd_762x51_Mag_AP_Tracer",
		"OPTRE_60Rnd_762x51_Mag_JHP",
		"OPTRE_60Rnd_762x51_Mag_JHP_Tracer"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 60;
		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[] = 
			{
				"muzzle_snds_B";
				"muzzle_snds_65_TI_blk_F";
				"OPTRE_M7_Silencer"
			};
		};
		class CowsSlot: CowsSlot
		{
			compatibleitems[] = 
			{
				"optic_hamr",
				"optic_Arco_blk_F",
				"optic_ERCO_blk_F",
				"optic_Holosight_blk_F",
				"optic_Holosight_smg_blk_F",
				"optic_ico_01_black_f",
				
				"OPTRE_M392_Scope",
				"OPTRE_M392_Scope_v2",
				"OPTRE_BR55HB_Scope",
				"OPTRE_BR55HB_Scope_v2",
				"OPTRE_M393_Scope",
				"OPTRE_M393_ACOG",
				"OPTRE_M393_EOTECH",
				"OPTRE_M393_EOTECH_v2",
				"OPTRE_M393_Scope_v2",
				"OPTRE_M393_ACOG_v2",
				"OPTRE_M7_Sight",
				"OPTRE_M7_Sight_v2",
				"OPTRE_MA5_SmartLink_legacy",
				"OPTRE_MA5C_SmartLink_legacy",
				"OPTRE_MA5_SmartLink",
				"OPTRE_MA5_SmartLink_v2",
				"OPTRE_MA5C_Smartlink_v2",
				"OPTRE_SRS99C_Scope",
				"OPTRE_SRS99_Scope",
				"OPTRE_MA5_BUIS",
				"OPTRE_M73_Smartlink_v2",
				"OPTRE_M73_SmartLink",
				"OPTRE_HMG38_CarryHandle"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[] = 
			{
				"acc_pointer_IR",
				"acc_flashlight",
			};
		};
		class UnderBarrelSlot: UnderBarrelSlot
		{
			compatibleitems[] = {};
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