//       _____         __                   ____       __    
//      / __(_)______ / /____ ___ ___ _    /_  / __ __/ /_ __
//     / _// / __/ -_) __/ -_) _ `/  ' \    / /_/ // / / // /
//    /_/ /_/_/  \__/\__/\__/\_,_/_/_/_/   /___/\_,_/_/\_,_/ 
//
//    Do NOT modify or add this PBO to any other pack. It belongs here and here only.

class CfgPatches
{
	class V_FZ_Ground_Vehicles
	{
		author="Fireteam Zulu";
		name="A2D: Fireteam Zulu";
		url="https://discord.gg/fa7Cguk";
		// Added Items
		units[]=
		{
			// Warthogs
			"VES_M12",
			"VES_M12_SFP",
			
			"VES_M12_CIV",
			
			"VES_M12_LRV",
			"VES_M12_LRV_SFP",
			
			"VES_M12G1_LRV",
			"VES_M12G1_LRV_SFP",
			
			"VES_M12A1_LRV",
			"VES_M12A1_LRV_SFP",
			
			"VES_M813_TT",
			"VES_M813_TT_SFP",
			
			"VES_M12R_AA",
			"VES_M12R_AA_SFP",
			
			"VES_M12_APC_MED",
			"VES_M12_APC_MED_SFP",
			
			"VES_M12_APC",
			"VES_M12_APC_SFP",
			
			// Hyena/Mattock
			"VES_M19",
			"VES_M19_URF",
			"VES_M19_CIV",
			"VES_M19_CIV_News",
			
			// Trucks
			"VES_HDV134_Resupply",
			"VES_HDV134_TT",
			"VES_HDV134_TT_C",
			"VES_HDV134_Fujikawa",
			"VES_HDV134_Tanker_C",
			"VES_HDV134_Maintenance",
			
			// Tanks
			"VES_M808B_MBT",
            "VES_M808BM_MBT",
            "VES_M808S_MBT",
			
			// APC
			"VES_IFV76",
			"VES_IFV76_M",
			"VES_IFV76_A",
			
            "VES_M413_MGS",
            "VES_M412_IFV",
            
            "VES_M494_ORYX",
            
            // Boat
            "VES_M112_TT"
			
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
		class V_FZ_Ground_Vehicles
		{
			list[]={"V_FZ_Ground_Vehicles"};
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
		weapons[]={"TruckHorn3","VES_HogRun","VES_HogJazz"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_WarthogCamos.hpp"
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
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
		class EventHandlers;
		class UserActions;
	};
	class VES_M12_CIV: VES_M12_SFP
	{
		dlc="Zulu";
		author="Vespade";
		side=3;
		crew="C_man_1";
		editorCategory="V_FZ_EdCat_CIV";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		};
		#include "cfg\FZ_F_WarthogCamos.hpp"
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
		weapons[]={"TruckHorn3","VES_HogRun","VES_HogJazz"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_WarthogCamos.hpp"
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
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
		class EventHandlers;
		class UserActions;
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
		weapons[]={"TruckHorn3","VES_HogRun","VES_HogJazz"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_Z_WarthogCamos.hpp"
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
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
		class UserActions;
		class EventHandlers;
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
		weapons[]={"TruckHorn3","VES_HogRun","VES_HogJazz"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_WarthogCamos.hpp"
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
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_SFP_A2_CO"
		};
		class EventHandlers;
		class UserActions;
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
		weapons[]={"TruckHorn3","VES_HogRun","VES_HogJazz"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_W_WarthogCamos.hpp"
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
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
		class EventHandlers;
		class UserActions;
	};
	// AA Warthogs
	class OPTRE_M12R_AA;
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
		#include "cfg\FZ_Y_WarthogCamos.hpp"
	};
	
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
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_BLK_A2_CO"
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
		weapons[]={"TruckHorn3","VES_HogRun","VES_HogJazz"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_X_WarthogCamos.hpp"
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
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Ground_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
		class EventHandlers;
		class UserActions;
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
		class UserActions;
		#include "cfg\FZ_A_HoneybadgerCamos.hpp"
	};
    
	
	class VES_IFV76: VES_IFV76_A
	{
		dlc="Zulu";
		author="Vespade";
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
    // Oryx
    class OPTRE_M494;
	class VES_M494_ORYX: OPTRE_M494
	{
		dlc="Zulu";
		author="Baseplate";
		scope=2;
		scopeCurator=2;
		displayName="M494 Oryx";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		armor=800;
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
        #include "cfg\FZ_A_OryxCamos.hpp"
		class TransportMagazines{};
		class TransportWeapons{};
		class AnimationSources;
		class UserActions;
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
    class OPTRE_M808BM_UNSC;
    class VES_M808BM_MBT: OPTRE_M808BM_UNSC
    {
		dlc="Zulu";
		author="Vespade";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_B_ScorpionCamos.hpp"
	};
    class OPTRE_M808S;
    class VES_M808S_MBT: OPTRE_M808S
    {
		dlc="Zulu";
		author="Vespade";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_C_ScorpionCamos.hpp"
	};
    class OPTRE_M808B2;
    class VES_M808B2_MBT: OPTRE_M808B2
    {
		dlc="Zulu";
		author="Vespade";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_D_ScorpionCamos.hpp"
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
	// Hyena/Mattock
	class O_MRAP_02_F;
	class O_MRAP_02_gmg_F;
	class O_MRAP_02_hmg_F;
	class VES_M19: O_MRAP_02_F
	{
		dlc="Zulu";
		displayName="M19 Hyena (Unarmed)";
		author="Mike Hartley";
		scope=2;
		scopeCurator=2;
		side=1;
		forceInGarage=1;
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=10500;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		#include "cfg\FZ_A_MattockCamos.hpp"
	};
	class VES_M19_GMG: O_MRAP_02_gmg_F
	{
		dlc="Zulu";
		displayName="M19 Hyena (GMG)";
		author="Mike Hartley";
		scope=2;
		scopeCurator=2;
		side=1;
		forceInGarage=1;
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=10500;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		#include "cfg\FZ_T_MattockCamos.hpp"
	};
	class VES_M19_HMG: O_MRAP_02_hmg_F
	{
		dlc="Zulu";
		displayName="M19 Hyena (HMG)";
		author="Mike Hartley";
		scope=2;
		scopeCurator=2;
		side=1;
		forceInGarage=1;
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=10500;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		#include "cfg\FZ_T_MattockCamos.hpp"
	};
	class VES_M19_URF: VES_M19
	{
		dlc="Zulu";
		displayName="M19 Hyena (Unarmed)";
		author="Mike Hartley";
		side=0;
		editorCategory="V_FZ_EdCat_URF";
		crew="OPTRE_ins_urf_rifleman_ar";
		#include "cfg\FZ_B_MattockCamos.hpp"
	};
	class VES_M19_URF_GMG: VES_M19_GMG
	{
		dlc="Zulu";
		displayName="M19 Hyena (GMG)";
		author="Mike Hartley";
		side=0;
		editorCategory="V_FZ_EdCat_URF";
		crew="OPTRE_ins_urf_rifleman_ar";
		#include "cfg\FZ_T2_MattockCamos.hpp"
	};
	class VES_M19_URF_HMG: VES_M19_HMG
	{
		dlc="Zulu";
		displayName="M19 Hyena (HMG)";
		author="Mike Hartley";
		side=0;
		editorCategory="V_FZ_EdCat_URF";
		crew="OPTRE_ins_urf_rifleman_ar";
		#include "cfg\FZ_T2_MattockCamos.hpp"
	};
	class VES_M19_CIV: VES_M19
	{
		dlc="Zulu";
		displayName="Mattock";
		author="Mike Hartley";
		side=3;
		editorCategory="V_FZ_EdCat_CIV";		
		crew="c_man_1";
		#include "cfg\FZ_C_MattockCamos.hpp"
	};
	class VES_M19_CIV_News: VES_M19_CIV
	{
		dlc="Zulu";
		author="Mike Hartley";
		class TextureSources{};
		hiddenSelectionsTextures[]={"V_FZ_Ground_Vehicles\data\Mattock\Civilian\V_M19_NEW_CO.paa","V_FZ_Ground_Vehicles\data\Mattock\Civilian\V_M19_NEW_A_CO.paa"};
	};
    class optre_catfish_unarmed_f;
    class VES_M112_TT: optre_catfish_unarmed_f
    {
        dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName = "M112 Wet Patrol Craft";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		//fuelConsumptionRate=0.1;
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]={{-1.5, -.6, -1.1}};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=.4;
		tf_range=10500;
        class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_CatfishCamos.hpp"
    };	
};	