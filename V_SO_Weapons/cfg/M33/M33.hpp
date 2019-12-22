class hgun_Pistol_heavy_02_F;
class SO_M33_Base: hgun_Pistol_heavy_02_F
{
	class Single;
};

class OPTRE_M33: SO_M33_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "Model 33 'Godfather' Handgun";
	baseWeapon 					= "OPTRE_M33";
	model 						= "\A3\Weapons_F_EPA\Pistols\Pistol_heavy_02\Pistol_heavy_02_F.p3d";
	descriptionShort 			= "12.7x40mm Revolver";
	
	Eye 						= "";
	Glasses 					= "";
	ODST_1 						= "";
	pictureWire 				= "\V_SO_Weapons\data\M33\V_M33_HUD_CA.paa";
	HUD_BulletInARows 			= 1;
	HUD_TotalPosibleBullet 		= 6;
	
	hiddenSelectionsTextures[] = 
	{
		"\V_SO_Weapons\data\M33\V_M33_CO.paa",
		"\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co"
	};
	
	class Single: Single
	{
		class StandardSound
		{
			soundSetShot[] = {"HunterShotgun_01_SawedOff_Shot_SoundSet","HunterShotgun_01_Tail_SoundSet"};
		};
	};	
	
	magazines[]=
	{
		"OPTRE_6Rnd_127x40_Cyl",
		"OPTRE_6Rnd_127x40_Cyl_Tracer",
		"OPTRE_6Rnd_127x40_Cyl_AP",
		"OPTRE_6Rnd_127x40_Cyl_APT",
		"OPTRE_6Rnd_127x40_Cyl_HE",
		"OPTRE_6Rnd_127x40_Cyl_HET",
		"OPTRE_6Rnd_127x40_Cyl_HVAP",
		"OPTRE_6Rnd_127x40_Cyl_HVAPT",
		"OPTRE_6Rnd_127x40_Cyl_JHP",
		"OPTRE_6Rnd_127x40_Cyl_JHPT",
		"OPTRE_6Rnd_127x40_Cyl_SAPHE",
		"OPTRE_6Rnd_127x40_Cyl_SAPHET",
		"OPTRE_6Rnd_127x40_Cyl_SS",
		"OPTRE_6Rnd_127x40_Cyl_NARQ",
		"OPTRE_6Rnd_127x40_Cyl_FR",
		"OPTRE_6Rnd_127x40_Cyl_FG"
	};
	magazineWell[] = {};
	
	class WeaponSlotsInfo
 	{
		mass = 37;
		class CowsSlot: CowsSlot
		{
			compatibleitems[]=
			{
				"optic_holosight_blk_f",
				"optic_yorris",
				"optic_holosight_smg_blk_f",
				"optic_mrd_black",

				"optre_m393_eotech",
				"optre_m6c_scope"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"optre_m6g_flashlight",
				"optre_m6c_laser",
				"acc_flashlight_pistol"
			};
		};
	};
};

class OPTRE_M33G: OPTRE_M33
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "Model 33 'Godfather' Handgun (Gold)";
	baseWeapon 					= "OPTRE_M33G";
	
	hiddenSelectionsTextures[] = 
	{
		"\V_SO_Weapons\data\M33\V_M33_G_CO.paa",
		"\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co"
	};
};