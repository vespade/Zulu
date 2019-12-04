//       _____         __                   ____       __    
//      / __(_)______ / /____ ___ ___ _    /_  / __ __/ /_ __
//     / _// / __/ -_) __/ -_) _ `/  ' \    / /_/ // / / // /
//    /_/ /_/_/  \__/\__/\__/\_,_/_/_/_/   /___/\_,_/_/\_,_/ 
//
//    Do NOT modify or add this PBO to any other pack. It belongs here and here only.

class CfgPatches
{
	class V_FZ_Core
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
		requiredVersion=1.0;
		requiredAddons[]={"OPTRE_Core"};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class V_FZ_Core
		{
			list[]={"V_FZ_Core"};
		};
	};
};

class CfgEditorCategories
{
	class V_FZ_EdCat_Zulu
	{
		displayName="UNSCDF (Fireteam Zulu)";
	};
	class V_FZ_EdCat_SFP
	{
		displayName="Insurrectionist (SF Phoenix)";
	};
	class V_FZ_EdCat_URF
	{
		displayName="Insurrectionist (URF)";
	};
};

class CfgEditorSubcategories
{
	class V_FZ_EdSubCat_Men_Marine
	{
		displayName="Men (Marines)";
	};
	class V_FZ_EdSubCat_Men_Marine_W
	{
		displayName="Men (Marines Woodland)";
	};
	class V_FZ_EdSubCat_Men_Marine_D
	{
		displayName="Men (Marines Desert)";
	};
	class V_FZ_EdSubCat_Men_Marine_S
	{
		displayName="Men (Marines Snow)";
	};
	class V_FZ_EdSubCat_Men_Marine_C
	{
		displayName="Men (Marines Evolved)";
	};
	class V_FZ_EdSubCat_Men_Marine_U
	{
		displayName="Men (Marines Urban)";
	};
	class V_FZ_EdSubCat_Men_Marine_ODST
	{
		displayName="Men (Marines Special Forces)";
	};
	
	class V_FZ_EdSubCat_Men_Army
	{
		displayName="Men (Army)";
	};
	class V_FZ_EdSubCat_Men_Army_MP
	{
		displayName="Men (Army Military Police)";
	};
	class V_FZ_EdSubCat_Men_Army_AA
	{
		displayName="Men (Army Air Assault)";
	};
	
	class V_FZ_EdSubCat_Rotary
	{
		displayName="Rotary";
	};
};

class CfgFunctions
{
    class V_FZ
	{
		class WarthogLights
		{
			file = "V_FZ_Core\init";
			class WarthogLightsAdd{};
			class WarthogLightsOn{};
			class WarthogLightsOff{};
		};
		class PelicanAddMG
		{
			file = "V_FZ_Core\init";
			class PelicanAddMG{};
		};
		class ScorpionAddMG
		{
			file = "V_FZ_Core\init";
			class ScorpionAddMG{};
		};
		class FalconAddMGs
		{
			file = "V_FZ_Core\init";
			class FalconAddMGs{};
		};
		class HoneybadgerRemoveTurret
		{
			file = "V_FZ_Core\init";
			class HoneybadgerRemoveTurret{};
		};
		class PelicanMagLiftSystem
		{
			file = "V_FZ_Core\init";
			class PelicanLoadValidate{};
			class PelicanUnLoadValidate{};
			class SlipspaceRuptureDetected{};
        };
		class PelicanFncs
		{
			file = "V_FZ_Core\init";
			class ThrusterEngage{};
			class ThrusterDisengage{};
			class ThrusterAnimate{};
			class AirbrakeEngage{};
		};
		class MGDetach
		{
			file = "V_FZ_Core\init";
			class MGDetach{};
		};
		class LifeboatLaunch
		{
			file = "V_FZ_Core\init";
			class LifeboatLaunch{};
		};
		class AutomaticSlimLeg
		{
			file = "V_FZ_Core\init";
			class AutomaticSlimLeg{};
		};
	};
};

class Extended_PostInit_EventHandlers
{
	V_FZ_fnc_AutomaticSlimLeg = "[] spawn V_FZ_fnc_AutomaticSlimLeg";
};

class CfgSounds
{
	class VES_BombArmed
	{
		sound[]={"V_FZ_Core\sounds\zulu_armed.ogg",1,1};
		titles[]={};
	};
	class VES_BombDisarmed: VES_BombArmed
	{
		sound[]={"V_FZ_Core\sounds\zulu_disarmed.ogg",1,1};
	};
};

class CfgNonAIVehicles
{
	class CamCurator
	{
		scope=2;
		model="\A3\Structures_F_Heli\VR\Helpers\Sign_sphere25cm_F.p3d";
		simulation="CamCurator";
		radius=125;
		maxHAL=100;
		acceleration=25;
		canBeShot=1;
		moves="CfgMovesBird";
		flySound[]={"\A3\sounds_f\dummysound",0.000562341,1,1};
		hiddenSelections[]={"camo_1"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(0.7,0.7,0.7,1.0,co)"};
	};
};