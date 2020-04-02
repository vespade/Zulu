class B_127x33_Ball;
class OPTRE_B_127x40_Ball: B_127x33_Ball
{
	caliber						= 2;
	hit 						= 16;
	typicalSpeed				= 620;
};

class OPTRE_B_127x40_AP: OPTRE_B_127x40_Ball
{
	caliber						= 3;
};

class OPTRE_B_127x40_APT: OPTRE_B_127x40_AP
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_127x40_HE: OPTRE_B_127x40_Ball
{
	caliber						= 3;
	craterEffects				= "ExploAmmoCrater";
	explosive					= 0.2;
	explosionEffects			= "ExploAmmoExplosion";
	explosionSoundEffect		= "DefaultExplosion";
	hit 						= 12;
	indirectHit					= 18;
	indirectHitRange			= 0.025;
};

class OPTRE_B_127x40_HET: OPTRE_B_127x40_HE
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_127x40_HVAP: OPTRE_B_127x40_Ball
{
	caliber						= 3;
	hit 						= 18;
	typicalSpeed				= 800;
};

class OPTRE_B_127x40_HVAPT: OPTRE_B_127x40_HVAP
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_127x40_JHP: OPTRE_B_127x40_Ball
{
	caliber						= 1;
	hit 						= 22;
	typicalSpeed				= 580;
};

class OPTRE_B_127x40_JHPT: OPTRE_B_127x40_JHP
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_127x40_SAPHE: B_127x33_Ball
{
	caliber						= 2.5;
	craterEffects				= "ExploAmmoCrater";
	explosive					= 0.15;
	explosionEffects			= "ExploAmmoExplosion";
	explosionSoundEffect		= "DefaultExplosion";
	hit 						= 16.5;
	typicalSpeed				= 620;
};

class OPTRE_B_127x40_SAPHET: OPTRE_B_127x40_SAPHE
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_127x40_SS: OPTRE_B_127x40_Ball
{
	hit 						= 14;
	typicalSpeed				= 340;
};

class OPTRE_B_127x40_SST: OPTRE_B_127x40_SS
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_127x40_NARQ: OPTRE_B_127x40_Ball
{
	hit 						= 0.1;
};

class OPTRE_B_127x40_NARQT: OPTRE_B_127x40_NARQ
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};