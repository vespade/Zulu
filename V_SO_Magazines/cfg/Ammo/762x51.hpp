class OPTRE_B_762x51_Ball;
class OPTRE_B_762x51_AP: OPTRE_B_762x51_Ball
{
	caliber						= 3;
	hit 						= 14;
	typicalSpeed				= 920;
};

class OPTRE_B_762x51_APT: OPTRE_B_762x51_AP
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_762x51_FS: OPTRE_B_762x51_Ball
{
	airFriction					= 0;
	caliber						= 3;
	hit 						= 15;
	typicalSpeed				= 1000;
	sideairFriction				= 0;
};

class OPTRE_B_762x51_FST: OPTRE_B_762x51_Ball
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_762x51_JHP: OPTRE_B_762x51_Ball
{
	caliber						= 0.5;
	hit 						= 18;
	typicalSpeed				= 905;
};

class OPTRE_B_762x51_JHPT: OPTRE_B_762x51_JHP
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_762x51_SS: OPTRE_B_762x51_Ball
{
	hit 						= 10;
	typicalSpeed				= 343;
};