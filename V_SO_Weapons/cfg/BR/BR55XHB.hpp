class OPTRE_BR55XHB: OPTRE_BR55X
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "BR55XHB Battle Rifle";
	baseWeapon 					= "OPTRE_BR55XHB";
	model                       = "\OPTRE_Weapons\BR\BRHB";
	
	modes[] = 
	{
		"Single",
		"Burst",
		"FullAuto"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 85;
	};
	
	class FullAuto: Burst
	{
		aiDispersionCoefX 		= 2;
		aiDispersionCoefY 		= 3;
		burst 					= 1;
		autoFire 				= 1;
		dispersion			 	= 0.0005;
		displayName 			= "Full";
		maxRange 				= 80;
		maxRangeProbab 			= 0.04;
		midRange 				= 30;
		midRangeProbab 			= 0.58;
		minRange 				= 1;
		minRangeProbab 			= 0.2;
		recoil 					= "recoil_auto_primary_3outof10";
		recoilProne 			= "recoil_auto_primary_prone_3outof10";
		reloadTime 				= 0.08;
		sound[] 				= {"",10,1};
		soundBurst 				= 0;
		soundContinuous 		= 0;
		soundEnd[] 				= {"sound",1};
		textureType 			= "fullAuto";
	};
};