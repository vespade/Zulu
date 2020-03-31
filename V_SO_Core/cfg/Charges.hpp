	class MineGeneric;
	class MineBase: MineGeneric
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=1;
		_generalMacro="MineBase";
		icon="iconExplosiveGP";
	};
	class OPTRE_Placed_C12: MineBase
	{
		DLC="OPTRE";
		author="Fireteam Zulu";
		mapSize=0.43000001;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconExplosiveGP";
		ammo="C12_Remote_Ammo";
		model="\OPTRE_Weapons\charges\c12.p3d";
		displayName="C12 Explosive";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Explosives";
	};
	class OPTRE_Placed_Mine: MineBase
	{
		DLC="OPTRE";
		author="Fireteam Zulu";
		mapSize=0.43000001;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconExplosiveGP";
		ammo="UNSC_Mine_Ammo";
		model="\OPTRE_Weapons\charges\UNSCMine.p3d";
		displayName="UNSC Land Mine";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Explosives";
	};
	class OPTRE_Placed_C7: MineBase
	{
		DLC="OPTRE";
		author="Fireteam Zulu";
		mapSize=0.43000001;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconExplosiveGP";
		ammo="C7_Remote_Ammo";
		model="\OPTRE_Weapons\charges\c7.p3d";
		displayName="C7 Explosive Foam";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Explosives";
	};
	class OPTRE_Placed_M168: MineBase
	{
		DLC="OPTRE";
		author="Fireteam Zulu";
		mapSize=0.43000001;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
		scope=2;
		scopeCurator=2;
		icon="iconExplosiveGP";
		ammo="M168_Remote_Ammo";
		model="\OPTRE_Weapons\charges\m168.p3d";
		displayName="M168 Demolition Charge";
		editorCategory="EdCat_Weapons";
		editorSubcategory="EdSubcat_Explosives";
	};
	class OPTRE_Placed_M41_IED: OPTRE_Placed_M168
	{
		DLC="OPTRE";
		author="Fireteam Zulu";
		ammo="M41_IED_Remote_Ammo";
		model="\OPTRE_Weapons\charges\m41.p3d";
		displayName="M41 IED";
	};
	class OPTRE_Placed_M41_IED_B: OPTRE_Placed_M41_IED
	{
		DLC="OPTRE";
		author="Fireteam Zulu";
		ammo="M41_IED_B_Remote_Ammo";
		model="\OPTRE_Weapons\charges\m41_b.p3d";
		displayName="M41 IED (Buried)";
	};