class OPTRE_M41_Rocket_Heat;
class OPTRE_50x137_HEAT: OPTRE_M41_Rocket_Heat
{
	caliber						= 10;
	hit							= 950;
	indirectHit					= 200;
	indirectHitRange			= 0.05;
	explosive					= 1;
	fuseDistance				= 5;
	initTime					= 0.2;
	thrust						= 4000;
	thrustTime					= 7;
	maxSpeed					= 360;
	timeToLive					= 30;
	allowAgainstInfantry		= 0;
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
	fuseDistance				= 0.00001;
	initTime					= 0.2;
	thrust						= 4000;
	thrustTime					= 7;
	maxSpeed					= 700;
	timeToLive					= 30;
	allowAgainstInfantry		= 0;
};	

class OPTRE_50x137_THERMO: OPTRE_50X137_PEN
{
	caliber						= 5;
	hit							= 1500;
	indirectHit					= 1000;
	indirectHitRange			= 10;
	explosive					= 1;
	fuseDistance				= 10;
	initTime					= 0.2;
	thrust						= 4000;
	thrustTime					= 0.5;
	maxSpeed					= 400;
	timeToLive					= 40;
	allowAgainstInfantry		= 0;
};	
