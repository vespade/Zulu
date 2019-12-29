class OPTRE_MA37X: OPTRE_MA5CX
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA37X ICWS Assault Rifle";
	baseWeapon 					= "OPTRE_MA37X";
	model                       = "\OPTRE_Weapons\AR\MA37.p3d";
	
	handAnim[] = 
	{
		"OFP2_ManSkeleton", "\OPTRE_Weapons\AR\data\anim\hand_anim_ma37.rtm",
		"Spartan_ManSkeleton", "\OPTRE_Weapons\AR\data\anim\hand_anim_ma37_Spartan.rtm"
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

class OPTRE_MA37BX: OPTRE_MA5BX
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA37BX ICWS Assault Rifle";
	baseWeapon 					= "OPTRE_MA37BX";
	model                       = "\OPTRE_Weapons\AR\MA37B.p3d";
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 77;
		class CowsSlot: CowsSlot
		{
			compatibleitems[] = {};
		};
	};
};