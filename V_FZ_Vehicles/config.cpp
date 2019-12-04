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
		name="Fireteam Zulu's A2D: Fireteam Zulu";
		url="https://discord.gg/fa7Cguk";
		// Added Items
		units[]=
		{
			// Cars
			"VES_M12",
			"VES_M12_URF",
			"VES_M12_SFP",
			"VES_M12_LRV",
			"VES_M12_LRV_URF",
			"VES_M12_LRV_SFP",
			"VES_M12G1_LRV",
			"VES_M12G1_LRV_SFP",
			"VES_M12A1_LRV",
			"VES_M12A1_LRV_URF",
			"VES_M12A1_LRV_SFP",
			"VES_M813_TT",
			"VES_M813_TT_URF",
			"VES_M813_TT_SFP",
			"VES_M12R_AA",
			"VES_M12R_AA_URF",
			"VES_M12R_AA_SFP",
			"VES_M12_APC_MED",
			"VES_M12_APC_MED_SFP",
			"VES_M12_APC",
			"VES_M12_APC_URF",
			"VES_M12_APC_SFP",
			// Trucks
			"VES_HDV134_Resupply",
			"VES_HDV134_TT",
			"VES_HDV134_TT_C",
			"VES_HDV134_Fujikawa",
			"VES_HDV134_Tanker_C",
			"VES_HDV134_Maintenance",
			// Tanks
			"VES_M808B_MBT",
			// Helicopters
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
			"VES_D77HTCI_A",
			"VES_D77HTCI",
			"VES_D77HTCIS",
			"VES_D77HTCIS_A",
			// APC
			"VES_IFV76",
			"VES_IFV76_M",
			"VES_IFV76_A",
			// Jets
			"VES_VAF19",
			"VES_Lifeboat",
			"VES_Lifeboat_Wreck",
			// UAVs
			"VES_MQ49_SD",
			"VES_MQ49_RD"
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
		author="Fireteam Zulu";
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
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		#include "cfg\FZ_C_WarthogCamos.hpp"
	};
	class VES_M12_SFP: VES_M12
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO.paa",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO.paa"
		};
	};
	
	// Machinegun Warthogs
	class OPTRE_M12_LRV;
	class VES_M12_LRV: OPTRE_M12_LRV
	{
		dlc="Zulu";
		author="Fireteam Zulu";
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
		weapons[]={"TruckHorn3"};
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
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO.paa",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO.paa"
		};
	};
	
	// Gauss Warthogs
	class OPTRE_M12G1_LRV;
	class VES_M12G1_LRV: OPTRE_M12G1_LRV
	{
		dlc="Zulu";
		author="Fireteam Zulu";
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
		weapons[]={"TruckHorn3"};
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
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO.paa",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO.paa"
		};
	};
	
	// Rocket Warthogs
	class OPTRE_M12A1_LRV;
	class VES_M12A1_LRV: OPTRE_M12A1_LRV
	{
		dlc="Zulu";
		author="Fireteam Zulu";
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
		weapons[]={"TruckHorn3"};
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
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO.paa",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A2_CO.paa"
		};
	};
	
	// Transport Warthogs
	class OPTRE_M813_TT;
	class VES_M813_TT: OPTRE_M813_TT
	{
		dlc="Zulu";
		author="Fireteam Zulu";
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
		weapons[]={"TruckHorn3"};
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
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO.paa",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO.paa"
		};
	};
	// AA Warthogs
	/*class OPTRE_M12R_AA;
	class VES_M12R_AA: OPTRE_M12R_AA
	{
		dlc="Zulu";
		author="Fireteam Zulu";
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
		author="Fireteam Zulu";
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
				displayName="Turn on Lightbar";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca.paa' size='2.5' />";
				onlyForPlayer=1;
				position="";
				radius=6;
				statement="0 = this spawn V_FZ_fnc_WarthogLightsOn";
			};
			class LightbarOff
			{
				condition="(alive this) AND (this getvariable ""VES_Warthog_LightbarStatus"") AND (player in [driver this])";
				displayName="Turn off Lightbar";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_OFF_ca.paa' size='2.5' />";
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
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO.paa",
			"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A2_CO.paa"
		};
	};
	
	class VES_M12_APC: VES_M12_APC_Base
	{
		dlc="Zulu";
		author="Fireteam Zulu";
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
		weapons[]={"TruckHorn3"};
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
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO.paa",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO.paa"
		};
	};
	
	// APC ~ Hound? Think again.
	class B_APC_Wheeled_01_cannon_F;
	class VES_IFV76_A: B_APC_Wheeled_01_cannon_F
	{
		dlc="Zulu";
		author="Fireteam Zulu";
		scope=2;
		scopeCurator=2;
		displayName="IFV-76 Honeybadger";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		tf_hasLRradio=1;
		tf_isolatedAmount=.65;
		tf_range=10000;
		TFAR_hasIntercom=1;
		class EventHandlers;
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		class TransportMagazines{};
		class TransportWeapons{};
		#include "cfg\FZ_A_HoneybadgerCamos.hpp"
	};
	class VES_IFV76: VES_IFV76_A
	{
		displayName="APC-76 Honeybadger";
		class EventHandlers: EventHandlers
		{
			init = "0 = _this spawn V_FZ_fnc_HoneybadgerRemoveTurret";
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
	class B_AFV_Wheeled_01_cannon_F;
	/*class VES_IFV76_Turret: B_AFV_Wheeled_01_cannon_F
	{
		scope=1;
		scopeCurator=1;
		hiddenSelectionsTextures[]={"","V_FZ_Vehicles\Data\Honeybadger\V_IFV76_G_OD3_CO.paa"};
		class TransportItems{};
	};*/
	
	// Scorpions
	class OPTRE_M808B_UNSC;
	class VES_M808B_MBT: OPTRE_M808B_UNSC
	{
		dlc="Zulu";
		author="Fireteam Zulu";
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
		author="Fireteam Zulu";
		displayName="HDV-134 Resupply Buffalo";
		side=1;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		textureList[]={};
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
		author="Fireteam Zulu";
		displayName="HDV-134 Shaw-Fujikawa Buffalo";
		side=1;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		textureList[]={};
		// Land_Device_slingloadable_F
		hiddenSelections[]={"camo1","camo2","camo3","camo4","camo5"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_B_BuffaloCamos.hpp"
	};
	class O_Truck_03_fuel_F;
	/*class VES_HDV134_Tanker_C: O_Truck_03_fuel_F
	{
		dlc="Zulu";
		author="Fireteam Zulu";
		displayName="HDV-134 Tanker Buffalo";
		side=1;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		textureList[]={};
		hiddenSelections[]={"camo1","camo2","camo3"};
		hiddenSelectionsTextures[]=
		{
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_fuel_CO.paa"
		};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_BuffaloCamos.hpp"
	};
	class O_Truck_03_repair_F;
	class VES_HDV134_Maintenance: O_Truck_03_repair_F
	{
		dlc="Zulu";
		author="Fireteam Zulu";
		displayName="HDV-134 Maintenance Buffalo";
		side=1;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		textureList[]={};
		hiddenSelections[]={"camo1","camo2","camo3"};
		hiddenSelectionsTextures[]=
		{
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO.paa",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO.paa",
			"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa"
		};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_A_BuffaloCamos.hpp"
	};*/
	class O_Truck_03_transport_F;
	class VES_HDV134_TT: O_Truck_03_transport_F
	{
		dlc="Zulu";
		author="Fireteam Zulu";
		displayName="HDV-134 TT Buffalo";
		side=1;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		textureList[]={};
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
		author="Fireteam Zulu";
		displayName="HDV-134 TT Buffalo (Covered)";
		side=1;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		textureList[]={};
		hiddenSelections[]={"camo1","camo2","camo3","camo4"};
		class TransportItems
		{
			#include "cfg\FZ_A_VehicleGear.hpp"
		};
		#include "cfg\FZ_C_BuffaloCamos.hpp"
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
		author="Fireteam Zulu";
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
		hiddenSelectionsTextures[]={"V_FZ_Vehicles\Data\MQ49\V_MQ49_CO.paa"};
	};
	class VES_MQ49_RD: VES_MQ49_SD
	{
		dlc="Zulu";
		author="Fireteam Zulu";
		scope=2;
		scopeCurator=2;
		displayName="MQ-49 Recon Drone";
		class Turrets{};
		class assembleInfo: assembleInfo
		{
			dissasmbleTo[]={"VES_MQ49R_Pack"};
		};
	};
	
	// Falcons
	
	class OPTRE_UNSC_falcon;
	class VES_UH144_A: OPTRE_UNSC_falcon
	{
		dlc="Zulu";
		author="Fireteam Zulu";
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
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_A_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_T_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_SFP_S_CO.paa"
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
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_A_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_T_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_SFP_S_CO.paa"
		};
	};
	class OPTRE_UNSC_falcon_unarmed;
	class VES_UH144: OPTRE_UNSC_falcon_unarmed
	{
		dlc="Zulu";
		author="Fireteam Zulu";
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
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_A_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_T_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_SFP_S_CO.paa"
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
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_A_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_T_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_SFP_S_CO.paa"
		};
	};
	
	// Pelicans
	
	class OPTRE_Pelican_armed;
	class VES_D77HTCI_A: OPTRE_Pelican_armed
	{
		dlc="Zulu";
		author="Fireteam Zulu";
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
		author="Fireteam Zulu";
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
			"V_FZ_Vehicles\data\Falchion\V_VAF19_CO.paa",
			"V_FZ_Vehicles\data\Falchion\V_VAF19_A_CO.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_01_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_02_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_03_co.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_cockpit_05_co.paa",
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
		author="Fireteam Zulu";
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
		author="Fireteam Zulu";
		displayName="SKT-9 Bumblebee Wreck";
		reversed=1;
		editorCategory="V_FZ_EdCat_Zulu";
	};
};	