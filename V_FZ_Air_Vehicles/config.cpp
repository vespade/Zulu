//       _____         __                   ____       __    
//      / __(_)______ / /____ ___ ___ _    /_  / __ __/ /_ __
//     / _// / __/ -_) __/ -_) _ `/  ' \    / /_/ // / / // /
//    /_/ /_/_/  \__/\__/\__/\_,_/_/_/_/   /___/\_,_/_/\_,_/ 
//
//    Do NOT modify or add this PBO to any other pack. It belongs here and here only.

class CfgPatches
{
    class V_FZ_Air_Vehicles
	{
		author="Fireteam Zulu";
		name="A2D: Fireteam Zulu";
		url="https://discord.gg/fa7Cguk";
		// Added Items
		units[]=
		{
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
			
			// Jets
			"VES_VAF19",
			"VES_Lifeboat",
			"VES_Lifeboat_Wreck",
            
            // Wombat
            "VES_F99",
            "VES_F99_Gunpod",
            "VES_F99_Missile",
            
			
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
		class V_FZ_Air_Vehicles
		{
			list[]={"V_FZ_Air_Vehicles"};
		};
	};
};

#define pack_xx(a,b) class _xx_##a {backpack=a; count=b;}
class CfgVehicles
{
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
		hiddenSelectionsTextures[]={"V_FZ_Air_Vehicles\Data\MQ49\V_MQ49_CO"};
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
        editorSubcategory = "EdSubcat_Drones";
		#include "cfg\FZ_A_DragonflyCamos.hpp"
	};
	class VES_MQ221_URF: VES_MQ221
	{
		dlc="Zulu";
		author="Azzamean";
		side=0;
		editorCategory="V_FZ_EdCat_URF";
        editorSubcategory="V_FZ_EdSubCat_Drone";
		#include "cfg\FZ_B_DragonflyCamos.hpp"
	};
	class VES_MQ221_CPD: VES_MQ221
	{
		dlc="Zulu";
		author="Azzamean";
		side=2;
		editorCategory="V_FZ_EdCat_CPD";
        editorSubcategory="V_FZ_EdSubCat_Drone";
		class TextureSources{};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Air_Vehicles\data\Dragonfly\A_MQ221_CPD_CO",
			"V_FZ_Air_Vehicles\data\Dragonfly\A_MQ221_CPD_A_CO"
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
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_CO",
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_A_CO",
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_T_CO",
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_SFP_S_CO"
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
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_CO",
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_A_CO",
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_T_CO",
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_SFP_S_CO"
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
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_CO",
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_A_CO",
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_T_CO",
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_SFP_S_CO"
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
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_CO",
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_A_CO",
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_BLK_T_CO",
			"V_FZ_Air_Vehicles\data\Falcon\V_UH144_SFP_S_CO"
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
    
    // Wombat
    class OPTRE_Wombat_S;
    class OPTRE_Wombat;
    class OPTRE_Wombat_B;
    class VES_F99: OPTRE_Wombat_S
	{
		dlc="Zulu";
		author="Baseplate";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="F-99";
		editorCategory="V_FZ_EdCat_Zulu";
		editorSubcategory = "EdSubcat_Drones";
		crew="VES_Rifleman_MA5B_ODST";
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
        #include "cfg\FZ_B_WombatCamos.hpp"
	};
    class VES_F99_Gunpod: OPTRE_Wombat
	{
		dlc="Zulu";
		author="Baseplate";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="F-99 (Gunpod)";
		editorCategory="V_FZ_EdCat_Zulu";
		editorSubcategory = "EdSubcat_Drones";
		crew="VES_Rifleman_MA5B_ODST";
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
        #include "cfg\FZ_A_WombatCamos.hpp"
	};
    class VES_F99_Missile: OPTRE_Wombat_B
	{
		dlc="Zulu";
		author="Baseplate";
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName="F-99 (Missile)";
		editorCategory="V_FZ_EdCat_Zulu";
		editorSubcategory = "EdSubcat_Drones";
		crew="VES_Rifleman_MA5B_ODST";
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
        #include "cfg\FZ_A_WombatCamos.hpp"
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
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B1_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B2_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B3_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B4_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B5_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_FCANNON_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_SPLASER_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_HCANNON_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
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
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B1_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B2_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B3_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B4_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B5_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_FCANNON_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_SPLASER_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_HCANNON_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
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
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B1_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B2_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B3_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B4_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B5_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_FCANNON_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_SPLASER_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_HCANNON_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
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
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B1_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B2_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B3_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_B4_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B5_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
			"V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_FCANNON_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_SPLASER_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_CANNON_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_POL_HCANNON_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
            "V_FZ_Air_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
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
			"V_FZ_Air_Vehicles\data\Falchion\V_VAF19_CO",
			"V_FZ_Air_Vehicles\data\Falchion\V_VAF19_A_CO",
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
