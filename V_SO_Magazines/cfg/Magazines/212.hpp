// 6 Round Magazines
class 2Rnd_12Gauge_Pellets;
class OPTRE_6Rnd_8Gauge_Pellets: 2Rnd_12Gauge_Pellets
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	ammo 						= "OPTRE_B_8Gauge_Pellet";
	displayname 				= "6Rnd 8 Gauge Pellets";
	displayNameShort 			= "8 Gauge Pellets";
	descriptionShort			= "6 Rounds<br>8 Gauge<br>Pellets";
	
	// Overwriting of the OPTRE classes back to the inherited...
	initSpeed 					= 380;
	
	model 						= "\OPTRE_Weapons\Shotgun\Shell_mag_S";
	picture 					= "\a3\weapons_F\data\ui\m_12gauge_ca";
};

class 2Rnd_12Gauge_Slug;
class OPTRE_6Rnd_8Gauge_Slugs: 2Rnd_12Gauge_Slug
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	ammo 						= "OPTRE_B_8Gauge_Slug";
	count						= 6;
	displayname 				= "6Rnd 8 Gauge Slugs";
	displayNameShort 			= "8 Gauge Slugs";
	descriptionShort			= "6 Rounds<br>8 Gauge<br>Slugs";
	
	// Overwriting of the OPTRE classes back to the inherited...
	initSpeed 					= 450;
	
	model 						= "\OPTRE_Weapons\Shotgun\Shell_mag_P";
	picture 					= "\a3\weapons_F\data\ui\m_12gauge_slugs_ca";
};

class OPTRE_6Rnd_8Gauge_HEDP: OPTRE_6Rnd_8Gauge_Slugs
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	ammo 						= "OPTRE_B_8Gauge_HEDP";
	displayname 				= "6Rnd 8 Gauge HEDP";
	displayNameShort 			= "8 Gauge HEDP";
	descriptionShort			= "6 Rounds<br>8 Gauge<br>High-Explosive Dual Purpose";
	
	initSpeed 					= 450;
};

class OPTRE_6Rnd_8Gauge_Beanbags: OPTRE_6Rnd_8Gauge_Slugs
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	ammo 						= "OPTRE_B_8Gauge_Beanbag";
	displayname 				= "6Rnd 8 Gauge Beanbags";
	displayNameShort 			= "8 Gauge Beanbags";
	descriptionShort			= "6 Rounds<br>8 Gauge<br>Beanbags";
};

class OPTRE_6Rnd_8Gauge_Incendiary: OPTRE_6Rnd_8Gauge_Pellets
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	ammo 						= "OPTRE_B_8Gauge_Incendiary";
	displayname 				= "6Rnd 8 Gauge Dragon's Breath";
	displayNameShort 			= "8 Gauge Incendiary";
	descriptionShort			= "6 Rounds<br>8 Gauge<br>Incendiary";
	tracersEvery 				= 1;
};

// 12 Round Magazines
class OPTRE_12Rnd_8Gauge_Pellets: OPTRE_6Rnd_8Gauge_Pellets
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	count						= 12;
	mass 						= 20;
	displayname 				= "12Rnd 8 Gauge Pellets";
	descriptionShort			= "12 Rounds<br>8 Gauge<br>Pellets";
};

class OPTRE_12Rnd_8Gauge_Slugs: OPTRE_6Rnd_8Gauge_Slugs
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	count						= 12;
	mass 						= 20;
	displayname 				= "12Rnd 8 Gauge Slugs";
	descriptionShort			= "12 Rounds<br>8 Gauge<br>Slugs";
};

class OPTRE_12Rnd_8Gauge_HEDP: OPTRE_6Rnd_8Gauge_HEDP
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	count						= 12;
	mass 						= 20;
	displayname 				= "12Rnd 8 Gauge HEDP";
	descriptionShort			= "12 Rounds<br>8 Gauge<br>High-Explosive Dual Purpose";
};

class OPTRE_12Rnd_8Gauge_Beanbags: OPTRE_6Rnd_8Gauge_Beanbags
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	count						= 12;
	mass 						= 20;
	displayname 				= "12Rnd 8 Gauge Beanbags";
	descriptionShort			= "12 Rounds<br>8 Gauge<br>Beanbags";
};

class OPTRE_12Rnd_8Gauge_Incendiary: OPTRE_6Rnd_8Gauge_Incendiary
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	count						= 12;
	mass 						= 20;
	displayname 				= "12Rnd 8 Gauge Dragon's Breath";
	descriptionShort			= "12 Rounds<br>8 Gauge<br>Incendiary";	
};