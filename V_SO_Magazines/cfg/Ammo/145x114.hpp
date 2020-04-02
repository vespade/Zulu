class OPTRE_B_145x114_APFSDS;
class OPTRE_B_145x114_SS: OPTRE_B_145x114_APFSDS
{
	caliber						= 10;
	hit 						= 55;
	typicalSpeed				= 343;
	timeToLive					= 20;
};
class OPTRE_B_145x114_SST: OPTRE_B_145x114_SS
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_145x114_APFSDST: OPTRE_B_145x114_APFSDS
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_145x114_HVAP;
class OPTRE_B_145x114_HVAPT: OPTRE_B_145x114_HVAP
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_145x114_HEDP;
class OPTRE_B_145x114_HEDPT: OPTRE_B_145x114_HEDP
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};

class OPTRE_B_145x114_NARQ: OPTRE_B_145x114_APFSDS
{
	hit 						= 0.1;
};
class OPTRE_B_145x114_NARQT: OPTRE_B_145x114_NARQ
{
	model						= "\A3\Weapons_f\Data\bullettracer\tracer_red";
};