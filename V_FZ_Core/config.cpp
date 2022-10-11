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
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=1.0;
		requiredAddons[]={};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class V_FZ_Core
		{
			list[]=
			{
				"V_FZ_Core"
			};
		};
	};
};
class CfgEditorCategories
{
	class V_FZ_EdCat_Zulu
	{
		displayName="[Zulu] UNSCDF";
	};
	class V_FZ_EdCat_SFP
	{
		displayName="[Zulu] Strike Force Phoenix";
	};
	class V_FZ_EdCat_URF
	{
		displayName="[Zulu] United Rebel Front";
	};
	class V_FZ_EdCat_ONI
	{
		displayName="[Zulu] Office of Naval Intelligence";
	};
	class V_FZ_EdCat_CIV
	{
		displayName="[Zulu] Civilian (UEG)";
	};
    class V_FZ_EdCat_CPD
    {
        displayName="[Zulu] Colonial Police Department";
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
	class V_FZ_EdSubCat_Men_Police
	{
		displayName="Men (Colonial Police)";
	};
	class V_FZ_EdSubCat_Men_SWAT
	{
		displayName="Men (SWAT)";
	};
	class V_FZ_EdSubCat_Men_Agent
	{
		displayName="Men (Agents)";
	};
	class V_FZ_EdSubCat_Rotary
	{
		displayName="Rotary";
	};
    class V_FZ_EdSubCat_Drone
	{
		displayName="Drones";
	};
};
class CfgFunctions
{
	class V_FZ
	{
		class WarthogLights
		{
			file="V_FZ_Core\init";
			class WarthogLightsAdd{};
			class WarthogLightsOn{};
			class WarthogLightsOff{};
		};
		class PelicanAddMG
		{
			file="V_FZ_Core\init";
			class PelicanAddMG{};
		};
		class ScorpionAddMG
		{
			file="V_FZ_Core\init";
			class ScorpionAddMG{};
		};
		class FalconAddMGs
		{
			file="V_FZ_Core\init";
			class FalconAddMGs{};
		};
		class HoneybadgerRemoveTurret
		{
			file="V_FZ_Core\init";
			class HoneybadgerRemoveTurret{};
		};
		class PelicanMagLiftSystem
		{
			file="V_FZ_Core\init";
			class PelicanLoadValidate{};
			class PelicanUnLoadValidate{};
			class SlipspaceRuptureDetected{};
		};
		class PelicanFncs
		{
			file="V_FZ_Core\init";
			class ThrusterEngage{};
			class ThrusterDisengage{};
			class ThrusterAnimate{};
			class AirbrakeEngage{};
		};
        class ThrustersAfterburnersAirbrakesFncs
		{
			file="V_FZ_Core\init";
			class Thruster400Engage{};
			class Thruster400Disengage{};
			class FullAirbrakeEngage{};
            class HalfAirbrakeEngage{};
            class FullAirbrakeEngageFast{};
            class HalfAirbrakeEngageFast{};
            class Afterburners600Engage{};
			class Afterburners600Disengage{};
            class Afterburners900Engage{};
			class Afterburners900Disengage{};
            class ThrusterDeAnimate{};
		};
		class MGDetach
		{
			file="V_FZ_Core\init";
			class MGDetach{};
		};
		class LifeboatLaunch
		{
			file="V_FZ_Core\init";
			class LifeboatLaunch{};
		};
		class AutomaticSlimLeg
		{
			file="V_FZ_Core\init";
			class AutomaticSlimLeg{};
		};
	};
};
class Extended_PostInit_EventHandlers
{
	V_FZ_fnc_AutomaticSlimLeg="[] spawn V_FZ_fnc_AutomaticSlimLeg";
};
class CfgSounds
{
	class VES_BombArmed
	{
		sound[]=
		{
			"V_FZ_Core\sounds\v_fz_armed.ogg",
			5, 1.0, 250
		};
		titles[]={};
	};
	class VES_BombDisarmed: VES_BombArmed
	{
		sound[]=
		{
			"V_FZ_Core\sounds\v_fz_disarmed.ogg",
			5, 1.0, 250
		};
	};
	class VES_Siren
	{
		sound[]=
		{
			"V_FZ_Core\sounds\v_fz_cpd_siren.ogg",
			1, 1.0, 250
		};
		titles[]={};
	};
};
class CfgNonAIVehicles
{
	class CamCurator
	{
		scope=2;
		model="\A3\Structures_F_Heli\VR\Helpers\Sign_sphere25cm_F";
		simulation="CamCurator";
		radius=125;
		maxHAL=100;
		acceleration=25;
		canBeShot=1;
		moves="CfgMovesBird";
		flySound[]=
		{
			"\A3\sounds_f\dummysound",
			0.00056234101,
			1,
			1
		};
		hiddenSelections[]=
		{
			"camo_1"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.7,0.7,0.7,1.0,co)"
		};
	};
};
