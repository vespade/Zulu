	class CA_Magazine;
	class SatchelCharge_Remote_Mag;
	class ATMine_Range_Mag;
	class C12_Remote_Mag: SatchelCharge_Remote_Mag
	{
		author="Fireteam Zulu";
		scope=2;
		displayName="C12 Demolition Charge";
		displayNameShort="C12 Demo Charge";
		descriptionShort="Compact explosive charge";
		descriptionUse="Use: Set Charge";
		type="2* 256";
		allowedSlots[]={901,701};
		ammo="C12_Remote_Ammo";
		model="\OPTRE_Weapons\charges\c12G.p3d";
		picture="\OPTRE_weapons\charges\icons\c12.paa";
		mass=110;
		count=1;
		maxLeadSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		useActionTitle="Put %1 (%2 left)";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			10
		};
	};
	class C7_Remote_Mag: SatchelCharge_Remote_Mag
	{
		author="Fireteam Zulu";
		scope=2;
		displayName="C-7 Explosive Foam";
		displayNameShort="C7 Explosive Foam";
		descriptionShort="Compact explosive Foam";
		descriptionUse="Use: Set Charge";
		type="2* 256";
		allowedSlots[]={901,701};
		ammo="C7_Remote_Ammo";
		model="\OPTRE_Weapons\charges\C7Can.p3d";
		picture="\OPTRE_weapons\charges\icons\c7.paa";
		mass=7;
		count=1;
		maxLeadSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		useActionTitle="Put %1 (%2 left)";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			10
		};
	};
	class UNSCMine_Range_Mag: ATMine_Range_Mag
	{
		author="Fireteam Zulu";
		scope=2;
		mass=60;
		displayName="M154 AT Mine";
		descriptionUse="Use mine";
		picture="\OPTRE_weapons\charges\icons\mine.paa";
		model="\OPTRE_Weapons\charges\UNSCmine.p3d";
		useAction=1;
		useActionTitle="Put %1 (%2 left)";
		type="2* 256";
		allowedSlots[]={901,701};
		value=5;
		ammo="UNSC_Mine_Ammo";
		nameSoundWeapon="mine";
		nameSound="mine";
		count=1;
		initSpeed=0;
		maxLeadSpeed=0;
		descriptionShort="BIP BAP BOOM!";
		weaponPoolAvailable=1;
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			10
		};
	};
	class M168_Remote_Mag: SatchelCharge_Remote_Mag
	{
		author="Fireteam Zulu";
		scope=2;
		displayName="M168 Demolition Pack";
		displayNameShort="M168 Demo Charge";
		descriptionShort="Compact explosive block";
		descriptionUse="Use: Set Charge";
		type="2* 256";
		allowedSlots[]={901,701};
		ammo="M168_Remote_Ammo";
		model="\OPTRE_Weapons\charges\m168g.p3d";
		picture="\OPTRE_weapons\charges\icons\m168.paa";
		mass=795;
		count=1;
		maxLeadSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		useActionTitle="Put %1 (%2 left)";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			10
		};
	};
	class M41_IED_Remote_Mag: SatchelCharge_Remote_Mag
	{
		author="Fireteam Zulu";
		scope=2;
		displayName="M41 IED";
		displayNameShort="M41 IED";
		descriptionShort="Improvised Explosive Device";
		descriptionUse="Use: Set Charge";
		type="2* 256";
		allowedSlots[]={901,701};
		ammo="M41_IED_Remote_Ammo";
		model="\OPTRE_Weapons\charges\m41.p3d";
		picture="\OPTRE_weapons\rockets\icons\rocket.paa";
		mass=22;
		count=1;
		maxLeadSpeed=0;
		nameSoundWeapon="satchelcharge";
		nameSound="satchelcharge";
		weaponPoolAvailable=1;
		useActionTitle="Put %1 (%2 left)";
		sound[]=
		{
			"A3\sounds_f\dummysound",
			0.00031622799,
			1,
			10
		};
	};
	class M41_IED_B_Remote_Mag: M41_IED_Remote_Mag
	{
		author="Fireteam Zulu";
		ammo="M41_IED_B_Remote_Ammo";
		displayName="M41 IED (Buried)";
		displayNameShort="M41 IED (Buried)";
		model="\OPTRE_Weapons\charges\m41_b.p3d";
	};