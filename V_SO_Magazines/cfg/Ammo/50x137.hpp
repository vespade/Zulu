class OPTRE_M41_Rocket_Heat;
class OPTRE_50X137_HEAT: OPTRE_M41_Rocket_Heat
{
	hit							= 750;
	indirectHit					= 100;
	indirectHitRange			= 2;
	explosive					= 0.7;
	fuseDistance				= 5;
	initTime					= 0.2;
	thrust						= 4000;
	thrustTime					= 7;
	maxSpeed					= 600;
	timeToLive					= 30;
	allowAgainstInfantry		= 0;
};	

class OPTRE_50X137_HE: OPTRE_50X137_HEAT
{
	hit							= 400;
	indirectHit					= 200;
	indirectHitRange			= 10;
	explosive					= 1;
	timeToLive					= 30;
	allowAgainstInfantry		= 1;
};	

class OPTRE_50X137_PEN: OPTRE_50X137_HE
{
	hit							= 1000;
	indirectHit					= 1000;
	indirectHitRange			= 2;
	explosive					= 0.2;
	fuseDistance				= 0.00001;
	initTime					= 0.2;
	thrust						= 4000;
	thrustTime					= 7;
	maxSpeed					= 800;
	timeToLive					= 30;
	allowAgainstInfantry		= 0;
};	

class OPTRE_50X137_THERMO: OPTRE_50X137_PEN
{
	hit							= 1500;
	indirectHit					= 1000;
	indirectHitRange			= 15;
	explosive					= 1;
	fuseDistance				= 10;
	initTime					= 0.2;
	thrust						= 4000;
	thrustTime					= 7;
	maxSpeed					= 400;
	timeToLive					= 40;
	allowAgainstInfantry		= 0;
};	
