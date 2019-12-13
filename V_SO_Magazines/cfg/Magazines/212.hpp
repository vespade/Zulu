// 6 Round Magazines
class OPTRE_6Rnd_8Gauge_Pellets: 20Rnd_762x51_Mag
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	ammo 						= "OPTRE_B_8Gauge_Pellets";
	count						= 6;
	displayname 				= "6Rnd 8 Gauge Pellets";
	displayNameShort 			= "8 Gauge Pellets";
	descriptionShort			= "6 Rounds<br>8 Gauge<br>Pellets";
	
	initspeed 					= 500;
	mass 						= 10;
	model 						= "\OPTRE_Weapons\Shotgun\Shell_mag_S.p3d";
	picture 					= "\a3\weapons_F\data\ui\m_12gauge_ca.paa";
};

class OPTRE_6Rnd_8Gauge_Slugs: OPTRE_6Rnd_8Gauge_Pellets
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	ammo 						= "OPTRE_B_8Gauge_Slugs";
	displayname 				= "6Rnd 8 Gauge Slugs";
	displayNameShort 			= "8 Gauge Slugs";
	descriptionShort			= "6 Rounds<br>8 Gauge<br>Slugs";
	
	initspeed 					= 800;
	model 						= "\OPTRE_Weapons\Shotgun\Shell_mag_P.p3d";
	picture 					= "\a3\weapons_F\data\ui\m_12gauge_slugs_ca.paa";
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
	
	initspeed 					= 1000;
};

class OPTRE_6Rnd_8Gauge_Beanbags: OPTRE_6Rnd_8Gauge_Pellets
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	ammo 						= "OPTRE_B_8Gauge_Beanbags";
	displayname 				= "6Rnd 8 Gauge Beanbags";
	displayNameShort 			= "8 Gauge Beanbags";
	descriptionShort			= "6 Rounds<br>8 Gauge<br>Beanbags";
	
	initspeed 					= 300;
};

// 12 Round Magazines
class OPTRE_12Rnd_8Gauge_Pellets: OPTRE_6Rnd_8Gauge_Pellets
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	ammo 						= "OPTRE_B_8Gauge_Pellets";
	count						= 12;
	displayname 				= "12Rnd 8 Gauge Pellets";
	descriptionShort			= "12 Rounds<br>8 Gauge<br>Pellets";
};

class OPTRE_12Rnd_8Gauge_Slugs: OPTRE_6Rnd_8Gauge_Slugs
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayname 				= "12Rnd 8 Gauge Slugs";
	descriptionShort			= "12 Rounds<br>8 Gauge<br>Slugs";
	model 						= "\OPTRE_Weapons\Shotgun\Shell_mag_P.p3d";
	picture 					= "\a3\weapons_F\data\ui\m_12gauge_slugs_ca.paa";
};

class OPTRE_12Rnd_8Gauge_HEDP: OPTRE_6Rnd_8Gauge_HEDP
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayname 				= "12Rnd 8 Gauge HEDP";
	descriptionShort			= "12 Rounds<br>8 Gauge<br>High-Explosive Dual Purpose";
};

class OPTRE_12Rnd_8Gauge_Beanbags: OPTRE_6Rnd_8Gauge_Beanbags
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	displayname 				= "12Rnd 8 Gauge Beanbags";
	descriptionShort			= "12 Rounds<br>8 Gauge<br>Beanbags";
};