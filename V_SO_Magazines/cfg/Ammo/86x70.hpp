class OPTRE_B_86x70_Ball: OPTRE_B_762x51_Ball
{
	hit 						= 14;
};

class OPTRE_B_86x70_Ball_Tracer: OPTRE_B_86x70_Ball
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_86x70_AP: OPTRE_B_86x70_Ball
{
	caliber						= 3;
	hit 						= 16;
	typicalSpeed				= 920;
};

class OPTRE_B_86x70_APT: OPTRE_B_86x70_AP
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_86x70_FS: OPTRE_B_86x70_Ball
{
	airFriction					= 0;
	caliber						= 3;
	hit 						= 17;
	typicalSpeed				= 1000;
	sideairFriction				= 0;
};

class OPTRE_B_86x70_FST: OPTRE_B_86x70_Ball
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_86x70_JHP: OPTRE_B_86x70_Ball
{
	caliber						= 0.5;
	hit 						= 19;
	typicalSpeed				= 905;
};

class OPTRE_B_86x70_JHPT: OPTRE_B_86x70_JHP
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_86x70_SS: OPTRE_B_86x70_Ball
{
	hit 						= 12;
	typicalSpeed				= 340;
};

class OPTRE_B_86x70_SST: OPTRE_B_86x70_SS
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

