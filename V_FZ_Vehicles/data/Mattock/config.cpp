class CfgPatches
{
	class V_FZ_Vehicles_test
	{
		author="Fireteam Zulu";
		name="A2D: Fireteam Zulu";
		url="https://discord.gg/fa7Cguk";
		units[]=
		{
			"VES_M19_base",
			"VES_M19_urf",
			"VES_M19_civ",
			"VES_M19_civ_News"
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
			"A3_Soft_F",
			"A3_Air_F_Jets_Plane_Fighter_01"
		};
	};
};
class CfgVehicles
{
	class MRAP_02_base_F;
	class VES_M19_base: MRAP_02_base_F
	{
		displayName="M19 Hyena - UNSC (Unarmed)";
		author="Mike Hartley";
		side=1;
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		ace_refuel_fuelCapacity=150;
		ace_refuel_hooks[]=
		{
			{-1.5,-0.60000002,-1.1}
		};
		enableRadio=1;
		tf_hasLRradio=1;
		tf_isolatedAmount=0.40000001;
		tf_range=10500;
		editorCategory="V_FZ_EdCat_Zulu";
		editorSubcategory = "EdSubcat_Cars";
		crew="VES_Rifleman_MA5B_MAR";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		class TextureSources
		{
			class ves_olive
			{
				displayName="Olive";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_UNSC_Olive_CO.paa",
					"Mattock\Data\V_Mattock_2_UNSC_Olive_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_black
			{
				displayName="Black";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_UNSC_black_CO.paa",
					"Mattock\Data\V_Mattock_2_UNSC_black_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_classic
			{
				displayName="Classic";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_UNSC_classic_CO.paa",
					"Mattock\Data\V_Mattock_2_UNSC_classic_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_desert
			{
				displayName="Desert";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_UNSC_desert_CO.paa",
					"Mattock\Data\V_Mattock_2_UNSC_desert_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_dunes
			{
				displayName="Dunes";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_UNSC_dunes_CO.paa",
					"Mattock\Data\V_Mattock_2_UNSC_dunes_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_frost
			{
				displayName="Frost";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_UNSC_frost_CO.paa",
					"Mattock\Data\V_Mattock_2_UNSC_frost_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_jungle
			{
				displayName="Jungle";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_UNSC_jungle_CO.paa",
					"Mattock\Data\V_Mattock_2_UNSC_jungle_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_tundra
			{
				displayName="tundra";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_UNSC_black_CO.paa",
					"Mattock\Data\V_Mattock_2_UNSC_black_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_urban
			{
				displayName="Urban";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_UNSC_urban_CO.paa",
					"Mattock\Data\V_Mattock_2_UNSC_urban_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_woodland
			{
				displayName="Woodland";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_UNSC_woodland_CO.paa",
					"Mattock\Data\V_Mattock_2_UNSC_woodland_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
		};
	};	
	class VES_M19_urf: VES_M19_base
	{
		displayName="Hyena - URF (Unarmed)";
		author="Mike Hartley";	
		side=0;
		editorCategory="V_FZ_EdCat_URF";
		crew="OPTRE_ins_urf_rifleman_ar";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		class TextureSources
		{
			class ves_urf_green
			{
				displayName="Green";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_urf_green_CO.paa",
					"Mattock\Data\V_Mattock_2_urf_green_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_urf_desert
			{
				displayName="Desert";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_urf_desert_CO.paa",
					"Mattock\Data\V_Mattock_2_urf_desert_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_urf_snow
			{
				displayName="Tundra";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_urf_tundra_CO.paa",
					"Mattock\Data\V_Mattock_2_urf_tundra_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
		};
	};
	class VES_M19_civ: VES_M19_base
	{
		displayName="Mattock";
		author="Mike Hartley";	
		side=3;
		editorCategory="V_FZ_EdCat_CIV";		
		crew="c_man_1";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		class TextureSources
		{
			class ves_civ_blue
			{
				displayName="Blue";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_Civ_blue_CO.paa",
					"Mattock\Data\V_Mattock_2_Civ_blue_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_civ_black
			{
				displayName="Black";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_Civ_black_CO.paa",
					"Mattock\Data\V_Mattock_2_Civ_black_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_civ_white
			{
				displayName="White";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_Civ_white_CO.paa",
					"Mattock\Data\V_Mattock_2_Civ_white_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
			class ves_civ_orange
			{
				displayName="Orange";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_Civ_orange_CO.paa",
					"Mattock\Data\V_Mattock_2_Civ_orange_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
		};
	};
	class VES_M19_civ_News: VES_M19_civ
	{
		displayName="Mattock - Intersystem News";
		author="Mike Hartley";	
		model="\A3\soft_f\MRAP_02\MRAP_02_unarmed_F";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		class TextureSources
		{
			class ves_civ_news
			{
				displayName="Intersystem News";
				author="Mike Hartley";
				textures[]=
				{
					"Mattock\Data\V_Mattock_1_Civ_news_CO.paa",
					"Mattock\Data\V_Mattock_2_Civ_news_CO.paa",
					"\A3\Data_F\Vehicles\turret_opfor_co.paa"
				};
			};
		};
	};
};