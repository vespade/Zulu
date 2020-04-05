class F_40mm_White;
class F_40mm_Blue: F_40mm_White
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	lightColor[] 				= {0.25,0.25,0.5,0};
};

class ACE_40mm_Flare_blue: F_40mm_White
{
	coefGravity 				= 0.25;
	intensity 					= 1.25e+006;
	timeToLive 					= 45;
};

// Don't look down here...
class UGL_Potato: OPTRE_B_8Gauge_Pellet
{
	submunitionAmmo				= "G_20mm_HE";
};