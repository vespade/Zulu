class OPTRE_Shotgun_Base: arifle_Mk20_F
{
	class Single;
};

class OPTRE_M45: OPTRE_Shotgun_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "M45X Tactical Shotgun";
	
	magazines[]=
	{
		"OPTRE_6Rnd_8Gauge_Pellets",
		"OPTRE_6Rnd_8Gauge_Slugs",
		"OPTRE_6Rnd_8Gauge_HEDP",
		"OPTRE_6Rnd_8Gauge_Beanbags",
		"OPTRE_6Rnd_8Gauge_Incendiary"
	};
	
	class WeaponSlotsInfo
 	{
		mass = 93;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"optre_srs99d_suppressor"
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
				"optre_m73_smartlink",
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
	
	class Single: Single
	{
		sounds[] 					= {"StandardSound", "SilencedSound"};
		class BaseSoundModeType;
		class SilencedSound: BaseSoundModeType
		{
			begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",1.0,1,300};
			begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",1.0,1,300};
			begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",1.0,1,300};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			class SoundTails
			{
				class TailInterior
				{	
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",1.0,1,300};
					frequency = 1;
					volume = "interior";
				};
				class TailTrees
				{	
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",1.0,1,300};
					frequency = 1;
					volume = "(1-interior/1.4)*trees";
				};
				class TailForest
				{
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",1.0,1,300};
					frequency = 1;
					volume = "(1-interior/1.4)*forest";
					};
				class TailMeadows
				{
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",1.0,1,300};
					frequency = 1;
					volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				class TailHouses
				{
					sound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",1.0,1,300};
					frequency = 1;
					volume = "(1-interior/1.4)*houses";
				};
			};
		};
		reloadTime = 0.25;
	};
};

class OPTRE_M45TAC: OPTRE_M45
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "M45X Combat Shotgun (Tactical)";
	
	magazines[]=
	{
		"OPTRE_6Rnd_8Gauge_Pellets",
		"OPTRE_6Rnd_8Gauge_Slugs",
		"OPTRE_6Rnd_8Gauge_HEDP",
		"OPTRE_6Rnd_8Gauge_Beanbags",
		"OPTRE_6Rnd_8Gauge_Incendiary"
	};
};

class OPTRE_M45E: OPTRE_M45
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "M45EX Combat Shotgun";
	
	magazines[]=
	{
		"OPTRE_6Rnd_8Gauge_Pellets",
		"OPTRE_6Rnd_8Gauge_Slugs",
		"OPTRE_6Rnd_8Gauge_HEDP",
		"OPTRE_6Rnd_8Gauge_Beanbags",
		"OPTRE_6Rnd_8Gauge_Incendiary",
		"OPTRE_12Rnd_8Gauge_Pellets",
		"OPTRE_12Rnd_8Gauge_Slugs",
		"OPTRE_12Rnd_8Gauge_HEDP",
		"OPTRE_12Rnd_8Gauge_Beanbags",
		"OPTRE_12Rnd_8Gauge_Incendiary"
	};
	
	class Single: Single
	{
		reloadTime 				= 0.25;
	};
};

class OPTRE_M45A: OPTRE_M45E
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "M45AX Semi-Automatic Shotgun";
	muzzles[]					= {"this", "OPTRE_M45"};
	
	magazines[]=
	{
		"OPTRE_6Rnd_8Gauge_Pellets",
		"OPTRE_6Rnd_8Gauge_Slugs",
		"OPTRE_6Rnd_8Gauge_HEDP",
		"OPTRE_6Rnd_8Gauge_Incendiary"
	};
	
	class OPTRE_M45: OPTRE_M45
	{
		displayName						= "Single (Secondary)";
	};
};

class OPTRE_M45ATAC: OPTRE_M45A
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	magazines[]=
	{
		"OPTRE_6Rnd_8Gauge_Pellets",
		"OPTRE_6Rnd_8Gauge_Slugs",
		"OPTRE_6Rnd_8Gauge_HEDP",
		"OPTRE_6Rnd_8Gauge_Incendiary"
	};
	
	displayName 				= "M45AX Semi-Automatic Shotgun (Tactical)";
};