class OPTRE_M41_Twin_HEAT;
class OPTRE_1Rnd_50x137_HEAT: OPTRE_M41_Twin_HEAT
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scope						= 2;
	scopeArsenal				= 2;
	
	ammo 						= "OPTRE_50x137_HEAT";
	initspeed					= 360;
	count						= 1;
	displayname 				= "50x137mm HEAT Rocket";
	descriptionShort			= "1 Rocket<br>50x137mm<br>High Explosive Anti-Tank<br>Unguided";
	mass						= 35;
};

class OPTRE_1Rnd_50x137_HE: OPTRE_1Rnd_50x137_HEAT
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	ammo 						= "OPTRE_50X137_HE";
	initspeed					= 400;
	count						= 1;
	displayname 				= "50x137mm HE Rocket";
	displaynameshort 			= "HE";
	descriptionShort			= "1 Rocket<br>50x137mm<br>High Explosive<br>Unguided";
	mass						= 30;
};

class OPTRE_1Rnd_50x137_PEN: OPTRE_1Rnd_50x137_HE
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	ammo 						= "OPTRE_50x137_PEN";
	initspeed					= 700;
	count						= 1;
	displayname 				= "50x137mm Penetrator Rocket";
	displaynameshort 			= "Penetrator";
	descriptionShort			= "1 Rocket<br>50x137mm<br>Anti-Tank<br>Unguided";
	mass						= 50;
};

class OPTRE_1Rnd_50x137_THERMO: OPTRE_1Rnd_50x137_PEN
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	
	ammo 						= "OPTRE_50x137_THERMO";
	initspeed					= 150;
	count						= 1;
	displayname 				= "50x137mm Thermobaric Rocket";
	displaynameshort 			= "Thermobaric";
	descriptionShort			= "1 Rocket<br>50x137mm<br>Thermobarick<br>Unguided";
	mass						= 55;
};

class OPTRE_1Rnd_50x137_Tekcirc: OPTRE_1Rnd_50x137_THERMO
{
	dlc							= "SO";
	author						= "Fireteam Zulu";
	scopeArsenal				= 1;
	
	ammo 						= "OPTRE_50x137_Tekcirc";
	initspeed					= -5;
	displayname 				= "50x137mm Tekcirc Rocket";
	displaynameshort 			= "Tekcirc";
	descriptionShort			= "1 Rocket<br>50x137mm<br>Tekcirc<br>Dediugnu";
};