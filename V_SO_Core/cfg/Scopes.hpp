class InventoryOpticsItem_Base_F;

class OPTRE_SRS99_Scope;
class OPTRE_SRS99_Scope_v2: OPTRE_SRS99_Scope
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "Oracle N-variant SRS99D SF Scope";
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 10;
		opticType 				= 1;
		optics 					= 1;
		inertia 				= 0;
		modelOptics 			= "\OPTRE_Weapons\Sniper\SRS99D_Scope";
		class OpticsModes
		{
			class SRS99_Scope_View
			{
				opticsID 					= 1;
				useModelOptics 				= 1;
				opticsZoomMin 				= 0.0099999998;
				opticsZoomMax 				= 0.25;
				opticsZoomInit 				= 0.25;
				discretefov[] 				= {0.25,0.050000001,0.025,0.0099999998};
				discreteinitIndex 			= 0;
				discreteDistance[] 			= {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
				discreteDistanceInitIndex 	= 1;
				distanceZoomMin 			= 100;
				distanceZoomMax 			= 2000;
				memoryPointCamera 			= "opticView";
				modelOptics[]=
				{
					"\OPTRE_Weapons\Sniper\Sniper_Oracle10_Optic"
				};
				opticsPPEffects[]=
				{
					"OpticsCHAbera1",
					"OpticsBlur1"
				};
				visionMode[]=
				{
					"Normal",
					"NVG",
					"TI"
				};
				thermalMode[] 					 = {0,1,5,6,7};
				opticsFlare 					 = 1;
				opticsDisablePeripherialVision	 = 1;
			};
		};
	};
};

class OPTRE_SRS99C_Scope_v2: OPTRE_SRS99_Scope_v2
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "Oracle N-variant SRS99C SF Scope";
	model						= "\OPTRE_Weapons\Sniper\SRS99C_Scope";
	picture 					= "\OPTRE_weapons\sniper\icons\scope2";
	
	class ItemInfo: ItemInfo
	{
		modelOptics 			= "\OPTRE_Weapons\Sniper\SRS99C_Scope";
	};
};

class OPTRE_M73_Smartlink;
class OPTRE_M73_Smartlink_v2: OPTRE_M73_Smartlink
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "M73X Smart Link Scope";
	inertia 					= 0.1;
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 5;
		opticType 				= 1;
		optics 					= 1;
		modelOptics 			= "\OPTRE_Weapons\MG\M73_SmartLink";
		class OpticsModes
		{
			class M73_IS_v2
			{
				opticsID 						= 1;
				useModelOptics 					= 0;
				opticsPPEffects[] 				= {""};
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
				opticsZoomMin 					= 0.375;
				opticsZoomMax 					= 0.55000001;
				opticsZoomInit 					= 0.55000001;
				memoryPointCamera 				= "opticView";
				visionMode[] 					= {};
				distanceZoomMin 				= 300;
				distanceZoomMax 				= 300;
			};
			class M73_Scope_v2: M73_IS_v2
			{
				opticsID 						= 2;
				useModelOptics 					= 1;
				memoryPointCamera 				= "opticView2";
				opticsZoomMin 					= 0.15575;
				opticsZoomMax 					= 0.0623;
				opticsZoomInit 					= 0.0623;
				discreteinitIndex 				= 0;
				discretefov[] 					= {0.0623,0.046725,0.03115,0.015575};
				discreteDistance[] 				= {100,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex 		= 1;
				distanceZoomMin 				= 100;
				distanceZoomMax 				= 1000;
				modelOptics[] 					= {"\OPTRE_Weapons\BR\BR_Optic"};
				visionMode[] 					= {};
			};
		};
	};
};
class OPTRE_M6C_Scope;
class OPTRE_M6S_Scope: OPTRE_M6C_Scope
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "M6S 6E SmartLink Scope";
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 1;
		opticType 				= 1;
		optics 					= 1;
		modelOptics 			= "\OPTRE_Weapons\Pistol\m6c_scope";
		inertia 				= 0.1;
		class OpticsModes
		{
			class OPTRE_M6C_BUIS
			{
				opticsID 						= 1;
				useModelOptics 					= 0;
				opticsPPEffects[] 				= {""};
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
				opticsZoomMin 					= 0.375;
				opticsZoomMax 					= 1.1;
				opticsZoomInit 					= 0.75;
				memoryPointCamera 				= "opticView2";
				visionMode[] 					= {};
				distanceZoomMin 				= 100;
				distanceZoomMax 				= 100;
				cameraDir 						= "";
			};
			class OPTRE_M6C_BUISZoom: OPTRE_M6C_BUIS
			{
				opticsID 						= 2;
				useModelOptics 					= 1;
				opticsZoomMin 					= 0.15575;
				opticsZoomMax 					= 0.0623;
				opticsZoomInit 					= 0.0623;
				discretefov[] 					= {0.0623,0.046725,0.03115,0.015575};
				discreteinitIndex 				= 0;
				discreteDistance[] 				= {25,50,75,100,150,200,250,300,350,400};
				discreteDistanceInitIndex 		= 1;
				distanceZoomMin 				= 100;
				distanceZoomMax 				= 2000;
				memoryPointCamera 				= "opticView2";
				modelOptics[] 					= {"\OPTRE_Weapons\BR\BR_Optic"};
				visionMode[] 					= {};
			};
		};
	};
};

class OPTRE_M6GX_Scope: OPTRE_M6S_Scope
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "M6G 6E SmartLink Scope";
	model 						= "\OPTRE_Weapons\Pistol\m6g_scope";
	
	class ItemInfo: ItemInfo
	{
		modelOptics 			= "\OPTRE_Weapons\Pistol\m6g_scope";
	};
};

class OPTRE_M6D_Smartlink: OPTRE_M6GX_Scope
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "M6D KFA-2 SmartLink Scope";
	model 						= "\V_SO_Weapons\data\M6\M6D_Smartlink";
	
	class ItemInfo: ItemInfo
	{
		modelOptics 			= "\V_SO_Weapons\data\M6\M6D_Smartlink";
	};
};

class optic_Aco;
class OPTRE_MA5_SmartLink: optic_Aco
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "MA5 - Series Smart Link Optic";
	model 						= "\OPTRE_Weapons\AR\MA5_smartlink";
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 1;
		opticType 				= 1;
		optics 					= 1;
		modelOptics 			= "\OPTRE_Weapons\AR\MA5_smartlink";
		inertia 				= 0.1;
		class OpticsModes
		{
			class OPTRE_MA5_Smart
			{
				opticsID 						= 1;
				useModelOptics 					= 0;
				opticsPPEffects[] 				= {""};
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
				opticsZoomMin 					= 0.375;
				opticsZoomMax 					= 1.1;
				opticsZoomInit					= 0.75;
				memoryPointCamera 				= "eye";
				visionMode[] 					= {};
				distanceZoomMin 				= 400;
				distanceZoomMax 				= 400;
				cameraDir 						= "";
			};
			class OPTRE_MA5_Scope: OPTRE_MA5_Smart
			{
				opticsID 						= 2;
				useModelOptics 					= 1;
				opticsZoomMin 					= 0.0623;
				opticsZoomMax 					= 0.0623;
				opticsZoomInit 					= 0.0623;
				memoryPointCamera 				= "eye";
				modelOptics 					= "\A3\Weapons_F\acc\reticle_HAMR";
				visionMode[] 					= {"Normal"};
				distanceZoomMin 				= 300;
				distanceZoomMax 				= 300;
				cameraDir 						= "";
				opticsPPEffects[] 				= {""};
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
			};
		};
	};
};	
class OPTRE_MA5_SmartLink_v2: optic_aco
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "MA5X - Series Smart Link Optic";
	model 						= "\OPTRE_Weapons\AR\MA5_smartlink";
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 1;
		opticType 				= 1;
		optics 					= 1;
		modelOptics 			= "\OPTRE_Weapons\AR\MA5_smartlink";
		inertia 				= 0.1;
		class OpticsModes
		{
			class OPTRE_MA5_Smart_V2
			{
				opticsID 						= 1;
				useModelOptics 					= 0;
				opticsPPEffects[] 				= {""};
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
				opticsZoomMin 					= 0.375;
				opticsZoomMax 					= 1.1;
				opticsZoomInit 					= 0.75;
				memoryPointCamera 				= "eye";
				visionMode[] 					= {};
				distanceZoomMin 				= 100;
				distanceZoomMax 				= 100;
				cameraDir 						= "";
			};
			class OPTRE_MA5_Scope_V2: OPTRE_MA5_Smart_V2
			{
				opticsID 						= 2;
				useModelOptics 					= 0;
				opticsZoomMin 					= 0.0623;
				opticsZoomMax 					= 0.03115;
				opticsZoomInit 					= 0.0623;
				visionMode[] 					= {};
				distanceZoomMin 				= 300;
				distanceZoomMax 				= 300;
				memoryPointCamera 				= "eye";
				opticsPPEffects[] 				= {""};
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
			};
		};
	};
};
class OPTRE_MA5C_SmartLink_v2: optic_aco
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "MA5X - Series Smart Link Optic (Grey)";
	model 						= "\OPTRE_Weapons\AR\MA5C_smartlink";
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 1;
		opticType 				= 1;
		optics 					= 1;
		modelOptics 			= "\OPTRE_Weapons\AR\MA5C_smartlink";
		inertia 				= 0.1;
		class OpticsModes
		{
			class OPTRE_MA5_Smart_V2Grey
			{
				opticsID 						= 1;
				useModelOptics 					= 0;
				opticsPPEffects[] 				= {""};
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
				opticsZoomMin 					= 0.375;
				opticsZoomMax 					= 1.1;
				opticsZoomInit 					= 0.75;
				memoryPointCamera 				= "eye";
				visionMode[] 					= {};
				distanceZoomMin 				= 100;
				distanceZoomMax 				= 100;
				cameraDir 						= "";
			};
			class OPTRE_MA5_Scope_V2Grey: OPTRE_MA5_Smart_V2Grey
			{
				opticsID 						= 2;
				useModelOptics 					= 0;
				opticsZoomMin 					= 0.0623;
				opticsZoomMax 					= 0.03115;
				opticsZoomInit 					= 0.0623;
				visionMode[] 					= {};
				distanceZoomMin 				= 300;
				distanceZoomMax 				= 300;
				memoryPointCamera 				= "eye";
				opticsPPEffects[] 				= {""};
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
			};
		};
	};
};

class OPTRE_MA5_SmartLink_legacy: optic_aco
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "MA5X - Series Smart Link Optic (HAMR)";
	model 						= "\OPTRE_Weapons\AR\MA5_smartlink";
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 1;
		opticType 				= 1;
		optics 					= 1;
		modelOptics 			= "\OPTRE_Weapons\AR\MA5_smartlink";
		inertia 				= 0.1;
		class OpticsModes
		{
			class OPTRE_SL_Legacy
			{
				opticsID 						= 1;
				useModelOptics 					= 0;
				opticsPPEffects[] 				= {""};
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
				opticsZoomMin 					= 0.375;
				opticsZoomMax 					= 1.1;
				opticsZoomInit 					= 0.75;
				memoryPointCamera 				= "eye";
				visionMode[] 					= {};
				distanceZoomMin 				= 100;
				distanceZoomMax 				= 100;
				cameraDir 						= "";
			};
			class HAMR_Zoom: OPTRE_SL_Legacy
			{
				opticsID 						= 2;
				useModelOptics 					= 1;
				opticsZoomMin 					= 0.15575;
				opticsZoomMax 					= 0.1246;
				opticsZoomInit 					= 0.1246;
				discretefov[] 					= {0.1246,0.0623,0.046725,0.03115};
				discreteinitIndex 				= 0;
				discreteDistance[] 				= {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex 		= 1;
				distanceZoomMin 				= 100;
				distanceZoomMax 				= 2000;
				memoryPointCamera 				= "opticView2";
				modelOptics[] 					= {"\OPTRE_Weapons\BR\BR_Optic"};
				visionMode[] 					= {};
			};
		};
	};
};	
class OPTRE_MA5C_SmartLink_legacy: optic_aco
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "MA5X - Series Smart Link Optic (Grey) (HAMR)";
	model 						= "\OPTRE_Weapons\AR\MA5C_smartlink";
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 1;
		opticType 				= 1;
		optics 					= 1;
		modelOptics 			= "\OPTRE_Weapons\AR\MA5C_smartlink";
		inertia 				= 0.1;
		class OpticsModes
		{
			class OPTRE_SL_Legacy
			{
				opticsID 						= 1;
				useModelOptics 					= 0;
				opticsPPEffects[] 				= {""};
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
				opticsZoomMin 					= 0.375;
				opticsZoomMax 					= 1.1;
				opticsZoomInit 					= 0.75;
				memoryPointCamera 				= "eye";
				visionMode[] 					= {};
				distanceZoomMin 				= 100;
				distanceZoomMax 				= 100;
				cameraDir 						= "";
			};
			class HAMR_Zoom: OPTRE_SL_Legacy
			{
				opticsID 						= 2;
				useModelOptics 					= 1;
				opticsZoomMin 					= 0.15575;
				opticsZoomMax 					= 0.1246;
				opticsZoomInit 					= 0.1246;
				discretefov[] 					= {0.1246,0.0623,0.046725,0.03115};
				discreteinitIndex 				= 0;
				discreteDistance[] 				= {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex 		= 1;
				distanceZoomMin 				= 100;
				distanceZoomMax 				= 2000;
				memoryPointCamera				= "opticView2";
				modelOptics[] 					= {"\OPTRE_Weapons\BR\BR_Optic"};
				visionMode[] 					= {};
			};
		};
	};
};

class OPTRE_M7_Sight_v2: optic_Aco
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "M7 SLS/V 5B Reflex with Smartlink";
	model 						= "\OPTRE_Weapons\SMG\m7_sights";
	picture						= "\OPTRE_weapons\smg\icons\scope";
	inertia 					= 0.1;
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 4;
		modelOptics 			= "\A3\Weapons_F\empty";
		optics 					= 1;
		class OpticsModes
		{
			class M7SLRDS
			{
				opticsID 						= 1;
				useModelOptics 					= 0;
				opticsZoomMin 					= 0.375;
				opticsZoomMax 					= 1.1;
				opticsZoomInit 					= 0.75;
				memoryPointCamera 				= "eye";
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
				distanceZoomMin 				= 100;
				distanceZoomMax 				= 100;
				cameraDir 						= "";
				visionMode[] 					= {};
				opticsPPEffects[] 				= {""};
			};
			class M7_Zoom: M7SLRDS
			{
				opticsID 						= 2;
				useModelOptics 					= 1;
				opticsZoomMin 					= 0.015575;
				opticsZoomMax 					= 0.1246;
				opticsZoomInit 					= 0.1246;
				discretefov[] 					= {0.1246,0.0623,0.046725,0.03115,0.015575};
				discreteinitIndex 				= 0;
				discreteDistance[] 				= {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex 		= 1;
				distanceZoomMin 				= 100;
				distanceZoomMax 				= 2000;
				memoryPointCamera 				= "opticView2";
				modelOptics[] 					= {"\OPTRE_Weapons\BR\BR_Optic"};
				visionMode[] 					= {};
			};
		};
	};
};

class ItemCore;
class OPTRE_M392_Scope_v2: ItemCore
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "EVOS-D Mk1 SF Scope";
	model 						= "\v_so_weapons\data\m392\m392_scope";
	picture 					= "\OPTRE_weapons\br\icons\scope";
	inertia 					= 0.1;
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 2;
		opticType 				= 1;
		optics 					= 1;
		modelOptics 			= "\v_so_weapons\data\m392\m392_scope";
		class OpticsModes
		{
			class DMR_Scope
			{
				opticsID 						= 1;
				useModelOptics 					= 1;
				opticsZoomMin 					= 0.0099999998;
				opticsZoomMax 					= 0.25;
				opticsZoomInit 					= 0.25;
				discretefov[] 					= {0.25,0.050000001,0.025,0.0099999998};
				discreteinitIndex 				= 0;
				discreteDistance[] 				= {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
				discreteDistanceInitIndex 		= 1;
				distanceZoomMin 				= 50;
				distanceZoomMax 				= 2000;
				opticsPPEffects[]				= {""};
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
				memoryPointCamera 				= "opticView";
				modelOptics[] 					= {"\OPTRE_Weapons\DMR\M395_optic10"};
				visionMode[] 					= {};
				cameraDir 						= "";
			};
		};
	};
};

class OPTRE_BMR_Scope_v2: OPTRE_M392_Scope_v2
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "M295 DMR A4 SF Scope";
	model 						= "\OPTRE_Weapons\BR\BMR_Scope";
	picture 					= "\OPTRE_weapons\br\icons\scope";
	
	class ItemInfo: ItemInfo
	{
		modelOptics				= "\OPTRE_Weapons\BR\BMR_Scope";
	};
};

class OPTRE_M393_Scope_v2: ItemCore
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "EVOS-D Mk3 SF Scope";
	model						= "\OPTRE_Weapons\DMR\M395Optic";
	picture 					= "\OPTRE_Weapons\DMR\icons\M395__Scope_Icon";
	inertia 					= 0;
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 10;
		opticType 				= 1;
		optics 					= 1;
		modelOptics 			= "\OPTRE_Weapons\DMR\M395Optic";
		class OpticsModes
		{
			class M395_Scope_View
			{
				opticsID 						= 1;
				useModelOptics 					= 1;
				opticsZoomMin 					= 0.0099999998;
				opticsZoomMax 					= 0.25;
				opticsZoomInit 					= 0.25;
				discretefov[] 					= {0.25,0.050000001,0.025,0.0099999998};
				discreteinitIndex 				= 0;
				discreteDistance[] 				= {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
				discreteDistanceInitIndex 		= 1;
				distanceZoomMin 				= 200;
				distanceZoomMax 				= 600;
				memoryPointCamera 				= "opticView";
				modelOptics[] 					= {"\OPTRE_Weapons\DMR\M395_optic5","\OPTRE_Weapons\DMR\M395_optic10","\OPTRE_Weapons\DMR\M395_optic15"};
				opticsPPEffects[] 				= {"OpticsCHAbera1","OpticsBlur1"};
				visionMode[] 					= {};
				opticsFlare 					= 1;
				opticsDisablePeripherialVision 	= 1;
			};
		};
	};
};

class optic_Arco;
class OPTRE_M393_ACOG_v2: optic_Arco
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "M15 SF Combat Optical Gunsight";
	model 						= "\OPTRE_Weapons\DMR\M395ACOG";
	picture 					= "\OPTRE_Weapons\DMR\icons\M395__ACOG_Icon";
	inertia 					= 0.1;
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 10;
		opticType 				= 1;
		optics 					= 1;
		modelOptics 			= "\OPTRE_Weapons\DMR\M395Optic";
		class OpticsModes
		{
			class ACOG_Scope
			{
				opticsID 						= 2;
				useModelOptics 					= 0;
				opticsPPEffects[] 				= {"OpticsCHAbera5","OpticsBlur5"};
				opticsFlare 					= 1;
				opticsDisablePeripherialVision 	= 1;
				opticsZoomMin 					= 0.0099999998;
				opticsZoomMax 					= 0.25;
				opticsZoomInit 					= 0.25;
				distanceZoomMin 				= 50;
				distanceZoomMax 				= 2000;
				discretefov[] 					= {0.25,0.050000001,0.025,0.0099999998};
				discreteinitIndex 				= 0;
				discreteDistance[] 				= {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
				discreteDistanceInitIndex	 	= 1;
				memoryPointCamera 				= "opticView";
				visionMode[] 					= {};
			};
		};
	};
};

class OPTRE_M393_EOTECH_v2: optic_Aco
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "SR-10 SF Rapid Acquisition Sight";
	model 						= "\OPTRE_Weapons\DMR\M395EOTECH";
	picture 					= "\OPTRE_Weapons\DMR\icons\M395__EOTECH_Icon";
	inertia 					= 0.1;
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 4;
		modelOptics 			= "\A3\Weapons_F\empty";
		optics 					= 1;
		class OpticsModes
		{
			class EOTECHSIGHT
			{
				opticsID 						= 1;
				useModelOptics 					= 0;
				opticsZoomMin 					= 0.0625;
				opticsZoomMax 					= 1.1;
				opticsZoomInit 					= 0.75;
				memoryPointCamera 				= "eye";
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
				discreteDistance[] 				= {50,100,150,200,250,300,350,400,450,500};
				discreteDistanceInitIndex 		= 1;
				distanceZoomMin 				= 50;
				distanceZoomMax 				= 500;
				cameraDir 						= "";
				visionMode[] 					= {};
				opticsPPEffects[] 				= {""};
			};
			class DMR_Scope
			{
				opticsID 						= 1;
				useModelOptics 					= 1;
				opticsZoomMin					= 0.0099999998;
				opticsZoomMax					= 0.25;
				opticsZoomInit 					= 0.25;
				discretefov[] 					= {0.25,0.050000001,0.025,0.0099999998};
				discreteinitIndex 				= 0;
				discreteDistance[] 				= {50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
				discreteDistanceInitIndex 		= 1;
				distanceZoomMin 				= 100;
				distanceZoomMax 				= 2000;
				opticsPPEffects[] 				= {""};
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
				memoryPointCamera 				= "opticView";
				modelOptics[] 					= {"\OPTRE_Weapons\DMR\M395_optic10"};
				visionMode[] 					= {};
				cameraDir 						= "";
			};
		};
	};
};
	
class OPTRE_BR55HB_Scope;
class OPTRE_BR55HB_Scope_v2: OPTRE_BR55HB_Scope
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName 				= "BR55X A2 Scope";
	inertia 					= 0.1;
	
	class ItemInfo: InventoryOpticsItem_Base_F
	{
		mass 					= 2;
		opticType 				= 1;
		optics 					= 1;
		modelOptics 			= "\OPTRE_Weapons\BR\BR_Scope";
		class OpticsModes
		{
			class BR55HB_BUIS2
			{
				opticsID 						= 1;
				useModelOptics 					= 0;
				opticsPPEffects[] 				= {""};
				opticsFlare 					= 0;
				opticsDisablePeripherialVision 	= 0;
				opticsZoomMin 					= 0.375;
				opticsZoomMax 					= 1.1;
				opticsZoomInit 					= 0.75;
				memoryPointCamera 				= "opticView2";
				visionMode[] 					= {};
				distanceZoomMin 				= 300;
				distanceZoomMax 				= 300;
				cameraDir 						= "";
			};
			class BR55HB_Scope2: BR55HB_BUIS2
			{
				opticsID 					= 2;
				useModelOptics 				= 1;
				opticsZoomMin 				= 0.15575;
				opticsZoomMax 				= 0.0623;
				opticsZoomInit 				= 0.0623;
				discretefov[] 				= {0.0623,0.046725,0.03115,0.015575};
				discreteinitIndex 			= 0;
				discreteDistance[] 			= {100,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex 	= 1;
				distanceZoomMin 			= 100;
				distanceZoomMax 			= 2000;
				memoryPointCamera 			= "opticView";
				modelOptics[] 				= {"\OPTRE_Weapons\BR\BR_Optic"};
				visionMode[] 				= {};
			};
		};
	};
};