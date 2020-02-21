	class Default;
	class Put: Default
	{
		muzzles[]+=
		{
			"C12_Muzzle",
			"UNSC_Mine_Muzzle",
			"C7_Muzzle",
			"M168_Muzzle",
			"M41_IED_Muzzle",
			"M41_IED_B_Muzzle"
		};
		class PutMuzzle: Default
		{
		};
		class C12_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"C12_Remote_Mag"
			};
		};
		class UNSC_Mine_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"UNSCMine_Range_Mag"
			};
		};
		class C7_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"C7_Remote_Mag"
			};
		};
		class M168_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"M168_Remote_Mag"
			};
		};
		class M41_IED_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"M41_IED_Remote_Mag"
			};
		};
		class M41_IED_B_Muzzle: PutMuzzle
		{
			magazines[]=
			{
				"M41_IED_B_Remote_Mag"
			};
		};
	};