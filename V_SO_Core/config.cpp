//	   _____         __                   ____       __    
//	  / __(_)______ / /____ ___ ___ _    /_  / __ __/ /_ __
//	 / _// / __/ -_) __/ -_) _ `/  ' \    / /_/ // / / // /
//	/_/ /_/_/  \__/\__/\__/\_,_/_/_/_/   /___/\_,_/_/\_,_/ 
//
//	That being said, please feel free to use any of the below as a basis for your own mod!

class CfgPatches
{
	class V_SO_Core
	{
		author="Fireteam Zulu";
		name="Fireteam Zulu: Specialized Ordanance";
		url="https://discord.gg/fa7Cguk";
		// Added Items
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		// Requirements
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"V_SO_Weapons"
		};
	};
};

class CfgWeapons
{
	#include "cfg\Thermals.hpp"
	#include "cfg\Scopes.hpp"
};
class CfgVehicles
{
	#include "cfg\Charges.hpp"
};

class CfgAddons
{
	class PreloadAddons
	{
		class V_SO_Core
		{
			list[]={"V_SO_Core"};
		};
	};
};

class Extended_PreInit_EventHandlers
{
	class Humbler
	{
		init="call compile preprocessFileLineNumbers '\V_SO_Core\scripts\XEH_preInit.sqf'; ";
	};
};

class Extended_PreStart_EventHandlers
{
	class Humbler
	{
		init="call compile preprocessFileLineNumbers '\V_SO_Core\scripts\XEH_preStart.sqf'; ";
	};
};

class Extended_Respawn_EventHandlers
{
	class CAManBase
	{
		class Humbler
		{
			respawn="_this call CSW_fnc_TaserOnRespawn";
		};
		class Adren
		{
			respawn="[_this, _this] remoteExecCall [""ace_medical_fnc_treatmentAdvanced_fullHealLocal"", _this, false];";
		};
	};
};

class Extended_Hit_EventHandlers
{
	class CAManBase
	{
		Humbler="_this call CSW_fnc_TaserOnHit;";
		Adren="[_this, _this] remoteExecCall [""ace_medical_fnc_treatmentAdvanced_fullHealLocal"", _this, false];";
	};
};