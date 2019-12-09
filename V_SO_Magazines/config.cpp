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
			"V_FZ_Core"
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
	#include "cfg\ammo\127x40.hpp"
	#include "cfg\ammo\145x114.hpp"
	#include "cfg\ammo\5x23.hpp"
	#include "cfg\ammo\40.hpp"
};

class CfgMagazines
{
	#include "cfg\magazines\762x51.hpp"
	#include "cfg\magazines\95x40.hpp"
	#include "cfg\magazines\127x40.hpp"
	#include "cfg\magazines\145x114.hpp"
	#include "cfg\magazines\5x23.hpp"
	#include "cfg\magazines\40.hpp"
	#include "cfg\magazines\50x137.hpp"
};

class CfgMagazineWells
{
	class 3UGL_40x36
	{
		BI_Magazines[] = {"3Rnd_HE_Grenade_shell","3Rnd_UGL_FlareBlue_F","3Rnd_UGL_FlareWhite_F","3Rnd_UGL_FlareGreen_F","3Rnd_UGL_FlareRed_F","3Rnd_UGL_FlareYellow_F","3Rnd_UGL_FlareCIR_F","3Rnd_Smoke_Grenade_shell","3Rnd_SmokeRed_Grenade_shell","3Rnd_SmokeGreen_Grenade_shell","3Rnd_SmokeYellow_Grenade_shell","3Rnd_SmokePurple_Grenade_shell","3Rnd_SmokeBlue_Grenade_shell","3Rnd_SmokeOrange_Grenade_shell"};
	};
	class UGL_40x36
	{
		ace_huntir[] = {"ACE_HuntIR_M203"};BI_Magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareBlue_F","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
	};
};