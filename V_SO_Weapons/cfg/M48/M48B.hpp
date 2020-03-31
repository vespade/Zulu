class launch_RPG32_F;
class OPTRE_M48_PAW: Launch_RPG32_F
{
	dlc							= "SO";
	author						= "Fireteam Zulu & Shadow";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "M48B 'Cricket' PAW";
	baseWeapon 					= "OPTRE_M48_PAW";
	model                       = "\V_SO_Weapons\data\M48\M48B_Cricket";
	picture 					= "\V_SO_Weapons\data\M48\M48B_Cricket";
	
	initSpeed 					= 80;
	modelOptics					= "\OPTRE_Weapons\Rockets\M41_Optic";
	
	ODST_1						= "OPTRE_ODST_HUD_AmmoCount_RL";
	Glasses						= "OPTRE_GLASS_HUD_AmmoCount_RL";
	Eye							= "OPTRE_EYE_HUD_AmmoCount_RL";
	HUD_BulletInARows			= 1;
	HUD_TotalPosibleBullet		= 1;
	
	magazines[]=
	{
		"OPTRE_1Rnd_50x137_HEAT",
		"OPTRE_1Rnd_50x137_HE",
		"OPTRE_1Rnd_50x137_PEN",
		"OPTRE_1Rnd_50x137_THERMO",
		"OPTRE_1Rnd_50x137_HE"
	};
	
	magazineWell[] 				= {};
	reloadAction				= "ReloadRPG";
	reloadmagazinesound[]=
	{
		"A3\sounds_f\weapons\rockets\titan_reload_final",
		0.56234097,
		1,
		50
	};
	handAnim[] = 
	{
		"OFP2_ManSkeleton","\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim.rtm",
		"Spartan_ManSkeleton","\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim_Spartan.rtm"
	};
	
	class WeaponSlotsInfo
	{
		mass = 93;
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
				"optic_nightstalker",
				"optic_erco_blk_f",
				"optic_ams",
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
				"optre_m393_eotech",
				"optre_m7_sight",
				"optre_m393_acog",
				"optre_m392_scope",
				"optre_m6c_scope",
				"OPTRE_BMR_Scope",
				
				"OPTRE_SRS99_Scope_v2",
				"OPTRE_SRS99C_Scope_v2",
				"OPTRE_M6S_Scope",
				"OPTRE_M7_Sight_v2",
				"OPTRE_M392_Scope_v2",
				"OPTRE_M393_ACOG_v2",
				"OPTRE_M393_EOTECH_v2",
				"OPTRE_BMR_Scope_v2"
			};
		};
		class PointerSlot: PointerSlot
		{
			compatibleitems[]=
			{
				"acc_pointer_ir",
				"ace_acc_pointer_green",
				"acc_flashlight",
				
				"OPTRE_BMR_Laser"
			};
		};
	};
};