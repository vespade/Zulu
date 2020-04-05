class OPTRE_MA37: OPTRE_MA5C
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA37X ICWS Assault Rifle";
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 77;
		class CowsSlot: CowsSlot
		{
			compatibleitems[] = {};
		};
	};
};

class OPTRE_MA37B: OPTRE_MA37
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA37BX ICWS Assault Rifle";
	
	magazines[] = 
	{
		"OPTRE_60Rnd_762x51_Mag",
		"OPTRE_60Rnd_762x51_Mag_Tracer",
		"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
		"OPTRE_60Rnd_762x51_Mag_AP",
		"OPTRE_60Rnd_762x51_Mag_APT",
		"OPTRE_60Rnd_762x51_Mag_JHP",
		"OPTRE_60Rnd_762x51_Mag_JHPT"
	};
};