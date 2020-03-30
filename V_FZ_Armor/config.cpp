//       _____         __                   ____       __    
//      / __(_)______ / /____ ___ ___ _    /_  / __ __/ /_ __
//     / _// / __/ -_) __/ -_) _ `/  ' \    / /_/ // / / // /
//    /_/ /_/_/  \__/\__/\__/\_,_/_/_/_/   /___/\_,_/_/\_,_/ 
//
//    Do NOT modify or add this PBO to any other pack. It belongs here and here only.

class CfgPatches
{
	class V_FZ_Armor
	{
		author="Fireteam Zulu";
		name="A2D: Fireteam Zulu";
		url="https://discord.gg/fa7Cguk";
		// Added Items
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		// Requirements
		requiredVersion=0.1;
		requiredAddons[]=
		{"V_FZ_Core"};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class V_FZ_Armor
		{
			list[]={"V_FZ_Armor"};
		};
	};
};

class CfgGlasses
{
	// Balaclava w/ Goggles
	class OPTRE_HUD_Glasses;
	class VES_HUD_Balaclava_G_Black: OPTRE_HUD_Glasses
	{
		dlc="Zulu";
		author="Vespade";
		displayName="HUD Goggles with Balaclava (Black)";
		ace_resistance=2;
        ace_protection=1;
		mass=8;
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_blk_F_ca";
		hiddenSelections[]={"camo1", "camo2"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Facewear\V_B_BLK_CO", "V_FZ_Armor\Data\Facewear\V_G_GLD_CA"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Facewear\V_BGH.rvmat", "", ""};
	};
	class VES_HUD_Balaclava_G_Gray: VES_HUD_Balaclava_G_Black
	{
		displayName="HUD Goggles with Balaclava (Gray)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Facewear\V_B_GRY_CO", "V_FZ_Armor\Data\Facewear\V_G_GLD_CA"};
	};
	class VES_HUD_Balaclava_G_White: VES_HUD_Balaclava_G_Black
	{
		displayName="HUD Goggles with Balaclava (White)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Facewear\V_B_WHT_CO", "V_FZ_Armor\Data\Facewear\V_G_GLD_CA"};
	};
	class VES_HUD_Balaclava_G_Beast: VES_HUD_Balaclava_G_Black
	{
		displayName="HUD Goggles with Balaclava (Beast)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Facewear\V_B_BST_CO", "V_FZ_Armor\Data\Facewear\V_G_GLD_CA"};
	};
	class VES_HUD_Balaclava_G_Punisher: VES_HUD_Balaclava_G_Black
	{
		displayName="HUD Goggles with Balaclava (Punisher)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Facewear\V_B_PNS_CO", "V_FZ_Armor\Data\Facewear\V_G_GLD_CA"};
	};
	class VES_HUD_Balaclava_G_Joker: VES_HUD_Balaclava_G_Black
	{
		displayName="HUD Goggles with Balaclava (Joker)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Facewear\V_B_JKR_CO", "V_FZ_Armor\Data\Facewear\V_G_GLD_CA"};
	};
	
	// Masks(?)
	class VES_HUD_APR_01: VES_HUD_Balaclava_G_Black
	{
		displayName = "HUD APR";
		model = "\a3\Characters_F_Enoch\Facewear\G_AirPurifyingRespirator_01_F";
		picture = "\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_AirPurifyingRespirator_01_F_ca.paa";
	};
	class VES_HUD_APR_02: VES_HUD_Balaclava_G_Black
	{
		displayName = "HUD APR (2)";
		model = "\a3\Characters_F_Enoch\Facewear\G_AirPurifyingRespirator_02_F";
		picture = "\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_AirPurifyingRespirator_02_black_F_ca";
	};
	class VES_HUD_APR_03: VES_HUD_Balaclava_G_Black
	{
		displayName = "HUD APR (3)";
		model = "\a3\Characters_F_Enoch\Facewear\G_RegulatorMask_F";
		picture = "\A3\Characters_F_Enoch\Facewear\Data\UI\icon_G_RegulatorMask_F_ca";
	};
	
	// Aviators
	class VES_HUD_RayBans: VES_HUD_Balaclava_G_Black
	{
		displayName = "HUD Aviators";
		model = "\A3\characters_f_gamma\Heads\Glasses\g_aviators";
		picture = "\A3\Characters_F\data\ui\icon_g_aviators_CA";
	};
	class VES_HUD_RayBans_Bandana: VES_HUD_Balaclava_G_Black
	{
		displayName = "HUD Aviators with Bandana (Black)";
		model = "\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_aviator";
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_aviator_ca";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_blk_co","\a3\characters_f\heads\glasses\data\glass_ca"};
	};
	class VES_HUD_RayBans_Bandana_Green: VES_HUD_RayBans_Bandana
	{
		displayName = "HUD Aviators with Bandana (Green)";
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_grn_co","\a3\characters_f\heads\glasses\data\glass_ca"};
	};
	class VES_HUD_RayBans_Bandana_Tan: VES_HUD_RayBans_Bandana
	{
		displayName = "HUD Aviators with Bandana (Tan)";
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_tan_co","\a3\characters_f\heads\glasses\data\glass_ca"};
	};
	class VES_HUD_RayBans_Bandana_Beast: VES_HUD_RayBans_Bandana
	{
		displayName = "HUD Aviators with Bandana (Beast)";
		hiddenSelectionsTextures[] = {"\a3\characters_f_bootcamp\guerrilla\data\headgear_bandmask_beast_co","\a3\characters_f\heads\glasses\data\glass_ca"};
	};
	
	// Balaclava
	class VES_HUD_Balaclava_Black: VES_HUD_Balaclava_G_Black
	{
		displayName="HUD Balaclava (Black)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Facewear\V_B_BLK_CO"};
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
	};
	class VES_HUD_Balaclava_Gray: VES_HUD_Balaclava_G_Gray
	{
		displayName="HUD Balaclava (Gray)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Facewear\V_B_GRY_CO"};
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
	};
	class VES_HUD_Balaclava_White: VES_HUD_Balaclava_G_White
	{
		displayName="HUD Balaclava (White)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Facewear\V_B_WHT_CO"};
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
	};
	class VES_HUD_Balaclava_Beast: VES_HUD_Balaclava_G_Beast
	{
		displayName="HUD Balaclava (Beast)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Facewear\V_B_BST_CO"};
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
	};
	class VES_HUD_Balaclava_Punisher: VES_HUD_Balaclava_G_Punisher
	{
		displayName="HUD Balaclava (Punisher)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Facewear\V_B_PNS_CO"};
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
	};
	class VES_HUD_Balaclava_Joker: VES_HUD_Balaclava_G_Joker
	{
		displayName="HUD Balaclava (Joker)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Facewear\V_B_JKR_CO"};
		picture = "\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
	};
	
	class VES_HUD_Visor: OPTRE_HUD_Glasses
	{
		dlc="Zulu";
		author="Vespade";
		displayName="HUD Visor (Pilot)";
		ace_resistance=1;
        ace_protection=1;
		mass=3;
		model="A3\Characters_F\Common\headgear_helmet_heli_shield";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={""};
		hiddenSelectionsMaterials[]={""};
	};
};

class CfgWeapons
{
	// NVG Slot Items
	class NVGoggles;
	class VES_NVG_Collar: NVGoggles
	{
		dlc="Zulu";
		author="Vespade";
		displayName="UNSC Uniform Collar";
		model="OPTRE_UNSC_Units\Army\helmet";
		hiddenSelections[]={"camo", "camo2", "camo3", "H_Neck", "H_UNSCVacLower", /*"H_Collar",*/ "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
		hiddenSelectionsTextures[]={"", ""};
		class ItemInfo
		{
			type=616;
			hmdType=0;
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			modelOff="OPTRE_UNSC_Units\Army\helmet";
			hiddenSelections[]={"camo", "camo2", "camo3", "H_Neck", "H_UNSCVacLower", /*"H_Collar",*/ "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
			hiddenSelectionsTextures[]={"", ""};
			mass=2;
		};
	};
	class VES_NVG_Collar_VAC: VES_NVG_Collar
	{
		displayName="UNSC Vacuum Collar";
		hiddenSelections[]={"camo", "camo2", "camo3", "H_Neck", "H_UNSCVacLower", "H_Collar", "H_UNSCVacVisor", /*"H_VacCollar",*/ "H_Ghillie"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]={"camo", "camo2", "camo3", "H_Neck", "H_UNSCVacLower", "H_Collar", "H_UNSCVacVisor", /*"H_VacCollar",*/ "H_Ghillie"};
		};
	};
	
	#include "data\attachments\attachments.hpp"
	
	// Hats & Berets
	class H_Beret_Colonel;
	class HeadgearItem;
	class VES_Beret_MP: H_Beret_Colonel
	{
		dlc="Zulu";
		author="Vespade";
		displayName="[FZ] UNSC Military Police Beret";
		model="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
		picture="\A3\characters_f_EPB\BLUFOR\Data\UI\icon_H_beret02_ca";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\V_FZ_Armor\Data\Headgear\V_B_Army_MP_CA"};
		class ItemInfo: HeadgearItem
		{
			allowedSlots[]={801,901,701,605};
			mass=6;
			modelSides[]={6};
			uniformModel="\A3\Characters_F_EPB\BLUFOR\headgear_beret02";
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\V_FZ_Armor\Data\Headgear\V_B_Army_MP_CA"};
		};
	};
	class VES_Beret_CPD: VES_Beret_MP
	{
		dlc="Zulu";
		author="Vespade";
		displayName="[FZ] Colonial Police Beret";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\Data\Headgear\V_B_CPD_CA"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\V_FZ_Armor\Data\Headgear\V_B_CPD_CA"};
		};
	};
	class VES_PatrolCap_CPD: VES_Beret_CPD
	{
		dlc="Zulu";
		author="Vespade";
		displayName="[FZ] Colonial Police Patrol Cap";
		model = "\A3\Characters_F\Common\cappatrol";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\Data\Headgear\V_PC_CPD_BLK_CO"};
		hiddenSelectionsMaterials[]={""};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\Common\cappatrol";
			hiddenSelectionsTextures[]={"\V_FZ_Armor\Data\Headgear\V_PC_CPD_BLK_CO"};
			hiddenSelectionsMaterials[]={""};
		};
	};
	class VES_PatrolCap_CPD_Blue: VES_PatrolCap_CPD
	{
		dlc="Zulu";
		author="Vespade";
		displayName="[FZ] Colonial Police Patrol Cap (Blue)";
		hiddenSelectionsTextures[]={"\V_FZ_Armor\Data\Headgear\V_PC_CPD_BLU_CO"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"\V_FZ_Armor\Data\Headgear\V_PC_CPD_BLU_CO"};
		};		
	};
	
	// Helmets
	class OPTRE_UNSC_CH252D_Helmet;
	class VES_CH252D: OPTRE_UNSC_CH252D_Helmet
	{
		dlc="Zulu";
		author="Vespade";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.60;
		displayName="[FZ] CH252D Helmet";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_DEF_V_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", "V_FZ_Armor\Data\Helmets\Materials\V_CH252D_V.rvmat"};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_DEF_V_CO"};
			hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", "V_FZ_Armor\Data\Helmets\Materials\V_CH252D_V.rvmat"};
			class HitpointsProtectionInfo
			{
				class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
				class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
				class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
			};
		};
		allowedFacewear[]={};
	};
	class VES_CH252D_B: VES_CH252D
	{
		displayName="[FZ] CH252D Helmet (Blue)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_BLU_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_BLU_V_CO"};};
	};
	class VES_CH252D_S: VES_CH252D
	{
		displayName="[FZ] CH252D Helmet (Silver)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_SLV_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_SLV_V_CO"};};
	};
	class VES_CH252D_G: VES_CH252D
	{
		displayName="[FZ] CH252D Helmet (Gold)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_GLD_V_CO"};};
	};
	class VES_CH252D_RPR: VES_CH252D
	{
		displayName="[FZ] CH252D Helmet (Reaper)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_RPR_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_SLV_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_RPR_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_SLV_V_CO"};};
	};
	
	class OPTRE_UNSC_CH252D_Helmet_dp;
	class VES_CH252D_dp: OPTRE_UNSC_CH252D_Helmet_dp
	{
		dlc="FZ";
		author="Vespade";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0.10;
		displayName="[FZ] CH252D Helmet";
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
		CBRN_protection=1;
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_helmet";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};
			hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252D.rvmat", ""};
			class HitpointsProtectionInfo
			{
				class Face {armor=25; hitpointName="HitFace"; passThrough=0.1;};
				class Head {armor=25; hitPointName="HitHead"; passThrough=0.1;};
				class Neck {armor=20; hitpointName="HitNeck"; passThrough=0.1;};
			};
		};
		allowedFacewear[]={};
	};
	class VES_CH252D_B_dp: VES_CH252D_dp{displayName="[FZ] CH252D Helmet (Blue)";};
	class VES_CH252D_S_dp: VES_CH252D_dp{displayName="[FZ] CH252D Helmet (Silver)";};
	class VES_CH252D_G_dp: VES_CH252D_dp{displayName="[FZ] CH252D Helmet (Gold)";};
	class VES_CH252D_RPR_dp: VES_CH252D_dp{displayName="[FZ] CH252D Helmet (Reaper)";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_RPR_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252D_RPR_CO", "V_FZ_Armor\Data\Helmets\V_CH252D_CLR_V_CA"};};};
	
	class VES_S1ONIR: VES_CH252D
	{
		author="Vespade";
		displayName="[FZ] S1/ONI/R Helmet (Gold)";
		model="\OPTRE_UNSC_Units\Army\recon_helmet";
		picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_S1ONIR_DEF_CO", "V_FZ_Armor\Data\Helmets\V_S1ONIR_GLD_V_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat", "V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_S1ONIR_DEF_CO", "V_FZ_Armor\Data\Helmets\V_S1ONIR_GLD_V_CO"};
			hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat","V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR_V.rvmat"};
		};
	};
	class VES_S1ONIR_S: VES_S1ONIR
	{
		displayName="[FZ] S1/ONI/R Helmet (Silver)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_S1ONIR_DEF_CO", "V_FZ_Armor\Data\Helmets\V_S1ONIR_SLV_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_S1ONIR_DEF_CO", "V_FZ_Armor\Data\Helmets\V_S1ONIR_SLV_V_CO"};};
	};
	
	class VES_S1ONIR_dp: VES_CH252D_dp
	{
		author="Vespade";
		displayName="[FZ] S1/ONI/R Helmet (Gold)";
		model="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
		picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_S1ONIR_DEF_CO", "V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",""};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\recon_helmet_dp";
			picture="\OPTRE_UNSC_Units\Army\icons\odst_recon";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_S1ONIR_DEF_CO", "V_FZ_Armor\Data\Helmets\V_S1ONIR_CLR_V_CA"};
			hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_S1ONIR.rvmat",""};
		};
	};
	class VES_S1ONIR_S_dp: VES_S1ONIR_dp{displayName="[FZ] S1/ONI/R Helmet (Gold)";};
	
	class VES_CH252A: VES_CH252D
	{
		author="Vespade";
		displayName="[FZ] CH252A Helmet";
		model="\OPTRE_UNSC_Units\Army\aa_helmet";
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252A_DEF_V_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat", "V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\aa_helmet";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252A_DEF_V_CO"};
			hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat", "V_FZ_Armor\Data\Helmets\Materials\V_CH252A_V.rvmat"};
		};
	};
	class VES_CH252A_S: VES_CH252A
	{
		displayName="[FZ] CH252A Helmet (Silver)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252A_SLV_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252A_SLV_V_CO"};};
	};
	class VES_CH252A_G: VES_CH252A
	{
		displayName="[FZ] CH252A Helmet (Gold)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252A_GLD_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252A_GLD_V_CO"};};
	};
	class VES_CH252A_B: VES_CH252A
	{
		displayName="[FZ] CH252A Helmet (Blue)";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO"};
		class ItemInfo: ItemInfo {hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252A_BLU_V_CO"};};
	};
	
	class VES_CH252A_dp: VES_CH252D_dp
	{
		author="Vespade";
		displayName="[FZ] CH252A Helmet";
		model="\OPTRE_UNSC_Units\Army\aa_helmet_dp";
		hiddenSelections[]={"camo","camo2"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat",""};
		class ItemInfo: ItemInfo
		{
			uniformModel="\OPTRE_UNSC_Units\Army\aa_helmet_dp";
			hiddenSelections[]={"camo","camo2"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252A_DEF_CO", "V_FZ_Armor\Data\Helmets\V_CH252A_CLR_V_CA"};
			hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252A.rvmat",""};
		};
	};
	class VES_CH252A_S_dp: VES_CH252A_dp{displayName="[FZ] CH252A Helmet (Silver)";};
	class VES_CH252A_G_dp: VES_CH252A_dp{displayName="[FZ] CH252A Helmet (Gold)";};
	class VES_CH252A_B_dp: VES_CH252A_dp{displayName="[FZ] CH252A Helmet (Blue)";};
	
	class OPTRE_UNSC_CH252_Helmet2_MAR;
	class VES_CH252_MAR_Heavy: OPTRE_UNSC_CH252_Helmet2_MAR
	{
		dlc="FZ";
		author="Vespade";
		ace_hearing_protection=0.85;
		ace_hearing_lowerVolume=0.50;
		displayName="[FZ] CH252 Helmet (Heavy) Marine";
		hiddenSelections[]={"camo", "camo2", "camo3", "H_Neck", "H_UNSCVacLower", "H_Collar", "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat", ""};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\army_helmet_DES";
			hiddenSelections[]={"camo", "camo2", "camo3", "H_Neck", "H_UNSCVacLower", "H_Collar", "H_UNSCVacVisor", "H_VacCollar", "H_Ghillie"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_H_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
			class HitpointsProtectionInfo
			{
				class Face {armor=10; hitpointName="HitFace"; passThrough=0.1;};
				class Head {armor=20; hitPointName="HitHead"; passThrough=0.1;};
				class Neck {armor=15; hitpointName="HitNeck"; passThrough=0.1;};
			};
		};
		allowedFacewear[]=
        {
			"", .05,
			"VES_HUD_Balaclava_Black", 2,
			"VES_HUD_Balaclava_Beast", .025,
			"VES_HUD_Balaclava_Punisher", .025,
			"VES_HUD_Balaclava_Joker", .025,
            "OPTRE_EyePiece", .25,
            "OPTRE_HUD_Glasses", .5,
			"OPTRE_HUD_w_Glasses", .5,
			"murshuncigs_cig_0", .10,
			"murshuncigs_cig_1", .10,
			"murshuncigs_cig_2", .10,
			"murshuncigs_cig_3", .10,
			"murshuncigs_cig_4", .10,
			"immersion_cigs_cigar0", .10,
			"immersion_cigs_cigar1", .10,
			"immersion_cigs_cigar2", .10,
			"immersion_cigs_cigar3", .10,
			"immersion_cigs_cigar4", .10
        };
	};
	class VES_CH252_MAR_Light: VES_CH252_MAR_Heavy
	{
		displayName="[FZ] CH252 Helmet (Light) Marine";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_MAR_Radio: VES_CH252_MAR_Heavy
	{
		displayName="[FZ] CH252 Helmet (Radio) Marine";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_R_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_R_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_MAR_Medical: VES_CH252_MAR_Heavy
	{
		displayName="[FZ] CH252 Helmet (Medical) Marine";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_MAR_Vacuum: VES_CH252D
	{
		author="Vespade";
		displayName="[FZ] ECH252 Helmet (Silver) Marine";
		model="\OPTRE_UNSC_Units\Army\helmet_p";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
		hiddenSelections[]={"camo","camo2","camo3","H_Collar","H_Ghillie"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat", "V_FZ_Armor\Data\Helmets\Materials\V_CH252_V.rvmat"};
		class ItemInfo: ItemInfo
		{
			uniformModel="OPTRE_UNSC_Units\Army\helmet_p";
			picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[]={"camo","camo2","camo3","H_Collar","H_Ghillie"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
			hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat", "V_FZ_Armor\Data\Helmets\Materials\V_CH252_V.rvmat"};
		};
	};
	class VES_CH252_MAR_Vacuum_dp: VES_CH252D_dp
	{
		author="Vespade";
		displayName="[FZ] ECH252 Helmet (Silver) Marine";
		model="\OPTRE_UNSC_Units\Army\helmet";
		picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
		hiddenSelections[]={"camo","camo2","camo3","H_Collar","H_Ghillie"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",""};
		class ItemInfo: ItemInfo
		{
			uniformModel="OPTRE_UNSC_Units\Army\helmet";
			picture="\OPTRE_UNSC_Units\Army\icons\Army_Helmet_WDL_vac";
			hiddenSelections[]={"camo","camo2","camo3","H_Collar","H_Ghillie"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
			hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252.rvmat",""};
		};
	};
	class VES_CH252_MAR_Vacuum_Gold: VES_CH252_MAR_Vacuum
	{
		displayName="[FZ] ECH252 Helmet (Gold) Marine";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
		};
	};
	class VES_CH252_MAR_Vacuum_Gold_dp: VES_CH252_MAR_Vacuum_dp
	{
		displayName="[FZ] ECH252 Helmet (Gold) Marine";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_MAR_Crew: VES_CH252_MAR_Heavy
	{
		displayName="[FZ] CH252C Helmet (Crew) Marine";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_crew";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_C_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252C.rvmat"};
		ace_hearing_protection=0.95;
        ace_hearing_lowerVolume=0.85;
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_crew";
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_MAR_C_CO"};
			hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Helmets\Materials\V_CH252C.rvmat"};
		};
	};
	
	class VES_CH252_WDL_Heavy: VES_CH252_MAR_Heavy
	{
		displayName="[FZ] CH252 Helmet (Heavy) Woodland";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_H_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_H_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_WDL_Light: VES_CH252_MAR_Light
	{
		displayName="[FZ] CH252 Helmet (Light) Woodland";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_WDL_Radio: VES_CH252_MAR_Radio
	{
		displayName="[FZ] CH252 Helmet (Radio) Woodland";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_R_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_R_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_WDL_Medical: VES_CH252_MAR_Medical
	{
		displayName="[FZ] CH252 Helmet (Medical) Woodland";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_WDL_Vacuum: VES_CH252_MAR_Vacuum
	{
		displayName="[FZ] ECH252 Helmet (Silver) Woodland";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};};
	};
	class VES_CH252_WDL_Vacuum_dp: VES_CH252_MAR_Vacuum_dp
	{
		displayName="[FZ] ECH252 Helmet (Silver) Woodland";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};};
	};
	class VES_CH252_WDL_Vacuum_Gold: VES_CH252_MAR_Vacuum
	{
		displayName="[FZ] ECH252 Helmet (Gold) Woodland";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};};
	};
	class VES_CH252_WDL_Vacuum_Gold_dp: VES_CH252_MAR_Vacuum_dp
	{
		displayName="[FZ] ECH252 Helmet (Gold) Woodland";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};};
	};
	class VES_CH252_WDL_Crew: VES_CH252_MAR_Crew
	{
		displayName="[FZ] CH252C Helmet (Crew) Woodland";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_C_CO"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_WDL_C_CO"};
		};
	};
	
	class VES_CH252_DES_Heavy: VES_CH252_MAR_Heavy
	{
		displayName="[FZ] CH252 Helmet (Heavy) Desert";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_H_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_H_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_DES_Light: VES_CH252_MAR_Light
	{
		displayName="[FZ] CH252 Helmet (Light) Desert";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_DES_Radio: VES_CH252_MAR_Radio
	{
		displayName="[FZ] CH252 Helmet (Radio) Desert";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_R_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_R_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_DES_Medical: VES_CH252_MAR_Medical
	{
		displayName="[FZ] CH252 Helmet (Medical) Desert";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_DES_Vacuum: VES_CH252_MAR_Vacuum
	{
		displayName="[FZ] ECH252 Helmet (Silver) Desert";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};};
	};
	class VES_CH252_DES_Vacuum_dp: VES_CH252_MAR_Vacuum_dp
	{
		displayName="[FZ] ECH252 Helmet (Silver) Desert";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};};
	};
	class VES_CH252_DES_Vacuum_Gold: VES_CH252_MAR_Vacuum
	{
		displayName="[FZ] ECH252 Helmet (Gold) Desert";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};};
	};
	class VES_CH252_DES_Vacuum_Gold_dp: VES_CH252_MAR_Vacuum_dp
	{
		displayName="[FZ] ECH252 Helmet (Gold) Desert";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};};
	};
	class VES_CH252_DES_Crew: VES_CH252_MAR_Crew
	{
		displayName="[FZ] CH252C Helmet (Crew) Desert";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_C_CO"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_DES_C_CO"};
		};
	};
	
	class VES_CH252_SNO_Heavy: VES_CH252_MAR_Heavy
	{
		displayName="[FZ] CH252 Helmet (Heavy) Snow";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_H_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_H_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_SNO_Light: VES_CH252_MAR_Light
	{
		displayName="[FZ] CH252 Helmet (Light) Snow";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_SNO_Radio: VES_CH252_MAR_Radio
	{
		displayName="[FZ] CH252 Helmet (Radio) Snow";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_R_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_R_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_SNO_Medical: VES_CH252_MAR_Medical
	{
		displayName="[FZ] CH252 Helmet (Medical) Snow";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_SNO_Vacuum: VES_CH252_MAR_Vacuum
	{
		displayName="[FZ] ECH252 Helmet (Silver) Snow";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};};
	};
	class VES_CH252_SNO_Vacuum_dp: VES_CH252_MAR_Vacuum_dp
	{
		displayName="[FZ] ECH252 Helmet (Silver) Snow";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};};
	};
	class VES_CH252_SNO_Vacuum_Gold: VES_CH252_MAR_Vacuum
	{
		displayName="[FZ] ECH252 Helmet (Gold) Snow";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};};
	};
	class VES_CH252_SNO_Vacuum_Gold_dp: VES_CH252_MAR_Vacuum_dp
	{
		displayName="[FZ] ECH252 Helmet (Gold) Snow";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};};
	};
	class VES_CH252_SNO_Crew: VES_CH252_MAR_Crew
	{
		displayName="[FZ] CH252C Helmet (Crew) Snow";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_C_CO"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_SNO_C_CO"};
		};
	};
	
	class VES_CH252_URB_Heavy: VES_CH252_MAR_Heavy
	{
		displayName="[FZ] CH252 Helmet (Heavy) Urban";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_H_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_H_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_URB_Light: VES_CH252_MAR_Light
	{
		displayName="[FZ] CH252 Helmet (Light) Urban";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_URB_Radio: VES_CH252_MAR_Radio
	{
		displayName="[FZ] CH252 Helmet (Radio) Urban";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_R_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_R_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_URB_Medical: VES_CH252_MAR_Medical
	{
		displayName="[FZ] CH252 Helmet (Medical) Urban";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_URB_Vacuum: VES_CH252_MAR_Vacuum
	{
		displayName="[FZ] ECH252 Helmet (Silver) Urban";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};};
	};
	class VES_CH252_URB_Vacuum_dp: VES_CH252_MAR_Vacuum_dp
	{
		displayName="[FZ] ECH252 Helmet (Silver) Urban";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};};
	};
	class VES_CH252_URB_Vacuum_Gold: VES_CH252_MAR_Vacuum
	{
		displayName="[FZ] ECH252 Helmet (Gold) Urban";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};};
	};
	class VES_CH252_URB_Vacuum_Gold_dp: VES_CH252_MAR_Vacuum_dp
	{
		displayName="[FZ] ECH252 Helmet (Gold) Urban";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};};
	};
	class VES_CH252_URB_Crew: VES_CH252_MAR_Crew
	{
		displayName="[FZ] CH252C Helmet (Crew) Urban";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_C_CO"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_URB_C_CO"};
		};
	};
	
	
	
	class VES_CH252_CEA_Heavy: VES_CH252_MAR_Heavy
	{
		displayName="[FZ] CH252 Helmet (Heavy) Evolved";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_H_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_H_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_CEA_Light: VES_CH252_MAR_Light
	{
		displayName="[FZ] CH252 Helmet (Light) Evolved";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_CEA_Radio: VES_CH252_MAR_Radio
	{
		displayName="[FZ] CH252 Helmet (Radio) Evolved";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_R_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_R_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_CEA_Medical: VES_CH252_MAR_Medical
	{
		displayName="[FZ] CH252 Helmet (Medical) Evolved";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_M_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		};
	};
	class VES_CH252_CEA_Vacuum: VES_CH252_MAR_Vacuum
	{
		displayName="[FZ] ECH252 Helmet (Silver) Evolved";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_SLV_V_CO"};};
	};
	class VES_CH252_CEA_Vacuum_dp: VES_CH252_MAR_Vacuum_dp
	{
		displayName="[FZ] ECH252 Helmet (Silver) Evolved";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};};
	};
	class VES_CH252_CEA_Vacuum_Gold: VES_CH252_MAR_Vacuum
	{
		displayName="[FZ] ECH252 Helmet (Gold) Evolved";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO", "V_FZ_Armor\Data\Helmets\V_CH252_GLD_V_CO"};};
	};
	class VES_CH252_CEA_Vacuum_Gold_dp: VES_CH252_MAR_Vacuum_dp
	{
		displayName="[FZ] ECH252 Helmet (Gold) Evolved";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};
		class ItemInfo: ItemInfo{hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_L_CO", "optre_unsc_units\army\data\helmet_visor_ca"};};
	};
	class VES_CH252_CEA_Crew: VES_CH252_MAR_Crew
	{
		displayName="[FZ] CH252C Helmet (Crew) Evolved";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_C_CO"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_CH252_CEA_C_CO"};
		};
	};
	
	// KH2000
	class VES_KH2000_CPD: VES_CH252_MAR_Heavy
	{
		dlc="Zulu";
		author="Vespade";
		displayName="[FZ] KH2000 Colonial Police Helmet";
		model="\a3\characters_f_beta\indep\headgear_helmet_canvas";
		hiddenSelections[]={"camo"};
		HiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_KH2000_CPD_CO"};
		hiddenSelectionsMaterials[]={""};
		class ItemInfo: ItemInfo
		{
			uniformModel="\a3\characters_f_beta\indep\headgear_helmet_canvas";
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Helmets\V_KH2000_CPD_CO"};
			hiddenSelectionsMaterials[]={""};
		};
	};
	
	// Armor Sets
	class OPTRE_UNSC_M52D_Armor_Rifleman;
	class VES_M52D_Rifleman: OPTRE_UNSC_M52D_Armor_Rifleman
	{
		dlc="FZ";
		author="Vespade";
		displayName="[FZ] M52D (Rifleman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_URB_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	class OPTRE_UNSC_M52D_Armor_Demolitions;
	class VES_M52D_Demolitions: OPTRE_UNSC_M52D_Armor_Demolitions
	{
		dlc="FZ";
		author="Vespade";
		displayName="[FZ] M52D (Demolitions)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_URB_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	class OPTRE_UNSC_M52D_Armor_Marksman;
	class VES_M52D_Marksman: OPTRE_UNSC_M52D_Armor_Marksman
	{
		dlc="FZ";
		author="Vespade";
		displayName="[FZ] M52D (Marksman)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_URB_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	class OPTRE_UNSC_M52D_Armor_Scout;
	class VES_M52D_Scout: OPTRE_UNSC_M52D_Armor_Scout
	{
		dlc="FZ";
		author="Vespade";
		displayName="[FZ] M52D (Scout)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_URB_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	class OPTRE_UNSC_M52D_Armor_Sniper;
	class VES_M52D_Sniper: OPTRE_UNSC_M52D_Armor_Sniper
	{
		dlc="FZ";
		author="Vespade";
		displayName="[FZ] M52D (Sniper)";
		picture="\optre_unsc_units\army\icons\odst_vest";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_URB_CO"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","","V_FZ_Armor\Data\Vests\Materials\V_M52_O.rvmat"};
	};
	
	class VES_M52D_SFP_Rifleman: VES_M52D_Rifleman{displayName="[FZ] M52D (Rifleman) Phoenix";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_SFP_CO"};};
	class VES_M52D_SFP_Demolitions: VES_M52D_Demolitions{displayName="[FZ] M52D (Demolitions) Phoenix";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_SFP_CO"};};
	class VES_M52D_SFP_Marksman: VES_M52D_Marksman{displayName="[FZ] M52D (Marksman) Phoenix";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_SFP_CO"};};
	class VES_M52D_SFP_Scout: VES_M52D_Scout{displayName="[FZ] M52D (Scout) Phoenix";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_SFP_CO"};};
	class VES_M52D_SFP_Sniper: VES_M52D_Sniper{displayName="[FZ] M52D (Sniper) Phoenix";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_SFP_CO"};};
	
	class VES_M52D_RPR_Rifleman: VES_M52D_Rifleman{displayName="[FZ] M52D (Rifleman) Reaper";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_RPR_CO"};};
	class VES_M52D_RPR_Demolitions: VES_M52D_Demolitions{displayName="[FZ] M52D (Demolitions) Reaper";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_RPR_CO"};};
	class VES_M52D_RPR_Marksman: VES_M52D_Marksman{displayName="[FZ] M52D (Marksman) Reaper";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_RPR_CO"};};
	class VES_M52D_RPR_Scout: VES_M52D_Scout{displayName="[FZ] M52D (Scout) Reaper";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_RPR_CO"};};
	class VES_M52D_RPR_Sniper: VES_M52D_Sniper{displayName="[FZ] M52D (Sniper) Reaper";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_RPR_CO"};};
	
	class VES_M52D_WRH_Rifleman: VES_M52D_Rifleman{displayName="[FZ] M52D (Rifleman) Warhound";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_WRH_CO"};};
	class VES_M52D_WRH_Demolitions: VES_M52D_Demolitions{displayName="[FZ] M52D (Demolitions) Warhound";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_WRH_CO"};};
	class VES_M52D_WRH_Marksman: VES_M52D_Marksman{displayName="[FZ] M52D (Marksman) Warhound";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_WRH_CO"};};
	class VES_M52D_WRH_Scout: VES_M52D_Scout{displayName="[FZ] M52D (Scout) Warhound";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_WRH_CO"};};
	class VES_M52D_WRH_Sniper: VES_M52D_Sniper{displayName="[FZ] M52D (Sniper) Warhound";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_WRH_CO"};};
	
	class VES_M52D_KIS_Rifleman: VES_M52D_Rifleman{displayName="[FZ] M52D (Rifleman) Hiruko";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_KIS_CO"};};
	class VES_M52D_KIS_Demolitions: VES_M52D_Demolitions{displayName="[FZ] M52D (Demolitions) Hiruko";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_KIS_CO"};};
	class VES_M52D_KIS_Marksman: VES_M52D_Marksman{displayName="[FZ] M52D (Marksman) Hiruko";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_KIS_CO"};};
	class VES_M52D_KIS_Scout: VES_M52D_Scout{displayName="[FZ] M52D (Scout) Hiruko";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_KIS_CO"};};
	class VES_M52D_KIS_Sniper: VES_M52D_Sniper{displayName="[FZ] M52D (Sniper) Hiruko";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","V_FZ_Armor\Data\Vests\V_M52_O_KIS_CO"};};
	
	class VestItem;
	class OPTRE_UNSC_M52A_Armor_Rifleman_MAR;
	class VES_M52A_MAR_Rifleman_A: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		dlc="FZ";
		author="Vespade";
		displayName="[FZ] M52A (Rifleman)(A) Marine";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
		hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Vests\Materials\V_M52_V.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52.rvmat","V_FZ_Armor\Data\Vests\Materials\V_M52_L.rvmat","",""};
		class ItemInfo: VestItem
		{
			mass=75;
			containerClass="Supply250";
			uniformModel="\OPTRE_UNSC_Units\Army\armor";
			class HitpointsProtectionInfo
			{
				class Abdomen {armor=35; hitpointName="HitAbdomen"; passThrough=0.1;};
				class Arms: Abdomen {hitpointName="HitArms";};
				class Body: Abdomen {hitpointName="HitBody";};
				class Chest: Abdomen {hitpointName="HitChest";};
				class Diaphragm: Abdomen {hitpointName="HitDiaphragm";};
				class Hands: Abdomen {hitpointName="HitHands";};
				class Legs: Abdomen {hitpointName="HitLegs";};
				class Neck: Abdomen {hitpointName="HitNeck";};
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
			//	"AS_SmallRight",
			//	"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
				"AP_MGThigh",
			//	"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Rifleman_B: VES_M52A_MAR_Rifleman_A
	{
		displayName="[FZ] M52A (Rifleman)(B) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
			//	"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
			//	"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Rifleman_C: VES_M52A_MAR_Rifleman_A
	{
		displayName="[FZ] M52A (Rifleman)(C) Marine";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_R_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
				"AS_LargeLeft",
			//	"AS_LargeRight",
			//	"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
			//	"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Rifleman_D: VES_M52A_MAR_Rifleman_C
	{
		displayName="[FZ] M52A (Rifleman)(D) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
				"AS_LargeLeft",
			//	"AS_LargeRight",
			//	"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
			//	"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
		
	};
	class VES_M52A_MAR_Breacher_A: VES_M52A_MAR_Rifleman_A
	{
		displayName="[FZ] M52A (Breacher)(A) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
				"AP_MGThigh",
			//	"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
			//	"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Breacher_B: VES_M52A_MAR_Rifleman_A
	{
		displayName="[FZ] M52A (Breacher)(B) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
			//	"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
			//	"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Radio_A: VES_M52A_MAR_Rifleman_A
	{
		displayName="[FZ] M52A (Radio)(A) Marine";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_R_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_L2_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
			//	"AS_BaseRight",
				"AS_LargeLeft",
			//	"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
			//	"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Radio_B: VES_M52A_MAR_Radio_A
	{
		displayName="[FZ] M52A (Radio)(B) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
				"AS_BaseLeft",
			//	"AS_BaseRight",
				"AS_LargeLeft",
			//	"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
			//	"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
			//	"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Sniper_A: VES_M52A_MAR_Rifleman_A
	{
		displayName="[FZ] M52A (Marksman)(A) Marine";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
			//	"A_Ghillie",
			//	"A_ChestArmor",
				"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
			//	"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Sniper_B: VES_M52A_MAR_Sniper_A
	{
		displayName="[FZ] M52A (Marksman)(B) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
				"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
			//	"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
			//	"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
			//	"AP_Rounds",
				"AP_SG",
				"AP_SMG",
			//	"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Grenadier_A: VES_M52A_MAR_Rifleman_C
	{
		displayName="[FZ] M52A (Grenadier)(A) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
			//	"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
			//	"AP_Canteen",
			//	"AP_GL",
			//	"AP_Knife",
				"AP_MGThigh",
			//	"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Grenadier_B: VES_M52A_MAR_Grenadier_A
	{
		displayName="[FZ] M52A (Grenadier)(B) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
			//	"AS_MediumLeft",
			//	"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
			//	"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
			//	"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Security_A: VES_M52A_MAR_Rifleman_A
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_M_MAR_CO","V_FZ_Armor\Data\Vests\V_M52_L_MAR_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};
		displayName="[FZ] M52A (Security)(A) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
			//	"AS_SmallLeft",
			//	"AS_SmallRight",
			//	"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
			//	"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Security_B: VES_M52A_MAR_Security_A
	{
		displayName="[FZ] M52A (Security)(B) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
			//	"AS_SmallLeft",
			//	"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
			//	"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Corpsman_A: VES_M52A_MAR_Security_A
	{
		displayName="[FZ] M52A (Corpsman)(A) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
			//	"A_ShinArmorLeft",
			//	"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
			//	"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
			//	"AP_Canteen",
				"AP_GL",
			//	"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
			//	"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Corpsman_B: VES_M52A_MAR_Corpsman_A
	{
		displayName="[FZ] M52A (Corpsman)(B) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
			//	"A_ThighArmorLeft",
			//	"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
			//	"AS_LargeLeft",
			//	"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
			//	"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
			//	"AP_Frag",
			//	"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Vest_A: VES_M52A_MAR_Corpsman_A
	{
		displayName="[FZ] M52A (Vest) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
				"A_KneesLeft",
				"A_KneesRight",
				"A_KneesMarLeft",
				"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
				"AS_BaseLeft",
				"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	class VES_M52A_MAR_Vest_B: VES_M52A_MAR_Vest_A
	{
		displayName="[FZ] M52A (Soft) Marine";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"camo3",
				"camo4",
				"camo5",
				"A_Ghillie",
			//	"A_ChestArmor",
			//	"A_KneesLeft",
			//	"A_KneesRight",
			//	"A_KneesMarLeft",
			//	"A_KneesMarRight",
				"A_ODST",
				"A_ShinArmorLeft",
				"A_ShinArmorRight",
				"A_TacPad",
				"A_ThighArmorLeft",
				"A_ThighArmorRight",
			//	"AS_BaseLeft",
			//	"AS_BaseRight",
				"AS_LargeLeft",
				"AS_LargeRight",
				"AS_MediumLeft",
				"AS_MediumRight",
				"AS_ODSTCQBLeft",
				"AS_ODSTCQBRight",
				"AS_ODSTLeft",
				"AS_ODSTRight",
				"AS_ODSTSniperLeft",
				"AS_ODSTSniperRight",
				"AS_SmallLeft",
				"AS_SmallRight",
				"AP_Canteen",
				"AP_GL",
				"AP_Knife",
				"AP_MGThigh",
				"AP_AR",
				"AP_BR",
				"AP_Pack",
				"AP_Pistol",
				"AP_Rounds",
				"AP_SG",
				"AP_SMG",
				"AP_Sniper",
				"AP_Thigh",
				"AP_Frag",
				"AP_Smoke",
				"APO_AR",
				"APO_BR",
				"APO_Knife",
				"APO_SMG",
				"APO_Sniper",
				"CustomKit_Scorch"
			};
		};
	};
	
	class VES_M52A_WDL_Rifleman_A: VES_M52A_MAR_Rifleman_A{displayName="[FZ] M52A (Rifleman)(A) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Rifleman_B: VES_M52A_MAR_Rifleman_B{displayName="[FZ] M52A (Rifleman)(B) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Rifleman_C: VES_M52A_MAR_Rifleman_C{displayName="[FZ] M52A (Rifleman)(C) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_R_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Rifleman_D: VES_M52A_MAR_Rifleman_D{displayName="[FZ] M52A (Rifleman)(D) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_R_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Breacher_A: VES_M52A_MAR_Breacher_A{displayName="[FZ] M52A (Breacher)(A) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Breacher_B: VES_M52A_MAR_Breacher_B{displayName="[FZ] M52A (Breacher)(B) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Radio_A: VES_M52A_MAR_Radio_A{displayName="[FZ] M52A (Radio)(A) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_R_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L2_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Radio_B: VES_M52A_MAR_Radio_B{displayName="[FZ] M52A (Radio)(B) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_R_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L2_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Sniper_A: VES_M52A_MAR_Sniper_A{displayName="[FZ] M52A (Marksman)(A) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Sniper_B: VES_M52A_MAR_Sniper_B{displayName="[FZ] M52A (Marksman)(B) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Grenadier_A: VES_M52A_MAR_Grenadier_A{displayName="[FZ] M52A (Grenadier)(A) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Grenadier_B: VES_M52A_MAR_Grenadier_B{displayName="[FZ] M52A (Grenadier)(B) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Security_A: VES_M52A_MAR_Security_A{displayName="[FZ] M52A (Security)(A) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_M_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Security_B: VES_M52A_MAR_Security_B{displayName="[FZ] M52A (Security)(B) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_M_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Corpsman_A: VES_M52A_MAR_Corpsman_A{displayName="[FZ] M52A (Corpsman)(A) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_M_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Corpsman_B: VES_M52A_MAR_Corpsman_B{displayName="[FZ] M52A (Corpsman)(B) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_M_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Vest_A: VES_M52A_MAR_Vest_A{displayName="[FZ] M52A (Vest) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_M_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_WDL_Vest_B: VES_M52A_MAR_Vest_B{displayName="[FZ] M52A (Soft) Woodland";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_M_WDL_CO","V_FZ_Armor\Data\Vests\V_M52_L_WDL_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	
	class VES_M52A_DES_Rifleman_A: VES_M52A_MAR_Rifleman_A{displayName="[FZ] M52A (Rifleman)(A) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Rifleman_B: VES_M52A_MAR_Rifleman_B{displayName="[FZ] M52A (Rifleman)(B) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Rifleman_C: VES_M52A_MAR_Rifleman_C{displayName="[FZ] M52A (Rifleman)(C) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_R_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Rifleman_D: VES_M52A_MAR_Rifleman_D{displayName="[FZ] M52A (Rifleman)(D) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_R_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Breacher_A: VES_M52A_MAR_Breacher_A{displayName="[FZ] M52A (Breacher)(A) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Breacher_B: VES_M52A_MAR_Breacher_B{displayName="[FZ] M52A (Breacher)(B) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Radio_A: VES_M52A_MAR_Radio_A{displayName="[FZ] M52A (Radio)(A) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_R_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L2_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Radio_B: VES_M52A_MAR_Radio_B{displayName="[FZ] M52A (Radio)(B) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_R_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L2_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Sniper_A: VES_M52A_MAR_Sniper_A{displayName="[FZ] M52A (Marksman)(A) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Sniper_B: VES_M52A_MAR_Sniper_B{displayName="[FZ] M52A (Marksman)(B) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Grenadier_A: VES_M52A_MAR_Grenadier_A{displayName="[FZ] M52A (Grenadier)(A) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Grenadier_B: VES_M52A_MAR_Grenadier_B{displayName="[FZ] M52A (Grenadier)(B) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Security_A: VES_M52A_MAR_Security_A{displayName="[FZ] M52A (Security)(A) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_M_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Security_B: VES_M52A_MAR_Security_B{displayName="[FZ] M52A (Security)(B) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_M_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Corpsman_A: VES_M52A_MAR_Corpsman_A{displayName="[FZ] M52A (Corpsman)(A) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_M_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Corpsman_B: VES_M52A_MAR_Corpsman_B{displayName="[FZ] M52A (Corpsman)(B) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_M_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Vest_A: VES_M52A_MAR_Vest_A{displayName="[FZ] M52A (Vest) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_M_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_DES_Vest_B: VES_M52A_MAR_Vest_B{displayName="[FZ] M52A (Soft) Desert";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_DES_CO","V_FZ_Armor\Data\Vests\V_M52_M_DES_CO","V_FZ_Armor\Data\Vests\V_M52_L_DES_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	
	class VES_M52A_SNO_Rifleman_A: VES_M52A_MAR_Rifleman_A{displayName="[FZ] M52A (Rifleman)(A) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Rifleman_B: VES_M52A_MAR_Rifleman_B{displayName="[FZ] M52A (Rifleman)(B) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Rifleman_C: VES_M52A_MAR_Rifleman_C{displayName="[FZ] M52A (Rifleman)(C) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_R_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Rifleman_D: VES_M52A_MAR_Rifleman_D{displayName="[FZ] M52A (Rifleman)(D) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_R_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Breacher_A: VES_M52A_MAR_Breacher_A{displayName="[FZ] M52A (Breacher)(A) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Breacher_B: VES_M52A_MAR_Breacher_B{displayName="[FZ] M52A (Breacher)(B) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Radio_A: VES_M52A_MAR_Radio_A{displayName="[FZ] M52A (Radio)(A) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_R_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L2_SNO_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Radio_B: VES_M52A_MAR_Radio_B{displayName="[FZ] M52A (Radio)(B) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_R_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L2_SNO_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Sniper_A: VES_M52A_MAR_Sniper_A{displayName="[FZ] M52A (Marksman)(A) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Sniper_B: VES_M52A_MAR_Sniper_B{displayName="[FZ] M52A (Marksman)(B) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Grenadier_A: VES_M52A_MAR_Grenadier_A{displayName="[FZ] M52A (Grenadier)(A) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Grenadier_B: VES_M52A_MAR_Grenadier_B{displayName="[FZ] M52A (Grenadier)(B) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Security_A: VES_M52A_MAR_Security_A{displayName="[FZ] M52A (Security)(A) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_M_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Security_B: VES_M52A_MAR_Security_B{displayName="[FZ] M52A (Security)(B) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_M_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Corpsman_A: VES_M52A_MAR_Corpsman_A{displayName="[FZ] M52A (Corpsman)(A) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_M_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Corpsman_B: VES_M52A_MAR_Corpsman_B{displayName="[FZ] M52A (Corpsman)(B) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_M_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Vest_A: VES_M52A_MAR_Vest_A{displayName="[FZ] M52A (Vest) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_M_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_SNO_Vest_B: VES_M52A_MAR_Vest_B{displayName="[FZ] M52A (Soft) Snow";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_M_SNO_CO","V_FZ_Armor\Data\Vests\V_M52_L_SNO_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	
	class VES_M52A_CEA_Rifleman_A: VES_M52A_MAR_Rifleman_A{displayName="[FZ] M52A (Rifleman)(A) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Rifleman_B: VES_M52A_MAR_Rifleman_B{displayName="[FZ] M52A (Rifleman)(B) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Rifleman_C: VES_M52A_MAR_Rifleman_C{displayName="[FZ] M52A (Rifleman)(C) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_R_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Rifleman_D: VES_M52A_MAR_Rifleman_D{displayName="[FZ] M52A (Rifleman)(D) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_R_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Breacher_A: VES_M52A_MAR_Breacher_A{displayName="[FZ] M52A (Breacher)(A) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Breacher_B: VES_M52A_MAR_Breacher_B{displayName="[FZ] M52A (Breacher)(B) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Radio_A: VES_M52A_MAR_Radio_A{displayName="[FZ] M52A (Radio)(A) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_R_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L2_CEA_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Radio_B: VES_M52A_MAR_Radio_B{displayName="[FZ] M52A (Radio)(B) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_R_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L2_CEA_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Sniper_A: VES_M52A_MAR_Sniper_A{displayName="[FZ] M52A (Marksman)(A) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Sniper_B: VES_M52A_MAR_Sniper_B{displayName="[FZ] M52A (Marksman)(B) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Grenadier_A: VES_M52A_MAR_Grenadier_A{displayName="[FZ] M52A (Grenadier)(A) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Grenadier_B: VES_M52A_MAR_Grenadier_B{displayName="[FZ] M52A (Grenadier)(B) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_desert_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Security_A: VES_M52A_MAR_Security_A{displayName="[FZ] M52A (Security)(A) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_M_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Security_B: VES_M52A_MAR_Security_B{displayName="[FZ] M52A (Security)(B) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_M_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Corpsman_A: VES_M52A_MAR_Corpsman_A{displayName="[FZ] M52A (Corpsman)(A) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_M_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Corpsman_B: VES_M52A_MAR_Corpsman_B{displayName="[FZ] M52A (Corpsman)(B) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_M_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Vest_A: VES_M52A_MAR_Vest_A{displayName="[FZ] M52A (Vest) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_M_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_CEA_Vest_B: VES_M52A_MAR_Vest_B{displayName="[FZ] M52A (Soft) Evolved";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_M_CEA_CO","V_FZ_Armor\Data\Vests\V_M52_L_CEA_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	
	class VES_M52A_URB_Rifleman_A: VES_M52A_MAR_Rifleman_A{displayName="[FZ] M52A (Rifleman)(A) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Rifleman_B: VES_M52A_MAR_Rifleman_B{displayName="[FZ] M52A (Rifleman)(B) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Rifleman_C: VES_M52A_MAR_Rifleman_C{displayName="[FZ] M52A (Rifleman)(C) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_R_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Rifleman_D: VES_M52A_MAR_Rifleman_D{displayName="[FZ] M52A (Rifleman)(D) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_R_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Breacher_A: VES_M52A_MAR_Breacher_A{displayName="[FZ] M52A (Breacher)(A) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Breacher_B: VES_M52A_MAR_Breacher_B{displayName="[FZ] M52A (Breacher)(B) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Radio_A: VES_M52A_MAR_Radio_A{displayName="[FZ] M52A (Radio)(A) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_R_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L2_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Radio_B: VES_M52A_MAR_Radio_B{displayName="[FZ] M52A (Radio)(B) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_R_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L2_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Sniper_A: VES_M52A_MAR_Sniper_A{displayName="[FZ] M52A (Marksman)(A) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Sniper_B: VES_M52A_MAR_Sniper_B{displayName="[FZ] M52A (Marksman)(B) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Grenadier_A: VES_M52A_MAR_Grenadier_A{displayName="[FZ] M52A (Grenadier)(A) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Grenadier_B: VES_M52A_MAR_Grenadier_B{displayName="[FZ] M52A (Grenadier)(B) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Security_A: VES_M52A_MAR_Security_A{displayName="[FZ] M52A (Security)(A) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_M_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Security_B: VES_M52A_MAR_Security_B{displayName="[FZ] M52A (Security)(B) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_M_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Corpsman_A: VES_M52A_MAR_Corpsman_A{displayName="[FZ] M52A (Corpsman)(A) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_M_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Corpsman_B: VES_M52A_MAR_Corpsman_B{displayName="[FZ] M52A (Corpsman)(B) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_M_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Vest_A: VES_M52A_MAR_Vest_A{displayName="[FZ] M52A (Vest) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_M_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	class VES_M52A_URB_Vest_B: VES_M52A_MAR_Vest_B{displayName="[FZ] M52A (Soft) Urban";hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_M52_V_URB_CO","V_FZ_Armor\Data\Vests\V_M52_M_URB_CO","V_FZ_Armor\Data\Vests\V_M52_L_URB_CO","optre_unsc_units\army\data\ghillie_woodland_co","optre_unsc_units\army\data\odst_armor_co"};};
	
	// FH-320
	class VES_FH320_CPD_Heavy: VES_M52A_MAR_Vest_A
	{
		dlc="Zulu";
		author="Vespade";
		displayName="[FZ] FH320 Colonial Police Vest (Heavy)";
		model="\a3\characters_f_beta\indep\equip_ia_ga_carrier_gl_rig";
		hiddenSelections[]={"camo1","camo2"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_FH_CPD_CO", "V_FZ_Armor\Data\Vests\V_FH_CPD_A_CO"};
		hiddenSelectionsMaterials[]={"",""};
		class ItemInfo: ItemInfo
		{
			uniformModel="\a3\characters_f_beta\indep\equip_ia_ga_carrier_gl_rig";
			hiddenSelections[]={"camo1","camo2"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_FH_CPD_CO", "V_FZ_Armor\Data\Vests\V_FH_CPD_A_CO"};
			hiddenSelectionsMaterials[]={"",""};
		};
	};
	class VES_FH320_CPD_Medium: VES_FH320_CPD_Heavy
	{
		dlc="Zulu";
		author="Vespade";
		model="\a3\characters_f_beta\indep\equip_ia_vest02";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_FH_CPD_2_CO"};
		displayName="[FZ] FH320 Colonial Police Vest (Medium)";
		class ItemInfo: ItemInfo
		{
			uniformModel="\a3\characters_f_beta\indep\equip_ia_vest02";	
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Vests\V_FH_CPD_2_CO"};
		};		
	};
	class VES_FH320_CPD_Light: VES_FH320_CPD_Heavy
	{
		dlc="Zulu";
		author="Vespade";
		model="\a3\characters_f_beta\indep\equip_ia_vest01";
		hiddenSelections[]={"camo"};
		displayName="[FZ] FH320 Colonial Police Vest (Light)";
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]={"camo"};
			uniformModel="\a3\characters_f_beta\indep\equip_ia_vest01";
		};
	};
	
	class Vest_NoCamo_Base;
	class V_Rangemaster_Belt: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class VES_Holster_CPD: V_Rangemaster_Belt
	{
		dlc="Zulu";
		author="Vespade";
		displayName="[FZ] Colonial Police Holster";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"a3\characters_f\blufor\data\vests_blk_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"a3\characters_f\blufor\data\vests_blk_co.paa"};
		};
	};
	
	
	//Uniforms (Bases)
	class OPTRE_UNSC_Army_Uniform_OLI;
	class UniformItem;
	class VES_BDU_Evolved: OPTRE_UNSC_Army_Uniform_OLI
    {
		dlc="FZ";
		scope=2;
        author="Kreah Leiser & Vespade";
        displayName="[FZ] Combat Uniform (Gray)";
        picture="\optre_unsc_units\army\icons\army_uniform_DES";
		CBRN_protection=1;
        class ItemInfo: UniformItem
        {
			containerClass="Supply100";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass=VES_BDU_V_Evolved;
        };
	};
	class VES_BDU_Reach: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Green)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Reach;
        };
	};
	class VES_BDU_Halo2: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Woodland Classic)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Halo2;
        };
	};
	class VES_BDU_Halo2A: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Woodland Anniversary)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Halo2A;
        };
	};
	class VES_BDU_CookieDough: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Cookie Dough)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_CookieDough;
        };
	};
	class VES_BDU_Splinter: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Splinter)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Splinter;
        };
	};
	class VES_BDU_Urban: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Urban)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Urban;
        };
	};
	class VES_BDU_UrbanBlue: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Urban ODST)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_UrbanBlue;
        };
	};
	class VES_BDU_TTsKOWDL: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (TTsKO Woodland)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_TTsKOWDL;
        };
	};
	class VES_BDU_TTsKODES: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (TTsKO Desert)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_TTsKODES;
        };
	};
	class VES_BDU_Splotch: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Splotch)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Splotch;
        };
	};
	class VES_BDU_Smock: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Smock)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Smock;
        };
	};
	class VES_BDU_SemiArid: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Semi-Arid)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_SemiArid;
        };
	};
	class VES_BDU_RussianVSR: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Russian VSR)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_RussianVSR;
        };
	};
	class VES_BDU_MulticamWoodland: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Multicam Woodland)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_MulticamWoodland;
        };
	};
	class VES_BDU_MulticamBlack: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Multicam Black)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_MulticamBlack;
        };
	};
	class VES_BDU_DesertDPM: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (DPM Desert)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_DesertDPM;
        };
	};
	class VES_BDU_Tundra: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Tundra)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Tundra;
        };
	};
	class VES_BDU_Khaki: VES_BDU_Evolved
    {
        displayName="[FZ] Combat Uniform (Khaki)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Khaki;
        };
	};
	
	class VES_BDU_CPD: VES_BDU_Evolved
	{
		displayName="[FZ] Colonial Police Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass=VES_BDU_V_CPD;
		};
	};
	class VES_BDU_ONI: VES_BDU_Evolved
	{
		displayName="[FZ] Naval Intelligence Formal Attire";
		class ItemInfo: ItemInfo
		{
			uniformClass=VES_BDU_V_ONI;
		};
	};
	
	// Short-Sleeve Uniforms
	class VES_BDU_SS_Evolved: OPTRE_UNSC_Army_Uniform_OLI
    {
		dlc="FZ";
		scope=2;
        author="Kreah Leiser & Vespade";
        displayName="[FZ] Combat Uniform (Gray)(Short)";
        picture="\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			containerClass="Supply100";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass=VES_BDU_SS_V_Evolved;
        };
	};
	class VES_BDU_SS_Reach: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Green)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Reach;
        };
	};
	class VES_BDU_SS_Halo2: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Woodland Classic)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Halo2;
        };
	};
	class VES_BDU_SS_Halo2A: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Woodland Anniversary)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Halo2A;
        };
	};
	class VES_BDU_SS_CookieDough: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Cookie Dough)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_CookieDough;
        };
	};
	class VES_BDU_SS_Splinter: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Splinter)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Splinter;
        };
	};
	class VES_BDU_SS_Urban: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Urban)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Urban;
        };
	};
	class VES_BDU_SS_UrbanBlue: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Urban ODST)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_UrbanBlue;
        };
	};
	class VES_BDU_SS_TTsKOWDL: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (TTsKO Woodland)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_TTsKOWDL;
        };
	};
	class VES_BDU_SS_TTsKODES: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (TTsKO Desert)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_TTsKODES;
        };
	};
	class VES_BDU_SS_Splotch: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Splotch)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Splotch;
        };
	};
	class VES_BDU_SS_Smock: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Smock)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Smock;
        };
	};
	class VES_BDU_SS_SemiArid: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Semi-Arid)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_SemiArid;
        };
	};
	class VES_BDU_SS_RussianVSR: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Russian VSR)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_RussianVSR;
        };
	};
	class VES_BDU_SS_MulticamWoodland: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Multicam Woodland)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_MulticamWoodland;
        };
	};
	class VES_BDU_SS_MulticamBlack: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Multicam Black)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_MulticamBlack;
        };
	};
	class VES_BDU_SS_DesertDPM: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (DPM Desert)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_DesertDPM;
        };
	};
	class VES_BDU_SS_Tundra: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Tundra)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Tundra;
        };
	};
	class VES_BDU_SS_Khaki: VES_BDU_SS_Evolved
    {
        displayName="[FZ] Combat Uniform (Khaki)(Short)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Khaki;
        };
	};
	
	class VES_BDU_SS_CPD: VES_BDU_SS_Evolved
	{
		displayName="[FZ] Colonial Police Uniform (Short)";
		class ItemInfo: ItemInfo
		{
			uniformClass=VES_BDU_SS_V_CPD;
		};
	};
	class VES_BDU_SS_CPD_BLU: VES_BDU_SS_Evolved
	{
		displayName="[FZ] Colonial Police Uniform (Blue)(Short)";
		class ItemInfo: ItemInfo
		{
			uniformClass=VES_BDU_SS_V_CPD_BLU;
		};
	};
	
	// Rolled Uniforms
	class VES_BDU_R_Evolved: OPTRE_UNSC_Army_Uniform_OLI
    {
		dlc="FZ";
		scope=2;
        author="Kreah Leiser & Vespade";
        displayName="[FZ] Combat Uniform (Gray)(Rolled)";
        picture="\optre_unsc_units\army\icons\army_uniform_DES";
        class ItemInfo: UniformItem
        {
			containerClass="Supply100";
			mass=40;
			uniformType="Neopren";
			uniformModel="";
			uniformClass=VES_BDU_R_V_Evolved;
        };
	};
	class VES_BDU_R_Reach: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Green)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Reach;
        };
	};
	class VES_BDU_R_Halo2: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Woodland Classic)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Halo2;
        };
	};
	class VES_BDU_R_Halo2A: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Woodland Anniversary)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Halo2A;
        };
	};
	class VES_BDU_R_CookieDough: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Cookie Dough)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_CookieDough;
        };
	};
	class VES_BDU_R_Splinter: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Splinter)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Splinter;
        };
	};
	class VES_BDU_R_Urban: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Urban)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Urban;
        };
	};
	class VES_BDU_R_UrbanBlue: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Urban ODST)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_UrbanBlue;
        };
	};
	class VES_BDU_R_TTsKOWDL: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (TTsKO Woodland)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_TTsKOWDL;
        };
	};
	class VES_BDU_R_TTsKODES: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (TTsKO Desert)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_TTsKODES;
        };
	};
	class VES_BDU_R_Splotch: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Splotch)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Splotch;
        };
	};
	class VES_BDU_R_Smock: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Smock)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Smock;
        };
	};
	class VES_BDU_R_SemiArid: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Semi-Arid)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_SemiArid;
        };
	};
	class VES_BDU_R_RussianVSR: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Russian VSR)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_RussianVSR;
        };
	};
	class VES_BDU_R_MulticamWoodland: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Multicam Woodland)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_MulticamWoodland;
        };
	};
	class VES_BDU_R_MulticamBlack: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Multicam Black)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_MulticamBlack;
        };
	};
	class VES_BDU_R_DesertDPM: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (DPM Desert)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_DesertDPM;
        };
	};
	class VES_BDU_R_Tundra: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Tundra)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Tundra;
        };
	};
	class VES_BDU_R_Khaki: VES_BDU_R_Evolved
    {
        displayName="[FZ] Combat Uniform (Khaki)(Rolled)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Khaki;
        };
	};
	
	class VES_BDU_R_CPD: VES_BDU_R_Evolved
	{
		displayName="[FZ] Colonial Police Uniform (Rolled)";
		class ItemInfo: ItemInfo
		{
			uniformClass=VES_BDU_R_V_CPD;
		};
	};
	
	// Military Police Uniforms
	class VES_MPU_Evolved: VES_BDU_Evolved
    {
        displayName="[FZ] Military Police Uniform (Gray)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_MPU_V_Evolved;
        };
	};
	class VES_MPU_Reach: VES_BDU_Evolved
    {
        displayName="[FZ] Military Police Uniform (Green)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_MPU_V_Reach;
        };
	};
	class VES_MPU_Khaki: VES_BDU_Evolved
    {
        displayName="[FZ] Military Police Uniform (Khaki)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_MPU_V_Khaki;
        };
	};
	
	//Uniforms (Bases)
	class VES_BDU_Evolved_Slim: VES_BDU_Evolved
    {
		scope=2;
        displayName="[FZ] Combat Uniform (Gray)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Evolved_Slim;
        };
	};
	class VES_BDU_Reach_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Green)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Reach_Slim;
        };
	};
	class VES_BDU_Halo2_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Woodland Classic)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Halo2_Slim;
        };
	};
	class VES_BDU_Halo2A_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Woodland Anniversary)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Halo2A_Slim;
        };
	};
	class VES_BDU_CookieDough_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Cookie Dough)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_CookieDough_Slim;
        };
	};
	class VES_BDU_Splinter_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Splinter)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Splinter_Slim;
        };
	};
	class VES_BDU_Urban_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Urban)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Urban_Slim;
        };
	};
	class VES_BDU_Urban_I_Slim: VES_BDU_Urban_Slim
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Urban_I_Slim;
        };
	};
	class VES_BDU_UrbanBlue_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Urban ODST)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_UrbanBlue_Slim;
        };
	};
	class VES_BDU_TTsKOWDL_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (TTsKO Woodland)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_TTsKOWDL_Slim;
        };
	};
	class VES_BDU_TTsKODES_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (TTsKO Desert)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_TTsKODES_Slim;
        };
	};
	class VES_BDU_Splotch_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Splotch)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Splotch_Slim;
        };
	};
	class VES_BDU_Smock_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Smock)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Smock_Slim;
        };
	};
	class VES_BDU_SemiArid_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Semi-Arid)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_SemiArid_Slim;
        };
	};
	class VES_BDU_RussianVSR_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Russian VSR)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_RussianVSR_Slim;
        };
	};
	class VES_BDU_MulticamWoodland_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Multicam Woodland)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_MulticamWoodland_Slim;
        };
	};
	class VES_BDU_MulticamBlack_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Multicam Black)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_MulticamBlack_Slim;
        };
	};
	class VES_BDU_DesertDPM_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (DPM Desert)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_DesertDPM_Slim;
        };
	};
	class VES_BDU_Tundra_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Tundra)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Tundra_Slim;
        };
	};
	class VES_BDU_Khaki_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Khaki)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_V_Khaki_Slim;
        };
	};
	
	// Short-Sleeve Uniforms
	class VES_BDU_SS_Evolved_Slim: VES_BDU_SS_Evolved
    {
		scope=2;
        displayName="[FZ] Combat Uniform (Gray)(Short)(Slim)";
        class ItemInfo: UniformItem
        {
			uniformClass=VES_BDU_SS_V_Evolved_Slim;
        };
	};
	class VES_BDU_SS_Reach_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Green)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Reach_Slim;
        };
	};
	class VES_BDU_SS_Halo2_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Woodland Classic)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Halo2_Slim;
        };
	};
	class VES_BDU_SS_Halo2A_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Woodland Anniversary)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Halo2A_Slim;
        };
	};
	class VES_BDU_SS_CookieDough_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Cookie Dough)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_CookieDough_Slim;
        };
	};
	class VES_BDU_SS_Splinter_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Splinter)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Splinter_Slim;
        };
	};
	class VES_BDU_SS_Urban_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Urban)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Urban_Slim;
        };
	};
	class VES_BDU_SS_UrbanBlue_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Urban ODST)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_UrbanBlue_Slim;
        };
	};
	class VES_BDU_SS_TTsKOWDL_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (TTsKO Woodland)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_TTsKOWDL_Slim;
        };
	};
	class VES_BDU_SS_TTsKODES_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (TTsKO Desert)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_TTsKODES_Slim;
        };
	};
	class VES_BDU_SS_Splotch_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Splotch)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Splotch_Slim;
        };
	};
	class VES_BDU_SS_Smock_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Smock)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Smock_Slim;
        };
	};
	class VES_BDU_SS_SemiArid_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Semi-Arid)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_SemiArid_Slim;
        };
	};
	class VES_BDU_SS_RussianVSR_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Russian VSR)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_RussianVSR_Slim;
        };
	};
	class VES_BDU_SS_MulticamWoodland_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Multicam Woodland)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_MulticamWoodland_Slim;
        };
	};
	class VES_BDU_SS_MulticamBlack_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Multicam Black)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_MulticamBlack_Slim;
        };
	};
	class VES_BDU_SS_DesertDPM_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (DPM Desert)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_DesertDPM_Slim;
        };
	};
	class VES_BDU_SS_Tundra_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Tundra)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Tundra_Slim;
        };
	};
	class VES_BDU_SS_Khaki_Slim: VES_BDU_SS_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Khaki)(Short)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_SS_V_Khaki_Slim;
        };
	};
	
	// Rolled Uniforms
	class VES_BDU_R_Evolved_Slim: VES_BDU_R_Evolved
    {
		scope=2;
        displayName="[FZ] Combat Uniform (Gray)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Evolved_Slim;
        };
	};
	class VES_BDU_R_Reach_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Green)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Reach_Slim;
        };
	};
	class VES_BDU_R_Halo2_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Woodland Classic)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Halo2_Slim;
        };
	};
	class VES_BDU_R_Halo2A_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Woodland Anniversary)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Halo2A_Slim;
        };
	};
	class VES_BDU_R_CookieDough_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Cookie Dough)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_CookieDough_Slim;
        };
	};
	class VES_BDU_R_Splinter_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Splinter)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Splinter_Slim;
        };
	};
	class VES_BDU_R_Urban_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Urban)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Urban_Slim;
        };
	};
	class VES_BDU_R_UrbanBlue_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Urban ODST)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_UrbanBlue_Slim;
        };
	};
	class VES_BDU_R_TTsKOWDL_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (TTsKO Woodland)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_TTsKOWDL_Slim;
        };
	};
	class VES_BDU_R_TTsKODES_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (TTsKO Desert)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_TTsKODES_Slim;
        };
	};
	class VES_BDU_R_Splotch_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Splotch)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Splotch_Slim;
        };
	};
	class VES_BDU_R_Smock_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Smock)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Smock_Slim;
        };
	};
	class VES_BDU_R_SemiArid_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Semi-Arid)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_SemiArid_Slim;
        };
	};
	class VES_BDU_R_RussianVSR_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Russian VSR)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_RussianVSR_Slim;
        };
	};
	class VES_BDU_R_MulticamWoodland_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Multicam Woodland)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_MulticamWoodland_Slim;
        };
	};
	class VES_BDU_R_MulticamBlack_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Multicam Black)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_MulticamBlack_Slim;
        };
	};
	class VES_BDU_R_DesertDPM_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (DPM Desert)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_DesertDPM_Slim;
        };
	};
	class VES_BDU_R_Tundra_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Tundra)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Tundra_Slim;
        };
	};
	class VES_BDU_R_Khaki_Slim: VES_BDU_R_Evolved_Slim
    {
        displayName="[FZ] Combat Uniform (Khaki)(Rolled)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_BDU_R_V_Khaki_Slim;
        };
	};
	
	// Military Police Uniforms
	class VES_MPU_Evolved_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Military Police Uniform (Gray)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_MPU_V_Evolved_Slim;
        };
	};
	class VES_MPU_Reach_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Military Police Uniform (Green)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_MPU_V_Reach_Slim;
        };
	};
	class VES_MPU_Khaki_Slim: VES_BDU_Evolved_Slim
    {
        displayName="[FZ] Military Police Uniform (Khaki)(Slim)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_MPU_V_Khaki_Slim;
        };
	};
	
	// Dress Uniforms
	/*class VES_DU_White: OPTRE_UNSC_Army_Uniform_OLI
    {
        displayName="[FZ] Dress Uniform (White)";
        class ItemInfo: UniformItem
        {
			picture="\optre_unsc_units\army\icons\army_uniform_sno";
			containerClass="Supply80";
			mass=20;
			uniformModel="\OPTRE_UNSC_Units\Army\officer";
			uniformClass=VES_DU_V_White;
        };
	};
	class VES_DU_Gray: VES_BDU_R_Evolved
    {
        displayName="[FZ] Dress Uniform (Gray)";
        class ItemInfo: ItemInfo
        {
			uniformClass=VES_DU_V_Gray;
        };
	};*/
};

class CfgVehicles
{
	// Uniforms (Textures)
	class OPTRE_UNSC_Army_Soldier_WDL;
	class VES_BDU_V_Base: OPTRE_UNSC_Army_Soldier_WDL
	{
		class EventHandlers;
	};
	class VES_BDU_V_Evolved: VES_BDU_V_Base
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform";
		hiddenSelections[]={"camo","camo2","insignia","clan",/*"A_BaseLeg",*/"A_SlimLeg"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Evolved_CO"};
		uniformclass="VES_BDU_Evolved";
	};
	class VES_BDU_V_Halo2: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Halo2_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Halo2_CO"};
		uniformclass="VES_BDU_Halo2";
	};
	class VES_BDU_V_Halo2A: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Halo2A_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Halo2A_CO"};
		uniformclass="VES_BDU_Halo2A";
	};
	class VES_BDU_V_Reach: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Reach_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Reach_CO"};
		uniformclass="VES_BDU_Reach";
	};
	class VES_BDU_V_CookieDough: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_CookieDough_CO","V_FZ_Armor\Data\Uniforms\V_BDU_CookieDough_CO"};
		uniformclass="VES_BDU_CookieDough";
	};
	class VES_BDU_V_Splinter: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Splinter_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Splinter_CO"};
		uniformclass="VES_BDU_Splinter";
	};
	class VES_BDU_V_Urban: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Urban_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Urban_CO"};
		uniformclass="VES_BDU_Urban";
	};
	class VES_BDU_V_UrbanBlue: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_UrbanBlue_CO","V_FZ_Armor\Data\Uniforms\V_BDU_UrbanBlue_CO"};
		uniformclass="VES_BDU_UrbanBlue";
	};
	class VES_BDU_V_TTsKODES: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_TTsKODesert_CO","V_FZ_Armor\Data\Uniforms\V_BDU_TTsKODesert_CO"};
		uniformclass="VES_BDU_TTsKODES";
	};
	class VES_BDU_V_TTsKOWDL: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO","V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO"};
		uniformclass="VES_BDU_TTsKOWDL";
	};
	class VES_BDU_V_Splotch: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO"};
		uniformclass="VES_BDU_Splotch";
	};
	class VES_BDU_V_Smock: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Smock_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Smock_CO"};
		uniformclass="VES_BDU_Smock";
	};
	class VES_BDU_V_SemiArid: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_SemiArid_CO","V_FZ_Armor\Data\Uniforms\V_BDU_SemiArid_CO"};
		uniformclass="VES_BDU_SemiArid";
	};
	class VES_BDU_V_RussianVSR: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_RussianVSR_CO","V_FZ_Armor\Data\Uniforms\V_BDU_RussianVSR_CO"};
		uniformclass="VES_BDU_RussianVSR";
	};
	class VES_BDU_V_MulticamWoodland: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_MulticamWoodland_CO","V_FZ_Armor\Data\Uniforms\V_BDU_MulticamWoodland_CO"};
		uniformclass="VES_BDU_MulticamWoodland";
	};
	class VES_BDU_V_MulticamBlack: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO","V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO"};
		uniformclass="VES_BDU_MulticamBlack";
	};
	class VES_BDU_V_Multicam: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Multicam_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Multicam_CO"};
		uniformclass="VES_BDU_Multicam";
	};
	class VES_BDU_V_DesertDPM: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_DesertDPM_CO","V_FZ_Armor\Data\Uniforms\V_BDU_DesertDPM_CO"};
		uniformclass="VES_BDU_DesertDPM";
	};
	class VES_BDU_V_Tundra: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO"};
		uniformclass="VES_BDU_Tundra";
	};
	class VES_BDU_V_Khaki: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Khaki_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Khaki_CO"};
		uniformclass="VES_BDU_Khaki";
	};
	
	class VES_BDU_V_CPD: VES_BDU_V_Evolved
	{
		model="\a3\characters_f_beta\indep\ia_soldier_01";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_CPD_CO"};
		uniformclass="VES_BDU_CPD";
	};
	class VES_BDU_V_ONI: VES_BDU_V_Evolved
	{
		model="\a3\Characters_F\Civil\Scientist_01_formal_F";
		hiddenSelections[]={"camo1","badge","id"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_UNI_ONI_CO","V_FZ_Armor\Data\Uniforms\V_UNI_ONI_CO"};
		uniformclass="VES_BDU_ONI";
	};
	
	// Short-Sleeve Uniforms
	class VES_BDU_SS_V_Evolved: VES_BDU_V_Evolved
	{
		model="\OPTRE_UNSC_Units\Army\uniform_short";
		uniformclass="VES_BDU_SS_Evolved";
	};
	class VES_BDU_SS_V_Halo2: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Halo2_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Halo2_CO"};
		uniformclass="VES_BDU_SS_Halo2";
	};
	class VES_BDU_SS_V_Halo2A: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Halo2A_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Halo2A_CO"};
		uniformclass="VES_BDU_SS_Halo2A";
	};
	class VES_BDU_SS_V_Reach: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Reach_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Reach_CO"};
		uniformclass="VES_BDU_SS_Reach";
	};
	class VES_BDU_SS_V_CookieDough: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_CookieDough_CO","V_FZ_Armor\Data\Uniforms\V_BDU_CookieDough_CO"};
		uniformclass="VES_BDU_SS_CookieDough";
	};
	class VES_BDU_SS_V_Splinter: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Splinter_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Splinter_CO"};
		uniformclass="VES_BDU_SS_Splinter";
	};
	class VES_BDU_SS_V_Urban: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Urban_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Urban_CO"};
		uniformclass="VES_BDU_SS_Urban";
	};
	class VES_BDU_SS_V_UrbanBlue: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_UrbanBlue_CO","V_FZ_Armor\Data\Uniforms\V_BDU_UrbanBlue_CO"};
		uniformclass="VES_BDU_SS_UrbanBlue";
	};
	class VES_BDU_SS_V_TTsKODES: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_TTsKODesert_CO","V_FZ_Armor\Data\Uniforms\V_BDU_TTsKODesert_CO"};
		uniformclass="VES_BDU_SS_TTsKODES";
	};
	class VES_BDU_SS_V_TTsKOWDL: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO","V_FZ_Armor\Data\Uniforms\V_BDU_TTsKOWoodland_CO"};
		uniformclass="VES_BDU_SS_TTsKOWDL";
	};
	class VES_BDU_SS_V_Splotch: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Splotch_CO"};
		uniformclass="VES_BDU_SS_Splotch";
	};
	class VES_BDU_SS_V_Smock: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Smock_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Smock_CO"};
		uniformclass="VES_BDU_SS_Smock";
	};
	class VES_BDU_SS_V_SemiArid: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_SemiArid_CO","V_FZ_Armor\Data\Uniforms\V_BDU_SemiArid_CO"};
		uniformclass="VES_BDU_SS_SemiArid";
	};
	class VES_BDU_SS_V_RussianVSR: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_RussianVSR_CO","V_FZ_Armor\Data\Uniforms\V_BDU_RussianVSR_CO"};
		uniformclass="VES_BDU_SS_RussianVSR";
	};
	class VES_BDU_SS_V_MulticamWoodland: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_MulticamWoodland_CO","V_FZ_Armor\Data\Uniforms\V_BDU_MulticamWoodland_CO"};
		uniformclass="VES_BDU_SS_MulticamWoodland";
	};
	class VES_BDU_SS_V_MulticamBlack: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO","V_FZ_Armor\Data\Uniforms\V_BDU_MulticamBlack_CO"};
		uniformclass="VES_BDU_SS_MulticamBlack";
	};
	class VES_BDU_SS_V_Multicam: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Multicam_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Multicam_CO"};
		uniformclass="VES_BDU_SS_Multicam";
	};
	class VES_BDU_SS_V_DesertDPM: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_DesertDPM_CO","V_FZ_Armor\Data\Uniforms\V_BDU_DesertDPM_CO"};
		uniformclass="VES_BDU_SS_DesertDPM";
	};
	class VES_BDU_SS_V_Tundra: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Tundra_CO"};
		uniformclass="VES_BDU_SS_Tundra";
	};
	class VES_BDU_SS_V_Khaki: VES_BDU_SS_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_Khaki_CO","V_FZ_Armor\Data\Uniforms\V_BDU_Khaki_CO"};
		uniformclass="VES_BDU_SS_Khaki";
	};
	
	class VES_BDU_SS_V_CPD: VES_BDU_SS_V_Evolved
	{
		model="\A3\Characters_F\Civil\c_poloshirtpants";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_UNI_CPD_BLK_CO"};
		uniformclass="VES_BDU_SS_CPD";
	};
	class VES_BDU_SS_V_CPD_BLU: VES_BDU_SS_V_CPD
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_UNI_CPD_BLU_CO"};
		uniformclass="VES_BDU_SS_CPD_BLU";
	};
	
	// Rolled Uniforms
	class VES_BDU_R_V_Evolved: VES_BDU_V_Evolved
	{
        scope=1;
		model="\OPTRE_UNSC_Units\Army\uniform_rolled";
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_Evolved_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_Evolved_CO"};
		uniformclass="VES_BDU_R_Evolved";
	};
	class VES_BDU_R_V_Halo2: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_Halo2_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_Halo2_CO"};
		uniformclass="VES_BDU_R_Halo2";
	};
	class VES_BDU_R_V_Halo2A: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_Halo2A_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_Halo2A_CO"};
		uniformclass="VES_BDU_R_Halo2A";
	};
	class VES_BDU_R_V_Reach: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_Reach_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_Reach_CO"};
		uniformclass="VES_BDU_R_Reach";
	};
	class VES_BDU_R_V_CookieDough: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_CookieDough_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_CookieDough_CO"};
		uniformclass="VES_BDU_R_CookieDough";
	};
	class VES_BDU_R_V_Splinter: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_Splinter_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_Splinter_CO"};
		uniformclass="VES_BDU_R_Splinter";
	};
	class VES_BDU_R_V_Urban: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_Urban_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_Urban_CO"};
		uniformclass="VES_BDU_R_Urban";
	};
	class VES_BDU_R_V_UrbanBlue: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_UrbanBlue_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_UrbanBlue_CO"};
		uniformclass="VES_BDU_R_UrbanBlue";
	};
	class VES_BDU_R_V_TTsKODES: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_TTsKODesert_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_TTsKODesert_CO"};
		uniformclass="VES_BDU_R_TTsKODES";
	};
	class VES_BDU_R_V_TTsKOWDL: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_TTsKOWoodland_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_TTsKOWoodland_CO"};
		uniformclass="VES_BDU_R_TTsKOWDL";
	};
	class VES_BDU_R_V_Splotch: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_Splotch_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_Splotch_CO"};
		uniformclass="VES_BDU_R_Splotch";
	};
	class VES_BDU_R_V_Smock: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_Smock_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_Smock_CO"};
		uniformclass="VES_BDU_R_Smock";
	};
	class VES_BDU_R_V_SemiArid: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_SemiArid_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_SemiArid_CO"};
		uniformclass="VES_BDU_R_SemiArid";
	};
	class VES_BDU_R_V_RussianVSR: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_RussianVSR_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_RussianVSR_CO"};
		uniformclass="VES_BDU_R_RussianVSR";
	};
	class VES_BDU_R_V_MulticamWoodland: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_MulticamWoodland_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_MulticamWoodland_CO"};
		uniformclass="VES_BDU_R_MulticamWoodland";
	};
	class VES_BDU_R_V_MulticamBlack: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_MulticamBlack_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_MulticamBlack_CO"};
		uniformclass="VES_BDU_R_MulticamBlack";
	};
	class VES_BDU_R_V_Multicam: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_Multicam_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_Multicam_CO"};
		uniformclass="VES_BDU_R_Multicam";
	};
	class VES_BDU_R_V_DesertDPM: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_DesertDPM_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_DesertDPM_CO"};
		uniformclass="VES_BDU_R_DesertDPM";
	};
	class VES_BDU_R_V_Tundra: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_Tundra_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_Tundra_CO"};
		uniformclass="VES_BDU_R_Tundra";
	};
	class VES_BDU_R_V_Khaki: VES_BDU_R_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_R_Khaki_CO","V_FZ_Armor\Data\Uniforms\V_BDU_R_Khaki_CO"};
		uniformclass="VES_BDU_R_Khaki";
	};
	
	class VES_BDU_R_V_CPD: VES_BDU_R_V_Evolved
	{
		model="\a3\characters_f_beta\indep\ia_soldier_02";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_BDU_CPD_CO"};
		uniformclass="VES_BDU_R_CPD";
	};
	
	// Military Police Uniforms
	class VES_MPU_V_Evolved: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_MPU_Evolved_CO","V_FZ_Armor\Data\Uniforms\V_MPU_Evolved_CO"};
		uniformclass="VES_MPU_Evolved";
	};
	class VES_MPU_V_Reach: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_MPU_Reach_CO","V_FZ_Armor\Data\Uniforms\V_MPU_Reach_CO"};
		uniformclass="VES_MPU_Reach";
	};
	class VES_MPU_V_Khaki: VES_BDU_V_Evolved
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_MPU_Khaki_CO","V_FZ_Armor\Data\Uniforms\V_MPU_Khaki_CO"};
		uniformclass="VES_MPU_Khaki";
	};
	
	// Uniforms Slim (Textures)
	class VES_BDU_V_Evolved_Slim: VES_BDU_V_Evolved
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_Evolved_Slim";
	};
	class VES_BDU_V_Halo2_Slim: VES_BDU_V_Halo2
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_Halo2_Slim";
	};
	class VES_BDU_V_Halo2A_Slim: VES_BDU_V_Halo2A
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_Halo2A_Slim";
	};
	class VES_BDU_V_Reach_Slim: VES_BDU_V_Reach
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_Reach_Slim";
	};
	class VES_BDU_V_CookieDough_Slim: VES_BDU_V_CookieDough
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_CookieDough_Slim";
	};
	class VES_BDU_V_Splinter_Slim: VES_BDU_V_Splinter
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_Splinter_Slim";
	};
	class VES_BDU_V_Urban_Slim: VES_BDU_V_Urban
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_Urban_Slim";
	};
	class VES_BDU_V_Urban_I_Slim: VES_BDU_V_Urban
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_Urban_I_Slim";
	};
	class VES_BDU_V_UrbanBlue_Slim: VES_BDU_V_UrbanBlue
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_UrbanBlue_Slim";
	};
	class VES_BDU_V_TTsKODES_Slim: VES_BDU_V_TTsKODES
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_TTsKODES_Slim";
	};
	class VES_BDU_V_TTsKOWDL_Slim: VES_BDU_V_TTsKOWDL
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_TTsKOWDL_Slim";
	};
	class VES_BDU_V_Splotch_Slim: VES_BDU_V_Splotch
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_Splotch_Slim";
	};
	class VES_BDU_V_Smock_Slim: VES_BDU_V_Smock
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_Smock_Slim";
	};
	class VES_BDU_V_SemiArid_Slim: VES_BDU_V_SemiArid
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SemiArid_Slim";
	};
	class VES_BDU_V_RussianVSR_Slim: VES_BDU_V_RussianVSR
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_RussianVSR_Slim";
	};
	class VES_BDU_V_MulticamWoodland_Slim: VES_BDU_V_MulticamWoodland
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_MulticamWoodland_Slim";
	};
	class VES_BDU_V_MulticamBlack_Slim: VES_BDU_V_MulticamBlack
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_MulticamBlack_Slim";
	};
	class VES_BDU_V_Multicam_Slim: VES_BDU_V_Multicam
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_Multicam_Slim";
	};
	class VES_BDU_V_DesertDPM_Slim: VES_BDU_V_DesertDPM
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_DesertDPM_Slim";
	};
	class VES_BDU_V_Tundra_Slim: VES_BDU_V_Tundra
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_Tundra_Slim";
	};
	class VES_BDU_V_Khaki_Slim: VES_BDU_V_Khaki
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_Khaki_Slim";
	};
	
	// Short-Sleeve Uniforms
	class VES_BDU_SS_V_Evolved_Slim: VES_BDU_SS_V_Evolved
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_Evolved_Slim";
	};
	class VES_BDU_SS_V_Halo2_Slim: VES_BDU_SS_V_Halo2
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_Halo2_Slim";
	};
	class VES_BDU_SS_V_Halo2A_Slim: VES_BDU_SS_V_Halo2A
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_Halo2A_Slim";
	};
	class VES_BDU_SS_V_Reach_Slim: VES_BDU_SS_V_Reach
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_Reach_Slim";
	};
	class VES_BDU_SS_V_CookieDough_Slim: VES_BDU_SS_V_CookieDough
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_CookieDough_Slim";
	};
	class VES_BDU_SS_V_Splinter_Slim: VES_BDU_SS_V_Splinter
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_Splinter_Slim";
	};
	class VES_BDU_SS_V_Urban_Slim: VES_BDU_SS_V_Urban
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_Urban_Slim";
	};
	class VES_BDU_SS_V_UrbanBlue_Slim: VES_BDU_SS_V_UrbanBlue
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_UrbanBlue_Slim";
	};
	class VES_BDU_SS_V_TTsKODES_Slim: VES_BDU_SS_V_TTsKODES
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_TTsKODES_Slim";
	};
	class VES_BDU_SS_V_TTsKOWDL_Slim: VES_BDU_SS_V_TTsKOWDL
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_TTsKOWDL_Slim";
	};
	class VES_BDU_SS_V_Splotch_Slim: VES_BDU_SS_V_Splotch
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_Splotch_Slim";
	};
	class VES_BDU_SS_V_Smock_Slim: VES_BDU_SS_V_Smock
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_Smock_Slim";
	};
	class VES_BDU_SS_V_SemiArid_Slim: VES_BDU_SS_V_SemiArid
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_SemiArid_Slim";
	};
	class VES_BDU_SS_V_RussianVSR_Slim: VES_BDU_SS_V_RussianVSR
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_RussianVSR_Slim";
	};
	class VES_BDU_SS_V_MulticamWoodland_Slim: VES_BDU_SS_V_MulticamWoodland
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_MulticamWoodland_Slim";
	};
	class VES_BDU_SS_V_MulticamBlack_Slim: VES_BDU_SS_V_MulticamBlack
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_MulticamBlack_Slim";
	};
	class VES_BDU_SS_V_Multicam_Slim: VES_BDU_SS_V_Multicam
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_Multicam_Slim";
	};
	class VES_BDU_SS_V_DesertDPM_Slim: VES_BDU_SS_V_DesertDPM
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_DesertDPM_Slim";
	};
	class VES_BDU_SS_V_Tundra_Slim: VES_BDU_SS_V_Tundra
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_Tundra_Slim";
	};
	class VES_BDU_SS_V_Khaki_Slim: VES_BDU_SS_V_Khaki
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_SS_Khaki_Slim";
	};
	
	// Rolled Uniforms
	class VES_BDU_R_V_Evolved_Slim: VES_BDU_R_V_Evolved
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_Evolved_Slim";
	};
	class VES_BDU_R_V_Halo2_Slim: VES_BDU_R_V_Halo2
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_Halo2_Slim";
	};
	class VES_BDU_R_V_Halo2A_Slim: VES_BDU_R_V_Halo2A
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_Halo2A_Slim";
	};
	class VES_BDU_R_V_Reach_Slim: VES_BDU_R_V_Reach
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_Reach_Slim";
	};
	class VES_BDU_R_V_CookieDough_Slim: VES_BDU_R_V_CookieDough
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_CookieDough_Slim";
	};
	class VES_BDU_R_V_Splinter_Slim: VES_BDU_R_V_Splinter
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_Splinter_Slim";
	};
	class VES_BDU_R_V_Urban_Slim: VES_BDU_R_V_Urban
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_Urban_Slim";
	};
	class VES_BDU_R_V_UrbanBlue_Slim: VES_BDU_R_V_UrbanBlue
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_UrbanBlue_Slim";
	};
	class VES_BDU_R_V_TTsKODES_Slim: VES_BDU_R_V_TTsKODES
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_TTsKODES_Slim";
	};
	class VES_BDU_R_V_TTsKOWDL_Slim: VES_BDU_R_V_TTsKOWDL
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_TTsKOWDL_Slim";
	};
	class VES_BDU_R_V_Splotch_Slim: VES_BDU_R_V_Splotch
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_Splotch_Slim";
	};
	class VES_BDU_R_V_Smock_Slim: VES_BDU_R_V_Smock
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_Smock_Slim";
	};
	class VES_BDU_R_V_SemiArid_Slim: VES_BDU_R_V_SemiArid
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_SemiArid_Slim";
	};
	class VES_BDU_R_V_RussianVSR_Slim: VES_BDU_R_V_RussianVSR
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_RussianVSR_Slim";
	};
	class VES_BDU_R_V_MulticamWoodland_Slim: VES_BDU_R_V_MulticamWoodland
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_MulticamWoodland_Slim";
	};
	class VES_BDU_R_V_MulticamBlack_Slim: VES_BDU_R_V_MulticamBlack
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_MulticamBlack_Slim";
	};
	class VES_BDU_R_V_Multicam_Slim: VES_BDU_R_V_Multicam
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_Multicam_Slim";
	};
	class VES_BDU_R_V_DesertDPM_Slim: VES_BDU_R_V_DesertDPM
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_DesertDPM_Slim";
	};
	class VES_BDU_R_V_Tundra_Slim: VES_BDU_R_V_Tundra
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_Tundra_Slim";
	};
	class VES_BDU_R_V_Khaki_Slim: VES_BDU_R_V_Khaki
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_BDU_R_Khaki_Slim";
	};
	
	// Military Police Uniforms
	class VES_MPU_V_Evolved_Slim: VES_MPU_V_Evolved
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_MPU_Evolved_Slim";
	};
	class VES_MPU_V_Reach_Slim: VES_MPU_V_Reach
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_MPU_Reach_Slim";
	};
	class VES_MPU_V_Khaki_Slim: VES_MPU_V_Khaki
	{
		hiddenSelections[]={"camo","camo2","insignia","clan","A_BaseLeg"/*,"A_SlimLeg"*/};
		uniformclass="VES_MPU_Khaki_Slim";
	};
	
	// Dress Uniforms
	/*class VES_DU_V_White: VES_BDU_R_V_Evolved
	{
		model="\OPTRE_UNSC_Units\Army\officer";
		hiddenSelections[]={"camo1","insignia","clan"};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_DU_White_CO","V_FZ_Armor\Data\Uniforms\V_DU_White_CO"};
		// hiddenSelectionsMaterials[]={"V_FZ_Armor\Data\Uniforms\Materials\V_DU.rvmat","V_FZ_Armor\Data\Uniforms\Materials\V_DU.rvmat"};
		uniformclass="VES_DU_White";
	};
	class VES_DU_V_Gray: VES_DU_V_White
	{
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Uniforms\V_DU_Gray_CO","V_FZ_Armor\Data\Uniforms\V_DU_Gray_CO"};
		uniformclass="VES_DU_Gray";
	};*/
	
	// Backpacks
	class Weapon_Bag_Base;
	class VES_M247T_Pack: Weapon_Bag_Base
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Vespade";
		displayName="UNSC Rucksack (M247T)";
		picture="\OPTRE_weapons\backpacks\icons\rucksack_black";
		model="\OPTRE_unsc_units\army\rucksack";
		hiddenSelections[]={"camo","camo2","B_Medic","B_Radio"};
		hiddenSelectionsMaterials[]={};
		hiddenSelectionsTextures[]={"optre_unsc_units\army\data\soft_backpack_co",""};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="VES_M247T_Turret";
			displayName="M247T Tripod Turret";
			dissasembleTo[]={};
		};
	};
	class VES_MQ49_Pack: Weapon_Bag_Base
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Vespade";
		displayName="ILCS Rucksack [MQ-49A]";
		picture="\OPTRE_weapons\backpacks\icons\rucksack_black";
		model="\OPTRE_weapons\backpacks\ODST_ruck";
		hiddenSelections[]={"camo1","biofoam"};
		hiddenSelectionsMaterials[]={};
		hiddenSelectionsTextures[]={"V_FZ_Armor\Data\Backpacks\V_ILCS_UAV_CO"};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="VES_MQ49_SD";
			displayName="MQ-49 Support Drone";
			dissasembleTo[]={};
		};
	};
	class VES_MQ49R_Pack: VES_MQ49_Pack
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Vespade";
		displayName="ILCS Rucksack [MQ-49R]";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="VES_MQ49_RD";
			displayName="MQ-49 Recon Drone";
			dissasembleTo[]={};
		};
	};
	class B_Respawn_TentDome_F;
	class VES_DomeTent_Pack: B_Respawn_TentDome_F
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Vespade";
		displayName="UNSC Rucksack (Dome Tent)";
		picture="\OPTRE_weapons\backpacks\icons\rucksack_black";
		model="\OPTRE_unsc_units\army\rucksack";
		hiddenSelections[]={"camo","camo2","B_Medic","B_Radio"};
		hiddenSelectionsMaterials[]={};
		hiddenSelectionsTextures[]={"optre_unsc_units\army\data\soft_backpack_co",""};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="VES_Tent_Dome";
			displayName="Standard Issue UNSC Dome Tent";
			dissasembleTo[]={};
		};
	};
	class B_Respawn_TentA_F;
	class VES_Tent_Pack: B_Respawn_TentA_F
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Vespade";
		displayName="UNSC Rucksack (Tent)";
		picture="\OPTRE_weapons\backpacks\icons\rucksack_black";
		model="\OPTRE_unsc_units\army\rucksack";
		hiddenSelections[]={"camo","camo2","B_Medic","B_Radio"};
		hiddenSelectionsMaterials[]={};
		hiddenSelectionsTextures[]={"optre_unsc_units\army\data\soft_backpack_co",""};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="VES_Tent";
			displayName="Standard Issue UNSC Tent";
			dissasembleTo[]={};
		};
	};
	class B_Respawn_Sleeping_bag_F;
	class VES_Bag_Pack: B_Respawn_Sleeping_bag_F
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Vespade";
		displayName="UNSC Rucksack (Sleeping Bag)";
		picture="\OPTRE_weapons\backpacks\icons\rucksack_black";
		model="\OPTRE_unsc_units\army\rucksack";
		hiddenSelections[]={"camo","camo2","B_Medic","B_Radio"};
		hiddenSelectionsMaterials[]={};
		hiddenSelectionsTextures[]={"optre_unsc_units\army\data\soft_backpack_co",""};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="VES_SleepingBag";
			displayName="Standard Issue UNSC Sleeping Bag";
			dissasembleTo[]={};
		};
	};
	
	// Tents & Sleepingbags
	class Respawn_TentDome_F;
	class VES_Tent_Dome: Respawn_TentDome_F
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Vespade";
		displayName="Standard Issue UNSC Dome Tent";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="UNSC Campsite";
			dissasembleTo[]={"VES_DomeTent_Pack"};
		};
	};
	class Respawn_TentA_F;
	class VES_Tent: Respawn_TentA_F
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Vespade";
		displayName="Standard Issue UNSC Tent";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="UNSC Campsite";
			dissasembleTo[]={"VES_Tent_Pack"};
		};
	};
	class Respawn_Sleeping_bag_F;
	class VES_SleepingBag: Respawn_Sleeping_bag_F
	{
		dlc="FZ";
		scope=2;
		scopeCurator=2;
		author="Vespade";
		displayName="Standard Issue UNSC Sleepingbag";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="UNSC Campsite";
			dissasembleTo[]={"VES_Bag_Pack"};
		};
	};
};

// HUD Technicals
class CfgOptreHudSchemes
{
	class Glasses
	{
		class MainDialogs
		{
			// Balaclava w/ Goggles
			VES_HUD_Balaclava_G_Black="OPTRE_MarrineGlasses_orange";
			VES_HUD_Balaclava_G_Gray="OPTRE_MarrineGlasses_orange";
			VES_HUD_Balaclava_G_White="OPTRE_MarrineGlasses_orange";
			VES_HUD_Balaclava_G_Beast="OPTRE_MarrineGlasses_orange";
			VES_HUD_Balaclava_G_Joker="OPTRE_MarrineGlasses_orange";
			VES_HUD_Balaclava_G_Punisher="OPTRE_MarrineGlasses_orange";
			
			// Balaclava
			VES_HUD_Balaclava_Black="OPTRE_MarrineGlasses_white";
			VES_HUD_Balaclava_Gray="OPTRE_MarrineGlasses_white";
			VES_HUD_Balaclava_White="OPTRE_MarrineGlasses_white";
			VES_HUD_Balaclava_Beast="OPTRE_MarrineGlasses_white";
			VES_HUD_Balaclava_Joker="OPTRE_MarrineGlasses_white";
			VES_HUD_Balaclava_Punisher="OPTRE_MarrineGlasses_white";
			
			// Aviators
			VES_HUD_RayBans="OPTRE_MarrineGlasses_white";
			VES_HUD_RayBans_Bandana="OPTRE_MarrineGlasses_white";
			VES_HUD_RayBans_Bandana_Green="OPTRE_MarrineGlasses_white";
			VES_HUD_RayBans_Bandana_Tan="OPTRE_MarrineGlasses_white";
			
			// APRs
			VES_HUD_APR_01="OPTRE_MarrineGlasses_white";
			VES_HUD_APR_02="OPTRE_MarrineGlasses_white";
			VES_HUD_APR_03="OPTRE_MarrineGlasses_white";
		};
	};
};