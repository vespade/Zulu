class NVGoggles;
class A3_TVG_S_F: NVGoggles
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
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

// Zulu Compat (Comms/Cam)
class VES_NVG_COMMS_CAM;
class A3_TVG_S_F_COMMS_CAM: VES_NVG_COMMS_CAM
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName					= "Mark 2 Interface (CNM/CA)";
	
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
};

class A3_TVG_S_F2_COMMS_CAM: A3_TVG_S_F_COMMS_CAM
{
	displayName 				= "Mark 3 Interface (CNM/CA)";
	thermalMode[] = 
	{
		0,
		1,
		3,
		4,
		7
	};
};

class A3_TVG_S_F3_COMMS_CAM: A3_TVG_S_F_COMMS_CAM
{
	displayName 				= "Mark 4 Interface (CNM/CA)";
	thermalMode[] =
	{
		0,
		1,
		6,
		7
	};
};

class A3_TVG_S_F45_COMMS_CAM: A3_TVG_S_F_COMMS_CAM
{
	displayName 				= "Mark 5 Interface (CNM/CA)";
	thermalMode[] = 
	{
		0,
		1,
		7
	};
};

class A3_TVG_S_F6_COMMS_CAM: A3_TVG_S_F_COMMS_CAM
{
	displayName 				= "Mark 6 Interface (CNM/CA)";
	thermalMode[] = 
	{
		0
	};
};

class A3_TVG_S_F7_COMMS_CAM: A3_TVG_S_F_COMMS_CAM
{
	displayName				 	= "Mark 7 Interface (CNM/CA)";
	thermalMode[] = 
	{
		6
	};
};

class A3_TVG_S_F8_COMMS_CAM: A3_TVG_S_F_COMMS_CAM
{
	displayName 				= "Mark 8 Interface (CNM/CA)";
	thermalMode[] = 
	{
		7
	};
};

// Zulu Compat (Comms/UA)
class VES_NVG_COMMS_UA;
class A3_TVG_S_F_COMMS_UA: VES_NVG_COMMS_UA
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName					= "Mark 2 Interface (CA/UA)";
	
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
};

class A3_TVG_S_F2_COMMS_UA: A3_TVG_S_F_COMMS_UA
{
	displayName 				= "Mark 3 Interface (CA/UA)";
	thermalMode[] = 
	{
		0,
		1,
		3,
		4,
		7
	};
};

class A3_TVG_S_F3_COMMS_UA: A3_TVG_S_F_COMMS_UA
{
	displayName 				= "Mark 4 Interface (CA/UA)";
	thermalMode[] =
	{
		0,
		1,
		6,
		7
	};
};

class A3_TVG_S_F45_COMMS_UA: A3_TVG_S_F_COMMS_UA
{
	displayName 				= "Mark 5 Interface (CA/UA)";
	thermalMode[] = 
	{
		0,
		1,
		7
	};
};

class A3_TVG_S_F6_COMMS_UA: A3_TVG_S_F_COMMS_UA
{
	displayName 				= "Mark 6 Interface (CA/UA)";
	thermalMode[] = 
	{
		0
	};
};

class A3_TVG_S_F7_COMMS_UA: A3_TVG_S_F_COMMS_UA
{
	displayName				 	= "Mark 7 Interface (CA/UA)";
	thermalMode[] = 
	{
		6
	};
};

class A3_TVG_S_F8_COMMS_UA: A3_TVG_S_F_COMMS_UA
{
	displayName 				= "Mark 8 Interface (CA/UA)";
	thermalMode[] = 
	{
		7
	};
};

// Zulu Compat (CNM/UA)
class VES_NVG_CAM_UA;
class A3_TVG_S_F_CAM_UA: VES_NVG_CAM_UA
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName					= "Mark 2 Interface (CNM/UA)";
	
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
};

class A3_TVG_S_F2_CAM_UA: A3_TVG_S_F_CAM_UA
{
	displayName 				= "Mark 3 Interface (CNM/UA)";
	thermalMode[] = 
	{
		0,
		1,
		3,
		4,
		7
	};
};

class A3_TVG_S_F3_CAM_UA: A3_TVG_S_F_CAM_UA
{
	displayName 				= "Mark 4 Interface (CNM/UA)";
	thermalMode[] =
	{
		0,
		1,
		6,
		7
	};
};

class A3_TVG_S_F45_CAM_UA: A3_TVG_S_F_CAM_UA
{
	displayName 				= "Mark 5 Interface (CNM/UA)";
	thermalMode[] = 
	{
		0,
		1,
		7
	};
};

class A3_TVG_S_F6_CAM_UA: A3_TVG_S_F_CAM_UA
{
	displayName 				= "Mark 6 Interface (CNM/UA)";
	thermalMode[] = 
	{
		0
	};
};

class A3_TVG_S_F7_CAM_UA: A3_TVG_S_F_CAM_UA
{
	displayName				 	= "Mark 7 Interface (CNM/UA)";
	thermalMode[] = 
	{
		6
	};
};

class A3_TVG_S_F8_CAM_UA: A3_TVG_S_F_CAM_UA
{
	displayName 				= "Mark 8 Interface (CNM/UA)";
	thermalMode[] = 
	{
		7
	};
};

// Zulu Compat (CNM/CA/UA)
class VES_NVG_COMMS_CAM_UA;
class A3_TVG_S_F_COMMS_CAM_UA: VES_NVG_COMMS_CAM_UA
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName					= "Mark 2 Interface (CNM/CA/UA)";
	
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
};

class A3_TVG_S_F2_COMMS_CAM_UA: A3_TVG_S_F_COMMS_CAM_UA
{
	displayName 				= "Mark 3 Interface (CNM/CA/UA)";
	thermalMode[] = 
	{
		0,
		1,
		3,
		4,
		7
	};
};

class A3_TVG_S_F3_COMMS_CAM_UA: A3_TVG_S_F_COMMS_CAM_UA
{
	displayName 				= "Mark 4 Interface (CNM/CA/UA)";
	thermalMode[] =
	{
		0,
		1,
		6,
		7
	};
};

class A3_TVG_S_F45_COMMS_CAM_UA: A3_TVG_S_F_COMMS_CAM_UA
{
	displayName 				= "Mark 5 Interface (CNM/CA/UA)";
	thermalMode[] = 
	{
		0,
		1,
		7
	};
};

class A3_TVG_S_F6_COMMS_CAM_UA: A3_TVG_S_F_COMMS_CAM_UA
{
	displayName 				= "Mark 6 Interface (CNM/CA/UA)";
	thermalMode[] = 
	{
		0
	};
};

class A3_TVG_S_F7_COMMS_CAM_UA: A3_TVG_S_F_COMMS_CAM_UA
{
	displayName				 	= "Mark 7 Interface (CNM/CA/UA)";
	thermalMode[] = 
	{
		6
	};
};

class A3_TVG_S_F8_COMMS_CAM_UA: A3_TVG_S_F_COMMS_CAM_UA
{
	displayName 				= "Mark 8 Interface (CNM/CA/UA)";
	thermalMode[] = 
	{
		7
	};
};

// Zulu Compat (Comms/OD)
class VES_NVG_COMMS_SCOPE;
class A3_TVG_S_F_COMMS_SCOPE: VES_NVG_COMMS_SCOPE
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName					= "Mark 2 Interface (CA/OD)";
	
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
};

class A3_TVG_S_F2_COMMS_SCOPE: A3_TVG_S_F_COMMS_SCOPE
{
	displayName 				= "Mark 3 Interface (CA/OD)";
	thermalMode[] = 
	{
		0,
		1,
		3,
		4,
		7
	};
};

class A3_TVG_S_F3_COMMS_SCOPE: A3_TVG_S_F_COMMS_SCOPE
{
	displayName 				= "Mark 4 Interface (CA/OD)";
	thermalMode[] =
	{
		0,
		1,
		6,
		7
	};
};

class A3_TVG_S_F45_COMMS_SCOPE: A3_TVG_S_F_COMMS_SCOPE
{
	displayName 				= "Mark 5 Interface (CA/OD)";
	thermalMode[] = 
	{
		0,
		1,
		7
	};
};

class A3_TVG_S_F6_COMMS_SCOPE: A3_TVG_S_F_COMMS_SCOPE
{
	displayName 				= "Mark 6 Interface (CA/OD)";
	thermalMode[] = 
	{
		0
	};
};

class A3_TVG_S_F7_COMMS_SCOPE: A3_TVG_S_F_COMMS_SCOPE
{
	displayName				 	= "Mark 7 Interface (CA/OD)";
	thermalMode[] = 
	{
		6
	};
};

class A3_TVG_S_F8_COMMS_SCOPE: A3_TVG_S_F_COMMS_SCOPE
{
	displayName 				= "Mark 8 Interface (CA/OD)";
	thermalMode[] = 
	{
		7
	};
};

// Zulu Compat (CNM/OD)
class VES_NVG_CAM_SCOPE;
class A3_TVG_S_F_CAM_SCOPE: VES_NVG_CAM_SCOPE
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName					= "Mark 2 Interface (CNM/OD)";
	
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
};

class A3_TVG_S_F2_CAM_SCOPE: A3_TVG_S_F_CAM_SCOPE
{
	displayName 				= "Mark 3 Interface (CNM/OD)";
	thermalMode[] = 
	{
		0,
		1,
		3,
		4,
		7
	};
};

class A3_TVG_S_F3_CAM_SCOPE: A3_TVG_S_F_CAM_SCOPE
{
	displayName 				= "Mark 4 Interface (CNM/OD)";
	thermalMode[] =
	{
		0,
		1,
		6,
		7
	};
};

class A3_TVG_S_F45_CAM_SCOPE: A3_TVG_S_F_CAM_SCOPE
{
	displayName 				= "Mark 5 Interface (CNM/OD)";
	thermalMode[] = 
	{
		0,
		1,
		7
	};
};

class A3_TVG_S_F6_CAM_SCOPE: A3_TVG_S_F_CAM_SCOPE
{
	displayName 				= "Mark 6 Interface (CNM/OD)";
	thermalMode[] = 
	{
		0
	};
};

class A3_TVG_S_F7_CAM_SCOPE: A3_TVG_S_F_CAM_SCOPE
{
	displayName				 	= "Mark 7 Interface (CNM/OD)";
	thermalMode[] = 
	{
		6
	};
};

class A3_TVG_S_F8_CAM_SCOPE: A3_TVG_S_F_CAM_SCOPE
{
	displayName 				= "Mark 8 Interface (CNM/OD)";
	thermalMode[] = 
	{
		7
	};
};

// Zulu Compat (CNM/CA/OD)
class VES_NVG_COMMS_CAM_SCOPE;
class A3_TVG_S_F_COMMS_CAM_SCOPE: VES_NVG_COMMS_CAM_SCOPE
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName					= "Mark 2 Interface (CNM/CA/OD)";
	
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
};

class A3_TVG_S_F2_COMMS_CAM_SCOPE: A3_TVG_S_F_COMMS_CAM_SCOPE
{
	displayName 				= "Mark 3 Interface (CNM/CA/OD)";
	thermalMode[] = 
	{
		0,
		1,
		3,
		4,
		7
	};
};

class A3_TVG_S_F3_COMMS_CAM_SCOPE: A3_TVG_S_F_COMMS_CAM_SCOPE
{
	displayName 				= "Mark 4 Interface (CNM/CA/OD)";
	thermalMode[] =
	{
		0,
		1,
		6,
		7
	};
};

class A3_TVG_S_F45_COMMS_CAM_SCOPE: A3_TVG_S_F_COMMS_CAM_SCOPE
{
	displayName 				= "Mark 5 Interface (CNM/CA/OD)";
	thermalMode[] = 
	{
		0,
		1,
		7
	};
};

class A3_TVG_S_F6_COMMS_CAM_SCOPE: A3_TVG_S_F_COMMS_CAM_SCOPE
{
	displayName 				= "Mark 6 Interface (CNM/CA/OD)";
	thermalMode[] = 
	{
		0
	};
};

class A3_TVG_S_F7_COMMS_CAM_SCOPE: A3_TVG_S_F_COMMS_CAM_SCOPE
{
	displayName				 	= "Mark 7 Interface (CNM/CA/OD)";
	thermalMode[] = 
	{
		6
	};
};

class A3_TVG_S_F8_COMMS_CAM_SCOPE: A3_TVG_S_F_COMMS_CAM_SCOPE
{
	displayName 				= "Mark 8 Interface (CNM/CA/OD)";
	thermalMode[] = 
	{
		7
	};
};

// Zulu Compat (CNM)
class VES_NVG_CAM;
class A3_TVG_S_F_CAM: VES_NVG_CAM
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName					= "Mark 2 Interface (CNM)";
	
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
};

class A3_TVG_S_F2_CAM: A3_TVG_S_F_CAM
{
	displayName 				= "Mark 3 Interface (CNM)";
	thermalMode[] = 
	{
		0,
		1,
		3,
		4,
		7
	};
};

class A3_TVG_S_F3_CAM: A3_TVG_S_F_CAM
{
	displayName 				= "Mark 4 Interface (CNM)";
	thermalMode[] =
	{
		0,
		1,
		6,
		7
	};
};

class A3_TVG_S_F45_CAM: A3_TVG_S_F_CAM
{
	displayName 				= "Mark 5 Interface (CNM)";
	thermalMode[] = 
	{
		0,
		1,
		7
	};
};

class A3_TVG_S_F6_CAM: A3_TVG_S_F_CAM
{
	displayName 				= "Mark 6 Interface (CNM)";
	thermalMode[] = 
	{
		0
	};
};

class A3_TVG_S_F7_CAM: A3_TVG_S_F_CAM
{
	displayName				 	= "Mark 7 Interface (CNM)";
	thermalMode[] = 
	{
		6
	};
};

class A3_TVG_S_F8_CAM: A3_TVG_S_F_CAM
{
	displayName 				= "Mark 8 Interface (CNM)";
	thermalMode[] = 
	{
		7
	};
};

// Zulu Compat (CA)
class VES_NVG_COMMS;
class A3_TVG_S_F_COMMS: VES_NVG_COMMS
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName					= "Mark 2 Interface (CA)";
	
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
};

class A3_TVG_S_F2_COMMS: A3_TVG_S_F_COMMS
{
	displayName 				= "Mark 3 Interface (CA)";
	thermalMode[] = 
	{
		0,
		1,
		3,
		4,
		7
	};
};

class A3_TVG_S_F3_COMMS: A3_TVG_S_F_COMMS
{
	displayName 				= "Mark 4 Interface (CA)";
	thermalMode[] =
	{
		0,
		1,
		6,
		7
	};
};

class A3_TVG_S_F45_COMMS: A3_TVG_S_F_COMMS
{
	displayName 				= "Mark 5 Interface (CA)";
	thermalMode[] = 
	{
		0,
		1,
		7
	};
};

class A3_TVG_S_F6_COMMS: A3_TVG_S_F_COMMS
{
	displayName 				= "Mark 6 Interface (CA)";
	thermalMode[] = 
	{
		0
	};
};

class A3_TVG_S_F7_COMMS: A3_TVG_S_F_COMMS
{
	displayName				 	= "Mark 7 Interface (CA)";
	thermalMode[] = 
	{
		6
	};
};

class A3_TVG_S_F8_COMMS: A3_TVG_S_F_COMMS
{
	displayName 				= "Mark 8 Interface (CA)";
	thermalMode[] = 
	{
		7
	};
};

// Zulu Compat (UA)
class VES_NVG_UA;
class A3_TVG_S_F_UA: VES_NVG_UA
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName					= "Mark 2 Interface (UA)";
	
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
};

class A3_TVG_S_F2_UA: A3_TVG_S_F_UA
{
	displayName 				= "Mark 3 Interface (UA)";
	thermalMode[] = 
	{
		0,
		1,
		3,
		4,
		7
	};
};

class A3_TVG_S_F3_UA: A3_TVG_S_F_UA
{
	displayName 				= "Mark 4 Interface (UA)";
	thermalMode[] =
	{
		0,
		1,
		6,
		7
	};
};

class A3_TVG_S_F45_UA: A3_TVG_S_F_UA
{
	displayName 				= "Mark 5 Interface (UA)";
	thermalMode[] = 
	{
		0,
		1,
		7
	};
};

class A3_TVG_S_F6_UA: A3_TVG_S_F_UA
{
	displayName 				= "Mark 6 Interface (UA)";
	thermalMode[] = 
	{
		0
	};
};

class A3_TVG_S_F7_UA: A3_TVG_S_F_UA
{
	displayName				 	= "Mark 7 Interface (UA)";
	thermalMode[] = 
	{
		6
	};
};

class A3_TVG_S_F8_UA: A3_TVG_S_F_UA
{
	displayName 				= "Mark 8 Interface (UA)";
	thermalMode[] = 
	{
		7
	};
};

// Zulu Compat (OD)
class VES_NVG_SCOPE;
class A3_TVG_S_F_SCOPE: VES_NVG_SCOPE
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayName					= "Mark 2 Interface (OD)";
	
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
};

class A3_TVG_S_F2_SCOPE: A3_TVG_S_F_SCOPE
{
	displayName 				= "Mark 3 Interface (OD)";
	thermalMode[] = 
	{
		0,
		1,
		3,
		4,
		7
	};
};

class A3_TVG_S_F3_SCOPE: A3_TVG_S_F_SCOPE
{
	displayName 				= "Mark 4 Interface (OD)";
	thermalMode[] =
	{
		0,
		1,
		6,
		7
	};
};

class A3_TVG_S_F45_SCOPE: A3_TVG_S_F_SCOPE
{
	displayName 				= "Mark 5 Interface (OD)";
	thermalMode[] = 
	{
		0,
		1,
		7
	};
};

class A3_TVG_S_F6_SCOPE: A3_TVG_S_F_SCOPE
{
	displayName 				= "Mark 6 Interface (OD)";
	thermalMode[] = 
	{
		0
	};
};

class A3_TVG_S_F7_SCOPE: A3_TVG_S_F_SCOPE
{
	displayName				 	= "Mark 7 Interface (OD)";
	thermalMode[] = 
	{
		6
	};
};

class A3_TVG_S_F8_SCOPE: A3_TVG_S_F_SCOPE
{
	displayName 				= "Mark 8 Interface (OD)";
	thermalMode[] = 
	{
		7
	};
};