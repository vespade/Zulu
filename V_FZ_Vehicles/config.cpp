//       _____         __                   ____       __    
//      / __(_)______ / /____ ___ ___ _    /_  / __ __/ /_ __
//     / _// / __/ -_) __/ -_) _ `/  ' \    / /_/ // / / // /
//    /_/ /_/_/  \__/\__/\__/\_,_/_/_/_/   /___/\_,_/_/\_,_/ 
//
//    Do NOT modify or add this PBO to any other pack. It belongs here and here only.

class CfgPatches
{
	class V_FZ_Vehicles
	{
		author="Fireteam Zulu";
		name="A2D: Fireteam Zulu";
		url="https://discord.gg/fa7Cguk";
		// Added Items
		units[]=
		{
			// Cars
			"VES_M12",
			"VES_M12_URF",
			"VES_M12_SFP",
			"VES_M12_CPD",
			
			"VES_M12_LRV",
			"VES_M12_LRV_URF",
			"VES_M12_LRV_SFP",
			"VES_M12_LRV_CPD",
			
			"VES_M12G1_LRV",
			"VES_M12G1_LRV_SFP",
			
			"VES_M12A1_LRV",
			"VES_M12A1_LRV_URF",
			"VES_M12A1_LRV_SFP",
			"VES_M12A1_LRV_CPD",
			
			"VES_M813_TT",
			"VES_M813_TT_URF",
			"VES_M813_TT_SFP",
			"VES_M813_TT_CPD",
			
			"VES_M12R_AA",
			"VES_M12R_AA_URF",
			"VES_M12R_AA_SFP",
			
			"VES_M12_APC_MED",
			"VES_M12_APC_MED_SFP",
			
			"VES_M12_APC",
			"VES_M12_APC_URF",
			"VES_M12_APC_SFP",
			"VES_M12_APC_CPD",
			
			// Trucks
			"VES_HDV134_Resupply",
			"VES_HDV134_TT",
			"VES_HDV134_TT_C",
			"VES_HDV134_Fujikawa",
			"VES_HDV134_Tanker_C",
			"VES_HDV134_Maintenance",
			
			"VES_HDV134_TT_CPD",
			"VES_HDV134_TT_C_CPD",
			
			// Tanks
			"VES_M808B_MBT",
			
			// Falcons
			"VES_UH144_A",
			"VES_UH144_A_URF",
			"VES_UH144_A_SFP",
			"VES_UH144S_A",
			"VES_UH144S_A_URF",
			"VES_UH144S_A_SFP",
			"VES_UH144",
			"VES_UH144_URF",
			"VES_UH144_SFP",
			"VES_UH144S",
			"VES_UH144S_URF",
			"VES_UH144S_SFP",
			
			// Pelicans
			"VES_D77HTCI_A",
			"VES_D77HTCI",
			"VES_D77HTCIS",
			"VES_D77HTCIS_A",
			
			// Hornets
			"VES_AV14_Rockets",
			"VES_AV14",
			"VES_AV14_AIM",
			"VES_AV14_AGM",
			
			// Sparrowhawks
			"VES_AV22_Sparrowhawk",
			"VES_AV22A_Sparrowhawk",
			"VES_AV22B_Sparrowhawk",
			"VES_AV22C_Sparrowhawk",
			
			"VES_AV22_Sparrowhawk_CPD",
			"VES_AV22A_Sparrowhawk_CPD",
			"VES_AV22B_Sparrowhawk_CPD",
			"VES_AV22C_Sparrowhawk_CPD",
			
			// APC
			"VES_IFV76",
			"VES_IFV76_M",
			"VES_IFV76_A",
			
			"VES_IFV76_CPD",
			"VES_IFV76_A_CPD",
			
            "VES_M413_MGS",
            "VES_M412_IFV",
			
			// Jets
			"VES_VAF19",
			"VES_Lifeboat",
			"VES_Lifeboat_Wreck",
			
			// UAVs
			"VES_MQ49_SD",
			"VES_MQ49_RD",
			"VES_MQ221",
			"VES_MQ221_URF",
			"VES_MQ221_CPD"
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
		class V_FZ_Vehicles
		{
			list[]={"V_FZ_Vehicles"};
		};
	};
};

#define pack_xx(a,b) class _xx_##a {backpack=a; count=b;}

class cfgVehicles
{
	// Unarmed Warthogs
	class OPTRE_M12_FAV;
	class VES_M12: OPTRE_M12_FAV
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="M12 FAV Warthog (Unarmed)";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		//fuelConsumptionRate=0.1;
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]={{-1.35, -.6, -1.1}};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=10500;
		brakeDistance=4;
		weapons[]={"TruckHorn3"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_WarthogCamos.hpp"
	};
	class VES_M12_URF: VES_M12
	{
		dlc="Zulu";
		author="Vespade";
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		#include "cfg\FZ_C_WarthogCamos.hpp"
	};
	class VES_M12_SFP: VES_M12
	{
		dlc="Zulu";
		author="Vespade";
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
		class EventHandlers;
		class UserActions;
	};
	class VES_M12_CPD: VES_M12_SFP
	{
		dlc="Zulu";
		author="Vespade";
		crew="VES_Rifleman_MA5B_CPD";
		editorCategory="V_FZ_EdCat_CPD";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\Civilian\V_M12_CPD_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A_CO"
		};
		#include "cfg\FZ_WarthogActions_CPD.hpp"
	};
	
	// Machinegun Warthogs
	class OPTRE_M12_LRV;
	class VES_M12_LRV: OPTRE_M12_LRV
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="M12 LRV Warthog (M41 LAAG)";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		//fuelConsumptionRate=0.1;
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]={{-1.5, -.6, -1.1}};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=10500;
		brakeDistance=4;
		weapons[]={"TruckHorn3", "VES_HogJazz", "VES_HogRun"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_WarthogCamos.hpp"
	};
	class VES_M12_LRV_URF: VES_M12_LRV
	{
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		#include "cfg\FZ_C_WarthogCamos.hpp"
	};
	class VES_M12_LRV_SFP: VES_M12_LRV
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
		class EventHandlers;
		class UserActions;
	};
	class VES_M12_LRV_CPD: VES_M12_LRV_SFP
	{
		dlc="Zulu";
		author="Vespade";
		crew="VES_Rifleman_MA5B_CPD";
		editorCategory="V_FZ_EdCat_CPD";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\Civilian\V_M12_CPD_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A_CO"
		};
		#include "cfg\FZ_WarthogActions_CPD.hpp"
	};
	
	// Gauss Warthogs
	class OPTRE_M12G1_LRV;
	class VES_M12G1_LRV: OPTRE_M12G1_LRV
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="M12G1 LRV Warthog (M68 ALIM)";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		//fuelConsumptionRate=0.1;
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]={{-1.5, -.6, -1.1}};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=10500;
		brakeDistance=4;
		weapons[]={"TruckHorn3", "VES_HogJazz", "VES_HogRun"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_WarthogCamos.hpp"
	};
	class VES_M12G1_LRV_SFP: VES_M12G1_LRV
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
	};
	
	// Rocket Warthogs
	class OPTRE_M12A1_LRV;
	class VES_M12A1_LRV: OPTRE_M12A1_LRV
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="M12A1 LRV Warthog (ATGM)";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		//fuelConsumptionRate=0.1;
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]={{-1.5, -.6, -1.1}};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=10500;
		brakeDistance=4;
		weapons[]={"TruckHorn3", "VES_HogJazz", "VES_HogRun"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_B_WarthogCamos.hpp"
	};
	class VES_M12A1_LRV_URF: VES_M12A1_LRV
	{
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		#include "cfg\FZ_D_WarthogCamos.hpp"
	};
	class VES_M12A1_LRV_SFP: VES_M12A1_LRV
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A2_CO"
		};
		class EventHandlers;
		class UserActions;
	};
	class VES_M12A1_LRV_CPD: VES_M12A1_LRV_SFP
	{
		dlc="Zulu";
		author="Vespade";
		crew="VES_Rifleman_MA5B_CPD";
		editorCategory="V_FZ_EdCat_CPD";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\Civilian\V_M12_CPD_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A_CO"
		};
		#include "cfg\FZ_WarthogActions_CPD.hpp"
	};
	
	// Transport Warthogs
	class OPTRE_M813_TT;
	class VES_M813_TT: OPTRE_M813_TT
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="M813 TT Warthog";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		//fuelConsumptionRate=0.1;
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]={{-1.5, -.6, -1.1}};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=10500;
		brakeDistance=4;
		weapons[]={"TruckHorn3", "VES_HogJazz", "VES_HogRun"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_WarthogCamos.hpp"
	};
	class VES_M813_TT_URF: VES_M813_TT
	{
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		#include "cfg\FZ_C_WarthogCamos.hpp"
	};
	class VES_M813_TT_SFP: VES_M813_TT
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
		class EventHandlers;
		class UserActions;
	};
	class VES_M813_TT_CPD: VES_M813_TT_SFP
	{
		dlc="Zulu";
		author="Vespade";
		crew="VES_Rifleman_MA5B_CPD";
		editorCategory="V_FZ_EdCat_CPD";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\Civilian\V_M12_CPD_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A_CO"
		};
		#include "cfg\FZ_WarthogActions_CPD.hpp"
	};
	
	// AA Warthogs
	/*class OPTRE_M12R_AA;
	class VES_M12R_AA: OPTRE_M12R_AA
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="M12R LRV Warthog (M79 AA)";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		//fuelConsumptionRate=0.1;
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]={{-1.5, -.6, -1.1}};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=10500;
		brakeDistance=4;
		weapons[]={"TruckHorn3"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_E_WarthogCamos.hpp"
	};*/
	
	// APC Warthogs
	class OPTRE_M12_FAV_APC;
	class VES_M12_APC_Base: OPTRE_M12_FAV_APC
	{
		side=1;
		scope=1;
		scopeCurator=1;
		class EventHandlers;
		class UserActions;
	};
	class VES_M12_APC_MED: VES_M12_APC_Base
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="M12 APC Warthog (Medical)";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		//fuelConsumptionRate=0.1;
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]={{-1.5, -.6, -1.1}};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=10500;
		brakeDistance=4;
		weapons[]={"AmbulanceHorn", "TruckHorn3"};
		class TransportItems
		{
			#include "cfg\FZ_B_VehicleGear.hpp"
		};
		#include "cfg\FZ_B_WarthogCamos.hpp"
		class EventHandlers: EventHandlers
		{
			init = "0 = _this spawn V_FZ_fnc_WarthogLightsAdd";
		};
		class UserActions: UserActions
		{
			class LightbarOn
			{
				condition="(alive this) AND !(this getvariable [""VES_Warthog_LightbarStatus"", false]) AND (player in [driver this])";
				displayName="<t color='#FFBF00'>Turn on Lightbar";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca' size='2.5' />";
				onlyForPlayer=1;
				position="";
				radius=6;
				statement="0 = this spawn V_FZ_fnc_WarthogLightsOn";
			};
			class LightbarOff
			{
				condition="(alive this) AND (this getvariable ""VES_Warthog_LightbarStatus"") AND (player in [driver this])";
				displayName="<t color='#FFBF00'>Turn off Lightbar";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca' size='2.5' />";
				onlyForPlayer=1;
				position="";
				radius=6;
				statement="0 = this spawn V_FZ_fnc_WarthogLightsOff";
			};
		};
	};
	class VES_M12_APC_MED_SFP: VES_M12_APC_MED
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A2_CO"
		};
	};
	
	class VES_M12_APC: VES_M12_APC_Base
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="M12 APC Warthog";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		//fuelConsumptionRate=0.1;
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]={{-1.5, -.6, -1.1}};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=10500;
		brakeDistance=4;
		weapons[]={"TruckHorn3", "VES_HogJazz", "VES_HogRun"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_WarthogCamos.hpp"
	};
	class VES_M12_APC_URF: VES_M12_APC
	{
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		#include "cfg\FZ_C_WarthogCamos.hpp"
	};
	class VES_M12_APC_SFP: VES_M12_APC
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
		class EventHandlers;
		class UserActions;
	};
	class VES_M12_APC_CPD: VES_M12_APC_SFP
	{
		dlc="Zulu";
		author="Vespade";
		crew="VES_Rifleman_MA5B_CPD";
		editorCategory="V_FZ_EdCat_CPD";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\Civilian\V_M12_CPD_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A_CO"
		};
		#include "cfg\FZ_WarthogActions_CPD.hpp"
	};
	
	// APC ~ Hound? Think again.
	class B_APC_Wheeled_01_cannon_F;
	class VES_IFV76_A: B_APC_Wheeled_01_cannon_F
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		displayName="IFV-76 Honeybadger";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		armor=690;
		tf_hasLRradio=1;
		tf_isolatedAmount=.65;
		tf_range=10000;
		TFAR_hasIntercom=1;
		waterResistanceCoef=0.05;
		class EventHandlers;
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class AnimationSources;
		#include "cfg\FZ_A_HoneybadgerCamos.hpp"
	};
	
	class VES_IFV76: VES_IFV76_A
	{
		displayName="APC-76 Honeybadger";
		class Turrets{};
		class AnimationSources: AnimationSources
		{
			class HideTurret
			{
				animPeriod = 0.001;
				initPhase = "true";
				source = "user";
			};
		};
	};
	
	class VES_IFV76_A_CPD: VES_IFV76_A
	{
		crew="VES_Rifleman_MA5B_CPD";
		editorCategory="V_FZ_EdCat_CPD";
		weapons[]={"TruckHorn3", "VES_CPD_Horn", "VES_CPD_Yelp"};
		side=2;
		class TextureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Honeybadger\V_IFV76_CPD_CO.paa",
			"V_FZ_Vehicles\data\Honeybadger\V_IFV76_BLK_A_CO.paa",
			"V_FZ_Vehicles\data\Honeybadger\V_IFV76_BLK_T_CO.paa"
		};
	};
	class VES_IFV76_CPD: VES_IFV76_A_CPD
	{
		displayName="APC-76 Honeybadger";
		class Turrets{};
		class AnimationSources: AnimationSources
		{
			class HideTurret
			{
				animPeriod = 0.001;
				initPhase = "true";
				source = "user";
			};
		};
	};
	
	
	class VES_IFV76_M: VES_IFV76
	{
		displayName="APC-76 Medical Honeybadger";
		class TransportItems
		{
			#include "cfg\FZ_B_VehicleGear.hpp"
		};
		#include "cfg\FZ_B_HoneybadgerCamos.hpp"
	};
	
	// Bisons
    class OPTRE_M413_MGS_UNSC;
    class OPTRE_M412_IFV_UNSC;
    class VES_M413_MGS: OPTRE_M413_MGS_UNSC
	{
		dlc="Zulu";
		author="Vespade";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
        forceInGarage=1;
        tf_hasLRradio=1;
		tf_isolatedAmount=.65;
		tf_range=12000;
		TFAR_hasIntercom=1;
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_BisonCamos.hpp"
	};
    class VES_M412_IFV: OPTRE_M412_IFV_UNSC
	{
		dlc="Zulu";
		author="Vespade";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
        forceInGarage=1;
        tf_hasLRradio=1;
		tf_isolatedAmount=.65;
		tf_range=12000;
		TFAR_hasIntercom=1;
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_BisonCamos.hpp"
	};
	
	// Scorpions
	class OPTRE_M808B_UNSC;
	class VES_M808B_MBT: OPTRE_M808B_UNSC
	{
		dlc="Zulu";
		author="Vespade";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_ScorpionCamos.hpp"
	};
	
	// Trucks
	class O_Truck_03_ammo_F;
	class VES_HDV134_Resupply: O_Truck_03_ammo_F
	{
		dlc="Zulu";
		author="Vespade";
		displayName="HDV-134 Resupply Buffalo";
		side=1;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		hiddenSelections[]={"camo1","camo2","camo3","camo4"};
		class TransportItems
		{
			#include "cfg\FZ_C_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_BuffaloCamos.hpp"
	};
	class O_Truck_03_device_F;
	class VES_HDV134_Fujikawa: O_Truck_03_device_F
	{
		dlc="Zulu";
		author="Vespade";
		displayName="HDV-134 Shaw-Fujikawa Buffalo";
		side=1;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		// Land_Device_slingloadable_F
		hiddenSelections[]={"camo1","camo2","camo3","camo4","camo5"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_B_BuffaloCamos.hpp"
	};
	class O_Truck_03_fuel_F;
	class VES_HDV134_Tanker_C: O_Truck_03_fuel_F
	{
		dlc="Zulu";
		author="Mike Hartley";
		displayName="HDV-134 Tanker Buffalo";
		side=1;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		hiddenSelections[]={"camo1","camo2","camo3"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_C_BuffaloCamos.hpp"
	};
	class O_Truck_03_repair_F;
	class VES_HDV134_Maintenance: O_Truck_03_repair_F
	{
		dlc="Zulu";
		author="Vespade";
		displayName="HDV-134 Maintenance Buffalo";
		side=1;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		hiddenSelections[]={"camo1","camo2","camo3"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_E_BuffaloCamos.hpp"
	};
	class O_Truck_03_transport_F;
	class VES_HDV134_TT: O_Truck_03_transport_F
	{
		dlc="Zulu";
		author="Vespade";
		displayName="HDV-134 TT Buffalo";
		side=1;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		hiddenSelections[]={"camo1","camo2","camo3"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_BuffaloCamos.hpp"
	};
	
	class VES_HDV134_TT_CPD: VES_HDV134_TT
	{
		dlc="Zulu";
		author="Vespade";
		crew="VES_Rifleman_MA5B_CPD";
		editorCategory="V_FZ_EdCat_CPD";
		weapons[]={"TruckHorn3", "VES_CPD_Horn", "VES_CPD_Yelp"};
		side=2;
		class TextureSources{};
		hiddenSelectionsTextures[]=
		{
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CPD_CO.paa",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_A_CO.paa",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_S_CO.paa",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO.paa"
		};				
	};
	
	class O_Truck_03_covered_F;
	class VES_HDV134_TT_C: O_Truck_03_covered_F
	{
		dlc="Zulu";
		author="Vespade";
		displayName="HDV-134 TT Buffalo (Covered)";
		side=1;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		hiddenSelections[]={"camo1","camo2","camo3","camo4"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_D_BuffaloCamos.hpp"
	};
	
	class VES_HDV134_TT_C_CPD: VES_HDV134_TT_C
	{
		dlc="Zulu";
		author="Vespade";
		crew="VES_Rifleman_MA5B_CPD";
		editorCategory="V_FZ_EdCat_CPD";
		weapons[]={"TruckHorn3", "VES_CPD_Horn", "VES_CPD_Yelp"};
		side=2;
		class TextureSources{};
		hiddenSelectionsTextures[]=
		{
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CPD_CO.paa",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_A_CO.paa",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_S_CO.paa",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_C_CO.paa"
		};		
	};
	
	// UAV
	class B_UAV_01_F;
	class VES_UAV_Base: B_UAV_01_F
	{
		scope=1;
		scopeCurator=1;
		class Turrets;
	};
	class VES_UAV_Base1: VES_UAV_Base
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class VES_MQ49_SD: VES_UAV_Base1
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		displayName="MQ-49 Support Drone";
		editorCategory="V_FZ_EdCat_Zulu";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]={"OPTRE_48Rnd_5x23mm_Mag_tracer_yellow", "OPTRE_48Rnd_5x23mm_Mag_tracer_yellow", "Laserbatteries"};
				weapons[]={"VES_M7_I", "Laserdesignator_mounted"};
			};
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]={"VES_MQ49_Pack"};
		};
		hiddenSelectionsTextures[]={"V_FZ_Vehicles\Data\MQ49\V_MQ49_CO"};
	};
	class VES_MQ49_RD: VES_MQ49_SD
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		displayName="MQ-49 Recon Drone";
		class Turrets{};
		class assembleInfo: assembleInfo
		{
			dissasmbleTo[]={"VES_MQ49R_Pack"};
		};
	};
	// MQ221
	class B_T_UAV_03_dynamicLoadout_F;
	class VES_MQ221: B_T_UAV_03_dynamicLoadout_F
	{
		dlc="Zulu";
		author="Azzamean";
		displayName="MQ-221 Dragonfly";
		editorCategory="V_FZ_EdCat_Zulu";
		#include "cfg\FZ_A_DragonflyCamos.hpp"
	};
	class VES_MQ221_URF: VES_MQ221
	{
		dlc="Zulu";
		author="Azzamean";
		side=0;
		editorCategory="V_FZ_EdCat_URF";
		#include "cfg\FZ_B_DragonflyCamos.hpp"
	};
	class VES_MQ221_CPD: VES_MQ221
	{
		dlc="Zulu";
		author="Azzamean";
		side=2;
		editorCategory="V_FZ_EdCat_CPD";
		class TextureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Dragonfly\A_MQ221_CPD_CO",
			"V_FZ_Vehicles\data\Dragonfly\A_MQ221_CPD_A_CO"
		};
	};
	
	// Falcons
	
	class OPTRE_UNSC_falcon;
	class VES_UH144_A: OPTRE_UNSC_falcon
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="UH-144 Falcon (Armed)";
		editorCategory="V_FZ_EdCat_Zulu";
		editorSubcategory="V_FZ_EdSubCat_Rotary";
		crew="VES_Rifleman_MA5B_ODST";
		mainRotorSpeed=3;
		backRotorSpeed=3;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=12000;
		class TransportBackpacks
		{
			pack_xx(B_Parachute,8);
		};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_FalconCamos.hpp"
		class EventHandlers;
	};
	class VES_UH144_A_URF: VES_UH144_A
	{
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		#include "cfg\FZ_C_FalconCamos.hpp"
	};
	class VES_UH144_A_SFP: VES_UH144_A
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_A_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_T_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_SFP_S_CO"
		};
	};
	class VES_UH144S_A: VES_UH144_A
	{
		displayName="UH-144S Falcon (Armed)";
		class EventHandlers: EventHandlers
		{
			init = "0 = _this spawn V_FZ_fnc_FalconAddMGs";
		};
	};
	class VES_UH144S_A_SFP: VES_UH144S_A
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_A_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_T_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_SFP_S_CO"
		};
	};
	class OPTRE_UNSC_falcon_unarmed;
	class VES_UH144: OPTRE_UNSC_falcon_unarmed
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="UH-144 Falcon";
		editorCategory="V_FZ_EdCat_Zulu";
		editorSubcategory="V_FZ_EdSubCat_Rotary";
		crew="VES_Rifleman_MA5B_ODST";
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=12000;
		class TransportBackpacks
		{
			pack_xx(B_Parachute,8);
		};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_FalconCamos.hpp"
		#include "cfg\FZ_FalconActions.hpp"
		class EventHandlers;
	};
	class VES_UH144_URF: VES_UH144
	{
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		#include "cfg\FZ_C_FalconCamos.hpp"
	};
	class VES_UH144_SFP: VES_UH144
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_A_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_T_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_SFP_S_CO"
		};
	};
	class VES_UH144S: VES_UH144
	{
		displayName="UH-144S Falcon";
		class EventHandlers: EventHandlers
		{
			init = "0 = _this spawn V_FZ_fnc_FalconAddMGs";
		};
	};
	class VES_UH144S_SFP: VES_UH144S
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_A_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_T_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_SFP_S_CO"
		};
	};
	
	// Pelicans
	
	class OPTRE_Pelican_armed;
	class VES_D77HTCI_A: OPTRE_Pelican_armed
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="D77H-TCI/AV Pelican";
		editorCategory="V_FZ_EdCat_Zulu";
		editorSubcategory="V_FZ_EdSubCat_Rotary";
		crew="VES_Rifleman_MA5B_ODST";
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=18500;
		armor=350;
		canFloat=1;
		maxFordingDepth=5;
		visionMode[]={"Normal","NVG","Ti"};
		class TransportBackpacks
		{
			pack_xx(B_Parachute,16);
		};
		class TransportItems
		{
			#include "cfg\FZ_C_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_PelicanCamos.hpp"
		#include "cfg\FZ_PelicanActions.hpp"
		class EventHandlers;
	};
	class VES_D77HTCIS_A: VES_D77HTCI_A
	{
		displayName="D77H-TCI/AV Pelican (MG)";
		class EventHandlers: EventHandlers
		{
			init = "0 = _this spawn V_FZ_fnc_PelicanAddMG";
		};
	};
	class OPTRE_Pelican_unarmed;
	class VES_D77HTCI: OPTRE_Pelican_unarmed
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="D77H-TCI Pelican";
		editorCategory="V_FZ_EdCat_Zulu";
		editorSubcategory="V_FZ_EdSubCat_Rotary";
		crew="VES_Rifleman_MA5B_ODST";
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=18500;
		armor=350;
		canFloat=1;
		maxFordingDepth=5;
		visionMode[]={"Normal","NVG","Ti"};
		class TransportItems
		{
			#include "cfg\FZ_C_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_PelicanCamos.hpp"
		#include "cfg\FZ_PelicanActions.hpp"
		class EventHandlers;
	};
	class VES_D77HTCIS: VES_D77HTCI
	{
		displayName="D77H-TCI Pelican (MG)";
		class EventHandlers: EventHandlers
		{
			init = "0 = _this spawn V_FZ_fnc_PelicanAddMG";
		};
	};
	
	// Hornets
    class OPTRE_UNSC_hornet;
    class OPTRE_UNSC_hornet_CAS;
    class OPTRE_UNSC_hornet_CAP;
	class VES_AV14_Rockets: OPTRE_UNSC_hornet
	{
		dlc="Zulu";
		author="Skywalker";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-14 Hornet (Rockets)";
		editorCategory="V_FZ_EdCat_Zulu";
		editorSubcategory="V_FZ_EdSubCat_Rotary";
		crew="VES_Rifleman_MA5B_ODST";
		mainRotorSpeed=3;
		backRotorSpeed=3;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=12000;
		class TransportBackpacks
		{
			pack_xx(B_Parachute,2);
		};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
        #include "cfg\FZ_A_HornetCamos.hpp"
	};
    class VES_AV14: OPTRE_UNSC_hornet
	{
		dlc="Zulu";
		author="Skywalker";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-14 Hornet (Unarmed)";
		editorCategory="V_FZ_EdCat_Zulu";
		editorSubcategory="V_FZ_EdSubCat_Rotary";
		crew="VES_Rifleman_MA5B_ODST";
		mainRotorSpeed=3;
		backRotorSpeed=3;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=12000;
        weapons[]=
		{
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		class TransportBackpacks
		{
			pack_xx(B_Parachute,2);
		};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_HornetCamos.hpp"
	};
    class VES_AV14_AGM: OPTRE_UNSC_hornet_CAS
	{
		dlc="Zulu";
		author="Skywalker";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-14 Hornet (AGM)";
		editorCategory="V_FZ_EdCat_Zulu";
		editorSubcategory="V_FZ_EdSubCat_Rotary";
		crew="VES_Rifleman_MA5B_ODST";
		mainRotorSpeed=3;
		backRotorSpeed=3;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=12000;
		class TransportBackpacks
		{
			pack_xx(B_Parachute,2);
		};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_HornetCamos.hpp"
	};
    class VES_AV14_AIM: OPTRE_UNSC_hornet_CAP
	{
		dlc="Zulu";
		author="Skywalker";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="AV-14 Hornet (AIM)";
		editorCategory="V_FZ_EdCat_Zulu";
		editorSubcategory="V_FZ_EdSubCat_Rotary";
		crew="VES_Rifleman_MA5B_ODST";
		mainRotorSpeed=3;
		backRotorSpeed=3;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=12000;
		class TransportBackpacks
		{
			pack_xx(B_Parachute,2);
		};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_HornetCamos.hpp"
	};
	
	// Sparrowhawk
	class OPTRE_AV22_Sparrowhawk_Base;
    class VES_AV22_Sparrowhawk_Base: OPTRE_AV22_Sparrowhawk_Base
    {
        class Turrets;
        class MFD;
    };
    class VES_AV22_Sparrowhawk_Base_F: VES_AV22_Sparrowhawk_Base
    {
        dlc="Zulu";
		author="Vespade + DaveSkywalker";
		editorCategory="V_FZ_EdCat_Zulu";
        editorSubcategory="V_FZ_EdSubCat_Rotary";
		crew="VES_Rifleman_MA5B_ODST";
        tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=15000;
		class Turrets: Turrets
		{
            class CopilotTurret;
		};
		#include "cfg\FZ_SparrowhawkActions.hpp"
		class MFD;
    };
    class VES_AV22_Sparrowhawk: VES_AV22_Sparrowhawk_Base_F
	{
		displayName="AV-22V Sparrowhawk [GAU-23 / M230]";
		author="Vespade + DaveSkywalker";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
        class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=2;
			};
		};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
            "camo5",
			"camo6",
			"camo7",
            "camo8",
			"camo9",
            "camo10",
			"camo11",
			"camo12",
            "camo13",
			"attach_noseLaser",
			"attach_CannonHeavy",
			"attach_Pylons",
			"attach_Decal1",
			"attach_Decal2"
		};
		#include "cfg\FZ_A_SparrowhawkCamos.hpp"
		
		weapons[]=
		{
			"OPTRE_GUA23B",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"OPTRE_2000Rnd_20mm_HEIAP",
			"OPTRE_2000Rnd_20mm_HEIAP",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				weapons[]=
				{
					"OPTRE_M230",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_APFSDS",
					"Laserbatteries"
				};
			};
		};
	};
	class VES_AV22A_Sparrowhawk: VES_AV22_Sparrowhawk
	{
		displayName="AV-22V Sparrowhawk [M9109 / M6]";
		author="Vespade + DaveSkywalker";
		
		
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
            "camo5",
			"camo6",
			"camo7",
            "camo8",
			"camo9",
            "camo10",
			"camo11",
			"camo12",
            "camo13",
			"attach_noseCannon",
			"attach_CannonLight",
			"attach_Pylons",
			"attach_Decal1",
			"attach_Decal2"
		};
		
		weapons[]=
		{
			"OPTRE_M9109",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"OPTRE_2500Rnd_50mm_HE",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				weapons[]=
				{
					"VES_M6_Laser",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"OPTRE_SpLaser_Battery",
					"OPTRE_SpLaser_Battery",
					"OPTRE_SpLaser_Battery",
					"OPTRE_SpLaser_Battery",
					"OPTRE_SpLaser_Battery",
					"Laserbatteries"
				};
			};
		};
	};
	class VES_AV22B_Sparrowhawk: VES_AV22A_Sparrowhawk
	{
		displayName="AV-22V Sparrowhawk [GAU-23 / M6]";
		author="Vespade + DaveSkywalker";
		
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
            "camo5",
			"camo6",
			"camo7",
            "camo8",
			"camo9",
            "camo10",
			"camo11",
			"camo12",
            "camo13",
			"attach_noseCannon",
			"attach_CannonHeavy",
			"attach_Pylons",
			"attach_Decal1",
			"attach_Decal2"
		};
		#include "cfg\FZ_A_SparrowhawkCamos.hpp"
	   
		weapons[]=
		{
			"OPTRE_GUA23B",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"OPTRE_2000Rnd_20mm_HEIAP",
			"OPTRE_2000Rnd_20mm_HEIAP",
			"168Rnd_CMFlare_Chaff_Magazine"
		};
	};
	class VES_AV22C_Sparrowhawk: VES_AV22A_Sparrowhawk
	{
		displayName="AV-22V Sparrowhawk [M9109 / M230]";
		author="Vespade + DaveSkywalker";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
            "camo5",
			"camo6",
			"camo7",
            "camo8",
			"camo9",
            "camo10",
			"camo11",
			"camo12",
            "camo13",
			"attach_noseLaser",
			"attach_CannonLight",
			"attach_Pylons",
			"attach_Decal1",
			"attach_Decal2"
		};
		
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				weapons[]=
				{
					"OPTRE_M230",
					"Laserdesignator_mounted"
				};
				magazines[]=
				{
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_HE",
					"OPTRE_100Rnd_50mm_APFSDS",
					"Laserbatteries"
				};
			};
		};
	};
	
	// Police Sparrowhawks
	class VES_AV22_Sparrowhawk_CPD: VES_AV22_Sparrowhawk
	{
		author="Vespade + DaveSkywalker";
		side=2;
		editorCategory="V_FZ_EdCat_CPD";
		class textureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B1_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B2_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B3_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B4_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B5_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_FCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_SPLASER_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_HCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
		};
	};
	class VES_AV22A_Sparrowhawk_CPD: VES_AV22A_Sparrowhawk
	{
		author="Vespade + DaveSkywalker";
		side=2;
		editorCategory="V_FZ_EdCat_CPD";
		class textureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B1_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B2_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B3_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B4_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B5_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_FCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_SPLASER_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_HCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
		};
	};
	class VES_AV22B_Sparrowhawk_CPD: VES_AV22B_Sparrowhawk
	{
		author="Vespade + DaveSkywalker";
		side=2;
		editorCategory="V_FZ_EdCat_CPD";
		class textureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B1_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B2_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B3_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B4_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B5_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_FCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_SPLASER_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_HCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
		};
	};
	class VES_AV22C_Sparrowhawk_CPD: VES_AV22C_Sparrowhawk
	{
		author="Vespade + DaveSkywalker";
		side=2;
		editorCategory="V_FZ_EdCat_CPD";
		class textureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B1_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B2_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B3_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B4_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B5_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_FCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_SPLASER_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_POL_HCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
		};
	};
	
	// Jets
	class B_Plane_Fighter_01_F;
	class VES_VAF19: B_Plane_Fighter_01_F
	{
		dlc="Zulu";
		author="Azzamean";
		displayName="VAF-19 Falchion";
		editorCategory="V_FZ_EdCat_Zulu";
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Falchion\V_VAF19_CO",
			"V_FZ_Vehicles\data\Falchion\V_VAF19_A_CO",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co",
			"",
			"",
			""
		};
	};
	
	// Lifeboat
	class OPTRE_EscapePod;
	class VES_Lifeboat: OPTRE_EscapePod
	{
		dlc="Zulu";
		author="Vespade";
		displayName="SKT-9 Bumblebee";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_ODST";
		class UserActions
		{
			class Launch
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND !(this getvariable [""VES_Pod_Launched"",false])";
				displayName = "<t color='#FE2E2E'>Launch Lifeboat";
				displayNameDefault = "<t color='#FE2E2E'>Launch Lifeboat";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_LifeboatLaunch";
				textToolTip = "<t color='#FE2E2E'>Launch Lifeboat";
				userActionID = 54;
			};
			class AirbrakeEngage
			{
				animPeriod = 5;
				condition = "(player == driver this) AND (alive this) AND ((speed this) > 200) AND ((getPosATL this) select 2) < 50";
				displayName = "<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault = "<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer = 0;
				position = "cargo_door_handle";
				priority = 10;
				radius = 100000;
				showWindow = 0;
				statement = "0 = this spawn V_FZ_fnc_AirbrakeEngage";
				textToolTip = "<t color='#FE2E2E'>Engage Airbrakes";
				userActionID = 55;
			};
		};
	};
	class OPTRE_Objects_Wreck_EscapePod;
	class VES_Lifeboat_Wreck: OPTRE_Objects_Wreck_EscapePod
	{
		dlc="Zulu";
		author="Vespade";
		displayName="SKT-9 Bumblebee Wreck";
		reversed=1;
		editorCategory="V_FZ_EdCat_Zulu";
	};
};	