class B_12Gauge_Pellets_Submunition;
class OPTRE_B_8Gauge_Pellet: B_12Gauge_Pellets_Submunition
{
	submunitionAmmo 			= "OPTRE_B_8Gauge_Pellet_Submunition";
	thrust						= 15;
	triggerTime 				= 0.001;
};

class B_12Gauge_Slug;
class OPTRE_B_8Gauge_Slug: B_12Gauge_Slug
{
	caliber						= 4;
	hit 						= 26;
};

class OPTRE_B_8Gauge_HEDP: OPTRE_B_8Gauge_Slug
{
	craterEffects				= "ExploAmmoCrater";
	explosive					= 0.25;
	explosionEffects			= "ExploAmmoExplosion";
	explosionSoundEffect		= "DefaultExplosion";
	hit 						= 32;
	indirectHit					= 12;
	indirectHitRange			= 0.25;
};

class OPTRE_B_8Gauge_Beanbag: OPTRE_B_8Gauge_Slug
{
	hit 						= 0.1;
	typicalspeed				= 350;
};

class OPTRE_B_8Gauge_Incendiary: OPTRE_B_8Gauge_Pellet
{
	submunitionConeType[] 		= {"poissondisc",15};
	submunitionAmmo 			= "OPTRE_B_8Gauge_Incendiary_Submunition";
};

class B_12Gauge_Pellets_Submunition_Deploy;
class OPTRE_B_8Gauge_Incendiary_Submunition: B_12Gauge_Pellets_Submunition_Deploy
{
	caliber						= 1;
	hit							= 3;
	
	deflecting 					= 0;
	thrust 						= 75;
	model 						= "\V_SO_Core\data\Effects\fire_effect";
	timeToLive 					= 1;
	tracerEndTime 				= 1;
	tracerStartTime 			= 0;
	tracerScale 				= 0.75;
};

class OPTRE_B_8Gauge_Pellet_Submunition: B_12Gauge_Pellets_Submunition_Deploy
{
	hit							= 4;
};