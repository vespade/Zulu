class OPTRE_M41_Rocket_Heat;
class OPTRE_50x137_HEAT: OPTRE_M41_Rocket_Heat
{
	model						= "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
	caliber						= 10;
	hit							= 950;
	indirectHit					= 200;
	indirectHitRange			= 0.05;
	explosive					= 1;
	fuseDistance				= 5	;
	initTime					= 0;
	thrust						= 760;
	thrustTime					= 0.2;
	maxSpeed					= 360;
	timeToLive					= 30;
	allowAgainstInfantry		= 0;
	airFriction					= 0.1;
	sideAirFriction				= 0.001;
};	

class OPTRE_50x137_HE: OPTRE_50X137_HEAT
{
	caliber						= 0;
	hit							= 400;
	indirectHit					= 200;
	indirectHitRange			= 5;
	maxSpeed					= 360;
	explosive					= 1;
	timeToLive					= 30;
	allowAgainstInfantry		= 1;
};	 

class OPTRE_50x137_PEN: OPTRE_50X137_HE
{
	caliber						= 20;
	hit							= 1500;
	indirectHit					= 0;
	indirectHitRange			= 0;
	explosive					= 0;
	fuseDistance				= 0;
	initTime					= 0;
	thrust						= 1400;
	thrustTime					= 0.1;
	maxSpeed					= 900;
	timeToLive					= 30;
	allowAgainstInfantry		= 0;
	airFriction					= 0.01;
	sideAirFriction				= 0.0001;
};	

class OPTRE_50x137_THERMO: OPTRE_50X137_PEN
{
	caliber						= 5;
	hit							= 1500;
	indirectHit					= 1000;
	indirectHitRange			= 15;
	explosive					= 1;
	fuseDistance				= 15;
	initTime					= 0;
	thrust						= 800;
	thrustTime					= 0.2;
	maxSpeed					= 400;
	timeToLive					= 40;
	allowAgainstInfantry		= 1;
	CraterEffects				= "HEShellCrater";
	CraterWaterEffects			= "ImpactEffectsWaterHE";
	ExplosionEffects			= "HEShellExplosion";
};	

class OPTRE_50x137_Tekcirc: OPTRE_50x137_THERMO
{
	model						= "OPTRE_weapons\rockets\M41_rocket.p3d";
	caliber						= 5;
	hit							= 1500;
	indirectHit					= 1000;
	indirectHitRange			= 15;
	explosive					= 1;
	fuseDistance				= 15;
	initTime					= 0;
	thrust						= 800;
	thrustTime					= 0.2;
	maxSpeed					= 400;
	timeToLive					= 50;
	allowAgainstInfantry		= 1;
	CraterEffects				= "HEShellCrater";
	CraterWaterEffects			= "ImpactEffectsWaterHE";
	ExplosionEffects			= "HEShellExplosion";
};	
