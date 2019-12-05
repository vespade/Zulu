class OPTRE_MA37X: OPTRE_MA5CX
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA37X ICWS";
	baseWeapon 					= "OPTRE_MA37X";
	model                       = "\OPTRE_Weapons\AR\MA37.p3d";
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: CowsSlot
		{
			compatibleitems[] = {};
		};
	};
};