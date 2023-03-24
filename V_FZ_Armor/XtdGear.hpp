class XtdGearModels 
{
    class CfgWeapons 
	{
// Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets 
        class VES_CH252_MAR_Heavy
        {
            options[] = {"Camo", "Attachment"};
            label = "[FZ] CH252";
			class Camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Camo";
				values[] = {"Marine", "Desert", "Woodland", "CEA", "Snow"};
				class Marine
				{
					label = "Marine";
				};
				class Desert
				{
					label = "Desert";
				};
				class Woodland
				{
					label = "Woodland";
				};
				class CEA
				{
					label = "CEA";
				};
                class Snow
				{
					label = "Snow";
				};
			};
            class Attachment
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Variant";
				values[] = {"Light", "Heavy", "Radio", "Medical"};
				class Light
				{
					label = "Light";
				};
				class Heavy
				{
					label = "Heavy";
				};
				class Radio
				{
					label = "Radio";
				};
				class Medical
				{
					label = "Medical";
				};
			};
        };
        class VES_CH252_MAR_Vacuum_Gold
        {
            options[] = {"Camo", "Visor"};
            label = "[FZ] ECH252";
			class Camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Camo";
				values[] = {"Marine", "Desert", "Woodland", "CEA", "Snow"};
				class Marine
				{
					label = "Marine";
				};
				class Desert
				{
					label = "Desert";
				};
				class Woodland
				{
					label = "Woodland";
				};
				class CEA
				{
					label = "CEA";
				};
                class Snow
				{
					label = "Snow";
				};
			};
            class Visor
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Visor";
				values[] = {"Gold", "Silver"};
				class Gold
				{
					label = "Gold";
				};
				class Silver
				{
					label = "Silver";
				};
			};
        };
        class VES_CH252_MAR_Crew
        {
            options[] = {"Camo"};
            label = "[FZ] CH252C";
			class Camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Camo";
				values[] = {"Marine", "Desert", "Woodland", "CEA", "Snow"};
				class Marine
				{
					label = "Marine";
				};
				class Desert
				{
					label = "Desert";
				};
				class Woodland
				{
					label = "Woodland";
				};
				class CEA
				{
					label = "CEA";
				};
                class Snow
				{
					label = "Snow";
				};
			};
        };
        class VES_CH252D
        {
            options[] = {"Visor", "Custom"};
            label = "[FZ] CH252D";
            class Custom
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Custom";
				values[] = {"Base", "Reaper"};
				class Base
				{
					label = "Base";
				};
				class Reaper
				{
					label = "Reaper";
				};
			};
			class Visor
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Visor";
				values[] = {"None", "Blue", "Gold", "Silver"};
				class None
				{
					label = "Base";
				};
				class Blue
				{
					label = "Blue";
				};
				class Gold
				{
					label = "Gold";
				};
				class Silver
				{
					label = "Silver";
				};
			};
        };
        class VES_CH252A
        {
            options[] = {"Visor"};
            label = "[FZ] CH252A";
			class Visor
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Visor";
				values[] = {"None", "Blue", "Gold","Silver"};
				class None
				{
					label = "Base";
				};
				class Blue
				{
					label = "Blue";
				};
				class Gold
				{
					label = "Gold";
				};
				class Silver
				{
					label = "Silver";
				};
			};
        };
        class VES_S1ONIR
        {
            options[] = {"Visor"};
            label = "[FZ] S1/ONI/R Helmet";
			class Visor
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Visor";
				values[] = {"Gold","Silver"};
				class Gold
				{
					label = "Gold";
				};
				class Silver
				{
					label = "Silver";
				};
			};
        };
        class VES_Beret_MP
        {
            options[] = {"Type"};
            label = "[FZ] Beret";
			class Type
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Type";
				values[] = {"MP","CPD"};
				class MP
				{
					label = "MP";
				};
				class CPD
				{
					label = "CPD";
				};
			};
        };
        class VES_PatrolCap_CPD
        {
            options[] = {"Camo"};
            label = "[FZ] Colonial Police Patrol Cap";
			class Camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Camo";
				values[] = {"Black","Blue"};
				class Black
				{
					label = "Black";
				};
				class Blue
				{
					label = "Blue";
				};
			};
        };
// Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests //
        class VES_M52A_MAR_Breacher_A
        {
            options[] = {"Camo", "Variant", "Class"};
            label = "[FZ] M52A Body Armour";
			class Camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Camo";
				values[] = {"Marine", "Desert", "Woodland", "CEA", "Snow"};
				class Marine
				{
					label = "Marine";
				};
				class Desert
				{
					label = "Desert";
				};
				class Woodland
				{
					label = "Woodland";
				};
				class CEA
				{
					label = "CEA";
				};
                class Snow
				{
					label = "Snow";
				};
			};
            class Variant
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Variant";
				values[] = {"Breacher", "Corpsman", "Grenadier", "Marksman","Radio", "Rifleman", "Security", "Soft", "Vest" };
				class Breacher
				{
					label = "Breacher";
				};
				class Corpsman
				{
					label = "Corpsman";
				};
				class Grenadier
				{
					label = "Grenadier";
				};
				class Marksman
				{
					label = "Marksman";
				};
                class Radio
				{
					label = "Radio";
				};
				class Rifleman
				{
					label = "Rifleman";
				};
				class Security
				{
					label = "Security";
				};
				class Soft
				{
					label = "Soft";
				};
                class Vest
				{
					label = "Vest";
				};
			};
            class Class
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Class";
				values[] = {"A", "B", "C", "D"};
				class A
				{
					label = "A";
				};
				class B
				{
					label = "B";
				};
				class C
				{
					label = "C";
				};
				class D
				{
					label = "D";
				};
            };
        };
// M52D
        class VES_M52D_Rifleman
        {
            options[] = {"Custom", "Variant"};
            label = "[FZ] M52D Body Armour";
			class Custom
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Custom";
				values[] = {"Base", "Hiruko", "Phoenix", "Reaper", "Warhound"};
				class Base
				{
					label = "Base";
				};
				class Hiruko
				{
					label = "Hiruko";
				};
				class Phoenix
				{
					label = "Phoenix";
				};
				class Reaper
				{
					label = "Reaper";
				};
                class Warhound
				{
					label = "Warhound";
				};
			};
            class Variant
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Variant";
				values[] = {"Demolitions", "Marksman", "Scout", "Sniper", "Rifleman"};
				class Demolitions
				{
					label = "Demolitions";
				};
				class Marksman
				{
					label = "Marksman";
				};
				class Scout
				{
					label = "Scout";
				};
				class Sniper
				{
					label = "Sniper";
				};
				class Rifleman
				{
					label = "Rifleman";
				};
			};
        };
// Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // 
        class VES_BDU_Cookiedough
        {
            options[] = {"Camo", "Style"};
            label = "[FZ] Combat Uniform";
			class Camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Camo";
				values[] = {"CookieDough", "DPMDesert", "Gray", "Green", "Khaki", "MulticamBlack", "MulticamWoodland", "RussianVSR", "SemiArid", "Smock", "Splinter", "Splotch", "TTsKODesert", "TTsKOWoodland", "Tundra", "UrbanODST", "Urban", "WoodlandAnniversary", "WoodlandClassic"};
                class CookieDough
                {
					label = "Cookie Dough";
				};
				class DPMDesert
				{
					label = "DPM DES";
				};
				class Gray
				{
					label = "Gray";
				};
				class Green
				{
					label = "Green";
				};
                class Khaki
				{
					label = "Khaki";
				};
                class MulticamBlack
				{
					label = "MCam BLK";
				};
				class MulticamWoodland
				{
					label = "MCam WDL";
				};
				class RussianVSR
				{
					label = "VSR";
				};
				class SemiArid
				{
					label = "Semi Arid";
				};
                class Smock
				{
					label = "Smock";
				};
                class Splinter
				{
					label = "Splinter";
				};
                class Splotch
				{
					label = "Splotch";
				};
                class TTsKODesert
				{
					label = "TTsKO DES";
				};
				class TTsKOWoodland
				{
					label = "TTsKO WDL";
				};
				class Tundra
				{
					label = "Tundra";
				};
				class UrbanODST
				{
					label = "Urban ODST";
				};
                class Urban
				{
					label = "Urban";
				};
                class WoodlandAnniversary
				{
					label = "Anniversary";
				};
                class WoodlandClassic
				{
					label = "Classic";
				};
			};
            class Style
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Style";
				values[] = {"Base", "Slim", "Short", "Rolled", "ShortSlim", "RolledSlim"};
				class Base
				{
					label = "Base";
				};
				class Slim
				{
					label = "Slim";
				};
				class Short
				{
					label = "Short";
				};
                class Rolled
                {
					label = "Rolled";
				};
				class ShortSlim
				{
					label = "Short Slim";
				};
                class RolledSlim
				{
					label = "Rolled Slim";
				};
			};
        };
        class VES_MPU_Evolved
        {
            options[] = {"Camo", "Style"};
            label = "[FZ] Military Police Uniform";
			class Camo
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Camo";
				values[] = {"Gray", "Green", "Khaki"};
                class Gray
				{
					label = "Gray";
				};
				class Green
				{
					label = "Green";
				};
                class Khaki
				{
					label = "Khaki";
				};
            };
            class Style
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Style";
				values[] = {"Base", "Slim"};
				class Base
				{
					label = "Base";
				};
				class Slim
				{
					label = "Slim";
				};
            };
        };
        class VES_BDU_ONI
        {
            options[] = {"Custom"};
            label = "[FZ] Naval Intelligence Formal Attire";
            class Custom
			{
				alwaysSelectable = 1;
				changeingame = 0;
				changedelay = 0;
				label = "Class";
				values[] = {"Vespade", "Baseplate"};
				class Vespade
				{
					label = "Vespade";
				};
				class Baseplate
				{
					label = "Baseplate";
				};
            };
        };
    };
};
class XtdGearInfos 
{
    class CfgWeapons 
    {
// Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets // Helmets
        // ODST
        class VES_CH252D 
		{
          model = "VES_CH252D";
          Visor = "None";
            Custom = "Base";
        }; 
		class VES_CH252D_B 
		{
          model = "VES_CH252D";
          Visor = "Blue";
            Custom = "Base";
        };
        class VES_CH252D_S 
		{
          model = "VES_CH252D";
          Visor = "Silver";
            Custom = "Base";
        }; 
		class VES_CH252D_G 
		{
          model = "VES_CH252D";
          Visor = "Gold";
            Custom = "Base";
        };
        class VES_CH252D_RPR
        {
            model = "VES_CH252D";
            Custom = "Reaper";
        };
// Air Assault
        class VES_CH252A 
		{
          model = "VES_CH252A";
		  Visor = "None";
        }; 
		class VES_CH252A_B 
		{
          model = "VES_CH252A";
		  Visor = "Blue";
        };
        class VES_CH252A_S 
		{
          model = "VES_CH252A";
		  Visor = "Silver";
        }; 
		class VES_CH252A_G 
		{
          model = "VES_CH252A";
		  Visor = "Gold";
        };
// Crew Helm
        class VES_CH252_MAR_Crew 
		{
          model = "VES_CH252_MAR_Crew";
		  Camo= "Marine";
        }; 
        class VES_CH252_DES_Crew
		{
          model = "VES_CH252_MAR_Crew";
		  Camo= "Desert";
        }; 
        class VES_CH252_WDL_Crew 
		{
          model = "VES_CH252_MAR_Crew";
		  Camo = "Woodland";
        }; 
        class VES_CH252_URB_Crew 
		{
          model = "VES_CH252_MAR_Crew";
		  Camo= "Urban";
        }; 
        class VES_CH252_SNO_Crew 
		{
          model = "VES_CH252_MAR_Crew";
		  Camo= "Snow";
        }; 
        class VES_CH252_CEA_Crew 
		{
          model = "VES_CH252_MAR_Crew";
		  Camo= "CEA";
        }; 
// Basic Helm
		//Marine
		class VES_CH252_MAR_Heavy 
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Heavy";
		  Camo= "Marine";
        }; 
		class VES_CH252_MAR_Light 
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Light";
		  Camo= "Marine";
        };
        class VES_CH252_MAR_Medical
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Medical";
		  Camo= "Marine";
        }; 
		class VES_CH252_MAR_Radio
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Radio";
		  Camo= "Marine";
		};
		//Desert
		class VES_CH252_DES_Heavy 
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Heavy";
		  Camo= "Desert";
        }; 
		class VES_CH252_DES_Light 
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Light";
		  Camo= "Desert";
        };
        class VES_CH252_DES_Medical
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Medical";
		  Camo= "Desert";
        }; 
		class VES_CH252_DES_Radio
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Radio";
		  Camo= "Desert";
		};
		//Woodland
		class VES_CH252_WDL_Heavy 
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Heavy";
		  Camo= "Woodland";
        }; 
		class VES_CH252_WDL_Light 
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Light";
		  Camo= "Woodland";
        };
        class VES_CH252_WDL_Medical
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Medical";
		  Camo= "Woodland";
        }; 
		class VES_CH252_WDL_Radio
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Radio";
		  Camo= "Woodland";
		};
		// Urban
		class VES_CH252_URB_Heavy 
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Heavy";
		  Camo= "Urban";
        }; 
		class VES_CH252_URB_Light 
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Light";
		  Camo= "Urban";
        };
        class VES_CH252_URB_Medical
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Medical";
		  Camo= "Urban";
        }; 
		class VES_CH252_URB_Radio
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Radio";
		  Camo= "Urban";
		};
		//Snow
		class VES_CH252_SNO_Heavy 
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Heavy";
		  Camo= "Snow";
        }; 
		class VES_CH252_SNO_Light 
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Light";
		  Camo= "Snow";
        };
        class VES_CH252_SNO_Medical
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Medical";
		  Camo= "Snow";
        }; 
		class VES_CH252_SNO_Radio
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Radio";
		  Camo= "Snow";
		};
        //Combat Evolved
		class VES_CH252_CEA_Heavy 
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Heavy";
		  Camo= "CEA";
        }; 
		class VES_CH252_CEA_Light 
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Light";
		  Camo= "CEA";
        };
        class VES_CH252_CEA_Medical
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Medical";
		  Camo= "CEA";
        }; 
		class VES_CH252_CEA_Radio
		{
          model = "VES_CH252_MAR_Heavy";
          Attachment = "Radio";
		  Camo= "CEA";
		};
// Vacuum Helm
        // Marine
        class VES_CH252_MAR_Vacuum_Gold 
		{
          model = "VES_CH252_MAR_Vacuum_Gold";
          Visor = "Gold";
		  Camo= "Marine";
        };
        class VES_CH252_MAR_Vacuum
		{
          model = "VES_CH252_MAR_Vacuum_Gold";
          Visor = "Silver";
		  Camo= "Marine";
        }; 
		//Desert
		class VES_CH252_DES_Vacuum_Gold 
		{
          model = "VES_CH252_MAR_Vacuum_Gold";
          Visor = "Gold";
		  Camo= "Desert";
        }; 
        class VES_CH252_DES_Vacuum 
		{
          model = "VES_CH252_MAR_Vacuum_Gold";
          Visor = "Silver";
		  Camo= "Desert";
        }; 
		//Woodland
		class VES_CH252_WDL_Vacuum_Gold 
		{
          model = "VES_CH252_MAR_Vacuum_Gold";
          Visor = "Gold";
		  Camo= "Woodland";
        };
        class VES_CH252_WDL_Vacuum 
		{
          model = "VES_CH252_MAR_Vacuum_Gold";
          Visor = "Silver";
		  Camo= "Woodland";
        }; 
		// Urban
		class VES_CH252_URB_Vacuum_Gold 
		{
          model = "VES_CH252_MAR_Vacuum_Gold";
          Visor = "Gold";
		  Camo= "Urban";
        }; 
        class VES_CH252_URB_Vacuum 
		{
          model = "VES_CH252_MAR_Vacuum_Gold";
          Visor = "Silver";
		  Camo= "Urban";
        }; 
		//Snow
		class VES_CH252_SNO_Vacuum_Gold 
		{
          model = "VES_CH252_MAR_Vacuum_Gold";
          Visor = "Gold";
		  Camo= "Snow";
        }; 
        class VES_CH252_SNO_Vacuum 
		{
          model = "VES_CH252_MAR_Vacuum_Gold";
          Visor = "Silver";
		  Camo= "Snow";
        }; 
        //Combat Evolved
		class VES_CH252_CEA_Vacuum_Gold 
		{
          model = "VES_CH252_MAR_Vacuum_Gold";
          Visor = "Gold";
		  Camo= "CEA";
        };
        class VES_CH252_CEA_Vacuum 
		{
          model = "VES_CH252_MAR_Vacuum_Gold";
          Visor = "Silver";
		  Camo= "CEA";
        };
// Recon
        class VES_S1ONIR
		{
          model = "VES_S1ONIR";
		  Visor = "Gold";
        }; 
        class VES_S1ONIR_S
		{
          model = "VES_S1ONIR";
		  Visor = "Silver";
        };
// Beret
        class VES_Beret_MP
		{
          model = "VES_Beret_MP";
		  type = "MP";
        }; 
        class VES_Beret_CPD
		{
          model = "VES_Beret_MP";
		  type = "CPD";
        }; 
// Patrol Cap
        class VES_PatrolCap_CPD
		{
          model = "VES_PatrolCap_CPD";
		  camo = "Black";
        }; 
        class VES_PatrolCap_CPD_Blue
		{
          model = "VES_PatrolCap_CPD";
		  camo = "Blue";
        };
// Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests // // Vests //
        // Marine
        class VES_M52A_MAR_Vest_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Vest";
            Class = "A";
        };
        class VES_M52A_MAR_Vest_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Soft";
            Class = "A";
        };
        class VES_M52A_MAR_Breacher_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Breacher";
            Class = "A";
        };
        class VES_M52A_MAR_Breacher_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Breacher";
            Class = "B";
        };
        class VES_M52A_MAR_Corpsman_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Corpsman";
            Class = "A";
        };
        class VES_M52A_MAR_Corpsman_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Corpsman";
            Class = "B";
        };
        class VES_M52A_MAR_Grenadier_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Grenadier";
            Class = "A";
        };
        class VES_M52A_MAR_Grenadier_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Grenadier";
            Class = "B";
        };
        class VES_M52A_MAR_Sniper_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Marksman";
            Class = "A";
        };
        class VES_M52A_MAR_Sniper_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Marksman";
            Class = "B";
        };
        class VES_M52A_MAR_Radio_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Radio";
            Class = "A";
        };
        class VES_M52A_MAR_Radio_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Radio";
            Class = "B";
        };
        class VES_M52A_MAR_Security_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Security";
            Class = "A";
        };
        class VES_M52A_MAR_Security_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Security";
            Class = "B";
        };
        class VES_M52A_MAR_Rifleman_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Rifleman";
            Class = "A";
        };
        class VES_M52A_MAR_Rifleman_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Rifleman";
            Class = "B";
        };
        class VES_M52A_MAR_Rifleman_C
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Rifleman";
            Class = "C";
        };
        class VES_M52A_MAR_Rifleman_D
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Marine";
            Variant = "Rifleman";
            Class = "D";
        };
        // Desert
        class VES_M52A_DES_Vest_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Vest";
            Class = "A";
        };
        class VES_M52A_DES_Vest_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Soft";
            Class = "A";
        };
        class VES_M52A_DES_Breacher_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Breacher";
            Class = "A";
        };
        class VES_M52A_DES_Breacher_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Breacher";
            Class = "B";
        };
        class VES_M52A_DES_Corpsman_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Corpsman";
            Class = "A";
        };
        class VES_M52A_DES_Corpsman_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Corpsman";
            Class = "B";
        };
        class VES_M52A_DES_Grenadier_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Grenadier";
            Class = "A";
        };
        class VES_M52A_DES_Grenadier_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Grenadier";
            Class = "B";
        };
        class VES_M52A_DES_Sniper_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Marksman";
            Class = "A";
        };
        class VES_M52A_DES_Sniper_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Marksman";
            Class = "B";
        };
        class VES_M52A_DES_Radio_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Radio";
            Class = "A";
        };
        class VES_M52A_DES_Radio_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Radio";
            Class = "B";
        };
        class VES_M52A_DES_Security_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Security";
            Class = "A";
        };
        class VES_M52A_DES_Security_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Security";
            Class = "B";
        };
        class VES_M52A_DES_Rifleman_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Rifleman";
            Class = "A";
        };
        class VES_M52A_DES_Rifleman_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Rifleman";
            Class = "B";
        };
        class VES_M52A_DES_Rifleman_C
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Rifleman";
            Class = "C";
        };
        class VES_M52A_DES_Rifleman_D
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Desert";
            Variant = "Rifleman";
            Class = "D";
        };
        // Woodland
        class VES_M52A_WDL_Vest_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Vest";
            Class = "A";
        };
        class VES_M52A_WDL_Vest_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Soft";
            Class = "A";
        };
        class VES_M52A_WDL_Breacher_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Breacher";
            Class = "A";
        };
        class VES_M52A_WDL_Breacher_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Breacher";
            Class = "B";
        };
        class VES_M52A_WDL_Corpsman_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Corpsman";
            Class = "A";
        };
        class VES_M52A_WDL_Corpsman_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Corpsman";
            Class = "B";
        };
        class VES_M52A_WDL_Grenadier_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Grenadier";
            Class = "A";
        };
        class VES_M52A_WDL_Grenadier_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Grenadier";
            Class = "B";
        };
        class VES_M52A_WDL_Sniper_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Marksman";
            Class = "A";
        };
        class VES_M52A_WDL_Sniper_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Marksman";
            Class = "B";
        };
        class VES_M52A_WDL_Radio_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Radio";
            Class = "A";
        };
        class VES_M52A_WDL_Radio_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Radio";
            Class = "B";
        };
        class VES_M52A_WDL_Security_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Security";
            Class = "A";
        };
        class VES_M52A_WDL_Security_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Security";
            Class = "B";
        };
        class VES_M52A_WDL_Rifleman_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Rifleman";
            Class = "A";
        };
        class VES_M52A_WDL_Rifleman_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Rifleman";
            Class = "B";
        };
        class VES_M52A_WDL_Rifleman_C
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Rifleman";
            Class = "C";
        };
        class VES_M52A_WDL_Rifleman_D
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Woodland";
            Variant = "Rifleman";
            Class = "D";
        };
        // Urban
        class VES_M52A_URB_Vest_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Vest";
            Class = "A";
        };
        class VES_M52A_URB_Vest_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Soft";
            Class = "A";
        };
        class VES_M52A_URB_Breacher_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Breacher";
            Class = "A";
        };
        class VES_M52A_URB_Breacher_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Breacher";
            Class = "B";
        };
        class VES_M52A_URB_Corpsman_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Corpsman";
            Class = "A";
        };
        class VES_M52A_URB_Corpsman_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Corpsman";
            Class = "B";
        };
        class VES_M52A_URB_Grenadier_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Grenadier";
            Class = "A";
        };
        class VES_M52A_URB_Grenadier_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Grenadier";
            Class = "B";
        };
        class VES_M52A_URB_Sniper_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Marksman";
            Class = "A";
        };
        class VES_M52A_URB_Sniper_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Marksman";
            Class = "B";
        };
        class VES_M52A_URB_Radio_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Radio";
            Class = "A";
        };
        class VES_M52A_URB_Radio_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Radio";
            Class = "B";
        };
        class VES_M52A_URB_Security_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Security";
            Class = "A";
        };
        class VES_M52A_URB_Security_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Security";
            Class = "B";
        };
        class VES_M52A_URB_Rifleman_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Rifleman";
            Class = "A";
        };
        class VES_M52A_URB_Rifleman_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Rifleman";
            Class = "B";
        };
        class VES_M52A_URB_Rifleman_C
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Rifleman";
            Class = "C";
        };
        class VES_M52A_URB_Rifleman_D
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Urban";
            Variant = "Rifleman";
            Class = "D";
        };
        // Snow
        class VES_M52A_SNO_Vest_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Vest";
            Class = "A";
        };
        class VES_M52A_SNO_Vest_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Soft";
            Class = "A";
        };
        class VES_M52A_SNO_Breacher_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Breacher";
            Class = "A";
        };
        class VES_M52A_SNO_Breacher_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Breacher";
            Class = "B";
        };
        class VES_M52A_SNO_Corpsman_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Corpsman";
            Class = "A";
        };
        class VES_M52A_SNO_Corpsman_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Corpsman";
            Class = "B";
        };
        class VES_M52A_SNO_Grenadier_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Grenadier";
            Class = "A";
        };
        class VES_M52A_SNO_Grenadier_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Grenadier";
            Class = "B";
        };
        class VES_M52A_SNO_Sniper_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Marksman";
            Class = "A";
        };
        class VES_M52A_SNO_Sniper_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Marksman";
            Class = "B";
        };
        class VES_M52A_SNO_Radio_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Radio";
            Class = "A";
        };
        class VES_M52A_SNO_Radio_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Radio";
            Class = "B";
        };
        class VES_M52A_SNO_Security_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Security";
            Class = "A";
        };
        class VES_M52A_SNO_Security_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Security";
            Class = "B";
        };
        class VES_M52A_SNO_Rifleman_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Rifleman";
            Class = "A";
        };
        class VES_M52A_SNO_Rifleman_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Rifleman";
            Class = "B";
        };
        class VES_M52A_SNO_Rifleman_C
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Rifleman";
            Class = "C";
        };
        class VES_M52A_SNO_Rifleman_D
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "Snow";
            Variant = "Rifleman";
            Class = "D";
        };
        // Combat Evolved
        class VES_M52A_CEA_Vest_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Vest";
            Class = "A";
        };
        class VES_M52A_CEA_Vest_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Soft";
            Class = "A";
        };
        class VES_M52A_CEA_Breacher_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Breacher";
            Class = "A";
        };
        class VES_M52A_CEA_Breacher_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Breacher";
            Class = "B";
        };
        class VES_M52A_CEA_Corpsman_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Corpsman";
            Class = "A";
        };
        class VES_M52A_CEA_Corpsman_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Corpsman";
            Class = "B";
        };
         class VES_M52A_CEA_Grenadier_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Grenadier";
            Class = "A";
        };
        class VES_M52A_CEA_Grenadier_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Grenadier";
            Class = "B";
        };
        class VES_M52A_CEA_Sniper_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Marksman";
            Class = "A";
        };
        class VES_M52A_CEA_Sniper_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Marksman";
            Class = "B";
        };
        class VES_M52A_CEA_Radio_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Radio";
            Class = "A";
        };
        class VES_M52A_CEA_Radio_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Radio";
            Class = "B";
        };
        class VES_M52A_CEA_Security_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Security";
            Class = "A";
        };
        class VES_M52A_CEA_Security_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Security";
            Class = "B";
        };
        class VES_M52A_CEA_Rifleman_A
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Rifleman";
            Class = "A";
        };
        class VES_M52A_CEA_Rifleman_B
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Rifleman";
            Class = "B";
        };
        class VES_M52A_CEA_Rifleman_C
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Rifleman";
            Class = "C";
        };
        class VES_M52A_CEA_Rifleman_D
		{
            Model = "VES_M52A_MAR_Breacher_A";
            Camo = "CEA";
            Variant = "Rifleman";
            Class = "D";
        };
// M52D 
        // Rifleman
        class VES_M52D_Rifleman
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Base";
            Variant = "Rifleman";
        };
        class VES_M52D_KIS_Rifleman
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Hiruko";
            Variant = "Rifleman";
        };
        class VES_M52D_SFP_Rifleman
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Phoenix";
            Variant = "Rifleman";
        };
        class VES_M52D_RPR_Rifleman
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Reaper";
            Variant = "Rifleman";
        };
        class VES_M52D_WRH_Rifleman
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Warhound";
            Variant = "Rifleman";
        };
        // Demolitions
        class VES_M52D_Demolitions
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Base";
            Variant = "Demolitions";
        };
        class VES_M52D_KIS_Demolitions
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Hiruko";
            Variant = "Demolitions";
        };
        class VES_M52D_SFP_Demolitions
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Phoenix";
            Variant = "Demolitions";
        };
        class VES_M52D_RPR_Demolitions
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Reaper";
            Variant = "Demolitions";
        };
        class VES_M52D_WRH_Demolitions
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Warhound";
            Variant = "Demolitions";
        };
        // Scout
        class VES_M52D_Scout
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Base";
            Variant = "Scout";
        };
        class VES_M52D_KIS_Scout
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Hiruko";
            Variant = "Scout";
        };
        class VES_M52D_SFP_Scout
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Phoenix";
            Variant = "Scout";
        };
        class VES_M52D_RPR_Scout
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Reaper";
            Variant = "Scout";
        };
        class VES_M52D_WRH_Scout
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Warhound";
            Variant = "Scout";
        };
        // Sniper
        class VES_M52D_Sniper
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Base";
            Variant = "Sniper";
        };
        class VES_M52D_KIS_Sniper
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Hiruko";
            Variant = "Sniper";
        };
        class VES_M52D_SFP_Sniper
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Phoenix";
            Variant = "Sniper";
        };
        class VES_M52D_RPR_Sniper
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Reaper";
            Variant = "Sniper";
        };
        class VES_M52D_WRH_Sniper
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Warhound";
            Variant = "Sniper";
        };
        // Marksman
        class VES_M52D_Marksman
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Base";
            Variant = "Marksman";
        };
        class VES_M52D_KIS_Marksman
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Hiruko";
            Variant = "Marksman";
        };
        class VES_M52D_SFP_Marksman
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Phoenix";
            Variant = "Marksman";
        };
        class VES_M52D_RPR_Marksman
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Reaper";
            Variant = "Marksman";
        };
        class VES_M52D_WRH_Marksman
		{
            Model = "VES_M52D_Rifleman";
            Custom = "Warhound";
            Variant = "Marksman";
        };
// Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms // Uniforms //
        // Cookie
        class VES_BDU_CookieDough 
		{
            model = "VES_BDU_CookieDough";
            Camo = "CookieDough";
            Style = "Base";
        };
        class VES_BDU_R_CookieDough
        {
            model = "VES_BDU_CookieDough";
            Camo = "CookieDough";
            Style = "Rolled";
        };
        class VES_BDU_CookieDough_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "CookieDough";
            Style = "Slim";
        };
        class VES_BDU_SS_CookieDough
        {
            model = "VES_BDU_CookieDough";
            Camo = "CookieDough";
            Style = "Short";
        };
        class VES_BDU_SS_CookieDough_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "CookieDough";
            Style = "ShortSlim";
        };
        class VES_BDU_R_CookieDough_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "CookieDough";
            Style = "RolledSlim";
        };
        // DPM Desert
        class VES_BDU_DesertDPM 
		{
            model = "VES_BDU_CookieDough";
            Camo = "DPMDesert";
            Style = "Base";
        };
        class VES_BDU_R_DesertDPM
        {
            model = "VES_BDU_CookieDough";
            Camo = "DPMDesert";
            Style = "Rolled";
        };
        class VES_BDU_DesertDPM_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "DPMDesert";
            Style = "Slim";
        };
        class VES_BDU_SS_DesertDPM
        {
            model = "VES_BDU_CookieDough";
            Camo = "DPMDesert";
            Style = "Short";
        };
        class VES_BDU_SS_DesertDPM_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "DPMDesert";
            Style = "ShortSlim";
        };
        class VES_BDU_R_DesertDPM_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "DPMDesert";
            Style = "RolledSlim";
        };
        // Gray
        class VES_BDU_Evolved 
		{
            model = "VES_BDU_CookieDough";
            Camo = "Gray";
            Style = "Base";
        };
        class VES_BDU_R_Evolved
        {
            model = "VES_BDU_CookieDough";
            Camo = "Gray";
            Style = "Rolled";
        };
        class VES_BDU_Evolved_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Gray";
            Style = "Slim";
        };
        class VES_BDU_SS_Evolved
        {
            model = "VES_BDU_CookieDough";
            Camo = "Gray";
            Style = "Short";
        };
        class VES_BDU_SS_Evolved_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Gray";
            Style = "ShortSlim";
        };
        class VES_BDU_R_Evolved_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Gray";
            Style = "RolledSlim";
        };
        // Green
        class VES_BDU_Reach 
		{
            model = "VES_BDU_CookieDough";
            Camo = "Green";
            Style = "Base";
        };
        class VES_BDU_R_Reach
        {
            model = "VES_BDU_CookieDough";
            Camo = "Green";
            Style = "Rolled";
        };
        class VES_BDU_Reach_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Green";
            Style = "Slim";
        };
        class VES_BDU_SS_Reach
        {
            model = "VES_BDU_CookieDough";
            Camo = "Green";
            Style = "Short";
        };
        class VES_BDU_SS_Reach_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Green";
            Style = "ShortSlim";
        };
        class VES_BDU_R_Reach_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Green";
            Style = "RolledSlim";
        };
        // Khaki
        class VES_BDU_Khaki 
		{
            model = "VES_BDU_CookieDough";
            Camo = "Khaki";
            Style = "Base";
        };
        class VES_BDU_R_Khaki
        {
            model = "VES_BDU_CookieDough";
            Camo = "Khaki";
            Style = "Rolled";
        };
        class VES_BDU_Khaki_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Khaki";
            Style = "Slim";
        };
        class VES_BDU_SS_Khaki
        {
            model = "VES_BDU_CookieDough";
            Camo = "Khaki";
            Style = "Short";
        };
        class VES_BDU_SS_Khaki_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Khaki";
            Style = "ShortSlim";
        };
        class VES_BDU_R_Khaki_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Khaki";
            Style = "RolledSlim";
        };
        // Multicam Black
        class VES_BDU_MulticamBlack 
		{
            model = "VES_BDU_CookieDough";
            Camo = "MulticamBlack";
            Style = "Base";
        };
        class VES_BDU_R_MulticamBlack
        {
            model = "VES_BDU_CookieDough";
            Camo = "MulticamBlack";
            Style = "Rolled";
        };
        class VES_BDU_MulticamBlack_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "MulticamBlack";
            Style = "Slim";
        };
        class VES_BDU_SS_MulticamBlack
        {
            model = "VES_BDU_CookieDough";
            Camo = "MulticamBlack";
            Style = "Short";
        };
        class VES_BDU_SS_MulticamBlack_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "MulticamBlack";
            Style = "ShortSlim";
        };
        class VES_BDU_R_MulticamBlack_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "MulticamBlack";
            Style = "RolledSlim";
        };
        // Multicam Woodland
        class VES_BDU_MulticamWoodland 
		{
            model = "VES_BDU_CookieDough";
            Camo = "MulticamWoodland";
            Style = "Base";
        };
        class VES_BDU_R_MulticamWoodland
        {
            model = "VES_BDU_CookieDough";
            Camo = "MulticamWoodland";
            Style = "Rolled";
        };
        class VES_BDU_MulticamWoodland_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "MulticamWoodland";
            Style = "Slim";
        };
        class VES_BDU_SS_MulticamWoodland
        {
            model = "VES_BDU_CookieDough";
            Camo = "MulticamWoodland";
            Style = "Short";
        };
        class VES_BDU_SS_MulticamWoodland_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "MulticamWoodland";
            Style = "ShortSlim";
        };
        class VES_BDU_R_MulticamWoodland_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "MulticamWoodland";
            Style = "RolledSlim";
        };
        // Russian VSR
        class VES_BDU_RussianVSR 
		{
            model = "VES_BDU_CookieDough";
            Camo = "RussianVSR";
            Style = "Base";
        };
        class VES_BDU_R_RussianVSR
        {
            model = "VES_BDU_CookieDough";
            Camo = "RussianVSR";
            Style = "Rolled";
        };
        class VES_BDU_RussianVSR_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "RussianVSR";
            Style = "Slim";
        };
        class VES_BDU_SS_RussianVSR
        {
            model = "VES_BDU_CookieDough";
            Camo = "RussianVSR";
            Style = "Short";
        };
        class VES_BDU_SS_RussianVSR_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "RussianVSR";
            Style = "ShortSlim";
        };
        class VES_BDU_R_RussianVSR_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "RussianVSR";
            Style = "RolledSlim";
        };
        // Semi Arid
        class VES_BDU_SemiArid 
		{
            model = "VES_BDU_CookieDough";
            Camo = "SemiArid";
            Style = "Base";
        };
        class VES_BDU_R_SemiArid
        {
            model = "VES_BDU_CookieDough";
            Camo = "SemiArid";
            Style = "Rolled";
        };
        class VES_BDU_SemiArid_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "SemiArid";
            Style = "Slim";
        };
        class VES_BDU_SS_SemiArid
        {
            model = "VES_BDU_CookieDough";
            Camo = "SemiArid";
            Style = "Short";
        };
        class VES_BDU_SS_SemiArid_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "SemiArid";
            Style = "ShortSlim";
        };
        class VES_BDU_R_SemiArid_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "SemiArid";
            Style = "RolledSlim";
        };
        // Smock
        class VES_BDU_Smock 
		{
            model = "VES_BDU_CookieDough";
            Camo = "Smock";
            Style = "Base";
        };
        class VES_BDU_R_Smock
        {
            model = "VES_BDU_CookieDough";
            Camo = "Smock";
            Style = "Rolled";
        };
        class VES_BDU_Smock_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Smock";
            Style = "Slim";
        };
        class VES_BDU_SS_Smock
        {
            model = "VES_BDU_CookieDough";
            Camo = "Smock";
            Style = "Short";
        };
        class VES_BDU_SS_Smock_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Smock";
            Style = "ShortSlim";
        };
        class VES_BDU_R_Smock_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Smock";
            Style = "RolledSlim";
        };
        // Splinter
        class VES_BDU_Splinter 
		{
            model = "VES_BDU_CookieDough";
            Camo = "Splinter";
            Style = "Base";
        };
        class VES_BDU_R_Splinter
        {
            model = "VES_BDU_CookieDough";
            Camo = "Splinter";
            Style = "Rolled";
        };
        class VES_BDU_Splinter_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Splinter";
            Style = "Slim";
        };
        class VES_BDU_SS_Splinter
        {
            model = "VES_BDU_CookieDough";
            Camo = "Splinter";
            Style = "Short";
        };
        class VES_BDU_SS_Splinter_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Splinter";
            Style = "ShortSlim";
        };
        class VES_BDU_R_Splinter_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Splinter";
            Style = "RolledSlim";
        };
        // Splotch
        class VES_BDU_Splotch 
		{
            model = "VES_BDU_CookieDough";
            Camo = "Splotch";
            Style = "Base";
        };
        class VES_BDU_R_Splotch
        {
            model = "VES_BDU_CookieDough";
            Camo = "Splotch";
            Style = "Rolled";
        };
        class VES_BDU_Splotch_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Splotch";
            Style = "Slim";
        };
        class VES_BDU_SS_Splotch
        {
            model = "VES_BDU_CookieDough";
            Camo = "Splotch";
            Style = "Short";
        };
        class VES_BDU_SS_Splotch_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Splotch";
            Style = "ShortSlim";
        };
        class VES_BDU_R_Splotch_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Splotch";
            Style = "RolledSlim";
        };
        // TTsKODES
        class VES_BDU_TTsKODES 
		{
            model = "VES_BDU_CookieDough";
            Camo = "TTsKODesert";
            Style = "Base";
        };
        class VES_BDU_R_TTsKODES
        {
            model = "VES_BDU_CookieDough";
            Camo = "TTsKODesert";
            Style = "Rolled";
        };
        class VES_BDU_TTsKODES_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "TTsKODesert";
            Style = "Slim";
        };
        class VES_BDU_SS_TTsKODES
        {
            model = "VES_BDU_CookieDough";
            Camo = "TTsKODesert";
            Style = "Short";
        };
        class VES_BDU_SS_TTsKODES_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "TTsKODesert";
            Style = "ShortSlim";
        };
        class VES_BDU_R_TTsKODES_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "TTsKODesert";
            Style = "RolledSlim";
        };
        // TTsKOWDL
        class VES_BDU_TTsKOWDL 
		{
            model = "VES_BDU_CookieDough";
            Camo = "TTsKOWoodland";
            Style = "Base";
        };
        class VES_BDU_R_TTsKOWDL
        {
            model = "VES_BDU_CookieDough";
            Camo = "TTsKOWoodland";
            Style = "Rolled";
        };
        class VES_BDU_TTsKOWDL_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "TTsKOWoodland";
            Style = "Slim";
        };
        class VES_BDU_SS_TTsKOWDL
        {
            model = "VES_BDU_CookieDough";
            Camo = "TTsKOWoodland";
            Style = "Short";
        };
        class VES_BDU_SS_TTsKOWDL_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "TTsKOWoodland";
            Style = "ShortSlim";
        };
        class VES_BDU_R_TTsKOWDL_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "TTsKOWoodland";
            Style = "RolledSlim";
        };
        // Tundra
        class VES_BDU_Tundra 
		{
            model = "VES_BDU_CookieDough";
            Camo = "Tundra";
            Style = "Base";
        };
        class VES_BDU_R_Tundra
        {
            model = "VES_BDU_CookieDough";
            Camo = "Tundra";
            Style = "Rolled";
        };
        class VES_BDU_Tundra_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Tundra";
            Style = "Slim";
        };
        class VES_BDU_SS_Tundra
        {
            model = "VES_BDU_CookieDough";
            Camo = "Tundra";
            Style = "Short";
        };
        class VES_BDU_SS_Tundra_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Tundra";
            Style = "ShortSlim";
        };
        class VES_BDU_R_Tundra_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Tundra";
            Style = "RolledSlim";
        };
        // Urban
        class VES_BDU_Urban 
		{
            model = "VES_BDU_CookieDough";
            Camo = "Urban";
            Style = "Base";
        };
        class VES_BDU_R_Urban
        {
            model = "VES_BDU_CookieDough";
            Camo = "Urban";
            Style = "Rolled";
        };
        class VES_BDU_Urban_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Urban";
            Style = "Slim";
        };
        class VES_BDU_SS_Urban
        {
            model = "VES_BDU_CookieDough";
            Camo = "Urban";
            Style = "Short";
        };
        class VES_BDU_SS_Urban_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Urban";
            Style = "ShortSlim";
        };
        class VES_BDU_R_Urban_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "Urban";
            Style = "RolledSlim";
        };
        // UrbanBlue
        class VES_BDU_UrbanBlue 
		{
            model = "VES_BDU_CookieDough";
            Camo = "UrbanODST";
            Style = "Base";
        };
        class VES_BDU_R_UrbanBlue
        {
            model = "VES_BDU_CookieDough";
            Camo = "UrbanODST";
            Style = "Rolled";
        };
        class VES_BDU_UrbanBlue_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "UrbanODST";
            Style = "Slim";
        };
        class VES_BDU_SS_UrbanBlue
        {
            model = "VES_BDU_CookieDough";
            Camo = "UrbanODST";
            Style = "Short";
        };
        class VES_BDU_SS_UrbanBlue_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "UrbanODST";
            Style = "ShortSlim";
        };
        class VES_BDU_R_UrbanBlue_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "UrbanODST";
            Style = "RolledSlim";
        };
        // Halo2
        class VES_BDU_Halo2 
		{
            model = "VES_BDU_CookieDough";
            Camo = "WoodlandClassic";
            Style = "Base";
        };
        class VES_BDU_R_Halo2
        {
            model = "VES_BDU_CookieDough";
            Camo = "WoodlandClassic";
            Style = "Rolled";
        };
        class VES_BDU_Halo2_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "WoodlandClassic";
            Style = "Slim";
        };
        class VES_BDU_SS_Halo2
        {
            model = "VES_BDU_CookieDough";
            Camo = "WoodlandClassic";
            Style = "Short";
        };
        class VES_BDU_SS_Halo2_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "WoodlandClassic";
            Style = "ShortSlim";
        };
        class VES_BDU_R_Halo2_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "WoodlandClassic";
            Style = "RolledSlim";
        };
        // Halo2
        class VES_BDU_Halo2A 
		{
            model = "VES_BDU_CookieDough";
            Camo = "WoodlandAnniversary";
            Style = "Base";
        };
        class VES_BDU_R_Halo2A
        {
            model = "VES_BDU_CookieDough";
            Camo = "WoodlandAnniversary";
            Style = "Rolled";
        };
        class VES_BDU_Halo2A_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "WoodlandAnniversary";
            Style = "Slim";
        };
        class VES_BDU_SS_Halo2A
        {
            model = "VES_BDU_CookieDough";
            Camo = "WoodlandAnniversary";
            Style = "Short";
        };
        class VES_BDU_SS_Halo2A_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "WoodlandAnniversary";
            Style = "ShortSlim";
        };
        class VES_BDU_R_Halo2A_Slim
        {
            model = "VES_BDU_CookieDough";
            Camo = "WoodlandAnniversary";
            Style = "RolledSlim";
        };
// MP Uniform
        class VES_MPU_Evolved 
		{
            model = "VES_MPU_Evolved";
            Camo = "Gray";
            Style = "Base";
        };
        class VES_MPU_Evolved_Slim
        {
            model = "VES_MPU_Evolved";
            Camo = "Gray";
            Style = "Slim";
        };
        class VES_MPU_Reach 
		{
            model = "VES_MPU_Evolved";
            Camo = "Green";
            Style = "Base";
        };
        class VES_MPU_Reach_Slim
        {
            model = "VES_MPU_Evolved";
            Camo = "Green";
            Style = "Slim";
        };
        class VES_MPU_Khaki 
		{
            model = "VES_MPU_Evolved";
            Camo = "Khaki";
            Style = "Base";
        };
        class VES_MPU_Khaki_Slim
        {
            model = "VES_MPU_Evolved";
            Camo = "Khaki";
            Style = "Slim";
        };
// ONI Attire
        class VES_BDU_ONI
        {
            model = "VES_BDU_ONI";
            Custom = "Vespade";
        };
        class VES_BDU_ONI_B
        {
            model = "VES_BDU_ONI";
            Custom = "Baseplate";
        };
        
    };
};
