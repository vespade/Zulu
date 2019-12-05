class OPTRE_M393_DMR;
class VES_LongRifle_Base: OPTRE_M393_DMR
{
	class WeaponSlotsInfo;
	class Single;
	class ItemInfo;
};
class VES_M28A2: VES_LongRifle_Base
{
	dlc="FZ";
	scope=2;
	scopeCurator=2;
	author="Vespade";
	displayName="M28A2 IMWS DMR";
	baseWeapon="VES_M28A2";
	model="\A3\Weapons_F_Exp\Rifles\ARX\ARX_F.p3d";
	picture="\A3\Weapons_F_Exp\Rifles\ARX\Data\UI\arifle_ARX_blk_F_X_CA.paa";
	handAnim[]={"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\ARX\data\anim\arx.rtm"};
	reloadAction="GestureReloadARX";
	modes[]={"Single"};
	muzzles[]={"this", "Secondary"};
	magazines[]=
	{
		"OPTRE_15Rnd_762x51_Mag",
		"OPTRE_15Rnd_762x51_Mag_Tracer",
		"OPTRE_15Rnd_762x51_SS_Mag",
		"OPTRE_15Rnd_762x51_AP_Mag",
		"OPTRE_15Rnd_762x51_AP_Mag_Tracer",
		"OPTRE_15Rnd_762x51_FS_Mag",
		"OPTRE_15Rnd_762x51_FS_Mag_Tracer",
		"OPTRE_32Rnd_762x51_Mag",
		"OPTRE_32Rnd_762x51_Mag_Tracer",
		"OPTRE_32Rnd_762x51_Mag_UW",
		"OPTRE_AP32Rnd_762x51_Mag",
		"OPTRE_JHP32Rnd_762x51_Mag",
		"OPTRE_SS32Rnd_762x51_Mag"
	};
	class ItemInfo: ItemInfo
	{
		mass = 93.5;
	};
	class Single: Single
	{
		class SilencedSound
		{
			SoundSetShot[] = {"DMR03_silencerShot_SoundSet","DMR03_silencerTail_SoundSet","DMR03_silencerInteriorTail_SoundSet"};
		};
		class StandardSound
		{
			soundSetShot[] = {"DMR03_Shot_SoundSet","DMR03_tail_SoundSet","DMR03_InteriorTail_SoundSet"};
		};
	};
	class Secondary: Rifle_Base_F
	{
		changeFiremodeSound[]={"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
		cursor="srifle";
		displayName="M6MWS Magnum";
		drySound[]={"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\dry_4_Five",0.398107,1,20};
		htMax=300;
		htMin=1;
		magazines[]={"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag_Tracer","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_12Rnd_127x40_Mag","OPTRE_8Rnd_127x40_AP_Mag","OPTRE_12Rnd_127x40_Mag_Tracer","6Rnd_RedSignal_F","6Rnd_GreenSignal_F"};
		maxZeroing=100;
		modes[]={"Single"};
		recoil="recoil_ARX_secondary";
		reloadAction="GestureReloadARX2";
		reloadMagazineSound[]={"A3\Sounds_F\arsenal\weapons\Pistols\4-Five\reload_4_five",0.562341,1,30};
		soundContinuous=0;
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=8;
		ODST_1="OPTRE_ODST_HUD_AmmoCount_PistolSmart";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_PistolSmart";
		Eye="OPTRE_EYE_HUD_AmmoCount_PistolSmart";
		class Single: Mode_SemiAuto
		{
			aiRateOfFire=2;
			aiRateOfFireDistance=500;
			dispersion=5e-005;
			maxRange=100;
			maxRangeProbab=.05;
			midRange=25;
			midRangeProbab=.1;
			minRange=10;
			minRangeProbab=.25;
			recoil="recoil_pistol_heavy";
			recoilProne="recoil_prone_pistol_heavy";
			reloadTime=.25;
			sounds[]={"StandardSound"};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_1.wss",1.3,1,200};
				begin2[] = {"\OPTRE_Weapons\Pistol\data\sounds\Magnum_2.wss",1.3,1,200};
				soundBegin[] = {"begin1",1,"begin1",1};
			};
		};
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: CowsSlot
		{
			compatibleitems[]=
			{
				"optic_mrco",
				"optic_ams",
				"optic_khs_blk",
				"optic_holosight_blk_f",
				"optic_aco",
				"optic_aco_grn",
				"optic_dms",
				"optic_hamr",
				"optic_sos",
				"optic_lrps",
				"optic_nightstalker",
				"optic_erco_blk_f",
				"optic_tws",
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
				"OPTRE_SRS99C_Scope",
				"OPTRE_SRS99_Scope",
				"OPTRE_HMG38_CarryHandle"
			};
		};
		class MuzzleSlot: MuzzleSlot
		{
			compatibleItems[]={"muzzle_snds_65_ti_blk_f", "muzzle_snds_h", "ace_muzzle_mzls_h"};
		};
		class PointerSlot: PointerSlot
		{
			compatibleItems[]={"acc_flashlight", "acc_pointer_ir", "ace_acc_pointer_green"};
		};
	};
	hiddenSelections[]={"camo1","camo2"};
	hiddenSelectionsTextures[]=
	{
		"\V_FZ_Weapons\Data\M28\V_M28_CO.paa",
		"\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co.paa"
	};
	/*hiddenSelectionsMaterials[]=
	{
		"V_FZ_Weapons\Data\M28\V_M28.rvmat",
		"A3\Weapons_F_Exp\Rifles\ARX\Data\ARX_2.rvmat"
	};*/
};