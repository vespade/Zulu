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
		name="A2D: Fireteam Zulu";
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
			"V_FZ_Core"
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
class CfgWeapons
{
	/*class OPTRE_BR55;
	class VES_BR25: OPTRE_BR55
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Vespade";
		displayName="BR25 Battle Rifle";
		baseWeapon="VES_BR25";
		model="\A3\Weapons_F_Exp\Rifles\CTAR\CTAR_F";
		picture="\A3\Weapons_F_Exp\Rifles\CTAR\Data\UI\icon_arifle_CTAR_blk_F_X_CA";
		handAnim[]={"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\CTAR\Anim\CTAR_F.rtm"};
		reloadAction="GestureReloadCTAR";
	};
	class OPTRE_BR55HB;
	class VES_BR25HB: OPTRE_BR55HB
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Vespade";
		displayName="BR25HB Battle Rifle";
		baseWeapon="VES_BR25HB";
		model="\A3\Weapons_F_Exp\Rifles\CTARS\CTARS_F";
		picture="\A3\Weapons_F_Exp\Rifles\CTARS\Data\UI\icon_arifle_CTARS_blk_F_X_CA";
		handAnim[]={"OFP2_ManSkeleton","\A3\Weapons_F_Exp\Rifles\CTAR\Anim\CTAR_F.rtm"};
		reloadAction="GestureReloadCTAR";
	};
	class OPTRE_MA32;
	class VES_M51K: OPTRE_MA32
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Vespade";
		displayName="M51K ICWS Carbine";
		baseWeapon="VES_M51K";
		model="\A3\Weapons_F\Rifles\Khaybar\KhaybarC_F";
		picture="\A3\weapons_F\Rifles\Khaybar\Data\UI\gear_KhaybarC_X_CA";
		handAnim[]={"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\Khaybar\Data\Anim\katiba.rtm"};
		reloadAction="GestureReloadKatiba";
	};
	class VES_M51V: OPTRE_MA32
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Vespade";
		displayName="M51V ICWS Assault Rifle";
		baseWeapon="VES_M51V";
		model="\A3\Weapons_F\Rifles\Khaybar\Khaybar_F";
		picture="\A3\Weapons_F\Rifles\Khaybar\Data\UI\gear_Khaybar_X_CA";
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
		author="Vespade";
		displayName="M34S ICWS Assault Rifle";
		baseWeapon="VES_M34S";
		model="\A3\Weapons_F\Rifles\MX\MX_F";
		picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_black_X_CA";
		handAnim[]={"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_afg.rtm"};
		reloadAction="GestureReloadMX";
	};*/
	
	// Vehicle Weaponry
	class OPTRE_M7;
	class VES_M7_I: OPTRE_M7
	{
		displayName="Integrated M7 SMG";
	};
	class OPTRE_M6_Laser;
	class VES_M6_Laser: OPTRE_M6_Laser
	{
		ace_overpressure_angle = 0;
        ace_overpressure_range = 0;
        ace_overpressure_damage = 0;
	};
	
	// Sirens
	class PoliceHorn;
	class VES_CPD_Horn: PoliceHorn
	{
		displayName = "Police Horn";
		drySound[] = {"\V_FZ_Core\Sounds\V_FZ_CPD_Horn.ogg", 1, 1};
	};
	class VES_CPD_Siren: PoliceHorn
	{
		displayName = "Police Siren";
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
		author="Vespade";
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
		author="Vespade";
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
		author="Vespade";
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
		author="Vespade";
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
		author="Vespade";
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
		author="Vespade";
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
		author="Vespade";
		scope=2;
		scopeCurator=2;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		#include "cfg\FZ_A_TurretCamos.hpp"
	};
};