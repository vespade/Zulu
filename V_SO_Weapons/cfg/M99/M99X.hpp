class OPTRE_M99: OPTRE_SRS99D
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M99A2S3 Stanchion Gauss Rifle";
	baseWeapon					= "OPTRE_M99";
	
	magazines[]=
	{
		"OPTRE_3Rnd_54mm_Mag"
	};
	
	model						= "\OPTRE_Weapons\Sniper\M99";
	modelOptics 				= "\OPTRE_Weapons\Sniper\Sniper_Oracle10_Optic";
	opticType 					= 1;
	optics 						= 1;
	
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
	
	nameSound 					= "cannon";
	
	class Single: Single
	{
		class StandardSound
		{
			soundSetShot[] = {"Cannon120mm_Shot_SoundSet", "Cannon120mm_Tail_SoundSet"};
		};
	};
	
	reloadTime 					= 1.3;
	
	class LinkedItems
	{
		item = "ace_muzzle_mzls_b";
		slot = "MuzzleSlot";
	};		
	
	class WeaponSlotsInfo
 	{
		mass = 441;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"ace_muzzle_mzls_b"
			};
		};
	};
};