//	   _____         __                   ____       __    
//	  / __(_)______ / /____ ___ ___ _    /_  / __ __/ /_ __
//	 / _// / __/ -_) __/ -_) _ `/  ' \    / /_/ // / / // /
//	/_/ /_/_/  \__/\__/\__/\_,_/_/_/_/   /___/\_,_/_/\_,_/ 
//
//	That being said, please feel free to use any of the below as a basis for your own mod!

class CfgPatches
{
	class V_SO_Magazines
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
			"V_SO_Core"
		};
	};
};

class CfgAddons
{
	class PreloadAddons
	{
		class V_SO_Magazines
		{
			list[]={"V_SO_Magazines"};
		};
	};
};

class CfgAmmo
{
	#include "cfg\ammo\762x51.hpp"
	#include "cfg\ammo\95x40.hpp"
	#include "Cfg\Ammo\95x60.hpp"
	#include "cfg\ammo\127x40.hpp"
	#include "cfg\ammo\145x114.hpp"
	#include "cfg\ammo\5x23.hpp"
	#include "cfg\ammo\212.hpp"
	#include "cfg\ammo\40.hpp"
	#include "cfg\ammo\86x70.hpp"
	#include "cfg\ammo\50x137.hpp"
	#include "cfg\ammo\charges.hpp"
};

class CfgMagazines
{
	#include "cfg\magazines\762x51.hpp"
	#include "cfg\magazines\95x40.hpp"
	#include "Cfg\magazines\95x60.hpp"
	#include "cfg\magazines\127x40.hpp"
	#include "cfg\magazines\145x114.hpp"
	#include "cfg\magazines\5x23.hpp"
	#include "cfg\magazines\50x137.hpp"
	#include "cfg\magazines\212.hpp"
	#include "cfg\magazines\40.hpp"
	#include "cfg\magazines\86x70.hpp"
	#include "cfg\Magazines\charges.hpp"
};
class Cfgvehicles
{
	#include "cfg\vehicles\charges.hpp"
};