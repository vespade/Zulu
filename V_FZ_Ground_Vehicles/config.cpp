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
			"VES_M12_LRV",
			"VES_M12G1_LRV",
			"VES_M12A1_LRV",
			"VES_M813_TT",
			"VES_M12R_AA",
			"VES_M12_APC",
			
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
            
            "VES_M125_APC",
            
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
        hiddenSelections[] = {"Camo1","Camo2","camo_details","camo_interior"};
		weapons[]={"TruckHorn3","VES_HogRun","VES_HogJazz"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_WarthogCamos.hpp"
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
        hiddenSelections[] = {"Camo1","Camo2","Camo3","camo_details","camo_interior","camo_turret_decal","camo_sight"};
		weapons[]={"TruckHorn3","VES_HogRun","VES_HogJazz"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_WarthogCamos.hpp"
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
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","camo_details","camo_interior"};
		weapons[]={"TruckHorn3","VES_HogRun","VES_HogJazz"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_Z_WarthogCamos.hpp"
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
        hiddenSelections[] = {"Camo1","Camo2","Camo3","camo_details","camo_interior","camo_turret","camo_turret_decals"};
		weapons[]={"TruckHorn3","VES_HogRun","VES_HogJazz"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_WarthogCamos.hpp"
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
        hiddenSelections[] = {"Camo1","Camo2","Camo3","camo_details","camo_interior","camo_net","camo_transport_decal"};
		brakeDistance=4;
		weapons[]={"TruckHorn3","VES_HogRun","VES_HogJazz"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_W_WarthogCamos.hpp"
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
        hiddenSelections[] = {"Camo1","Camo2","Camo3","camo_details","camo_interior"};
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
        hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4","camo_details","camo_interior","camo_transport_details","camo_net"};
		weapons[]={"TruckHorn3","VES_HogRun","VES_HogJazz"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_X_WarthogCamos.hpp"
	};
	// APC ~ Hound? Think again.
	class B_APC_Wheeled_01_cannon_F;
    class AnimationSources;
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
		class UserActions;
        class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source="ammorandom";
				weapon="autocannon_40mm_CTWS";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="autocannon_40mm_CTWS";
			};
			class revolving_cannon
			{
				source="revolving";
				weapon="autocannon_40mm_CTWS";
			};
			class HideTurret
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class HitEngine_src
			{
				source="Hit";
				hitpoint="HitEngine";
				raw=1;
			};
			class HitFuel_src
			{
				source="Hit";
				hitpoint="HitFuel";
				raw=1;
			};
			class HitHull_src
			{
				source="Hit";
				hitpoint="HitHull";
				raw=1;
			};
			class HitMainGun_src
			{
				source="Hit";
				hitpoint="HitGun";
				raw=1;
			};
			class HitTurret_src
			{
				source="Hit";
				hitpoint="HitTurret";
				raw=1;
			};
			class HitComTurret_src
			{
				source="Hit";
				hitpoint="HitComTurret";
				raw=1;
			};
			class HitSLAT_Left_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_1";
				raw=1;
			};
			class HitSLAT_Left_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_2";
				raw=1;
			};
			class HitSLAT_Left_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Left_3";
				raw=1;
			};
			class HitSLAT_Right_1_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_1";
				raw=1;
			};
			class HitSLAT_Right_2_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_2";
				raw=1;
			};
			class HitSLAT_Right_3_src
			{
				source="Hit";
				hitpoint="HitSLAT_Right_3";
				raw=1;
			};
			class HitSLAT_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_back";
				raw=1;
			};
			class HitSLAT_front_src
			{
				source="Hit";
				hitpoint="HitSLAT_front";
				raw=1;
			};
			class HitSLAT_top_back_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_back";
				raw=1;
			};
			class HitSLAT_top_right_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_right";
				raw=1;
			};
			class HitSLAT_top_left_src
			{
				source="Hit";
				hitpoint="HitSLAT_top_left";
				raw=1;
			};
			class showBags
			{
				displayName="$STR_A3_animationsources_showbagsturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showCamonetHull
			{
				displayName="$STR_A3_animationsources_showcamonethull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showCamonetCannon
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class showCamonetTurret
			{
				displayName="$STR_A3_animationsources_showcamonetturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"showCamonetCannon",
					1
				};
				forceAnimate2[]=
				{
					"showCamonetCannon",
					0
				};
				mass=-50;
			};
			class showSLATHull
			{
				displayName="$STR_A3_animationsources_showslathull0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
			class showSLATTurret
			{
				displayName="$STR_A3_animationsources_showslatturret0";
				author="$STR_A3_Bohemia_Interactive";
				source="user";
				animPeriod=0.001;
				initPhase=0;
				mass=-50;
			};
		};
		animationList[]=
		{
			"showBags",
			0,
			"showCamonetHull",
			0,
			"showCamonetCannon",
			0,
			"showCamonetTurret",
			0,
			"showSLATHull",
			0,
			"showSLATTurret",
			0
		};
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
		class EventHandlers
		{
			fired = "[_this select 0,_this select 6,'missile_move','MissileBase'] call BIS_fnc_missileLaunchPositionFix; _this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
        #include "cfg\FZ_A_OryxCamos.hpp"
		class TransportMagazines{};
		class TransportWeapons{};
		class UserActions{};
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
    class OPTRE_M125_APC_Base;
    class VES_M125_APC: OPTRE_M125_APC_Base
	{
		dlc="Zulu";
		author="Vespade";
		scope = 2;
		scopeCurator = 2;
		side = 1;
        forceInGarage=1;
		displayName = "M125 Wildebeest APC";
        editorCategory="V_FZ_EdCat_Zulu";
		crew = "VES_Rifleman_MA5B_MAR";
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
        TFAR_hasIntercom=1;
        class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_WildebeestCamos.hpp"
	};
	
	// Scorpions
	class OPTRE_M808B_UNSC;
	class VES_M808B_MBT: OPTRE_M808B_UNSC
	{
		dlc="Zulu";
        scope = 2;
        scopeCurator = 2;
		author="Baseplate";
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
        scope = 2;
        scopeCurator = 2;
		author="Baseplate";
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
        scope = 2;
        scopeCurator = 2;
		author="Baseplate";
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
        scope = 2;
        scopeCurator = 2;
		author="Baseplate";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_D_ScorpionCamos.hpp"
	};
    class OPTRE_M875_SPH;
    class VES_M875_SPH: OPTRE_M875_SPH
	{
		dlc = "Zulu";
        scope = 2;
        scopeCurator = 2;
		crew="VES_Rifleman_MA5B_MAR";
		author = "Baseplate";
        editorCategory="V_FZ_EdCat_Zulu";
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
        class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_E_ScorpionCamos.hpp"
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