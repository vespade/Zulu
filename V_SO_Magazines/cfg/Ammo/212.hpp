class B_12Gauge_Pellets_Submunition;
class OPTRE_B_8Gauge_Pellets: B_12Gauge_Pellets_Submunition
{
	caliber						= 2;
	hit 						= 24;
};

class B_12Gauge_Slug;
class OPTRE_B_8Gauge_Slugs: B_12Gauge_Slug
{
	caliber						= 4;
	hit 						= 48;
};

class OPTRE_B_8Gauge_HEDP: OPTRE_B_8Gauge_Slugs
{
	craterEffects				= "ExploAmmoCrater";
	explosive					= 0.25;
	explosionEffects			= "ExploAmmoExplosion";
	explosionSoundEffect		= "DefaultExplosion";
	hit 						= 32;
	indirectHit					= 12;
	indirectHitRange			= 0.25;
};

class OPTRE_B_8Gauge_Beanbags: OPTRE_B_8Gauge_Slugs
{
	hit 						= 0.1;
	typicalspeed				= 350;
};