class CfgPatches
{
	class V_FZ_Vehicles
	{
		author="Fireteam Zulu";
		name="A2D: Fireteam Zulu";
		url="https://discord.gg/fa7Cguk";
		units[]=
		{
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
			"VES_M12_APC_MED",
			"VES_M12_APC_MED_SFP",
			"VES_M12_APC",
			"VES_M12_APC_URF",
			"VES_M12_APC_SFP",
			"VES_HDV134_Resupply",
			"VES_HDV134_TT",
			"VES_HDV134_TT_C",
			"VES_HDV134_Fujikawa",
			"VES_HDV134_Tanker_C",
			"VES_M808B_MBT",
			"VES_UH144_A",
			"VES_UH144_A_URF",
			"VES_UH144_A_SFP",
			"VES_UH144S_A",
			"VES_UH144S_A_SFP",
			"VES_UH144",
			"VES_UH144_URF",
			"VES_UH144_SFP",
			"VES_UH144S",
			"VES_UH144S_SFP",
			"VES_D77HTCI_A",
			"VES_D77HTCI",
			"VES_D77HTCIS",
			"VES_D77HTCIS_A",
			"VES_AV14_Rockets",
			"VES_AV14",
			"VES_AV14_AIM",
			"VES_AV14_AGM",
			"VES_IFV76",
			"VES_IFV76_M",
			"VES_IFV76_A",
			"VES_M413_MGS",
			"VES_M412_IFV",
			"VES_VAF19",
			"VES_Lifeboat",
			"VES_Lifeboat_Wreck",
			"VES_MQ49_SD",
			"VES_MQ49_RD"
		};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"V_FZ_Core",
			"A3_Ui_F_Data",
			"OPTRE_Vehicles_Bison",
			"A3_Structures_F_Data",
			"A3_Structures_F_EPC_Items_Electronics",
			"A3_Air_F_Jets_Plane_Fighter_01"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class V_FZ_Vehicles
		{
			list[]=
			{
				"V_FZ_Vehicles"
			};
		};
	};
};
class cfgVehicles
{
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
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]=
		{
			{-1.35,-0.60000002,-1.1}
		};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=10500;
		brakeDistance=4;
		weapons[]=
		{
			"TruckHorn3"
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_A_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_A_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_A_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_A_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_A_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_A_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_A_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_A_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A_CO"
		};
	};
	class VES_M12_URF: VES_M12
	{
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		class textureSources
		{
			class ves_urf_green
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URF_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URF_A_CO"
				};
			};
			class ves_urf_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URD_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URD_A_CO"
				};
			};
			class ves_urf_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URT_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URT_A_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_URF_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_URF_A_CO"
		};
	};
	class VES_M12_SFP: VES_M12
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources
		{
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
	};
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
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]=
		{
			{-1.5,-0.60000002,-1.1}
		};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=10500;
		brakeDistance=4;
		weapons[]=
		{
			"TruckHorn3"
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_A_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_A_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_A_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_A_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_A_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_A_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_A_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_A_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A_CO"
		};
	};
	class VES_M12_LRV_URF: VES_M12_LRV
	{
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		class textureSources
		{
			class ves_urf_green
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URF_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URF_A_CO"
				};
			};
			class ves_urf_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URD_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URD_A_CO"
				};
			};
			class ves_urf_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URT_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URT_A_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_URF_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_URF_A_CO"
		};
	};
	class VES_M12_LRV_SFP: VES_M12_LRV
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources
		{
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
	};
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
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]=
		{
			{-1.5,-0.60000002,-1.1}
		};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=10500;
		brakeDistance=4;
		weapons[]=
		{
			"TruckHorn3"
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_A_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_A_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_A_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_A_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_A_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_A_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_A_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_A_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A_CO"
		};
	};
	class VES_M12G1_LRV_SFP: VES_M12G1_LRV
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources
		{
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
	};
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
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]=
		{
			{-1.5,-0.60000002,-1.1}
		};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=10500;
		brakeDistance=4;
		weapons[]=
		{
			"TruckHorn3"
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_A2_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_A2_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_A2_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_A2_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A2_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_A2_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_A2_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_A2_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_A2_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A2_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A2_CO"
		};
	};
	class VES_M12A1_LRV_URF: VES_M12A1_LRV
	{
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		class textureSources
		{
			class ves_urf_green
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URF_CO.paa",
					"V_FZ_Vehicles\data\Warthog\V_M12_URF_A2_CO.paa"
				};
			};
			class ves_urf_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URD_CO.paa",
					"V_FZ_Vehicles\data\Warthog\V_M12_URD_A2_CO.paa"
				};
			};
			class ves_urf_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URT_CO.paa",
					"V_FZ_Vehicles\data\Warthog\V_M12_URT_A2_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_URF_CO.paa",
			"V_FZ_Vehicles\data\Warthog\V_M12_URF_A2_CO.paa"
		};
	};
	class VES_M12A1_LRV_SFP: VES_M12A1_LRV
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources
		{
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A2_CO"
		};
	};
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
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]=
		{
			{-1.5,-0.60000002,-1.1}
		};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=10500;
		brakeDistance=4;
		weapons[]=
		{
			"TruckHorn3"
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_A_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_A_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_A_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_A_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_A_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_A_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_A_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_A_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A_CO"
		};
	};
	class VES_M813_TT_URF: VES_M813_TT
	{
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		class textureSources
		{
			class ves_urf_green
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URF_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URF_A_CO"
				};
			};
			class ves_urf_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URD_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URD_A_CO"
				};
			};
			class ves_urf_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URT_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URT_A_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_URF_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_URF_A_CO"
		};
	};
	class VES_M813_TT_SFP: VES_M813_TT
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources
		{
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
	};
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
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]=
		{
			{-1.5,-0.60000002,-1.1}
		};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=10500;
		brakeDistance=4;
		weapons[]=
		{
			"AmbulanceHorn",
			"TruckHorn3"
		};
		class TransportItems
		{
			class _xx_ACE_bloodIV
			{
				name="ACE_bloodIV";
				count=14;
			};
			class _xx_ACE_bloodIV_250
			{
				name="ACE_bloodIV_250";
				count=14;
			};
			class _xx_ACE_bloodIV_500
			{
				name="ACE_bloodIV_500";
				count=14;
			};
			class _xx_ACE_plasmaIV
			{
				name="ACE_plasmaIV";
				count=14;
			};
			class _xx_ACE_plasmaIV_250
			{
				name="ACE_plasmaIV_250";
				count=14;
			};
			class _xx_ACE_plasmaIV_500
			{
				name="ACE_plasmaIV_500";
				count=14;
			};
			class _xx_ACE_salineIV
			{
				name="ACE_salineIV";
				count=14;
			};
			class _xx_ACE_ACE_salineIV_250
			{
				name="ACE_ACE_salineIV_250";
				count=12;
			};
			class _xx_ACE_ACE_salineIV_500
			{
				name="ACE_ACE_salineIV_500";
				count=10;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=24;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=24;
			};
			class _xx_ACE_atrophine
			{
				name="ACE_atrophine";
				count=16;
			};
			class _xx_ACE_adenosine
			{
				name="ACE_adenosine";
				count=16;
			};
			class _xx_ACE_bodybag
			{
				name="ACE_bodybag";
				count=8;
			};
			class _xx_OPTRE_Medigel
			{
				name="OPTRE_Medigel";
				count=18;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=12;
			};
			class _xx_CBRN_DetectionKit
			{
				name="CBRN_DetectionKit";
				count=1;
			};
			class _xx_CBRN_NAAK
			{
				name="CBRN_NAAK";
				count=12;
			};
			class _xx_CBRN_DeconKit
			{
				name="CBRN_DeconKit";
				count=1;
			};
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=8;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=16;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=40;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=40;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=50;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=45;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_A2_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_A2_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_A2_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_A2_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A2_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_A2_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_A2_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_A2_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_A2_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A2_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A2_CO"
		};
		class EventHandlers: EventHandlers
		{
			init="0 = _this spawn V_FZ_fnc_WarthogLightsAdd";
		};
		class UserActions: UserActions
		{
			class LightbarOn
			{
				condition="(alive this) AND !(this getvariable [""VES_Warthog_LightbarStatus"", false]) AND (player in [driver this])";
				displayName="Turn on Lightbar";
				displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\beacons_ON_ca' size='2.5' />";
				onlyForPlayer=1;
				position="";
				radius=6;
				statement="0 = this spawn V_FZ_fnc_WarthogLightsOn";
			};
			class LightbarOff
			{
				condition="(alive this) AND (this getvariable ""VES_Warthog_LightbarStatus"") AND (player in [driver this])";
				displayName="Turn off Lightbar";
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
		class textureSources
		{
		};
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
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]=
		{
			{-1.5,-0.60000002,-1.1}
		};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=10500;
		brakeDistance=4;
		weapons[]=
		{
			"TruckHorn3"
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DES_A_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_WDL_A_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_JNG_A_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URB_A_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_BLK_A_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_FRS_A_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_TND_A_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_DUN_A_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_CLS_A_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_OD3_A_CO"
		};
	};
	class VES_M12_APC_URF: VES_M12_APC
	{
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		class textureSources
		{
			class ves_urf_green
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URF_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URF_A_CO"
				};
			};
			class ves_urf_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URD_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URD_A_CO"
				};
			};
			class ves_urf_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Warthog\V_M12_URT_CO",
					"V_FZ_Vehicles\data\Warthog\V_M12_URT_A_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_URF_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_URF_A_CO"
		};
	};
	class VES_M12_APC_SFP: VES_M12_APC
	{
		side=2;
		forceInGarage=0;
		crew="VES_Rifleman_MA5B_SFP";
		editorCategory="V_FZ_EdCat_SFP";
		class textureSources
		{
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_CO",
			"V_FZ_Vehicles\data\Warthog\V_M12_SFP_A_CO"
		};
	};
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
		tf_isolatedAmount=0.64999998;
		tf_range=10000;
		TFAR_hasIntercom=1;
		class EventHandlers;
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DES_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DES_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DES_T_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_WDL_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_WDL_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_WDL_T_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_JNG_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_JNG_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_JNG_T_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_URB_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_URB_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_URB_T_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_BLK_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_BLK_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_BLK_T_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_FRS_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_FRS_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_FRS_T_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_TND_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_TND_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_TND_T_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DUN_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DUN_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DUN_T_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_CLS_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_CLS_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_CLS_T_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_T_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_CO",
			"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_A_CO",
			"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_T_CO"
		};
	};
	class VES_IFV76: VES_IFV76_A
	{
		displayName="APC-76 Honeybadger";
		class EventHandlers: EventHandlers
		{
			init="0 = _this spawn V_FZ_fnc_HoneybadgerRemoveTurret";
		};
	};
	class VES_IFV76_M: VES_IFV76
	{
		displayName="APC-76 Medical Honeybadger";
		class TransportItems
		{
			class _xx_ACE_bloodIV
			{
				name="ACE_bloodIV";
				count=14;
			};
			class _xx_ACE_bloodIV_250
			{
				name="ACE_bloodIV_250";
				count=14;
			};
			class _xx_ACE_bloodIV_500
			{
				name="ACE_bloodIV_500";
				count=14;
			};
			class _xx_ACE_plasmaIV
			{
				name="ACE_plasmaIV";
				count=14;
			};
			class _xx_ACE_plasmaIV_250
			{
				name="ACE_plasmaIV_250";
				count=14;
			};
			class _xx_ACE_plasmaIV_500
			{
				name="ACE_plasmaIV_500";
				count=14;
			};
			class _xx_ACE_salineIV
			{
				name="ACE_salineIV";
				count=14;
			};
			class _xx_ACE_ACE_salineIV_250
			{
				name="ACE_ACE_salineIV_250";
				count=12;
			};
			class _xx_ACE_ACE_salineIV_500
			{
				name="ACE_ACE_salineIV_500";
				count=10;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=24;
			};
			class _xx_ACE_epinephrine
			{
				name="ACE_epinephrine";
				count=24;
			};
			class _xx_ACE_atrophine
			{
				name="ACE_atrophine";
				count=16;
			};
			class _xx_ACE_adenosine
			{
				name="ACE_adenosine";
				count=16;
			};
			class _xx_ACE_bodybag
			{
				name="ACE_bodybag";
				count=8;
			};
			class _xx_OPTRE_Medigel
			{
				name="OPTRE_Medigel";
				count=18;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=12;
			};
			class _xx_CBRN_DetectionKit
			{
				name="CBRN_DetectionKit";
				count=1;
			};
			class _xx_CBRN_NAAK
			{
				name="CBRN_NAAK";
				count=12;
			};
			class _xx_CBRN_DeconKit
			{
				name="CBRN_DeconKit";
				count=1;
			};
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_surgicalKit
			{
				name="ACE_surgicalKit";
				count=8;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=16;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=40;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=40;
			};
			class _xx_ACE_elasticBandage
			{
				name="ACE_elasticBandage";
				count=40;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=50;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=45;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DES_M_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DES_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DES_T_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_WDL_M_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_WDL_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_WDL_T_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_JNG_M_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_JNG_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_JNG_T_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_URB_M_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_URB_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_URB_T_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_BLK_M_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_BLK_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_BLK_T_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_FRS_M_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_FRS_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_FRS_T_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_TND_M_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_TND_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_TND_T_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DUN_M_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DUN_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_DUN_T_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_CLS_M_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_CLS_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_CLS_T_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_M_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_A_CO",
					"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_T_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_M_CO",
			"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_A_CO",
			"V_FZ_Vehicles\data\Honeybadger\V_IFV76_OD3_T_CO"
		};
	};
	class B_AFV_Wheeled_01_cannon_F;
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
		tf_isolatedAmount=0.64999998;
		tf_range=12000;
		TFAR_hasIntercom=1;
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Skywalker";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_DES_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DES_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DES_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DES_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DES_9_CO"
				};
			};
			class ves_woodland
			{
				author="Skywalker";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_WDL_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_WDL_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_WDL_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_WDL_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_WDL_9_CO"
				};
			};
			class ves_jungle
			{
				author="Skywalker";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_JNG_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_JNG_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_JNG_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_JNG_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_JNG_9_CO"
				};
			};
			class ves_urban
			{
				author="Skywalker";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_URB_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_URB_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_URB_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_URB_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_URB_9_CO"
				};
			};
			class ves_black
			{
				author="Skywalker";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_BLK_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_BLK_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_BLK_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_BLK_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_BLK_9_CO"
				};
			};
			class ves_frost
			{
				author="Skywalker";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_FRS_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_FRS_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_FRS_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_FRS_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_FRS_9_CO"
				};
			};
			class ves_tundra
			{
				author="Skywalker";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_TND_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_TND_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_TND_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_TND_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_TND_9_CO"
				};
			};
			class ves_dunes
			{
				author="Skywalker";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_DUN_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DUN_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DUN_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DUN_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DUN_9_CO"
				};
			};
			class ves_classic
			{
				author="Skywalker";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_CLS_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_CLS_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_CLS_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_CLS_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_CLS_9_CO"
				};
			};
			class ves_olive
			{
				author="Skywalker";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_OD3_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_OD3_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_OD3_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_OD3_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_OD3_9_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Bison\V_BISON_OD3_CO",
			"V_FZ_Vehicles\data\Bison\V_BISON_OD3_M_CO",
			"V_FZ_Vehicles\data\Bison\V_BISON_OD3_W_CO",
			"V_FZ_Vehicles\data\Bison\V_BISON_OD3_S_CO",
			"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
			"V_FZ_Vehicles\data\Bison\V_BISON_OD3_9_CO"
		};
	};
	class VES_M412_IFV: OPTRE_M412_IFV_UNSC
	{
		dlc="Zulu";
		author="Vespade";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		forceInGarage=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.64999998;
		tf_range=12000;
		TFAR_hasIntercom=1;
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Skywalker";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_DES_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DES_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DES_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DES_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DES_9_CO"
				};
			};
			class ves_woodland
			{
				author="Skywalker";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_WDL_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_WDL_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_WDL_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_WDL_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_WDL_9_CO"
				};
			};
			class ves_jungle
			{
				author="Skywalker";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_JNG_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_JNG_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_JNG_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_JNG_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_JNG_9_CO"
				};
			};
			class ves_urban
			{
				author="Skywalker";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_URB_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_URB_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_URB_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_URB_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_URB_9_CO"
				};
			};
			class ves_black
			{
				author="Skywalker";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_BLK_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_BLK_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_BLK_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_BLK_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_BLK_9_CO"
				};
			};
			class ves_frost
			{
				author="Skywalker";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_FRS_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_FRS_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_FRS_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_FRS_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_FRS_9_CO"
				};
			};
			class ves_tundra
			{
				author="Skywalker";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_TND_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_TND_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_TND_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_TND_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_TND_9_CO"
				};
			};
			class ves_dunes
			{
				author="Skywalker";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_DUN_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DUN_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DUN_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DUN_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_DUN_9_CO"
				};
			};
			class ves_classic
			{
				author="Skywalker";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_CLS_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_CLS_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_CLS_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_CLS_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_CLS_9_CO"
				};
			};
			class ves_olive
			{
				author="Skywalker";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Bison\V_BISON_OD3_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_OD3_M_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_OD3_W_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_OD3_S_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
					"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
					"V_FZ_Vehicles\data\Bison\V_BISON_OD3_9_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Bison\V_BISON_OD3_CO",
			"V_FZ_Vehicles\data\Bison\V_BISON_OD3_M_CO",
			"V_FZ_Vehicles\data\Bison\V_BISON_OD3_W_CO",
			"V_FZ_Vehicles\data\Bison\V_BISON_OD3_S_CO",
			"V_FZ_Vehicles\data\Bison\V_BISON_I_CO",
			"OPTRE_Vehicles\Bison\data\Bison_MFCDScreens_CO",
			"V_FZ_Vehicles\data\Bison\V_BISON_OD3_9_CO"
		};
	};
	class OPTRE_M808B_UNSC;
	class VES_M808B_MBT: OPTRE_M808B_UNSC
	{
		dlc="Zulu";
		author="Vespade";
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Scorpion\V_M808_DES_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_Decals_CA",
					"V_FZ_Vehicles\data\Scorpion\V_M808_DES_I_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_DES_A_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_DES_T_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_DES_G_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Scorpion\V_M808_WDL_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_Decals_CA",
					"V_FZ_Vehicles\data\Scorpion\V_M808_WDL_I_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_WDL_A_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_WDL_T_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_WDL_G_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Scorpion\V_M808_JNG_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_Decals_CA",
					"V_FZ_Vehicles\data\Scorpion\V_M808_JNG_I_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_JNG_A_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_JNG_T_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_JNG_G_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Scorpion\V_M808_URB_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_Decals_CA",
					"V_FZ_Vehicles\data\Scorpion\V_M808_URB_I_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_URB_A_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_URB_T_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_URB_G_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Scorpion\V_M808_BLK_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_Decals_CA",
					"V_FZ_Vehicles\data\Scorpion\V_M808_BLK_I_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_BLK_A_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_BLK_T_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_BLK_G_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Scorpion\V_M808_FRS_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_Decals_CA",
					"V_FZ_Vehicles\data\Scorpion\V_M808_FRS_I_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_FRS_A_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_FRS_T_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_FRS_G_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Scorpion\V_M808_TND_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_Decals_CA",
					"V_FZ_Vehicles\data\Scorpion\V_M808_TND_I_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_TND_A_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_TND_T_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_TND_G_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Scorpion\V_M808_DUN_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_Decals_CA",
					"V_FZ_Vehicles\data\Scorpion\V_M808_DUN_I_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_DUN_A_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_DUN_T_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_DUN_G_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Scorpion\V_M808_CLS_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_Decals_CA",
					"V_FZ_Vehicles\data\Scorpion\V_M808_CLS_I_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_CLS_A_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_CLS_T_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_CLS_G_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Scorpion\V_M808_OD3_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_Decals_CA",
					"V_FZ_Vehicles\data\Scorpion\V_M808_OD3_I_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_OD3_A_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_OD3_T_CO",
					"V_FZ_Vehicles\data\Scorpion\V_M808_OD3_G_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Scorpion\V_M808_OD3_CO",
			"V_FZ_Vehicles\data\Scorpion\V_M808_Decals_CA",
			"V_FZ_Vehicles\data\Scorpion\V_M808_OD3_I_CO",
			"V_FZ_Vehicles\data\Scorpion\V_M808_OD3_A_CO",
			"V_FZ_Vehicles\data\Scorpion\V_M808_OD3_T_CO",
			"V_FZ_Vehicles\data\Scorpion\V_M808_OD3_G_CO"
		};
	};
	class O_Truck_03_ammo_F;
	class VES_HDV134_Resupply: O_Truck_03_ammo_F
	{
		dlc="Zulu";
		author="Vespade";
		displayName="HDV-134 Resupply Buffalo";
		side=1;
		editorCategory="V_FZ_EdCat_Zulu";
		crew="VES_Rifleman_MA5B_MAR";
		textureList[]={};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=40;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=40;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=14;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=16;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=12;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=26;
			};
			class _xx_OPTRE_60Rnd_762x51_Mag
			{
				name="OPTRE_60Rnd_762x51_Mag";
				count=16;
			};
			class _xx_OPTRE_15Rnd_762x51_Mag
			{
				name="OPTRE_15Rnd_762x51_Mag";
				count=24;
			};
			class _xx_OPTRE_100Rnd_95x40_Box
			{
				name="OPTRE_100Rnd_95x40_Box";
				count=10;
			};
			class _xx_OPTRE_4Rnd_145x114_APFSDS_Mag
			{
				name="OPTRE_4Rnd_145x114_APFSDS_Mag";
				count=4;
			};
			class _xx_OPTRE_4Rnd_145x114_HEDP_Mag
			{
				name="OPTRE_4Rnd_145x114_HEDP_Mag";
				count=4;
			};
			class _xx_OPTRE_48Rnd_5x23mm_FMJ_Mag
			{
				name="OPTRE_48Rnd_5x23mm_FMJ_Mag";
				count=16;
			};
			class _xx_OPTRE_6Rnd_8Gauge_HEDP
			{
				name="OPTRE_6Rnd_8Gauge_HEDP";
				count=10;
			};
			class _xx_OPTRE_6Rnd_8Gauge_Pellets
			{
				name="OPTRE_6Rnd_8Gauge_Pellets";
				count=10;
			};
			class _xx_OPTRE_6Rnd_8Gauge_Slugs
			{
				name="OPTRE_6Rnd_8Gauge_Slugs";
				count=10;
			};
			class _xx_OPTRE_36Rnd_95x40_Mag
			{
				name="OPTRE_36Rnd_95x40_Mag";
				count=20;
			};
			class _xx_OPTRE_8Rnd_127x40_Mag
			{
				name="OPTRE_8Rnd_127x40_Mag";
				count=16;
			};
			class _xx_OPTRE_16Rnd_127x40_Mag
			{
				name="OPTRE_16Rnd_127x40_Mag";
				count=12;
			};
			class _xx_kka3_ace_extension_Land_BagFence_Long_F
			{
				name="kka3_ace_extension_Land_BagFence_Long_F";
				count=8;
			};
			class _xx_kka3_ace_extension_Land_BagFence_Round_F
			{
				name="kka3_ace_extension_Land_BagFence_Round_F";
				count=6;
			};
			class _xx_kka3_ace_extension_Campfire_burning_F
			{
				name="kka3_ace_extension_Campfire_burning_F";
				count=1;
			};
			class _xx_kka3_ace_extension_Land_CampingTable_F
			{
				name="kka3_ace_extension_Land_CampingTable_F";
				count=4;
			};
			class _xx_kka3_ace_extension_Land_CampingChair_V1_F
			{
				name="kka3_ace_extension_Land_CampingChair_V1_F";
				count=6;
			};
			class _xx_kka3_ace_extension_Land_Camping_Light_off_F
			{
				name="kka3_ace_extension_Land_Camping_Light_off_F";
				count=4;
			};
			class _xx_kka3_ace_extension_Land_Pallet_vertical_F
			{
				name="kka3_ace_extension_Land_Pallet_vertical_F";
				count=4;
			};
			class _xx_kka3_ace_extension_roadbarrier_f
			{
				name="kka3_ace_extension_roadbarrier_f";
				count=5;
			};
			class _xx_kka3_ace_extension_roadbarrier_small_f
			{
				name="kka3_ace_extension_roadbarrier_small_f";
				count=3;
			};
			class _xx_kka3_ace_extension_roadcone_f
			{
				name="kka3_ace_extension_roadcone_f";
				count=5;
			};
			class _xx_kka3_ace_extension_roadcone_l_f
			{
				name="kka3_ace_extension_roadcone_l_f";
				count=3;
			};
			class _xx_kka3_ace_extension_TapeSign_F
			{
				name="kka3_ace_extension_TapeSign_F";
				count=4;
			};
			class _xx_kka3_ace_extension_Target_F
			{
				name="kka3_ace_extension_Target_F";
				count=2;
			};
			class _xx_kka3_ace_extension_Land_PortableLight_single_F
			{
				name="kka3_ace_extension_Land_PortableLight_single_F";
				count=6;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
		};
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
		textureList[]={};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5"
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_S_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_S_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_S_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_S_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_S_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_S_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_S_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_S_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_S_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO",
					"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO",
			"\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO"
		};
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
		textureList[]={};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Mike Hartley";
				displayName="Desert";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_F_CO"
				};
			};
			class ves_woodland
			{
				author="Mike Hartley";
				displayName="Woodland";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_F_CO"
				};
			};
			class ves_jungle
			{
				author="Mike Hartley";
				displayName="Jungle";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_F_CO"
				};
			};
			class ves_urban
			{
				author="Mike Hartley";
				displayName="Urban";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_F_CO"
				};
			};
			class ves_black
			{
				author="Mike Hartley";
				displayName="Black";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_F_CO"
				};
			};
			class ves_frost
			{
				author="Mike Hartley";
				displayName="Frost";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_F_CO"
				};
			};
			class ves_tundra
			{
				author="Mike Hartley";
				displayName="Tundra";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_F_CO"
				};
			};
			class ves_dunes
			{
				author="Mike Hartley";
				displayName="Dunes";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_F_CO"
				};
			};
			class ves_classic
			{
				author="Mike Hartley";
				displayName="Classic";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_F_CO"
				};
			};
			class ves_olive
			{
				author="Mike Hartley";
				displayName="Olive";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_F_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_F_CO"
		};
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
		textureList[]={};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO",
					"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_S_CO",
			"\A3\Structures_F\Data\Metal\Containers\Containers_02_set_CO"
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
		textureList[]={};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DES_C_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_WDL_C_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_JNG_C_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_URB_C_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_BLK_C_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_FRS_C_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_TND_C_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_DUN_C_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_CLS_C_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO",
					"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_C_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_CO",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_A_CO",
			"\V_FZ_Vehicles\data\Buffalo\V_HDV134_OD3_C_CO"
		};
	};
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
				magazines[]=
				{
					"OPTRE_48Rnd_5x23mm_Mag_tracer_yellow",
					"OPTRE_48Rnd_5x23mm_Mag_tracer_yellow",
					"Laserbatteries"
				};
				weapons[]=
				{
					"VES_M7_I",
					"Laserdesignator_mounted"
				};
			};
		};
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="";
			displayName="";
			dissasembleTo[]=
			{
				"VES_MQ49_Pack"
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\Data\MQ49\V_MQ49_CO"
		};
	};
	class VES_MQ49_RD: VES_MQ49_SD
	{
		dlc="Zulu";
		author="Vespade";
		scope=2;
		scopeCurator=2;
		displayName="MQ-49 Recon Drone";
		class Turrets
		{
		};
		class assembleInfo: assembleInfo
		{
			dissasmbleTo[]=
			{
				"VES_MQ49R_Pack"
			};
		};
	};
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
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=8;
			};
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_DES_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_DES_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_DES_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_DES_S_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_WDL_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_WDL_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_WDL_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_WDL_S_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_JNG_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_JNG_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_JNG_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_JNG_S_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_URB_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URB_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URB_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URB_S_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_S_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_FRS_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_FRS_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_FRS_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_FRS_S_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_TND_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_TND_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_TND_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_TND_S_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_DUN_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_DUN_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_DUN_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_DUN_S_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_CLS_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_CLS_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_CLS_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_CLS_S_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_S_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_A_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_T_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_S_CO"
		};
		class EventHandlers;
        class UserActions
		{
			class FullAirbrakeEngage
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngage";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};   
		};
	};
	class VES_UH144_A_URF: VES_UH144_A
	{
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		class textureSources
		{
			class ves_urf_green
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_URF_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URF_A_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URF_T_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URF_S_CO.paa"
				};
			};
			class ves_urf_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_URD_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URD_A_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URD_T_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URD_S_CO.paa"
				};
			};
			class ves_urf_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_URT_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URT_A_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URT_T_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URT_S_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Falcon\V_UH144_URF_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_URF_A_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_URF_T_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_URF_S_CO.paa"
		};
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
			init="0 = _this spawn V_FZ_fnc_FalconAddMGs";
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
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=8;
			};
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_DES_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_DES_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_DES_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_DES_S_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_WDL_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_WDL_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_WDL_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_WDL_S_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_JNG_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_JNG_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_JNG_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_JNG_S_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_URB_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URB_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URB_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URB_S_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_BLK_S_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_FRS_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_FRS_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_FRS_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_FRS_S_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_TND_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_TND_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_TND_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_TND_S_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_DUN_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_DUN_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_DUN_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_DUN_S_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_CLS_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_CLS_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_CLS_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_CLS_S_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_A_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_T_CO",
					"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_S_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_A_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_T_CO",
			"V_FZ_Vehicles\data\Falcon\V_UH144_OD3_S_CO"
		};
		class EventHandlers;
        class UserActions
		{
			class FullAirbrakeEngage
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngage";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};   
		};
	};
	class VES_UH144_URF: VES_UH144
	{
		side=0;
		forceInGarage=0;
		crew="OPTRE_Ins_URF_Rifleman_AR";
		editorCategory="V_FZ_EdCat_URF";
		class textureSources
		{
			class ves_urf_green
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_URF_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URF_A_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URF_T_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URF_S_CO.paa"
				};
			};
			class ves_urf_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_URD_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URD_A_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URD_T_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URD_S_CO.paa"
				};
			};
			class ves_urf_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Falcon\V_UH144_URT_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URT_A_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URT_T_CO.paa",
					"V_FZ_Vehicles\data\Falcon\V_UH144_URT_S_CO.paa"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Falcon\V_UH144_URF_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_URF_A_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_URF_T_CO.paa",
			"V_FZ_Vehicles\data\Falcon\V_UH144_URF_S_CO.paa"
		};
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
			init="0 = _this spawn V_FZ_fnc_FalconAddMGs";
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
		tf_isolatedAmount=0.40000001;
		tf_range=18500;
		armor=350;
		canFloat=1;
		maxFordingDepth=5;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"Ti"
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=16;
			};
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=40;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=40;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=14;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=16;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=12;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=26;
			};
			class _xx_OPTRE_60Rnd_762x51_Mag
			{
				name="OPTRE_60Rnd_762x51_Mag";
				count=16;
			};
			class _xx_OPTRE_15Rnd_762x51_Mag
			{
				name="OPTRE_15Rnd_762x51_Mag";
				count=24;
			};
			class _xx_OPTRE_100Rnd_95x40_Box
			{
				name="OPTRE_100Rnd_95x40_Box";
				count=10;
			};
			class _xx_OPTRE_4Rnd_145x114_APFSDS_Mag
			{
				name="OPTRE_4Rnd_145x114_APFSDS_Mag";
				count=4;
			};
			class _xx_OPTRE_4Rnd_145x114_HEDP_Mag
			{
				name="OPTRE_4Rnd_145x114_HEDP_Mag";
				count=4;
			};
			class _xx_OPTRE_48Rnd_5x23mm_FMJ_Mag
			{
				name="OPTRE_48Rnd_5x23mm_FMJ_Mag";
				count=16;
			};
			class _xx_OPTRE_6Rnd_8Gauge_HEDP
			{
				name="OPTRE_6Rnd_8Gauge_HEDP";
				count=10;
			};
			class _xx_OPTRE_6Rnd_8Gauge_Pellets
			{
				name="OPTRE_6Rnd_8Gauge_Pellets";
				count=10;
			};
			class _xx_OPTRE_6Rnd_8Gauge_Slugs
			{
				name="OPTRE_6Rnd_8Gauge_Slugs";
				count=10;
			};
			class _xx_OPTRE_36Rnd_95x40_Mag
			{
				name="OPTRE_36Rnd_95x40_Mag";
				count=20;
			};
			class _xx_OPTRE_8Rnd_127x40_Mag
			{
				name="OPTRE_8Rnd_127x40_Mag";
				count=16;
			};
			class _xx_OPTRE_16Rnd_127x40_Mag
			{
				name="OPTRE_16Rnd_127x40_Mag";
				count=12;
			};
			class _xx_kka3_ace_extension_Land_BagFence_Long_F
			{
				name="kka3_ace_extension_Land_BagFence_Long_F";
				count=8;
			};
			class _xx_kka3_ace_extension_Land_BagFence_Round_F
			{
				name="kka3_ace_extension_Land_BagFence_Round_F";
				count=6;
			};
			class _xx_kka3_ace_extension_Campfire_burning_F
			{
				name="kka3_ace_extension_Campfire_burning_F";
				count=1;
			};
			class _xx_kka3_ace_extension_Land_CampingTable_F
			{
				name="kka3_ace_extension_Land_CampingTable_F";
				count=4;
			};
			class _xx_kka3_ace_extension_Land_CampingChair_V1_F
			{
				name="kka3_ace_extension_Land_CampingChair_V1_F";
				count=6;
			};
			class _xx_kka3_ace_extension_Land_Camping_Light_off_F
			{
				name="kka3_ace_extension_Land_Camping_Light_off_F";
				count=4;
			};
			class _xx_kka3_ace_extension_Land_Pallet_vertical_F
			{
				name="kka3_ace_extension_Land_Pallet_vertical_F";
				count=4;
			};
			class _xx_kka3_ace_extension_roadbarrier_f
			{
				name="kka3_ace_extension_roadbarrier_f";
				count=5;
			};
			class _xx_kka3_ace_extension_roadbarrier_small_f
			{
				name="kka3_ace_extension_roadbarrier_small_f";
				count=3;
			};
			class _xx_kka3_ace_extension_roadcone_f
			{
				name="kka3_ace_extension_roadcone_f";
				count=5;
			};
			class _xx_kka3_ace_extension_roadcone_l_f
			{
				name="kka3_ace_extension_roadcone_l_f";
				count=3;
			};
			class _xx_kka3_ace_extension_TapeSign_F
			{
				name="kka3_ace_extension_TapeSign_F";
				count=4;
			};
			class _xx_kka3_ace_extension_Target_F
			{
				name="kka3_ace_extension_Target_F";
				count=2;
			};
			class _xx_kka3_ace_extension_Land_PortableLight_single_F
			{
				name="kka3_ace_extension_Land_PortableLight_single_F";
				count=6;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_DES_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_WDL_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_JNG_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_URB_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_BLK_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_FRS_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_TND_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_DUN_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_CLS_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_OD3_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Pelican\V_D77HTCI_OD3_CO"
		};
		class UserActions
		{
			class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
            class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID=58;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};    
            class Afterburners900Engage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Engage";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				userActionID=54;
			};
			class Afterburners900Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=55;
			}; 
			class PelLift_LoadPodMenu
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				displayName="<t color='#FFBF00'>Load Supply Pods";
				displayNameDefault="<t color='#FFBF00'>Load Supply Pods";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
				textToolTip="<t color='#FFBF00'>Load Supply Pods";
				userActionID=9;
			};
			class PelLift_LoadVehicle
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				displayName="<t color='#FFBF00'>Maglock Cargo";
				displayNameDefault="<t color='#FFBF00'>Maglock Cargo";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_PelicanLoadValidate;";
				textToolTip="<t color='#FFBF00'>Maglock Cargo";
				userActionID=6;
			};
			class PelLift_LoadDevice
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player) AND ((vehicle player) isKindOf ""VES_HDV134_Fujikawa"") AND (vehicle player getvariable [""VES_DeviceAvailable"",true])";
				displayName="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				displayNameDefault="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=4;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_SlipspaceRuptureDetected;";
				textToolTip="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				userActionID=6;
			};
			class PelLift_OpenDetatchPodMenu
			{
				condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				displayNameDefault="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
				textToolTip="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				userActionID=8;
			};
			class PelLift_UnLoadVehicle
			{
				condition="(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Release Maglock";
				displayNameDefault="<t color='#DF3A01'>Release Maglock";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = [this] spawn V_FZ_fnc_PelicanUnLoadValidate;";
				textToolTip="<t color='#DF3A01'>Release Maglock";
				userActionID=7;
			};
			class RampClose
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))";
				displayName="Close Ramp";
				displayNameDefault="Close Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				textToolTip="Close Ramp";
				userActionID=51;
			};
			class RampOpen
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this))";
				displayName="Open Ramp";
				displayNameDefault="Open Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				textToolTip="Open Ramp";
				userActionID=50;
			};
		};
		class EventHandlers;
	};
	class VES_D77HTCIS_A: VES_D77HTCI_A
	{
		displayName="D77H-TCI/AV Pelican (MG)";
		class EventHandlers: EventHandlers
		{
			init="0 = _this spawn V_FZ_fnc_PelicanAddMG";
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
		tf_isolatedAmount=0.40000001;
		tf_range=18500;
		armor=350;
		canFloat=1;
		maxFordingDepth=5;
		visionMode[]=
		{
			"Normal",
			"NVG",
			"Ti"
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=40;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=40;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=14;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=16;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=12;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=26;
			};
			class _xx_OPTRE_60Rnd_762x51_Mag
			{
				name="OPTRE_60Rnd_762x51_Mag";
				count=16;
			};
			class _xx_OPTRE_15Rnd_762x51_Mag
			{
				name="OPTRE_15Rnd_762x51_Mag";
				count=24;
			};
			class _xx_OPTRE_100Rnd_95x40_Box
			{
				name="OPTRE_100Rnd_95x40_Box";
				count=10;
			};
			class _xx_OPTRE_4Rnd_145x114_APFSDS_Mag
			{
				name="OPTRE_4Rnd_145x114_APFSDS_Mag";
				count=4;
			};
			class _xx_OPTRE_4Rnd_145x114_HEDP_Mag
			{
				name="OPTRE_4Rnd_145x114_HEDP_Mag";
				count=4;
			};
			class _xx_OPTRE_48Rnd_5x23mm_FMJ_Mag
			{
				name="OPTRE_48Rnd_5x23mm_FMJ_Mag";
				count=16;
			};
			class _xx_OPTRE_6Rnd_8Gauge_HEDP
			{
				name="OPTRE_6Rnd_8Gauge_HEDP";
				count=10;
			};
			class _xx_OPTRE_6Rnd_8Gauge_Pellets
			{
				name="OPTRE_6Rnd_8Gauge_Pellets";
				count=10;
			};
			class _xx_OPTRE_6Rnd_8Gauge_Slugs
			{
				name="OPTRE_6Rnd_8Gauge_Slugs";
				count=10;
			};
			class _xx_OPTRE_36Rnd_95x40_Mag
			{
				name="OPTRE_36Rnd_95x40_Mag";
				count=20;
			};
			class _xx_OPTRE_8Rnd_127x40_Mag
			{
				name="OPTRE_8Rnd_127x40_Mag";
				count=16;
			};
			class _xx_OPTRE_16Rnd_127x40_Mag
			{
				name="OPTRE_16Rnd_127x40_Mag";
				count=12;
			};
			class _xx_kka3_ace_extension_Land_BagFence_Long_F
			{
				name="kka3_ace_extension_Land_BagFence_Long_F";
				count=8;
			};
			class _xx_kka3_ace_extension_Land_BagFence_Round_F
			{
				name="kka3_ace_extension_Land_BagFence_Round_F";
				count=6;
			};
			class _xx_kka3_ace_extension_Campfire_burning_F
			{
				name="kka3_ace_extension_Campfire_burning_F";
				count=1;
			};
			class _xx_kka3_ace_extension_Land_CampingTable_F
			{
				name="kka3_ace_extension_Land_CampingTable_F";
				count=4;
			};
			class _xx_kka3_ace_extension_Land_CampingChair_V1_F
			{
				name="kka3_ace_extension_Land_CampingChair_V1_F";
				count=6;
			};
			class _xx_kka3_ace_extension_Land_Camping_Light_off_F
			{
				name="kka3_ace_extension_Land_Camping_Light_off_F";
				count=4;
			};
			class _xx_kka3_ace_extension_Land_Pallet_vertical_F
			{
				name="kka3_ace_extension_Land_Pallet_vertical_F";
				count=4;
			};
			class _xx_kka3_ace_extension_roadbarrier_f
			{
				name="kka3_ace_extension_roadbarrier_f";
				count=5;
			};
			class _xx_kka3_ace_extension_roadbarrier_small_f
			{
				name="kka3_ace_extension_roadbarrier_small_f";
				count=3;
			};
			class _xx_kka3_ace_extension_roadcone_f
			{
				name="kka3_ace_extension_roadcone_f";
				count=5;
			};
			class _xx_kka3_ace_extension_roadcone_l_f
			{
				name="kka3_ace_extension_roadcone_l_f";
				count=3;
			};
			class _xx_kka3_ace_extension_TapeSign_F
			{
				name="kka3_ace_extension_TapeSign_F";
				count=4;
			};
			class _xx_kka3_ace_extension_Target_F
			{
				name="kka3_ace_extension_Target_F";
				count=2;
			};
			class _xx_kka3_ace_extension_Land_PortableLight_single_F
			{
				name="kka3_ace_extension_Land_PortableLight_single_F";
				count=6;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_DES_CO"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_WDL_CO"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_JNG_CO"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_URB_CO"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_BLK_CO"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_FRS_CO"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_TND_CO"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_DUN_CO"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_CLS_CO"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Pelican\V_D77HTCI_OD3_CO"
				};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Pelican\V_D77HTCI_OD3_CO"
		};
		class UserActions
		{
			class FullAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
            class HalfAirbrakeEngageFast
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngageFast; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID=58;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage; 0 = this spawn V_FZ_fnc_ThrusterDeAnimate";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};    
            class Afterburners900Engage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Engage";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				userActionID=54;
			};
			class Afterburners900Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners900Disengage; 0 = this spawn V_FZ_fnc_ThrusterAnimate";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=55;
			}; 
			class PelLift_LoadPodMenu
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND ((vehicle player) isKindOf ""OPTRE_cart_base"")";
				displayName="<t color='#FFBF00'>Load Supply Pods";
				displayNameDefault="<t color='#FFBF00'>Load Supply Pods";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject = this; createDialog ""OPTRE_PelicanLoadSupplyPods_Menu""; OPTRE_PelicanLoadSupplyPods_Menu_cam = ""camera"" CamCreate getPosATL OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject;  OPTRE_PelicanLoadSupplyPods_Menu_cam CamSetTarget OPTRE_PelicanLoadSupplyPods_Menu_PelicanObject; OPTRE_PelicanLoadSupplyPods_Menu_cam CameraEffect [""Internal"",""Back""]; OPTRE_PelicanLoadSupplyPods_Menu_cam camSetRelPos [4,-12,-2.4]; OPTRE_PelicanLoadSupplyPods_Menu_cam CamCommit 0; showCinemaBorder false; if (sunOrMoon == 0) then {camUseNVG true;};";
				textToolTip="<t color='#FFBF00'>Load Supply Pods";
				userActionID=9;
			};
			class PelLift_LoadVehicle
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player)";
				displayName="<t color='#FFBF00'>Maglock Cargo";
				displayNameDefault="<t color='#FFBF00'>Maglock Cargo";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=15;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_PelicanLoadValidate;";
				textToolTip="<t color='#FFBF00'>Maglock Cargo";
				userActionID=6;
			};
			class PelLift_LoadDevice
			{
				condition="!(player in [gunner this, driver this]) AND (player == driver vehicle player) AND (str (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]]) == ""[]"") AND (vehicle player != player) AND ((vehicle player) isKindOf ""VES_HDV134_Fujikawa"") AND (vehicle player getvariable [""VES_DeviceAvailable"",true])";
				displayName="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				displayNameDefault="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=2;
				radius=4;
				showWindow=0;
				statement="0 = [this,vehicle player] spawn V_FZ_fnc_SlipspaceRuptureDetected;";
				textToolTip="<t color='#FFBF05'>Maglock Shaw-Fujikawa Device";
				userActionID=6;
			};
			class PelLift_OpenDetatchPodMenu
			{
				condition="(player in [gunner this, driver this]) AND (({_x isKindOf ""OPTRE_Ammo_SupplyPod_Empty""} count (this getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				displayNameDefault="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_PelicanLoadSupplyPodMenuDetachMenu;";
				textToolTip="<t color='#DF3A01'>Detach Individual Supply Pod Menu";
				userActionID=8;
			};
			class PelLift_UnLoadVehicle
			{
				condition="(player in [gunner this, driver this]) AND ((count (vehicle player getVariable [""OPTRE_Pelican_AttachedToVehiclesEffect"",[]])) > 0)";
				displayName="<t color='#DF3A01'>Release Maglock";
				displayNameDefault="<t color='#DF3A01'>Release Maglock";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=3;
				radius=5;
				showWindow=0;
				statement="0 = [this] spawn V_FZ_fnc_PelicanUnLoadValidate;";
				textToolTip="<t color='#DF3A01'>Release Maglock";
				userActionID=7;
			};
			class RampClose
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" > 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" > 0.5) AND (alive this))";
				displayName="Close Ramp";
				displayNameDefault="Close Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",0]; this animate [""cargoDoor_2"",0]";
				textToolTip="Close Ramp";
				userActionID=51;
			};
			class RampOpen
			{
				animPeriod=5;
				condition="((this animationPhase ""cargoDoor_1"" < 0.5) AND (!(this getvariable [""VES_PelicanMG_Status"",false])) AND (this animationPhase ""cargoDoor_2"" < 0.5) AND (alive this))";
				displayName="Open Ramp";
				displayNameDefault="Open Ramp";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=4;
				radius=4;
				showWindow=0;
				statement="this animate [""cargoDoor_1"",1]; this animate [""cargoDoor_2"",1]";
				textToolTip="Open Ramp";
				userActionID=50;
			};
		};
		class EventHandlers;
	};
	class VES_D77HTCIS: VES_D77HTCI
	{
		displayName="D77H-TCI Pelican (MG)";
		class EventHandlers: EventHandlers
		{
			init="0 = _this spawn V_FZ_fnc_PelicanAddMG";
		};
	};
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
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
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
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_DES"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_WDL"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_JNG"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_URB"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_BLK"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_FRS"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_TND"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_DUN"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_CLS"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_OD3"
				};
			};
		};
		hiddenSelectionstextures[]=
		{
			"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_OD3"
		};
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
		tf_isolatedAmount=0.40000001;
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
			class _xx_B_Parachute
			{
				backpack="B_Parachute";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_DES"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_WDL"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_JNG"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_URB"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_BLK"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_FRS"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_TND"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_DUN"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_CLS"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_OD3"
				};
			};
		};
		hiddenSelectionstextures[]=
		{
			"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_OD3"
		};
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
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
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
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_DES"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_WDL"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_JNG"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_URB"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_BLK"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_FRS"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_TND"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_DUN"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_CLS"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_OD3"
				};
			};
		};
		hiddenSelectionstextures[]=
		{
			"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_OD3"
		};
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
		tf_isolatedAmount=0.40000001;
		tf_range=12000;
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
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_DES"
				};
			};
			class ves_woodland
			{
				author="Vespade";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_WDL"
				};
			};
			class ves_jungle
			{
				author="Vespade";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_JNG"
				};
			};
			class ves_urban
			{
				author="Vespade";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_URB"
				};
			};
			class ves_black
			{
				author="Vespade";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_BLK"
				};
			};
			class ves_frost
			{
				author="Vespade";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_FRS"
				};
			};
			class ves_tundra
			{
				author="Vespade";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_TND"
				};
			};
			class ves_dunes
			{
				author="Vespade";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_DUN"
				};
			};
			class ves_classic
			{
				author="Vespade";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_CLS"
				};
			};
			class ves_olive
			{
				author="Vespade";
				displayName="Olive";
				textures[]=
				{
					"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_OD3"
				};
			};
		};
		hiddenSelectionstextures[]=
		{
			"V_FZ_Vehicles\data\Hornet\V_FZ_Hornet_OD3"
		};
	};
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
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND !(this getvariable [""VES_Pod_Launched"",false])";
				displayName="<t color='#FE2E2E'>Launch Lifeboat";
				displayNameDefault="<t color='#FE2E2E'>Launch Lifeboat";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_LifeboatLaunch";
				textToolTip="<t color='#FE2E2E'>Launch Lifeboat";
				userActionID=54;
			};
			class AirbrakeEngage
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 200) AND ((getPosATL this) select 2) < 50";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_AirbrakeEngage";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=55;
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
    class OPTRE_AV22_Sparrowhawk_Base;
    class VES_AV22_Sparrowhawk_Base_F: OPTRE_AV22_Sparrowhawk_Base
    {
        class Turrets;
        class MFD;
    };
    class VES_AV22_Sparrowhawk_Base: VES_AV22_Sparrowhawk_Base_F
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
        class UserActions
		{
			class FullAirbrakeEngage
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 100)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes";
				displayNameDefault="<t color='#FE2E2E'>Engage Airbrakes";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_FullAirbrakeEngage";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes";
				userActionID=57;
			};
            class HalfAirbrakeEngage
			{
				animPeriod=5;
				condition="(player == driver this) AND (alive this) AND ((speed this) > 450)";
				displayName="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				displayNameDefault="<t color='#F28D00'>Engage Airbrakes (Half)";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_HalfAirbrakeEngage";
				textToolTip="<t color='#FE2E2E'>Engage Airbrakes (Half)";
				userActionID=58;
			};
            class Thruster400Engage
			{
				animPeriod=5;
				condition="(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (!(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this) AND  ((getPosATL this) select 2) > 1";
				displayName="<t color='#04B45F'>Engage Forward Thrusters";
				displayNameDefault="<t color='#04B45F'>Engage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Engage";
				textToolTip="<t color='#04B45F'>Engage Forward Thrusters";
				userActionID=52;
			};
			class Thruster400Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Forward Thrusters";
				displayNameDefault="<t color='#FCE205'>Disengage Forward Thrusters";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Thruster400Disengage";
				textToolTip="<t color='#FCE205'>Disengage Forward Thrusters";
				userActionID=53;
			};    
            class Afterburnerss600Engage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Thruster_EngagedStatus"",false]) AND (!(this getvariable [""OPTRE_Afterburnerss_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND (isEngineOn this)";
				displayName="<t color='#04B45F'>Engage Afterburners";
				displayNameDefault="<t color='#04B45F'>Engage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners600Engage";
				textToolTip="<t color='#04B45F'>Engage Afterburners";
				userActionID=54;
			};
			class Afterburners600Disengage
			{
				animPeriod=5;
				condition="(this getvariable [""OPTRE_Afterburners_EngagedStatus"",false]) AND (player == driver this) AND (alive this)";
				displayName="<t color='#FCE205'>Disengage Afterburners";
				displayNameDefault="<t color='#FCE205'>Disengage Afterburners";
				onlyForPlayer=0;
				position="cargo_door_handle";
				priority=10;
				radius=100000;
				showWindow=0;
				statement="0 = this spawn V_FZ_fnc_Afterburners600Disengage";
				textToolTip="<t color='#FCE205'>Disengage Afterburners";
				userActionID=55;
			}; 
		};
        class MFD;
    };
    class VES_AV22_Sparrowhawk_PD_Base: VES_AV22_Sparrowhawk_Base_F
    {
        dlc="Zulu";
		author="Vespade + DaveSkywalker";
		editorCategory="V_FZ_EdCat_PD_Zulu";
        editorSubcategory="V_FZ_EdSubCat_Rotary";
        side=2;
		crew="VES_Rifleman_MA5B_AMP";
        tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=15000;
        class Turrets: Turrets
        {
            class CopilotTurret;
        };
        class UserActions;
        class MFD;
    };
    class VES_AV22_Sparrowhawk: VES_AV22_Sparrowhawk_Base
	{
		displayName="AV-22V Sparrowhawk";
		author="Vespade + DaveSkywalker";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=1;
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
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade + DaveSkywalker";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade + DaveSkywalker";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade + DaveSkywalker";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_urban
			{
				author="Vespade + DaveSkywalker";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_black
			{
				author="Vespade + DaveSkywalker";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_frost
			{
				author="Vespade + DaveSkywalker";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade + DaveSkywalker";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade + DaveSkywalker";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_classic
			{
				author="Vespade + DaveSkywalker";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_olive
			{
				author="Vespade + DaveSkywalker";
				displayName="Olive";
				textures[]=
				{
				    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
        };
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B1_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B2_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B3_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B4_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B5_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_FCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_SPLASER_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_HCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
		};
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
		displayName="AV-22VA Sparrowhawk";
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
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade + DaveSkywalker";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade + DaveSkywalker";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade + DaveSkywalker";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_urban
			{
				author="Vespade + DaveSkywalker";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_black
			{
				author="Vespade + DaveSkywalker";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_frost
			{
				author="Vespade + DaveSkywalker";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade + DaveSkywalker";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade + DaveSkywalker";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_classic
			{
				author="Vespade + DaveSkywalker";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_olive
			{
				author="Vespade + DaveSkywalker";
				displayName="Olive";
				textures[]=
				{
				    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
        };
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B1_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B2_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B3_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B4_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B5_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_FCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_SPLASER_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_HCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
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
					"OPTRE_M6_Laser",
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
	class VES_AV22B_Sparrowhawk: VES_AV22_Sparrowhawk
	{
		displayName="AV-22VB Sparrowhawk";
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
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade + DaveSkywalker";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade + DaveSkywalker";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade + DaveSkywalker";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_urban
			{
				author="Vespade + DaveSkywalker";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_black
			{
				author="Vespade + DaveSkywalker";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_frost
			{
				author="Vespade + DaveSkywalker";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade + DaveSkywalker";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade + DaveSkywalker";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_classic
			{
				author="Vespade + DaveSkywalker";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_olive
			{
				author="Vespade + DaveSkywalker";
				displayName="Olive";
				textures[]=
				{
				    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
        };
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B1_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B2_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B3_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B4_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B5_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_FCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_SPLASER_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_HCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
		};
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
					"OPTRE_M6_Laser",
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
	class VES_AV22C_Sparrowhawk: VES_AV22_Sparrowhawk
	{
		displayName="AV-22VC Sparrowhawk";
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
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
		class textureSources
		{
			class ves_desert
			{
				author="Vespade + DaveSkywalker";
				displayName="Desert";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DES_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_woodland
			{
				author="Vespade + DaveSkywalker";
				displayName="Woodland";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_WDL_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_jungle
			{
				author="Vespade + DaveSkywalker";
				displayName="Jungle";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_JNG_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_urban
			{
				author="Vespade + DaveSkywalker";
				displayName="Urban";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_URB_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_black
			{
				author="Vespade + DaveSkywalker";
				displayName="Black";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_BLK_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_frost
			{
				author="Vespade + DaveSkywalker";
				displayName="Frost";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_FRS_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_tundra
			{
				author="Vespade + DaveSkywalker";
				displayName="Tundra";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_TND_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_dunes
			{
				author="Vespade + DaveSkywalker";
				displayName="Dunes";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_DUN_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_classic
			{
				author="Vespade + DaveSkywalker";
				displayName="Classic";
				textures[]=
				{
					"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_CLS_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
			class ves_olive
			{
				author="Vespade + DaveSkywalker";
				displayName="Olive";
				textures[]=
				{
				    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B1_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B2_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B3_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B4_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B5_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_FCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_SPLASER_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_HCANNON_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
                    "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
				};
			};
        };
		hiddenSelectionsTextures[]=
		{
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B1_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B2_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B3_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B4_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_B5_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
			"V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_FCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_SPLASER_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_CANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_OD3_HCANNON_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_LIGHTS_CO.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_EXT_CA.paa",
            "V_FZ_Vehicles\data\Sparrowhawk\V_SPARROW_GLASS_INT_CA.paa"
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
    class VES_AV22_PD_Sparrowhawk: VES_AV22_Sparrowhawk_PD_Base
	{
		displayName="AV-22V Sparrowhawk (Police)";
		author="Vespade + DaveSkywalker";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		side=2;
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
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
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
	class VES_AV22A_PD_Sparrowhawk: VES_AV22_PD_Sparrowhawk
	{
		displayName="AV-22VA Sparrowhawk  (Police)";
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
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
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
					"OPTRE_M6_Laser",
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
	class VES_AV22B_PD_Sparrowhawk: VES_AV22_PD_Sparrowhawk
	{
		displayName="AV-22VB Sparrowhawk  (Police)";
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
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
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
					"OPTRE_M6_Laser",
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
	class VES_AV22C_PD_Sparrowhawk: VES_AV22_PD_Sparrowhawk
	{
		displayName="AV-22VC Sparrowhawk (Police)";
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
			class _xx_adv_aceCPR_AED
			{
				name="adv_aceCPR_AED";
				count=1;
			};
			class _xx_ACE_Fortify
			{
				name="ACE_Fortify";
				count=1;
			};
			class _xx_ACE_quikclot
			{
				name="ACE_quikclot";
				count=20;
			};
			class _xx_ACE_fieldDressing
			{
				name="ACE_fieldDressing";
				count=20;
			};
			class _xx_ACE_tourniquet
			{
				name="ACE_tourniquet";
				count=4;
			};
			class _xx_ACE_morphine
			{
				name="ACE_morphine";
				count=6;
			};
			class _xx_adv_aceSplint_splint
			{
				name="adv_aceSplint_splint";
				count=4;
			};
			class _xx_ACE_packingBandage
			{
				name="ACE_packingBandage";
				count=20;
			};
			class _xx_OPTRE_Biofoam
			{
				name="OPTRE_Biofoam";
				count=8;
			};
		};
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
};
