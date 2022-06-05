class CfgPatches
{
	class V_SO_Weapons
	{
		author="Fireteam Zulu";
		name="Fireteam Zulu: Specialized Ordanance";
		url="https://discord.gg/fa7Cguk";
		units[]={};
		weapons[]=
		{
			"OPTRE_M301X",
			"OPTRE_M319",
			"OPTRE_MA5B",
			"OPTRE_MA5BGL",
			"OPTRE_MA5A",
			"OPTRE_MA5AGL",
			"OPTRE_MA5C",
			"OPTRE_MA5CGL",
			"OPTRE_MA5K",
			"OPTRE_MA37",
			"OPTRE_MA37B",
			"OPTRE_MA37GL",
			"OPTRE_MA37BGL",
			"OPTRE_MA32",
			"OPTRE_MA32B",
			"OPTRE_MA32GL",
			"OPTRE_MA32BGL",
			"OPTRE_M6G",
			"OPTRE_M6C",
			"OPTRE_M33",
			"OPTRE_M33G",
			"OPTRE_M6D",
			"OPTRE_M6D_Flashlight",
			"OPTRE_M392_DMR",
			"OPTRE_M392XD_DMR",
			"OPTRE_M393_DMR",
			"OPTRE_M393S_DMR",
			"OPTRE_M295_BMR",
			"OPTRE_M28A2",
			"OPTRE_MRS10X",
			"OPTRE_CR77",
			"OPTRE_M14X",
			"OPTRE_BR55HB",
			"OPTRE_BR55",
			"OPTRE_BR55AM",
			"OPTRE_M7",
			"OPTRE_M7_Folded",
			"OPTRE_SRS99D",
			"OPTRE_SRS99C",
			"OPTRE_M99",
			"OPTRE_M48_PAW",
			"OPTRE_M73",
			"OPTRE_M73H",
			"OPTRE_M45",
			"OPTRE_M45TAC",
			"OPTRE_M90A"
		};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"OPTRE_Core",
			"OPTRE_Weapons",
			"A3_Data_F",
			"OPTRE_Weapons_Charges",
			"OPTRE_Weapons_AR",
			"A3_Data_F_Mark",
			"OPTRE_Weapons_SMG",
			"OPTRE_Weapons_Pistol"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class V_SO_Weapons
		{
			list[]=
			{
				"V_SO_Weapons"
			};
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	class srifle_EBR_F;
	class OPTRE_LongRifle_Base: srifle_EBR_F
	{
		class Single;
		class WeaponSlotsInfo;
	};
	class arifle_Mk20_F;
	class OPTRE_Rifle_Base: arifle_Mk20_F
	{
		class WeaponSlotsInfo;
		class ItemInfo;
		class Single;
		class Burst;
		class FullAuto;
	};
	class NVGoggles;
	class A3_TVG_S_F: NVGoggles
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		class ItemInfo
		{
			type=616;
			uniformModel="";
			modelOff="";
			mass=13;
		};
	};
	class A3_TVG_S_F2: A3_TVG_S_F
	{
		displayName="Mark 3 Interface";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3: A3_TVG_S_F
	{
		displayName="Mark 4 Interface";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45: A3_TVG_S_F
	{
		displayName="Mark 5 Interface";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6: A3_TVG_S_F
	{
		displayName="Mark 6 Interface";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7: A3_TVG_S_F
	{
		displayName="Mark 7 Interface";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8: A3_TVG_S_F
	{
		displayName="Mark 8 Interface";
		thermalMode[]={7};
	};
	class VES_NVG_CNM;
	class A3_TVG_S_F_CNM: VES_NVG_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_CNM: A3_TVG_S_F_CNM
	{
		displayName="Mark 3 Interface (CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_CNM: A3_TVG_S_F_CNM
	{
		displayName="Mark 4 Interface (CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_CNM: A3_TVG_S_F_CNM
	{
		displayName="Mark 5 Interface (CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_CNM: A3_TVG_S_F_CNM
	{
		displayName="Mark 6 Interface (CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_CNM: A3_TVG_S_F_CNM
	{
		displayName="Mark 7 Interface (CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_CNM: A3_TVG_S_F_CNM
	{
		displayName="Mark 8 Interface (CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_HUL;
	class A3_TVG_S_F_HUL: VES_NVG_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_HUL: A3_TVG_S_F_HUL
	{
		displayName="Mark 3 Interface (HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_HUL: A3_TVG_S_F_HUL
	{
		displayName="Mark 4 Interface (HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_HUL: A3_TVG_S_F_HUL
	{
		displayName="Mark 5 Interface (HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_HUL: A3_TVG_S_F_HUL
	{
		displayName="Mark 6 Interface (HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_HUL: A3_TVG_S_F_HUL
	{
		displayName="Mark 7 Interface (HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_HUL: A3_TVG_S_F_HUL
	{
		displayName="Mark 8 Interface (HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UL;
	class A3_TVG_S_F_UL: VES_NVG_UL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UL: A3_TVG_S_F_UL
	{
		displayName="Mark 3 Interface (UL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UL: A3_TVG_S_F_UL
	{
		displayName="Mark 4 Interface (UL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UL: A3_TVG_S_F_UL
	{
		displayName="Mark 5 Interface (UL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UL: A3_TVG_S_F_UL
	{
		displayName="Mark 6 Interface (UL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UL: A3_TVG_S_F_UL
	{
		displayName="Mark 7 Interface (UL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UL: A3_TVG_S_F_UL
	{
		displayName="Mark 8 Interface (UL)";
		thermalMode[]={7};
	};
	class VES_NVG_HURS;
	class A3_TVG_S_F_HURS: VES_NVG_HURS
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (HURS)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_HURS: A3_TVG_S_F_HURS
	{
		displayName="Mark 3 Interface (HURS)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_HURS: A3_TVG_S_F_HURS
	{
		displayName="Mark 4 Interface (HURS)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_HURS: A3_TVG_S_F_HURS
	{
		displayName="Mark 5 Interface (HURS)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_HURS: A3_TVG_S_F_HURS
	{
		displayName="Mark 6 Interface (HURS)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_HURS: A3_TVG_S_F_HURS
	{
		displayName="Mark 7 Interface (HURS)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_HURS: A3_TVG_S_F_HURS
	{
		displayName="Mark 8 Interface (HURS)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI;
	class A3_TVG_S_F_MVI: VES_NVG_MVI
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (MVI)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI: A3_TVG_S_F_MVI
	{
		displayName="Mark 3 Interface (MVI)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI: A3_TVG_S_F_MVI
	{
		displayName="Mark 4 Interface (MVI)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI: A3_TVG_S_F_MVI
	{
		displayName="Mark 5 Interface (MVI)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI: A3_TVG_S_F_MVI
	{
		displayName="Mark 6 Interface (MVI)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI: A3_TVG_S_F_MVI
	{
		displayName="Mark 7 Interface (MVI)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI: A3_TVG_S_F_MVI
	{
		displayName="Mark 8 Interface (MVI)";
		thermalMode[]={7};
	};
	class VES_NVG_UA;
	class A3_TVG_S_F_UA: VES_NVG_UA
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA: A3_TVG_S_F_UA
	{
		displayName="Mark 3 Interface (UA)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA: A3_TVG_S_F_UA
	{
		displayName="Mark 4 Interface (UA)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA: A3_TVG_S_F_UA
	{
		displayName="Mark 5 Interface (UA)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA: A3_TVG_S_F_UA
	{
		displayName="Mark 6 Interface (UA)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA: A3_TVG_S_F_UA
	{
		displayName="Mark 7 Interface (UA)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA: A3_TVG_S_F_UA
	{
		displayName="Mark 8 Interface (UA)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB;
	class A3_TVG_S_F_UAB: VES_NVG_UAB
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UAB)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB: A3_TVG_S_F_UAB
	{
		displayName="Mark 3 Interface (UAB)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB: A3_TVG_S_F_UAB
	{
		displayName="Mark 4 Interface (UAB)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB: A3_TVG_S_F_UAB
	{
		displayName="Mark 5 Interface (UAB)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB: A3_TVG_S_F_UAB
	{
		displayName="Mark 6 Interface (UAB)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB: A3_TVG_S_F_UAB
	{
		displayName="Mark 7 Interface (UAB)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB: A3_TVG_S_F_UAB
	{
		displayName="Mark 8 Interface (UAB)";
		thermalMode[]={7};
	};
	class VES_NVG_HURS_CNM;
	class A3_TVG_S_F_HURS_CNM: VES_NVG_HURS_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (HURS/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="Mark 3 Interface (HURS/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="Mark 4 Interface (HURS/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="Mark 5 Interface (HURS/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="Mark 6 Interface (HURS/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="Mark 7 Interface (HURS/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_HURS_CNM: A3_TVG_S_F_HURS_CNM
	{
		displayName="Mark 8 Interface (HURS/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_HURS_HUL;
	class A3_TVG_S_F_HURS_HUL: VES_NVG_HURS_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (HURS/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="Mark 3 Interface (HURS/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="Mark 4 Interface (HURS/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="Mark 5 Interface (HURS/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="Mark 6 Interface (HURS/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="Mark 7 Interface (HURS/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_HURS_HUL: A3_TVG_S_F_HURS_HUL
	{
		displayName="Mark 8 Interface (HURS/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_CNM;
	class A3_TVG_S_F_MVI_CNM: VES_NVG_MVI_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (MVI/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="Mark 3 Interface (MVI/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="Mark 4 Interface (MVI/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="Mark 5 Interface (MVI/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="Mark 6 Interface (MVI/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="Mark 7 Interface (MVI/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_CNM: A3_TVG_S_F_MVI_CNM
	{
		displayName="Mark 8 Interface (MVI/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_HUL;
	class A3_TVG_S_F_MVI_HUL: VES_NVG_MVI_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (MVI/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="Mark 3 Interface (MVI/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="Mark 4 Interface (MVI/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="Mark 5 Interface (MVI/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="Mark 6 Interface (MVI/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="Mark 7 Interface (MVI/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_HUL: A3_TVG_S_F_MVI_HUL
	{
		displayName="Mark 8 Interface (MVI/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_UL_CNM;
	class A3_TVG_S_F_MVI_UL_CNM: VES_NVG_MVI_UL_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (MVI/UL/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="Mark 3 Interface (MVI/UL/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="Mark 4 Interface (MVI/UL/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="Mark 5 Interface (MVI/UL/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="Mark 6 Interface (MVI/UL/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="Mark 7 Interface (MVI/UL/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_UL_CNM: A3_TVG_S_F_MVI_UL_CNM
	{
		displayName="Mark 8 Interface (MVI/UL/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_UL_HUL;
	class A3_TVG_S_F_MVI_UL_HUL: VES_NVG_MVI_UL_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (MVI/UL/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="Mark 3 Interface (MVI/UL/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="Mark 4 Interface (MVI/UL/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="Mark 5 Interface (MVI/UL/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="Mark 6 Interface (MVI/UL/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="Mark 7 Interface (MVI/UL/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_UL_HUL: A3_TVG_S_F_MVI_UL_HUL
	{
		displayName="Mark 8 Interface (MVI/UL/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_MVI_UL;
	class A3_TVG_S_F_MVI_UL: VES_NVG_MVI_UL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (MVI/UL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="Mark 3 Interface (MVI/UL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="Mark 4 Interface (MVI/UL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="Mark 5 Interface (MVI/UL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="Mark 6 Interface (MVI/UL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="Mark 7 Interface (MVI/UL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_MVI_UL: A3_TVG_S_F_MVI_UL
	{
		displayName="Mark 8 Interface (MVI/UL)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_CNM;
	class A3_TVG_S_F_UA_CNM: VES_NVG_UA_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="Mark 3 Interface (UA/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="Mark 4 Interface (UA/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="Mark 5 Interface (UA/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="Mark 6 Interface (UA/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="Mark 7 Interface (UA/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_CNM: A3_TVG_S_F_UA_CNM
	{
		displayName="Mark 8 Interface (UA/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_HUL;
	class A3_TVG_S_F_UA_HUL: VES_NVG_UA_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="Mark 3 Interface (UA/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="Mark 4 Interface (UA/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="Mark 5 Interface (UA/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="Mark 6 Interface (UA/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="Mark 7 Interface (UA/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_HUL: A3_TVG_S_F_UA_HUL
	{
		displayName="Mark 8 Interface (UA/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_HURS;
	class A3_TVG_S_F_UA_HURS: VES_NVG_UA_HURS
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/HURS)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="Mark 3 Interface (UA/HURS)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="Mark 4 Interface (UA/HURS)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="Mark 5 Interface (UA/HURS)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="Mark 6 Interface (UA/HURS)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="Mark 7 Interface (UA/HURS)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_HURS: A3_TVG_S_F_UA_HURS
	{
		displayName="Mark 8 Interface (UA/HURS)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_HURS_CNM;
	class A3_TVG_S_F_UA_HURS_CNM: VES_NVG_UA_HURS_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/HURS/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="Mark 3 Interface (UA/HURS/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="Mark 4 Interface (UA/HURS/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="Mark 5 Interface (UA/HURS/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="Mark 6 Interface (UA/HURS/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="Mark 7 Interface (UA/HURS/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_HURS_CNM: A3_TVG_S_F_UA_HURS_CNM
	{
		displayName="Mark 8 Interface (UA/HURS/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_HURS_HUL;
	class A3_TVG_S_F_UA_HURS_HUL: VES_NVG_UA_HURS_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/HURS/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="Mark 3 Interface (UA/HURS/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="Mark 4 Interface (UA/HURS/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="Mark 5 Interface (UA/HURS/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="Mark 6 Interface (UA/HURS/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="Mark 7 Interface (UA/HURS/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_HURS_HUL: A3_TVG_S_F_UA_HURS_HUL
	{
		displayName="Mark 8 Interface (UA/HURS/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_UL;
	class A3_TVG_S_F_UA_UL: VES_NVG_UA_UL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/UL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="Mark 3 Interface (UA/UL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="Mark 4 Interface (UA/UL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="Mark 5 Interface (UA/UL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="Mark 6 Interface (UA/UL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="Mark 7 Interface (UA/UL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_UL: A3_TVG_S_F_UA_UL
	{
		displayName="Mark 8 Interface (UA/UL)";
		thermalMode[]={7};
	};
	class VES_NVG_UA_UL_CNM;
	class A3_TVG_S_F_UA_UL_CNM: VES_NVG_UA_UL_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UA/UL/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="Mark 3 Interface (UA/UL/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="Mark 4 Interface (UA/UL/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="Mark 5 Interface (UA/UL/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="Mark 6 Interface (UA/UL/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="Mark 7 Interface (UA/UL/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UA_UL_CNM: A3_TVG_S_F_UA_UL_CNM
	{
		displayName="Mark 8 Interface (UA/UL/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_CNM;
	class A3_TVG_S_F_UAB_CNM: VES_NVG_UAB_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UAB/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="Mark 3 Interface (UAB/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="Mark 4 Interface (UAB/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="Mark 5 Interface (UAB/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="Mark 6 Interface (UAB/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="Mark 7 Interface (UAB/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_CNM: A3_TVG_S_F_UAB_CNM
	{
		displayName="Mark 8 Interface (UAB/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_HUL;
	class A3_TVG_S_F_UAB_HUL: VES_NVG_UAB_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UAB/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="Mark 3 Interface (UAB/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="Mark 4 Interface (UAB/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="Mark 5 Interface (UAB/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="Mark 6 Interface (UAB/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="Mark 7 Interface (UAB/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_HUL: A3_TVG_S_F_UAB_HUL
	{
		displayName="Mark 8 Interface (UAB/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_UL;
	class A3_TVG_S_F_UAB_UL: VES_NVG_UAB_UL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UAB/UL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="Mark 3 Interface (UAB/UL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="Mark 4 Interface (UAB/UL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="Mark 5 Interface (UAB/UL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="Mark 6 Interface (UAB/UL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="Mark 7 Interface (UAB/UL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_UL: A3_TVG_S_F_UAB_UL
	{
		displayName="Mark 8 Interface (UAB/UL)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_UL_CNM;
	class A3_TVG_S_F_UAB_UL_CNM: VES_NVG_UAB_UL_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UAB/UL/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="Mark 3 Interface (UAB/UL/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="Mark 4 Interface (UAB/UL/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="Mark 5 Interface (UAB/UL/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="Mark 6 Interface (UAB/UL/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="Mark 7 Interface (UAB/UL/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_UL_CNM: A3_TVG_S_F_UAB_UL_CNM
	{
		displayName="Mark 8 Interface (UAB/UL/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UAB_UL_HUL;
	class A3_TVG_S_F_UAB_UL_HUL: VES_NVG_UAB_UL_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UAB/UL/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="Mark 3 Interface (UAB/UL/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="Mark 4 Interface (UAB/UL/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="Mark 5 Interface (UAB/UL/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="Mark 6 Interface (UAB/UL/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="Mark 7 Interface (UAB/UL/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UAB_UL_HUL: A3_TVG_S_F_UAB_UL_HUL
	{
		displayName="Mark 8 Interface (UAB/UL/HUL)";
		thermalMode[]={7};
	};
	class VES_NVG_UL_CNM;
	class A3_TVG_S_F_UL_CNM: VES_NVG_UL_CNM
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UL/CNM)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="Mark 3 Interface (UL/CNM)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="Mark 4 Interface (UL/CNM)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="Mark 5 Interface (UL/CNM)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="Mark 6 Interface (UL/CNM)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="Mark 7 Interface (UL/CNM)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UL_CNM: A3_TVG_S_F_UL_CNM
	{
		displayName="Mark 8 Interface (UL/CNM)";
		thermalMode[]={7};
	};
	class VES_NVG_UL_HUL;
	class A3_TVG_S_F_UL_HUL: VES_NVG_UL_HUL
	{
		dlc="SO";
		author="Fireteam Zulu";
		displayName="Mark 2 Interface (UL/HUL)";
		ace_nightVision_grain=0;
		ace_nightVision_blur=0;
		ace_nightVision_radBlur=0;
		ace_nightvision_border="";
		ace_nightvision_bluRadius=0.050000001;
		ace_nightvision_generation=4;
		ace_nightvision_eyeCups=0;
		thermalMode[]={0,1,2,3,4,5,6,7};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
	};
	class A3_TVG_S_F2_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="Mark 3 Interface (UL/HUL)";
		thermalMode[]={0,1,3,4,7};
	};
	class A3_TVG_S_F3_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="Mark 4 Interface (UL/HUL)";
		thermalMode[]={0,1,6,7};
	};
	class A3_TVG_S_F45_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="Mark 5 Interface (UL/HUL)";
		thermalMode[]={0,1,7};
	};
	class A3_TVG_S_F6_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="Mark 6 Interface (UL/HUL)";
		thermalMode[]={0};
	};
	class A3_TVG_S_F7_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="Mark 7 Interface (UL/HUL)";
		thermalMode[]={6};
	};
	class A3_TVG_S_F8_UL_HUL: A3_TVG_S_F_UL_HUL
	{
		displayName="Mark 8 Interface (UL/HUL)";
		thermalMode[]={7};
	};
	class UGL_F;
	class OPTRE_M301X: UGL_F
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M301X Grenade Launcher";
		descriptionShort="M301X GL";
		baseWeapon="OPTRE_M301X";
		magazines[]=
		{
			"UGL_8Gauge_Pellet",
			"UGL_8Gauge_Slug",
			"UGL_8Gauge_Beanbag",
			"UGL_FlareBlue_F",
			"3Rnd_UGL_8Gauge_Pellet",
			"3Rnd_UGL_8Gauge_Slug",
			"3Rnd_UGL_8Gauge_Beanbag",
			"3Rnd_UGL_FlareBlue_F",
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_UGL_FlareCIR_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell"
		};
		cameraDir="OP_look";
		discreteDistanceInitIndex=0;
		reloadAction="GestureReloadMXUGL";
		useExternalOptic=0;
		useModelOptics=0;
		discreteDistance[]={100,200,300};
		discreteDistanceCameraPoint[]=
		{
			"OP_eye",
			"OP_eye2",
			"OP_eye3"
		};
	};
	class OPTRE_M319: OPTRE_Rifle_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M319X Individual Grenade Launcher";
		magazines[]=
		{
			"UGL_8Gauge_Pellet",
			"UGL_8Gauge_Slug",
			"UGL_8Gauge_Beanbag",
			"UGL_FlareBlue_F",
			"UGL_Potato",
			"3Rnd_UGL_8Gauge_Pellet",
			"3Rnd_UGL_8Gauge_Slug",
			"3Rnd_UGL_8Gauge_Beanbag",
			"3Rnd_UGL_FlareBlue_F",
			"1Rnd_HE_Grenade_shell",
			"UGL_FlareWhite_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareYellow_F",
			"UGL_FlareCIR_F",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareYellow_F",
			"3Rnd_UGL_FlareCIR_F",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell"
		};
		magazineWell[]=
		{
			"UGL_40x36",
			"CBA_40mm_M203",
			"CBA_40mm_EGLM"
		};
		class WeaponSlotsInfo
		{
			mass=88;
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class OPTRE_MA5B: OPTRE_Rifle_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA5BX ICWS Assault Rifle";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_60Rnd_762x51_Mag_AP",
			"OPTRE_60Rnd_762x51_Mag_APT",
			"OPTRE_60Rnd_762x51_Mag_JHP",
			"OPTRE_60Rnd_762x51_Mag_JHPT"
		};
		class WeaponSlotsInfo
		{
			mass=84;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_ma5_smartlink",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.064999998;
			dispersion=0.00075000001;
			recoil="recoil_single_trg";
			recoilProne="recoil_single_prone_trg";
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.064999998;
			dispersion=0.00085000001;
			recoil="recoil_auto_trg";
			recoilProne="recoil_auto_prone_trg";
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
	};
	class OPTRE_MA5BGL: OPTRE_MA5B
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA5BX + M301 GL Assault Rifle";
		baseWeapon="OPTRE_MA5BXGL";
		model="\OPTRE_Weapons\AR\MA5BGL.p3d";
		muzzles[]=
		{
			"this",
			"OPTRE_M301X"
		};
		class OPTRE_M301X: OPTRE_M301X
		{
		};
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_60Rnd_762x51_Mag_AP",
			"OPTRE_60Rnd_762x51_Mag_APT",
			"OPTRE_60Rnd_762x51_Mag_JHP",
			"OPTRE_60Rnd_762x51_Mag_JHPT"
		};
		class WeaponSlotsInfo
		{
			mass=117;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_ma5_smartlink",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
		class Single: Mode_SemiAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.064999998;
			dispersion=0.00075000001;
			recoil="recoil_single_trg";
			recoilProne="recoil_single_prone_trg";
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType
			{
				weaponSoundEffect="DefaultRifle";
				closure1[]={};
				closure2[]={};
				soundClosure[]=
				{
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",
					1,
					1,
					2000
				};
				begin2[]=
				{
					"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",
					1,
					1,
					2000
				};
				soundBegin[]=
				{
					"begin1",
					0.34,
					"begin2",
					0.33000001
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",
							1.5848932,
							1,
							1400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",
							1,
							1,
							1400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",
					1,
					1,
					400
				};
				begin2[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",
					1,
					1,
					400
				};
				begin3[]=
				{
					"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",
					1,
					1,
					400
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",
							1,
							1,
							400
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",
							1,
							1,
							400
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.064999998;
			dispersion=0.00085000001;
			recoil="recoil_auto_trg";
			recoilProne="recoil_auto_prone_trg";
			minRange=2;
			minRangeProbab=0.0099999998;
			midRange=200;
			midRangeProbab=0.0099999998;
			maxRange=400;
			maxRangeProbab=0.0099999998;
		};
	};
	class OPTRE_MA5A: OPTRE_MA5B
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA3AX ICWS Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=80;
		};
	};
	class OPTRE_MA5AGL: OPTRE_MA5BGL
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA3AX + M301 GL Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=113;
		};
	};
	class OPTRE_MA5C: OPTRE_MA5B
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA5CX ICWS Assault Rifle";
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_AP",
			"OPTRE_32Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762x51_Mag_JHP",
			"OPTRE_32Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag_SS",
			"OPTRE_32Rnd_762x51_Mag_SST"
		};
		HUD_TotalPosibleBullet=32;
		class Single: Single
		{
			reloadTime=0.094999999;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.094999999;
		};
	};
	class OPTRE_MA5CGL: OPTRE_MA5BGL
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA5CX + M301 GL Assault Rifle";
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_AP",
			"OPTRE_32Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762x51_Mag_JHP",
			"OPTRE_32Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag_SS",
			"OPTRE_32Rnd_762x51_Mag_SST"
		};
		HUD_TotalPosibleBullet=32;
		class Single: Single
		{
			reloadTime=0.094999999;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.094999999;
		};
	};
	class OPTRE_MA5K: OPTRE_MA5C
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA5KX ICWS Assault Rifle";
		magazines[]=
		{
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_AP",
			"OPTRE_32Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762x51_Mag_JHP",
			"OPTRE_32Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag_SS",
			"OPTRE_32Rnd_762x51_Mag_SST"
		};
		class Single: Single
		{
			reloadTime=0.050000001;
		};
		class FullAuto: FullAuto
		{
			reloadTime=0.050000001;
		};
	};
	class OPTRE_MA37: OPTRE_MA5C
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA37X ICWS Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=77;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]={};
			};
		};
	};
	class OPTRE_MA37B: OPTRE_MA37
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA37BX ICWS Assault Rifle";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_AP",
			"OPTRE_60Rnd_762x51_Mag_APT",
			"OPTRE_60Rnd_762x51_Mag_JHP",
			"OPTRE_60Rnd_762x51_Mag_JHPT"
		};
	};
	class OPTRE_MA37GL: OPTRE_MA5CGL
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA37X + M301 GL Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=110;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]={};
			};
		};
	};
	class OPTRE_MA37BGL: OPTRE_MA5BGL
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA37BX + M301 GL Assault Rifle";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_AP",
			"OPTRE_60Rnd_762x51_Mag_APT",
			"OPTRE_60Rnd_762x51_Mag_JHP",
			"OPTRE_60Rnd_762x51_Mag_JHPT"
		};
	};
	class OPTRE_MA32: OPTRE_MA37
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA32X ICWS Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=73;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_ma5_smartlink",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BMR_Scope",
				};
			};
		};
	};
	class OPTRE_MA32B: OPTRE_MA32
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA32BX ICWS Assault Rifle";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_AP",
			"OPTRE_60Rnd_762x51_Mag_APT",
			"OPTRE_60Rnd_762x51_Mag_JHP",
			"OPTRE_60Rnd_762x51_Mag_JHPT"
		};
	};
	class OPTRE_MA32GL: OPTRE_MA5CGL
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA32X + M301 GL Assault Rifle";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=99.599998;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_ma5_smartlink",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BMR_Scope",
				};
			};
		};
	};
	class OPTRE_MA32BGL: OPTRE_MA5BGL
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MA32BXGL + M301 GL Assault Rifle";
		magazines[]=
		{
			"OPTRE_60Rnd_762x51_Mag",
			"OPTRE_60Rnd_762x51_Mag_Tracer",
			"OPTRE_60Rnd_762x51_Mag_AP",
			"OPTRE_60Rnd_762x51_Mag_APT",
			"OPTRE_60Rnd_762x51_Mag_JHP",
			"OPTRE_60Rnd_762x51_Mag_JHPT"
		};
	};
	class hgun_Pistol_heavy_01_F;
	class OPTRE_Handgun_Base: hgun_Pistol_heavy_01_F
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_M6G: OPTRE_Handgun_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M6GX Magnum";
		magazines[]=
		{
			"OPTRE_8Rnd_127x40_Mag",
			"OPTRE_8Rnd_127x40_Mag_Tracer",
			"OPTRE_8Rnd_127x40_Mag_AP",
			"OPTRE_8Rnd_127x40_Mag_APT",
			"OPTRE_8Rnd_127x40_Mag_HE",
			"OPTRE_8Rnd_127x40_Mag_HET",
			"OPTRE_8Rnd_127x40_Mag_HVAP",
			"OPTRE_8Rnd_127x40_Mag_HVAPT",
			"OPTRE_8Rnd_127x40_Mag_JHP",
			"OPTRE_8Rnd_127x40_Mag_JHPT",
			"OPTRE_8Rnd_127x40_Mag_SAPHE",
			"OPTRE_8Rnd_127x40_Mag_SAPHET",
			"OPTRE_8Rnd_127x40_Mag_SS",
			"OPTRE_8Rnd_127x40_Mag_SST",
			"OPTRE_8Rnd_127x40_Mag_NARQ",
			"OPTRE_8Rnd_127x40_Mag_NARQT",
			"OPTRE_8Rnd_127x40_Mag_FR",
			"OPTRE_8Rnd_127x40_Mag_FG"
		};
		class WeaponSlotsInfo
		{
			mass=43;
		};
	};
	class OPTRE_M6C: OPTRE_M6G
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M6C/SOCOM Magnum";
		magazines[]=
		{
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag_Tracer",
			"OPTRE_12Rnd_127x40_Mag_AP",
			"OPTRE_12Rnd_127x40_Mag_APT",
			"OPTRE_12Rnd_127x40_Mag_HE",
			"OPTRE_12Rnd_127x40_Mag_HET",
			"OPTRE_12Rnd_127x40_Mag_HVAP",
			"OPTRE_12Rnd_127x40_Mag_HVAPT",
			"OPTRE_12Rnd_127x40_Mag_JHP",
			"OPTRE_12Rnd_127x40_Mag_JHPT",
			"OPTRE_12Rnd_127x40_Mag_SAPHE",
			"OPTRE_12Rnd_127x40_Mag_SAPHET",
			"OPTRE_12Rnd_127x40_Mag_SS",
			"OPTRE_12Rnd_127x40_Mag_SST",
			"OPTRE_12Rnd_127x40_Mag_NARQ",
			"OPTRE_12Rnd_127x40_Mag_NARQT",
			"OPTRE_16Rnd_127x40_Mag",
			"OPTRE_16Rnd_127x40_Mag_Tracer",
			"OPTRE_16Rnd_127x40_Mag_AP",
			"OPTRE_16Rnd_127x40_Mag_APT",
			"OPTRE_16Rnd_127x40_Mag_HE",
			"OPTRE_16Rnd_127x40_Mag_HET",
			"OPTRE_16Rnd_127x40_Mag_HVAP",
			"OPTRE_16Rnd_127x40_Mag_HVAPT",
			"OPTRE_16Rnd_127x40_Mag_JHP",
			"OPTRE_16Rnd_127x40_Mag_JHPT",
			"OPTRE_16Rnd_127x40_Mag_SAPHE",
			"OPTRE_16Rnd_127x40_Mag_SAPHET",
			"OPTRE_16Rnd_127x40_Mag_SS",
			"OPTRE_16Rnd_127x40_Mag_SST",
			"OPTRE_16Rnd_127x40_Mag_NARQ",
			"OPTRE_16Rnd_127x40_Mag_NARQT"
		};
		class WeaponSlotsInfo
		{
			mass=39;
		};
	};
	class hgun_Pistol_heavy_02_F;
	class SO_M33_Base: hgun_Pistol_heavy_02_F
	{
		class Single;
	};
	class OPTRE_M33: SO_M33_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="Model 33 'Godfather' Handgun";
		baseWeapon="OPTRE_M33";
		model="\A3\Weapons_F_EPA\Pistols\Pistol_heavy_02\Pistol_heavy_02_F";
		descriptionShort="12.7x40mm Revolver";
		Eye="";
		Glasses="";
		ODST_1="";
		pictureWire="\V_SO_Weapons\data\M33\V_M33_HUD_CA";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=6;
		hiddenSelectionsTextures[]=
		{
			"\V_SO_Weapons\data\M33\V_M33_CO",
			"\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co"
		};
		class Single: Single
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"HunterShotgun_01_SawedOff_Shot_SoundSet",
					"HunterShotgun_01_Tail_SoundSet"
				};
			};
		};
		magazines[]=
		{
			"OPTRE_6Rnd_127x40_Cyl",
			"OPTRE_6Rnd_127x40_Cyl_Tracer",
			"OPTRE_6Rnd_127x40_Cyl_AP",
			"OPTRE_6Rnd_127x40_Cyl_APT",
			"OPTRE_6Rnd_127x40_Cyl_HE",
			"OPTRE_6Rnd_127x40_Cyl_HET",
			"OPTRE_6Rnd_127x40_Cyl_HVAP",
			"OPTRE_6Rnd_127x40_Cyl_HVAPT",
			"OPTRE_6Rnd_127x40_Cyl_JHP",
			"OPTRE_6Rnd_127x40_Cyl_JHPT",
			"OPTRE_6Rnd_127x40_Cyl_SAPHE",
			"OPTRE_6Rnd_127x40_Cyl_SAPHET",
			"OPTRE_6Rnd_127x40_Cyl_SS",
			"OPTRE_6Rnd_127x40_Cyl_NARQ",
			"OPTRE_6Rnd_127x40_Cyl_FR",
			"OPTRE_6Rnd_127x40_Cyl_FG"
		};
		magazineWell[]={};
		class WeaponSlotsInfo
		{
			mass=37;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_holosight_blk_f",
					"optic_yorris",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_m393_eotech",
					"optre_m6c_scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"optre_m6g_flashlight",
					"acc_flashlight_pistol",
					"OPTRE_M6D_Flashlight"
				};
			};
		};
	};
	class OPTRE_M33G: OPTRE_M33
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="Model 33 'Godfather' Handgun (Gold)";
		baseWeapon="OPTRE_M33G";
		hiddenSelectionsTextures[]=
		{
			"\V_SO_Weapons\data\M33\V_M33_G_CO",
			"\A3\Weapons_F_EPA\Pistols\Pistol_Heavy_02\data\Pistol_Heavy_02_mag_co"
		};
	};
	class OPTRE_M6D: OPTRE_M6G
	{
		dlc="SO";
		author="Fireteam Zulu & Forky";
		scope=2;
		scopeArsenal=2;
		displayName="M6D PDWS Magnum";
		baseWeapon="OPTRE_M6D";
		model="\V_SO_Weapons\data\M6\M6D";
		magazines[]=
		{
			"OPTRE_12Rnd_127x40_Mag",
			"OPTRE_12Rnd_127x40_Mag_Tracer",
			"OPTRE_12Rnd_127x40_Mag_AP",
			"OPTRE_12Rnd_127x40_Mag_APT",
			"OPTRE_12Rnd_127x40_Mag_HE",
			"OPTRE_12Rnd_127x40_Mag_HET",
			"OPTRE_12Rnd_127x40_Mag_HVAP",
			"OPTRE_12Rnd_127x40_Mag_HVAPT",
			"OPTRE_12Rnd_127x40_Mag_JHP",
			"OPTRE_12Rnd_127x40_Mag_JHPT",
			"OPTRE_12Rnd_127x40_Mag_SAPHE",
			"OPTRE_12Rnd_127x40_Mag_SAPHET",
			"OPTRE_12Rnd_127x40_Mag_SS",
			"OPTRE_12Rnd_127x40_Mag_SST",
			"OPTRE_12Rnd_127x40_Mag_NARQ",
			"OPTRE_12Rnd_127x40_Mag_NARQT"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=47;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optre_m6d_smartlink"
				};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"optre_m6_silencer"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"OPTRE_M6D_Flashlight"
				};
			};
		};
	};
	class OPTRE_M6G_Flashlight;
	class OPTRE_M6D_Flashlight: OPTRE_M6G_Flashlight
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M6D Flashlight";
		model="\V_SO_Weapons\data\M6\M6D_Flashlight";
	};
	class OPTRE_M392_DMR: OPTRE_LongRifle_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M392X DMR";
		model="v_so_weapons\data\m392\m392";
		magazines[]=
		{
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag_Tracer",
			"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_15Rnd_762x51_Mag_AP",
			"OPTRE_15Rnd_762x51_Mag_APT",
			"OPTRE_15Rnd_762x51_Mag_JHP",
			"OPTRE_15Rnd_762x51_Mag_JHPT",
			"OPTRE_15Rnd_762x51_Mag_SS",
			"OPTRE_15Rnd_762x51_Mag_SST",
			"OPTRE_15Rnd_762x51_Mag_FS",
			"OPTRE_15Rnd_762x51_Mag_FST"
		};
		magazineWell[]={};
		modes[]=
		{
			"Single",
			"FullAuto"
		};
		class FullAuto: Single
		{
			aiDispersionCoefX=2;
			aiDispersionCoefY=3;
			burst=1;
			autoFire=1;
			dispersion=0.00050000002;
			displayName="Full";
			maxRange=80;
			maxRangeProbab=0.039999999;
			midRange=30;
			midRangeProbab=0.57999998;
			minRange=1;
			minRangeProbab=0.2;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			reloadTime=0.079999998;
			sound[]=
			{
				"",
				10,
				1
			};
			soundBurst=0;
			soundContinuous=0;
			soundEnd[]=
			{
				"sound",
				1
			};
			textureType="fullAuto";
		};
		class WeaponSlotsInfo
		{
			mass=126;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m7_silencer",
					"optre_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"optre_m6c_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"OPTRE_BMR_Laser"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk"
				};
			};
		};
	};
	class OPTRE_M392XD_DMR: OPTRE_M392_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="Vespade's M392XD";
		baseWeapon="OPTRE_M392XD_DMR";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"V_SO_Weapons\data\M392\M392\dmr_a_co"
		};
	};
	class OPTRE_M393_DMR: OPTRE_M392_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M395X DMR";
		class Single;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=134;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m7_silencer",
					"optre_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"optre_m6c_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class OPTRE_M393S_DMR: OPTRE_M393_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M395X/S DMR";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=128;
		};
	};
	class OPTRE_M295_BMR: OPTRE_M393_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M295X BMR";
		magazines[]=
		{
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag_Tracer",
			"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_15Rnd_762x51_Mag_AP",
			"OPTRE_15Rnd_762x51_Mag_APT",
			"OPTRE_15Rnd_762x51_Mag_JHP",
			"OPTRE_15Rnd_762x51_Mag_JHPT",
			"OPTRE_15Rnd_762x51_Mag_SS",
			"OPTRE_15Rnd_762x51_Mag_FS",
			"OPTRE_15Rnd_762x51_Mag_FST",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_AP",
			"OPTRE_32Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762x51_Mag_JHP",
			"OPTRE_32Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag_SS",
			"OPTRE_32Rnd_762x51_Mag_SST"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=123;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m7_silencer",
					"optre_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"optre_m6c_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser",
					"OPTRE_BMR_Flashlight"
				};
			};
		};
	};
	class OPTRE_M28A2: OPTRE_M393_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M28A2 IMWS DMR";
		baseWeapon="OPTRE_M28A2";
		model="\A3\Weapons_F_Exp\Rifles\ARX\ARX_F";
		picture="\A3\Weapons_F_Exp\Rifles\ARX\Data\UI\arifle_ARX_blk_F_X_CA";
		pictureWire="\V_SO_Weapons\data\M28\V_M28_HUD_CA";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\ARX\data\anim\arx.rtm"
		};
		muzzles[]=
		{
			"this",
			"Secondary"
		};
		reloadAction="GestureReloadARX";
		magazines[]=
		{
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag_Tracer",
			"OPTRE_15Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_15Rnd_762x51_Mag_AP",
			"OPTRE_15Rnd_762x51_Mag_APT",
			"OPTRE_15Rnd_762x51_Mag_JHP",
			"OPTRE_15Rnd_762x51_Mag_JHPT",
			"OPTRE_15Rnd_762x51_Mag_SS",
			"OPTRE_15Rnd_762x51_Mag_FS",
			"OPTRE_15Rnd_762x51_Mag_FST",
			"OPTRE_32Rnd_762x51_Mag",
			"OPTRE_32Rnd_762x51_Mag_Tracer",
			"OPTRE_32Rnd_762x51_Mag_Tracer_Yellow",
			"OPTRE_32Rnd_762x51_Mag_AP",
			"OPTRE_32Rnd_762x51_Mag_APT",
			"OPTRE_32Rnd_762x51_Mag_JHP",
			"OPTRE_32Rnd_762x51_Mag_JHPT",
			"OPTRE_32Rnd_762x51_Mag_SS",
			"OPTRE_32Rnd_762x51_Mag_SST"
		};
		hiddenSelectionsTextures[]=
		{
			"\V_SO_Weapons\Data\M28\V_M28_CO",
			"\A3\Weapons_F_Exp\Rifles\ARX\Data\arifle_ARX_blk_02_F_co"
		};
		class Single: Single
		{
			class SilencedSound
			{
				SoundSetShot[]=
				{
					"DMR03_silencerShot_SoundSet",
					"DMR03_silencerTail_SoundSet",
					"DMR03_silencerInteriorTail_SoundSet"
				};
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"DMR03_Shot_SoundSet",
					"DMR03_tail_SoundSet",
					"DMR03_InteriorTail_SoundSet"
				};
			};
		};
		class Secondary: OPTRE_M6G
		{
			displayName="M6MWS Magnum";
			recoil="recoil_ARX_secondary";
			reloadAction="GestureReloadARX2";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=163;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m7_silencer",
					"optre_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"optre_m6c_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class OPTRE_MRS10X: OPTRE_M393_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="MRS10X DMR";
		baseWeapon="OPTRE_MRS10X";
		model="\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\DMR_02_F";
		picture="\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\UI\gear_DMR_02_X_CA";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\data\Anim\DMR_02.rtm"
		};
		reloadAction="GestureReloadDMR02";
		recoil="recoil_dmr_02";
		Eye="";
		Glasses="";
		ODST_1="";
		magazines[]=
		{
			"OPTRE_10Rnd_86x70_Mag",
			"OPTRE_10Rnd_86x70_Mag_Tracer",
			"OPTRE_10Rnd_86x70_Mag_AP",
			"OPTRE_10Rnd_86x70_Mag_APT",
			"OPTRE_10Rnd_86x70_Mag_JHP",
			"OPTRE_10Rnd_86x70_Mag_JHPT",
			"OPTRE_10Rnd_86x70_Mag_SS",
			"OPTRE_10Rnd_86x70_Mag_FS",
			"OPTRE_10Rnd_86x70_Mag_FST",
			"OPTRE_20Rnd_86x70_Mag",
			"OPTRE_20Rnd_86x70_Mag_Tracer",
			"OPTRE_20Rnd_86x70_Mag_AP",
			"OPTRE_20Rnd_86x70_Mag_APT",
			"OPTRE_20Rnd_86x70_Mag_JHP",
			"OPTRE_20Rnd_86x70_Mag_JHPT",
			"OPTRE_20Rnd_86x70_Mag_SS"
		};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsMaterials[]=
		{
			"\V_SO_Weapons\Data\MRS10\V_MRS10.rvmat",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_02\Data\DMR_02_02.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\V_SO_Weapons\Data\MRS10\V_MRS10_CO",
			"\V_SO_Weapons\Data\MRS10\V_MRS10_A_CO"
		};
		class Single: Single
		{
			class SilencedSound
			{
				SoundSetShot[]=
				{
					"DMR02_silencerShot_SoundSet",
					"DMR02_silencerTail_SoundSet",
					"DMR02_silencerInteriorTail_SoundSet"
				};
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"DMR02_Shot_SoundSet",
					"DMR02_tail_SoundSet",
					"DMR02_InteriorTail_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=143;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m7_silencer",
					"optre_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"optre_m6c_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class OPTRE_CR77: OPTRE_M393_DMR
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="CR77 Tactical Rifle";
		baseWeapon="OPTRE_CR77";
		model="\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\DMR_05_F";
		picture="\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\UI\gear_DMR_05_X_CA";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\data\Anim\DMR_05.rtm"
		};
		reloadAction="GestureReloadDMR05";
		Eye="";
		Glasses="";
		ODST_1="";
		pictureWire="\V_SO_Weapons\data\CR77\V_CR77_HUD_CA";
		recoil="recoil_dmr_05";
		magazines[]=
		{
			"OPTRE_10Rnd_86x70_Mag",
			"OPTRE_10Rnd_86x70_Mag_Tracer",
			"OPTRE_10Rnd_86x70_Mag_AP",
			"OPTRE_10Rnd_86x70_Mag_APT",
			"OPTRE_10Rnd_86x70_Mag_JHP",
			"OPTRE_10Rnd_86x70_Mag_JHPT",
			"OPTRE_10Rnd_86x70_Mag_SS",
			"OPTRE_10Rnd_86x70_Mag_SST",
			"OPTRE_10Rnd_86x70_Mag_FS",
			"OPTRE_10Rnd_86x70_Mag_FST",
			"OPTRE_20Rnd_86x70_Mag",
			"OPTRE_20Rnd_86x70_Mag_Tracer",
			"OPTRE_20Rnd_86x70_Mag_AP",
			"OPTRE_20Rnd_86x70_Mag_APT",
			"OPTRE_20Rnd_86x70_Mag_JHP",
			"OPTRE_20Rnd_86x70_Mag_JHPT",
			"OPTRE_20Rnd_86x70_Mag_SS",
			"OPTRE_20Rnd_86x70_Mag_SST"
		};
		magazineWell[]={};
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsMaterials[]=
		{
			"\V_SO_Weapons\Data\CR77\V_CR77.rvmat",
			"\A3\Weapons_F_Mark\LongRangeRifles\DMR_05\Data\DMR_05_02.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\V_SO_Weapons\Data\CR77\V_CR77_CO",
			"\V_SO_Weapons\Data\CR77\V_CR77_A_CO"
		};
		class Single: Single
		{
			class SilencedSound
			{
				soundSetShot[]=
				{
					"DMR05_silencerShot_SoundSet",
					"DMR05_silencerTail_SoundSet",
					"DMR05_silencerInteriorTail_SoundSet"
				};
			};
			class StandardSound
			{
				soundSetShot[]=
				{
					"DMR05_Shot_SoundSet",
					"DMR05_tail_SoundSet",
					"DMR05_InteriorTail_SoundSet"
				};
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=206;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_ma5suppressor",
					"optre_m7_silencer",
					"optre_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"optre_m6c_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class srifle_DMR_06_camo_F;
	class OPTRE_M14X: srifle_DMR_06_camo_F
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="Mk14X DMR";
		baseWeapon="OPTRE_M14X";
		hiddenSelectionsTextures[]=
		{
			"\V_SO_Weapons\Data\Mk14\V_M14X_CO",
			"\V_SO_Weapons\Data\Mk14\V_M14X_A_CO"
		};
		Eye="";
		Glasses="";
		ODST_1="";
		pictureWire="\V_SO_Weapons\data\Mk14\V_M14X_HUD_CA";
		picture="\V_SO_Weapons\data\Mk14\V_M14X_CA";
		magazines[]=
		{
			"OPTRE_15Rnd_762x51_Mag",
			"OPTRE_15Rnd_762x51_Mag_Tracer",
			"OPTRE_15Rnd_762x51_Mag_AP",
			"OPTRE_15Rnd_762x51_Mag_APT",
			"OPTRE_15Rnd_762x51_Mag_JHP",
			"OPTRE_15Rnd_762x51_Mag_JHPT",
			"OPTRE_15Rnd_762x51_Mag_SS",
			"OPTRE_15Rnd_762x51_Mag_FS",
			"OPTRE_15Rnd_762x51_Mag_FST"
		};
		magazineWell[]={};
		class WeaponSlotsInfo
		{
			mass=92;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_h_mg_blk_f",
					"muzzle_snds_l",
					"optre_ma5suppressor",
					"optre_m7_silencer",
					"optre_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk"
				};
			};
		};
	};
	class OPTRE_BR55HB: OPTRE_Rifle_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="BR55XHB Battle Rifle";
		baseWeapon="OPTRE_BR55XHB";
		model="\OPTRE_Weapons\BR\BRHB";
		modes[]=
		{
			"Single",
			"Burst",
			"FullAuto"
		};
		magazines[]=
		{
			"OPTRE_36Rnd_95x40_Mag",
			"OPTRE_36Rnd_95x40_Mag_Tracer",
			"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow",
			"OPTRE_36Rnd_95x40_Mag_JHP",
			"OPTRE_36Rnd_95x40_Mag_JHPT",
			"OPTRE_36Rnd_95x40_Mag_HPSAP",
			"OPTRE_36Rnd_95x40_Mag_HPSAPT",
			"OPTRE_36Rnd_95x40_Mag_SAPHE",
			"OPTRE_36Rnd_95x40_Mag_SAPHET",
			"OPTRE_36Rnd_95x40_Mag_SS"
		};
		class WeaponSlotsInfo
		{
			mass=85;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_h_mg_blk_f",
					"muzzle_snds_l",
					"optre_ma5suppressor",
					"optre_m7_silencer",
					"optre_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
		class FullAuto: Burst
		{
			aiDispersionCoefX=2;
			aiDispersionCoefY=3;
			burst=1;
			autoFire=1;
			dispersion=0.00050000002;
			displayName="Full";
			maxRange=80;
			maxRangeProbab=0.039999999;
			midRange=30;
			midRangeProbab=0.57999998;
			minRange=1;
			minRangeProbab=0.2;
			recoil="recoil_auto_primary_3outof10";
			recoilProne="recoil_auto_primary_prone_3outof10";
			reloadTime=0.079999998;
			sound[]=
			{
				"",
				10,
				1
			};
			soundBurst=0;
			soundContinuous=0;
			soundEnd[]=
			{
				"sound",
				1
			};
			textureType="fullAuto";
		};
	};
	class OPTRE_BR55: OPTRE_BR55HB
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="BR55X Battle Rifle";
		baseWeapon="OPTRE_BR55X";
		model="\OPTRE_Weapons\BR\BR";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=82;
		};
	};
	class OPTRE_BR55AM: OPTRE_BR55HB
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="BR55AM 'Fafnir' Battle Rifle";
		baseWeapon="OPTRE_BR55AM";
		recoil="recoil_dmr_04";
		Eye="OPTRE_EYE_HUD_AmmoCount_PistolSmart";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_PistolODST";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_PistolODST";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=16;
		magazines[]=
		{
			"OPTRE_16Rnd_127x40_Mag",
			"OPTRE_16Rnd_127x40_Mag_AP",
			"OPTRE_16Rnd_127x40_Mag_APT",
			"OPTRE_16Rnd_127x40_Mag_HE",
			"OPTRE_16Rnd_127x40_Mag_HET",
			"OPTRE_16Rnd_127x40_Mag_HVAP",
			"OPTRE_16Rnd_127x40_Mag_HVAPT",
			"OPTRE_16Rnd_127x40_Mag_JHP",
			"OPTRE_16Rnd_127x40_Mag_JHPT",
			"OPTRE_16Rnd_127x40_Mag_SAPHE",
			"OPTRE_16Rnd_127x40_Mag_SAPHET",
			"OPTRE_16Rnd_127x40_Mag_SS",
			"OPTRE_16Rnd_127x40_Mag_NARQ"
		};
	};
	class SMG_01_F;
	class OPTRE_SubMachineGun_Base: SMG_01_F
	{
		class WeaponSlotsInfo;
	};
	class OPTRE_M7: OPTRE_SubMachineGun_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M7X Caseless SMG";
		recoil="recoil_M7X";
		class Single;
		class FullAuto;
		magazines[]=
		{
			"OPTRE_60Rnd_5x23mm_Mag",
			"OPTRE_60Rnd_5x23mm_Mag_Tracer",
			"OPTRE_60Rnd_5x23mm_Mag_Tracer_Yellow",
			"OPTRE_60Rnd_5x23mm_Mag_FMJ",
			"OPTRE_60Rnd_5x23mm_Mag_FMJT",
			"OPTRE_60Rnd_5x23mm_Mag_HV",
			"OPTRE_60Rnd_5x23mm_Mag_HVT",
			"OPTRE_60Rnd_5x23mm_Mag_JHP",
			"OPTRE_60Rnd_5x23mm_Mag_JHPT",
			"OPTRE_60Rnd_5x23mm_Mag_SS",
			"OPTRE_60Rnd_5x23mm_Mag_SST",
			"OPTRE_48Rnd_5x23mm_Mag",
			"OPTRE_48Rnd_5x23mm_Mag_Tracer",
			"OPTRE_48Rnd_5x23mm_Mag_Tracer_Yellow",
			"OPTRE_48Rnd_5x23mm_Mag_FMJ",
			"OPTRE_48Rnd_5x23mm_Mag_FMJT",
			"OPTRE_48Rnd_5x23mm_Mag_HV",
			"OPTRE_48Rnd_5x23mm_Mag_HVT",
			"OPTRE_48Rnd_5x23mm_Mag_JHP",
			"OPTRE_48Rnd_5x23mm_Mag_JHPT",
			"OPTRE_48Rnd_5x23mm_Mag_SS",
			"OPTRE_48Rnd_5x23mm_Mag_SST"
		};
		magazineWell[]={};
		class WeaponSlotsInfo
		{
			mass=29;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_b",
					"muzzle_snds_h_mg_blk_f",
					"ace_muzzle_mzls_b",
					"optre_m7_silencer",
					"optre_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"optre_m6c_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"optre_m7_laser",
					"optre_m7_flashlight",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class OPTRE_M7_Folded: OPTRE_M7
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M7X Caseless SMG (Folded)";
		descriptionShort="UNSC M7X SMG (Folded)";
		handAnim[]=
		{
			"OFP2_ManSkeleton"
		};
		reloadAction="GestureReloadPistol";
		type=2;
		class Single: Single
		{
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
		};
		class FullAuto: FullAuto
		{
			recoil="recoil_single_mx";
			recoilProne="recoil_single_prone_mx";
		};
	};
	class OPTRE_SRS99D: OPTRE_LongRifle_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="SRS99DX-S2 Sniper Rifle";
		magazines[]=
		{
			"OPTRE_4Rnd_145x114_APFSDS_Mag",
			"OPTRE_4Rnd_145x114_Mag_APFSDST",
			"OPTRE_4Rnd_145x114_HEDP_Mag",
			"OPTRE_4Rnd_145x114_Mag_HEDPT",
			"OPTRE_4Rnd_145x114_HVAP_Mag",
			"OPTRE_4Rnd_145x114_Mag_HVAPT",
			"OPTRE_4Rnd_145x114_Mag_SS",
			"OPTRE_4Rnd_145x114_Mag_SST",
			"OPTRE_4Rnd_145x114_Mag_NARQ",
			"OPTRE_4Rnd_145x114_Mag_NARQT",
			"OPTRE_4Rnd_145x114_Mag_DOC"
		};
		class Single;
		class WeaponSlotsInfo
		{
			mass=237;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"optre_srs99d_suppressor"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class OPTRE_SRS99C: OPTRE_SRS99D
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="SRS99CX-S2 AM Sniper Rifle";
	};
	class OPTRE_M99: OPTRE_SRS99D
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M99A2S3 Stanchion Gauss Rifle";
		baseWeapon="OPTRE_M99";
		magazines[]=
		{
			"OPTRE_3Rnd_54mm_Mag"
		};
		model="\OPTRE_Weapons\Sniper\M99";
		modelOptics="\OPTRE_Weapons\Sniper\Sniper_Oracle10_Optic";
		opticType=1;
		optics=1;
		opticsID=1;
		useModelOptics=1;
		opticsZoomMin=0.0099999998;
		opticsZoomMax=0.25;
		opticsZoomInit=0.25;
		discretefov[]={0.25,0.050000001,0.025,0.0099999998};
		discreteinitIndex=0;
		discreteDistance[]={50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,850,900,950,1000,1050,1100,1150,1200,1250,1300,1350,1400,1450,1500,1550,1600,1650,1700,1750,1800,1850,1900,1950,2000};
		discreteDistanceInitIndex=1;
		distanceZoomMin=100;
		distanceZoomMax=2000;
		opticsPPEffects[]=
		{
			"OpticsCHAbera1",
			"OpticsBlur1"
		};
		visionMode[]=
		{
			"Normal",
			"NVG",
			"TI"
		};
		thermalMode[]={0,1,5,6,7};
		opticsFlare=1;
		opticsDisablePeripherialVision=1;
		nameSound="cannon";
		class Single: Single
		{
			class StandardSound
			{
				soundSetShot[]=
				{
					"Cannon120mm_Shot_SoundSet",
					"Cannon120mm_Tail_SoundSet"
				};
			};
		};
		reloadTime=1.3;
		class LinkedItems
		{
			item="ace_muzzle_mzls_b";
			slot="MuzzleSlot";
		};
		class WeaponSlotsInfo
		{
			mass=441;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"ace_muzzle_mzls_b"
				};
			};
		};
	};
	class launch_RPG32_F;
	class OPTRE_M48_PAW: launch_RPG32_F
	{
		dlc="SO";
		author="Fireteam Zulu & Shadow";
		scope=2;
		scopeArsenal=2;
		displayName="M48B 'Cricket' PAW";
		baseWeapon="OPTRE_M48_PAW";
		model="\V_SO_Weapons\data\M48\M48B_Cricket";
		picture="\V_SO_Weapons\data\M48\M48B_Cricket";
		initSpeed=80;
		modelOptics="\OPTRE_Weapons\Rockets\M41_Optic";
		ODST_1="OPTRE_ODST_HUD_AmmoCount_RL";
		Glasses="OPTRE_GLASS_HUD_AmmoCount_RL";
		Eye="OPTRE_EYE_HUD_AmmoCount_RL";
		HUD_BulletInARows=1;
		HUD_TotalPosibleBullet=1;
		magazines[]=
		{
			"OPTRE_1Rnd_50x137_HEAT",
			"OPTRE_1Rnd_50x137_HE",
			"OPTRE_1Rnd_50x137_PEN",
			"OPTRE_1Rnd_50x137_THERMO",
			"OPTRE_1Rnd_50x137_Tekcirc"
		};
		magazineWell[]={};
		reloadAction="ReloadRPG";
		reloadmagazinesound[]=
		{
			"A3\sounds_f\weapons\rockets\titan_reload_final",
			0.56234097,
			1,
			50
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim.rtm",
			"Spartan_ManSkeleton",
			"\OPTRE_Weapons\Rockets\Data\Anim\m41_hand_anim_Spartan.rtm"
		};
		class WeaponSlotsInfo
		{
			mass=93;
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optre_m393_acog",
					"optre_m392_scope",
					"OPTRE_BMR_Scope",
					"M48B_Optic",
					"M48B_Optic_Grid"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"OPTRE_BMR_Laser"
				};
			};
		};
	};
	class OPTRE_MachineGun_Base;
	class OPTRE_M73: OPTRE_MachineGun_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M73X Light Machine Gun";
		magazines[]=
		{
			"OPTRE_36Rnd_95x40_Mag",
			"OPTRE_36Rnd_95x40_Mag_Tracer",
			"OPTRE_36Rnd_95x40_Mag_Tracer_Yellow",
			"OPTRE_36Rnd_95x40_Mag_JHP",
			"OPTRE_36Rnd_95x40_Mag_JHPT",
			"OPTRE_36Rnd_95x40_Mag_HPSAP",
			"OPTRE_36Rnd_95x40_Mag_HPSAPT",
			"OPTRE_36Rnd_95x40_Mag_SAPHE",
			"OPTRE_36Rnd_95x40_Mag_SAPHET",
			"OPTRE_36Rnd_95x40_Mag_SS",
			"OPTRE_100Rnd_95x40_Box",
			"OPTRE_100Rnd_95x40_Box_Tracer",
			"OPTRE_100Rnd_95x40_Box_Tracer_Yellow",
			"OPTRE_100Rnd_95x40_Box_JHP",
			"OPTRE_100Rnd_95x40_Box_JHPT",
			"OPTRE_100Rnd_95x40_Box_HPSAP",
			"OPTRE_100Rnd_95x40_Box_HPSAPT",
			"OPTRE_100Rnd_95x40_Box_SAPHE",
			"OPTRE_100Rnd_95x40_Box_SAPHET",
			"OPTRE_100Rnd_95x40_Box_SS",
			"OPTRE_200Rnd_95x40_Box",
			"OPTRE_200Rnd_95x40_Box_Tracer",
			"OPTRE_200Rnd_95x40_Box_Tracer_Yellow",
			"OPTRE_200Rnd_95x40_Box_JHP",
			"OPTRE_200Rnd_95x40_Box_JHPT",
			"OPTRE_200Rnd_95x40_Box_HPSAP",
			"OPTRE_200Rnd_95x40_Box_HPSAPT",
			"OPTRE_200Rnd_95x40_Box_SAPHE",
			"OPTRE_200Rnd_95x40_Box_SAPHET",
			"OPTRE_200Rnd_95x40_Box_SS"
		};
		class WeaponSlotsInfo
		{
			mass=158;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"muzzle_snds_h_mg_blk_f",
					"muzzle_snds_l",
					"optre_ma5suppressor",
					"optre_m7_silencer",
					"optre_m6_silencer"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"optre_m6c_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"optre_m45_flashlight",
					"optre_m45_flashlight_red"
				};
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				compatibleitems[]=
				{
					"bipod_01_f_blk",
					"bipod_02_f_blk",
					"bipod_03_f_blk"
				};
			};
		};
	};
	class OPTRE_M73H: OPTRE_M73
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M73H Heavy Machine Gun";
		baseWeapon="OPTRE_M73H";
		magazines[]=
		{
			"OPTRE_100Rnd_95x60_Box",
			"OPTRE_100Rnd_95x60_Box_Tracer",
			"OPTRE_100Rnd_95x60_Box_JHP",
			"OPTRE_100Rnd_95x60_Box_JHPT",
			"OPTRE_100Rnd_95x60_Box_HPSAP",
			"OPTRE_100Rnd_95x60_Box_HPSAPT",
			"OPTRE_100Rnd_95x60_Box_SAPHE",
			"OPTRE_100Rnd_95x60_Box_SAPHET",
			"OPTRE_100Rnd_95x60_Box_SS",
			"OPTRE_300Rnd_95x60_Box",
			"OPTRE_300Rnd_95x60_Box_Tracer",
			"OPTRE_300Rnd_95x60_Box_JHP",
			"OPTRE_300Rnd_95x60_Box_JHPT",
			"OPTRE_300Rnd_95x60_Box_HPSAP",
			"OPTRE_300Rnd_95x60_Box_HPSAPT",
			"OPTRE_300Rnd_95x60_Box_SAPHE",
			"OPTRE_300Rnd_95x60_Box_SAPHET",
			"OPTRE_300Rnd_95x60_Box_SS"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=168;
		};
	};
	class OPTRE_Shotgun_Base: arifle_Mk20_F
	{
		class Single;
	};
	class OPTRE_M45: OPTRE_Shotgun_Base
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M45X Tactical Shotgun";
		magazines[]=
		{
			"OPTRE_6Rnd_8Gauge_Pellet",
			"OPTRE_6Rnd_8Gauge_Slug",
			"OPTRE_6Rnd_8Gauge_HEDP",
			"OPTRE_6Rnd_8Gauge_Beanbag",
			"OPTRE_6Rnd_8Gauge_Incendiary",
			"OPTRE_12Rnd_8Gauge_Pellet",
			"OPTRE_12Rnd_8Gauge_Slug",
			"OPTRE_12Rnd_8Gauge_HEDP",
			"OPTRE_12Rnd_8Gauge_Beanbag",
			"OPTRE_12Rnd_8Gauge_Incendiary"
		};
		class WeaponSlotsInfo
		{
			mass=93;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"optre_srs99d_suppressor"
				};
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[]=
				{
					"optic_arco_ak_blk_f",
					"optic_dms",
					"optic_aco_grn",
					"optic_aco",
					"optic_arco_blk_f",
					"optic_holosight_blk_f",
					"optic_mrco",
					"optic_khs_blk",
					"optic_hamr",
					"optic_sos",
					"optic_lrps",
					"optic_nightstalker",
					"optic_erco_blk_f",
					"optic_ams",
					"ace_optic_lrps_2d",
					"ace_optic_lrps_pip",
					"optic_yorris",
					"ace_optic_sos_2d",
					"ace_optic_sos_pip",
					"ace_optic_mrco_2d",
					"ace_optic_hamr_2d",
					"ace_optic_hamr_pip",
					"optic_ico_01_black_f",
					"optic_aco_smg",
					"optic_aco_grn_smg",
					"optic_holosight_smg_blk_f",
					"optic_mrd_black",
					"optre_srs99_scope",
					"optre_srs99c_scope",
					"optre_ma5_buis",
					"optre_m393_eotech",
					"optre_m73_smartlink",
					"optre_m7_sight",
					"optre_m393_acog",
					"optre_hmg38_carryhandle",
					"optre_m393_scope",
					"optre_m392_scope",
					"optre_br55hb_scope",
					"optre_m6c_scope",
					"OPTRE_BMR_Scope",
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",
					1,
					1,
					300
				};
				begin2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",
					1,
					1,
					300
				};
				begin3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",
					1,
					1,
					300
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",
							1,
							1,
							300
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime=0.25;
		};
	};
	class OPTRE_M45TAC: OPTRE_M45
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M45 Combat Shotgun (Tactical)";
	};
	class OPTRE_M90A: OPTRE_M45
	{
		dlc="SO";
		author="Fireteam Zulu";
		scope=2;
		scopeArsenal=2;
		displayName="M90X CAWS Tactical Shotgun";
		magazines[]=
		{
			"OPTRE_6Rnd_8Gauge_Pellet",
			"OPTRE_6Rnd_8Gauge_Slug",
			"OPTRE_6Rnd_8Gauge_HEDP",
			"OPTRE_6Rnd_8Gauge_Beanbag",
			"OPTRE_6Rnd_8Gauge_Incendiary"
		};
		class WeaponSlotsInfo
		{
			mass=120;
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[]=
				{
					"optre_srs99d_suppressor"
				};
			};
			class PointerSlot: PointerSlot
			{
				compatibleitems[]=
				{
					"acc_pointer_ir",
					"ace_acc_pointer_green",
					"acc_flashlight",
					"optre_m45_flashlight",
					"optre_m45_flashlight_red",
					"OPTRE_BMR_Laser"
				};
			};
		};
		class Single: Single
		{
			sounds[]=
			{
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType;
			class SilencedSound: BaseSoundModeType
			{
				begin1[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_01",
					1,
					1,
					300
				};
				begin2[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_02",
					1,
					1,
					300
				};
				begin3[]=
				{
					"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_short_03",
					1,
					1,
					300
				};
				soundBegin[]=
				{
					"begin1",
					0.33000001,
					"begin2",
					0.33000001,
					"begin3",
					0.34
				};
				class SoundTails
				{
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_interior",
							1,
							1,
							300
						};
						frequency=1;
						volume="interior";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_trees",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_forest",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_meadows",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\silencer_DMR_05_tail_houses",
							1,
							1,
							300
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
				};
			};
		};
	};
	class MuzzleSlot: MuzzleSlot
	{
	};
};
class CfgRecoils
{
	class recoil_M7X
	{
		muzzleOuter[]=
		{
			"0.075*0.2",
			"0.64*1",
			"0.315*1",
			"0.21*1"
		};
		kickBack[]=
		{
			"0.015*1.4",
			"0.04*1.4"
		};
		temporary="0.010*1.2";
		muzzleInner[]={0,0,0.050000001,0.050000001};
		permanent="0.05*0.4";
	};
};
