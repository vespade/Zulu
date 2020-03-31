class OPTRE_M90A: OPTRE_M45
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M90X CAWS Tactical Shotgun";
	
	magazines[]=
	{
		"OPTRE_6Rnd_8Gauge_Pellets",
		"OPTRE_6Rnd_8Gauge_Slugs",
		"OPTRE_6Rnd_8Gauge_HEDP",
		"OPTRE_6Rnd_8Gauge_Beanbags"
	};
	
	class WeaponSlotsInfo
 	{
		mass = 120;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"optre_srs99d_suppressor"
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
	};
};