class OPTRE_B_95x60_JHP: OPTRE_B_95x40_Ball
{
	caliber						= 2;
	hit 						= 25;
	typicalSpeed				= 1300;
};

class OPTRE_B_95x60_JHPT: OPTRE_B_95x60_JHP
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_95x60_HPSAP: OPTRE_B_95x60_JHP
{
	caliber						= 3;
	hit 						= 20;
	typicalSpeed				= 1500;
};

class OPTRE_B_95x60_HPSAPT: OPTRE_B_95x60_HPSAP
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_95x60_SS: OPTRE_B_95x60_JHP
{
	caliber						= 3;
	hit 						= 20;
	typicalSpeed				= 340;
};

class OPTRE_B_95x60_SAPHE: OPTRE_B_95x60_JHP
{
	craterEffects				= "ExploAmmoCrater";
	explosive					= 0.20;
	explosionEffects			= "ExploAmmoExplosion";
	explosionSoundEffect		= "DefaultExplosion";
	hit 						= 17;
	typicalSpeed				= 920;
	indirectHit					= 23;
	indirectHitRange			= 0.045;
};

class OPTRE_B_95x60_SAPHET: OPTRE_B_95x60_SAPHE
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};