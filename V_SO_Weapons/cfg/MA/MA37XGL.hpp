class OPTRE_MA37XGL: OPTRE_MA5CXGL
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA37X + M301 GL Assault Rifle";
	baseWeapon 					= "OPTRE_MA37XGL";
	model                       = "\OPTRE_Weapons\AR\MA37GL.p3d";
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class CowsSlot: CowsSlot
		{
			compatibleitems[] = {};
		};
	};
};