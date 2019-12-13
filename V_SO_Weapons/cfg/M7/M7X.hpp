class OPTRE_M7;
class SO_M7_Base: OPTRE_M7
{
	class WeaponSlotsInfo;
};

class CfgRecoils
{
	class M7X_Recoil
	{
		muzzleOuter[] 			= {"0.075*0.2","0.64*1","0.315*1","0.21*1"};
		kickBack[] 				= {"0.015*1.4","0.04*1.4"};
		temporary 				= "0.010*1.2";
		muzzleInner[] 			= {0,0,0.05,0.05};
		permanent 				= "0.05*0.4";
	};
};

class OPTRE_M7X: SO_M7_Base
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M7X Caseless SMG";
	baseWeapon 					= "OPTRE_M7X";
	model 						= "\A3\Weapons_F_gamma\Smgs\pdw2000\pdw2000_F.p3d";
	picture 					= "\A3\Weapons_F_gamma\Smgs\pdw2000\data\UI\gear_pdw2X_X_CA.paa";
	
	handAnim[] = 
	{
		"OFP2_ManSkeleton",
		"\A3\Weapons_F_Gamma\Smgs\pdw2000\data\Anim\SMG_03.rtm"
	};
	
	hiddenSelectionsTextures[] = 
	{
		"\a3\weapons_f\acc\data\battlesight_co",
		"\a3\weapons_f\rifles\mx\data\xmx_handle_co",
		"\a3\weapons_f_gamma\smgs\pdw2000\data\pdw2000_ammo_ca",
		"\a3\weapons_f_gamma\smgs\pdw2000\data\pdw2000_co"
	};
	
	//recoil						= "M7X_Recoil";
	
	magazines[]=
	{
		"OPTRE_60Rnd_5x23mm_Mag",
		"OPTRE_60Rnd_5x23mm_Mag_tracer",
		"OPTRE_60Rnd_5x23mm_Mag_FMJ",
		"OPTRE_60Rnd_5x23mm_Mag_FMJT",
		"OPTRE_60Rnd_5x23mm_Mag_HV",
		"OPTRE_60Rnd_5x23mm_Mag_HVT",
		"OPTRE_60Rnd_5x23mm_Mag_JHP",
		"OPTRE_60Rnd_5x23mm_Mag_JHPT",
		"OPTRE_48Rnd_5x23mm_Mag",
		"OPTRE_48Rnd_5x23mm_Mag_tracer",
		"OPTRE_48Rnd_5x23mm_Mag_FMJ",
		"OPTRE_48Rnd_5x23mm_Mag_FMJT",
		"OPTRE_48Rnd_5x23mm_Mag_HV",
		"OPTRE_48Rnd_5x23mm_Mag_HVT",
		"OPTRE_48Rnd_5x23mm_Mag_JHP",
		"OPTRE_48Rnd_5x23mm_Mag_JHPT"
	};
	
	class WeaponSlotsInfo
 	{
		mass = 50;
 		class MuzzleSlot: MuzzleSlot
		{
			compatibleitems[]=
			{
				"muzzle_snds_b",
				"muzzle_snds_h_mg_blk_f",
				"ace_muzzle_mzls_b",

				"optre_m7_silencer",
				"optre_m6_silencer"
			};
		};
		class CowsSlot: CowsSlot
		{
			compatibleitems[]=
			{
				"optic_arco_ak_blk_f",
				"optic_dms",
				"optic_aco_grn",
				"optic_aco",
				"optic_arco_blk_f",
				"optic_holosight_blk_f",
				"optic_mrco",
				"optic_khs_blk",
				"optic_hamr",
				"optic_sos",
				"optic_lrps",
				"optic_nightstalker",
				"optic_erco_blk_f",
				"optic_ams",
				"ace_optic_lrps_2d",
				"ace_optic_lrps_pip",
				"optic_yorris",
				"ace_optic_sos_2d",
				"ace_optic_sos_pip",
				"ace_optic_mrco_2d",
				"ace_optic_hamr_2d",
				"ace_optic_hamr_pip",
				"optic_aco_smg",
				"optic_aco_grn_smg",
				"optic_holosight_smg_blk_f",
				"optic_mrd_black",

				"optre_srs99_scope",
				"optre_srs99c_scope",
				"optre_ma5_buis",
				"optre_m393_eotech",
				"optre_m73_smartlink",
				"optre_m7_sight",
				"optre_m393_scope",
				"optre_m392_scope",
				"optre_br55hb_scope",
				"optre_m6c_scope"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"optre_m45_flashlight",
				"optre_m45_flashlight_red",
				"optre_m7_laser",
				"optre_m7_flashlight"
			};
		};
	};
};