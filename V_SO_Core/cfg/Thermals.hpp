class NVGoggles;
class A3_TVG_S_F: NVGoggles
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;	
	
	displayName					= "Mark 2 Interface";
	
	ace_nightVision_grain 		= 0;
	ace_nightVision_blur 		= 0;
	ace_nightVision_radBlur 	= 0;
	ace_nightvision_border 		= "";
	ace_nightvision_bluRadius 	= 0.05;
	ace_nightvision_generation 	= 4;
	ace_nightvision_eyeCups 	= 0;
	
	thermalMode[] =
	{
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7
	};
	
	visionMode[]=
	{
		"Normal",
		"NVG",
		"TI"
	};
	
	class ItemInfo
	{
		type				 		= 616;
		uniformModel				= "";
		modelOff					= "";
		mass						= 13;
	};
};

class A3_TVG_S_F2: A3_TVG_S_F
{
	displayName 				= "Mark 3 Interface";
	thermalMode[] = 
	{
		0,
		1,
		3,
		4,
		7
	};
};

class A3_TVG_S_F3: A3_TVG_S_F
{
	displayName 				= "Mark 4 Interface";
	thermalMode[] =
	{
		0,
		1,
		6,
		7
	};
};

class A3_TVG_S_F45: A3_TVG_S_F
{
	displayName 				= "Mark 5 Interface";
	thermalMode[] = 
	{
		0,
		1,
		7
	};
};

class A3_TVG_S_F6: A3_TVG_S_F
{
	displayName 				= "Mark 6 Interface";
	thermalMode[] = 
	{
		0
	};
};

class A3_TVG_S_F7: A3_TVG_S_F
{
	displayName				 	= "Mark 7 Interface";
	thermalMode[] = 
	{
		6
	};
};

class A3_TVG_S_F8: A3_TVG_S_F
{
	displayName 				= "Mark 8 Interface";
	thermalMode[] = 
	{
		7
	};
};