class OPTRE_MA37X: OPTRE_MA5CX
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA37X ICWS Assault Rifle";
	baseWeapon 					= "OPTRE_MA37X";
	model                       = "\OPTRE_Weapons\AR\MA37.p3d";
	
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\OPTRE_Weapons\AR\Data\Anim\hand_anim_ma37.rtm"
	};
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 77;
		class CowsSlot: CowsSlot
		{
			compatibleitems[] = {};
		};
	};
};