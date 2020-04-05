class OPTRE_MA37GL: OPTRE_MA5CGL
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA37X + M301 GL Assault Rifle";
	
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 110;
		class CowsSlot: CowsSlot
		{
			compatibleitems[] = {};
		};
	};
};

class OPTRE_MA37BGL: OPTRE_MA5BGL
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	displayName					= "MA37BX + M301 GL Assault Rifle";
	
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