//       _____         __                   ____       __    
//      / __(_)______ / /____ ___ ___ _    /_  / __ __/ /_ __
//     / _// / __/ -_) __/ -_) _ `/  ' \    / /_/ // / / // /
//    /_/ /_/_/  \__/\__/\__/\_,_/_/_/_/   /___/\_,_/_/\_,_/ 
//
//    Do NOT modify or add this PBO to any other pack. It belongs here and here only.

class CfgPatches
{
	class V_FZ_Weapons
	{
		author="Fireteam Zulu";
		name="Codename: Fireteam Zulu";
		url="https://discord.gg/fa7Cguk";
		// Added Items
		units[]=
		{
			// Turrets
			"VES_M247T_Turret",
			"VES_M247T_Turret",
			"VES_M247T_Turret",
			"VES_Static_AA",
			"VES_Static_ATGM",
			"VES_Static_M68",
			"VES_Static_M41"
			// Placeables
			
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		// Requirements
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"V_FZ_Core",
			"A3_Weapons_F",
			"A3_Weapons_F_Exp"
		};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class V_FZ_Weapons
		{
			list[]={"V_FZ_Weapons"};
		};
	};
};

// Guns
class Mode_SemiAuto;
class Mode_Burst;
class BaseSoundModeType;
class CfgWeapons
{
	/*class OPTRE_BR55;
	class VES_BR25: OPTRE_BR55
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Fireteam Zulu";
		displayName="BR25 Battle Rifle";
		baseWeapon="VES_BR25";
		model="\A3\Weapons_F_Exp\Rifles\CTAR\CTAR_F.p3d";
		picture="\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_blk_F_X_CA.paa";
		handAnim[]={"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\CTAR\Anim\CTAR_F.rtm"};
		reloadAction="GestureReloadCTAR";
	};
	class OPTRE_BR55HB;
	class VES_BR25HB: OPTRE_BR55HB
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Fireteam Zulu";
		displayName="BR25HB Battle Rifle";
		baseWeapon="VES_BR25HB";
		model="\A3\Weapons_F_Exp\Rifles\CTARS\CTARS_F.p3d";
		picture="\A3\Weapons_F_Exp\Rifles\CTARS\Data\UI\icon_arifle_CTARS_blk_F_X_CA.paa";
		handAnim[]={"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\CTAR\Anim\CTAR_F.rtm"};
		reloadAction="GestureReloadCTAR";
	};
	class OPTRE_MA32;
	class VES_M51K: OPTRE_MA32
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Fireteam Zulu";
		displayName="M51K ICWS Carbine";
		baseWeapon="VES_M51K";
		model="\A3\Weapons_F\Rifles\Khaybar\KhaybarC_F.p3d";
		picture="\A3\weapons_F\Rifles\Khaybar\Data\UI\gear_KhaybarC_X_CA.paa";
		handAnim[]={"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\Khaybar\Data\Anim\katiba.rtm"};
		reloadAction="GestureReloadKatiba";
	};
	class VES_M51V: OPTRE_MA32
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Fireteam Zulu";
		displayName="M51V ICWS Assault Rifle";
		baseWeapon="VES_M51V";
		model="\A3\Weapons_F\Rifles\Khaybar\Khaybar_F.p3d";
		picture="\A3\Weapons_F\Rifles\Khaybar\Data\UI\gear_Khaybar_X_CA.paa";
		handAnim[]={"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\Khaybar\Data\Anim\katiba.rtm"};
		reloadAction="GestureReloadKatiba";
		modes[]={"Single","Burst","FullAuto"};
		class Burst: Mode_Burst
		{
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",1,1,2000};
				begin2[] = {"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",1,1,2000};
				soundBegin[] = {"begin1",0.34,"begin2",0.33};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
	};
	class OPTRE_MA5A;
	class VES_M34S: OPTRE_MA5A
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Fireteam Zulu";
		displayName="M34S ICWS Assault Rifle";
		baseWeapon="VES_M34S";
		model="\A3\Weapons_F\Rifles\MX\MX_F.p3d";
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_black_X_CA.paa";
		handAnim[]={"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_afg.rtm"};
		reloadAction="GestureReloadMX";
	};*/
	class OPTRE_M393_DMR;
	class VES_LongRifle_Base: OPTRE_M393_DMR
	{
		class WeaponSlotsInfo;
	};
	class MuzzleSlot;
	class PointerSlot;
	class CowsSlot;
	class Rifle_Base_F;
	class VES_M28A2: VES_LongRifle_Base
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Fireteam Zulu";
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
	
	// Vehicle Weaponry
	
	class OPTRE_M7;
	class VES_M7_I: OPTRE_M7
	{
		displayName="Integrated M7 SMG";
	};
};

// Turrets
class CfgVehicles
{
	class OPTRE_Static_M247H_Shielded_Tripod;
	class VES_M247H_Turret: OPTRE_Static_M247H_Shielded_Tripod
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Fireteam Zulu";
		displayName="M247H Mounted Machinegun Turret";
		crew="VES_Rifleman_MA5B_MAR";
		icon="";
		class assembleInfo
		{
			primary=1;
			base="VES_D77HTCI_A";
			assembleTo="VES_D77HTCIS_A";
			displayName="D77H-TCI/AV Pelican (MG)";
			dissasembleTo[]={};
		};
	};
	class OPTRE_Static_M247T_Tripod;
	class VES_M247T_Turret: OPTRE_Static_M247T_Tripod
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Fireteam Zulu";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]={"VES_M247T_Pack"};
		};
		class UserActions
		{
			class AirbrakeEngage
			{
				animPeriod=5;
				condition="(player in [gunner this, driver this]) && (alive this)";
				displayName="<t color='#FE2E2E'>Detach M247 Machinegun";
				displayNameDefault="<t color='#FE2E2E'>Detach M247 Machinegun";
				onlyForPlayer=0;
				position="camera";
				priority=10;
				radius=1;
				showWindow=0;
				hideOnUse = 1;
				statement="0 = this spawn V_FZ_fnc_MGDetach";
				textToolTip="<t color='#FE2E2E'>Detach M247 Machinegun";
				userActionID=60;
			};
		};
	};
	class VES_UH144_Turret_L: OPTRE_Static_M247T_Tripod
	{
		dlc="FZ";
		scope=1;
		scopeCurator=1;
		author="Fireteam Zulu";
		displayName="M247T Side Turret (Left)";
		crew="VES_Rifleman_MA5B_MAR";
		icon="";
	};
	class VES_UH144_Turret_R: VES_UH144_Turret_L
	{
		displayName="M247T Side Turret (Right)";
	};
	
	
	/*class OPTRE_Static_AA;
	class VES_Static_AA: OPTRE_Static_AA
	{
		dlc="Zulu";
		author="Fireteam Zulu";
		scope=2;
		scopeCurator=2;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		#include "cfg\FZ_E_TurretCamos.hpp"
	};*/
	class OPTRE_Static_ATGM;
	class VES_Static_ATGM: OPTRE_Static_ATGM
	{
		dlc="Zulu";
		author="Fireteam Zulu";
		scope=2;
		scopeCurator=2;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		#include "cfg\FZ_B_TurretCamos.hpp"
	};
	class OPTRE_Static_Gauss;
	class VES_Static_M68: OPTRE_Static_Gauss
	{
		dlc="Zulu";
		author="Fireteam Zulu";
		scope=2;
		scopeCurator=2;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		#include "cfg\FZ_A_TurretCamos.hpp"
	};
	class OPTRE_Static_M41;
	class VES_Static_M41: OPTRE_Static_M41
	{
		dlc="Zulu";
		author="Fireteam Zulu";
		scope=2;
		scopeCurator=2;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		#include "cfg\FZ_A_TurretCamos.hpp"
	};
};