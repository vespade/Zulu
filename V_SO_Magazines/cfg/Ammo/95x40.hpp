class OPTRE_B_95x40_Ball;
class OPTRE_B_95x40_JHP: OPTRE_B_95x40_Ball
{
	caliber						= 1;
	hit 						= 20;
	typicalSpeed				= 1100;
};

class OPTRE_B_95x40_JHPT: OPTRE_B_95x40_JHP
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_95x40_HPSAP: OPTRE_B_95x40_Ball
{
	caliber						= 2;
	hit 						= 15;
	typicalSpeed				= 1300;
};

class OPTRE_B_95x40_HPSAPT: OPTRE_B_95x40_HPSAP
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_95x40_SS: OPTRE_B_95x40_Ball
{
	caliber						= 2;
	hit 						= 15;
	typicalSpeed				= 340;
};

class OPTRE_B_95x40_SAPHE: OPTRE_B_95x40_Ball
{
	craterEffects				= "ExploAmmoCrater";
	explosive					= 0.10;
	explosionEffects			= "ExploAmmoExplosion";
	explosionSoundEffect		= "DefaultExplosion";
	hit 						= 17;
	typicalSpeed				= 720;
	indirectHit					= 12;
	indirectHitRange			= 0.35;
};

class OPTRE_B_95x40_SAPHET: OPTRE_B_95x40_SAPHE
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};
