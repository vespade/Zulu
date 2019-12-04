//       _____         __                   ____       __    
//      / __(_)______ / /____ ___ ___ _    /_  / __ __/ /_ __
//     / _// / __/ -_) __/ -_) _ `/  ' \    / /_/ // / / // /
//    /_/ /_/_/  \__/\__/\__/\_,_/_/_/_/   /___/\_,_/_/\_,_/ 
//
//    Do NOT modify or add this PBO to any other pack. It belongs here and here only.

class CfgPatches
{
	class V_FZ_Misc
	{
		author="Fireteam Zulu";
		name="Fireteam Zulu's A2D: Fireteam Zulu";
		url="https://discord.gg/fa7Cguk";
		// Added Items
		units[]=
		{
			"VES_Flag_UNSC",
			"VES_Flag_UNSCAF",
			"VES_Flag_UNSCMC"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		// Requirements
		requiredVersion=1.0;
		requiredAddons[]={"V_FZ_Core"};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class V_FZ_Misc
		{
			list[]={"V_FZ_Misc"};
		};
	};
};

class CfgWeapons
{
	class ACE_SpraypaintBlack;
	class ACE_SpraypaintRed;
	class VES_TacSpraycan: ACE_SpraypaintBlack
	{
		dlc="FZ";
		author="Fireteam Zulu";
		displayName="Tactical Spraycan";
	};
	class VES_TagSpraycan: ACE_SpraypaintBlack
	{
		dlc="FZ";
		author="Fireteam Zulu";
		displayName="Artist's Spraycan";
	};
};

class ACE_Tags
{
	// Tactical Spraycan
	class CLEAR
	{
        displayName="Clear";
        requiredItem="VES_TacSpraycan";
        textures[]={"V_FZ_Misc\data\TAGs\V_CLR_TAG.paa"};
        icon="V_FZ_Misc\data\TAGs\V_CLR_TAG.paa";
    };
	class CAUTION
	{
        displayName="Caution";
        requiredItem="VES_TacSpraycan";
        textures[]={"V_FZ_Misc\data\TAGs\V_CATN_TAG.paa"};
        icon="V_FZ_Misc\data\TAGs\V_CATN_TAG.paa";
    };
	class MINES
	{
        displayName="Mines";
        requiredItem="VES_TacSpraycan";
        textures[]={"V_FZ_Misc\data\TAGs\V_MINE_TAG.paa"};
        icon="V_FZ_Misc\data\TAGs\V_MINE_TAG.paa";
    };
	class ODST
	{
        displayName="ODST";
        requiredItem="VES_TacSpraycan";
        textures[]={"V_FZ_Misc\data\TAGs\V_ODST_TAG.paa"};
        icon="V_FZ_Misc\data\TAGs\V_ODST_TAG.paa";
    };
    class UNSC
	{
        displayName="UNSC Logo";
        requiredItem="VES_TacSpraycan";
        textures[]={"V_FZ_Misc\data\TAGs\V_UNSC_TAG.paa"};
        icon="V_FZ_Misc\data\TAGs\V_UNSC_TAG.paa";
    };
	class ONI
	{
        displayName="ONI";
        requiredItem="VES_TacSpraycan";
        textures[]={"V_FZ_Misc\data\TAGs\V_ONI_TAG.paa"};
        icon="V_FZ_Misc\data\TAGs\V_ONI_TAG.paa";
    };
	
	// Artist's Spraycan
	class INS
	{
        displayName="Insurrection";
        requiredItem="VES_TagSpraycan";
        textures[]={"V_FZ_Misc\data\TAGs\V_INS_TAG.paa"};
        icon="V_FZ_Misc\data\TAGs\V_INS_TAG.paa";
    };
	class SFP
	{
        displayName="SF Phoenix";
        requiredItem="VES_TagSpraycan";
        textures[]={"V_FZ_Misc\data\TAGs\V_SFP_TAG.paa"};
        icon="V_FZ_Misc\data\TAGs\V_SFP_TAG.paa";
    };
	class SLAYER
	{
		displayName="Slayer";
		requiredItem="VES_TagSpraycan";
		textures[]={"V_FZ_Misc\data\TAGs\V_SLYR_TAG.paa"};
        icon="V_FZ_Misc\data\TAGs\V_SLYR_TAG.paa";
	};
};

class CfgVehicles
{
	class FlagCarrier_Asym;
	class VES_Flag_UNSC: FlagCarrier_Asym
	{
		dlc="Zulu";
		author="Fireteam Zulu";
		scope=2;
		scopeCurator=2;
		displayName="Flag [UNSC]";
		editorCategory="V_FZ_EdCat_Zulu";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\V_FZ_Misc\data\Flags\V_Flag_UNSC_CO.paa""";
		};
	};
	class VES_Flag_UNSCMC: VES_Flag_UNSC
	{
		displayName="Flag [UNSCMC]";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\V_FZ_Misc\data\Flags\V_Flag_UNMC_CO.paa""";
		};
	};
	class VES_Flag_UNSCAF: VES_Flag_UNSC
	{
		displayName="Flag [UNSCAF]";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\V_FZ_Misc\data\Flags\V_Flag_UNAF_CO.paa""";
		};
	};
	
	class FloatingStructure_F;
	class VES_Light: FloatingStructure_F
	{
		dlc="Zulu";
		author="Fireteam Zulu";
		displayName="Light (Off)";
		scope=2;
		scopeCurator=2;
		model="\A3\Structures_F_Heli\Items\Airport\PortableHelipadLight_01_F.p3d";
		hiddenSelections[]={"Camo_1","Light_1_hide"};
		hiddenSelectionsMaterials[]={"\A3\Structures_F_Heli\Items\Airport\Data\PortableHelipadLight_01.rvmat","\A3\Data_f\Lights\Car_Beacon_Blue_emit.rvmat"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(1,1,1,0.5,co)","#(argb,8,8,3)color(1,1,1,0.5,co)"};
	};
};