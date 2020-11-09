	class rhs_btr70_vdv;
	class rhsgref_hidf_m113a3_m2;
	class rhsgref_cdf_bmd1;
	class rhsusf_m1a2sep1tuskiiwd_usarmy;
	class RHS_M2StaticMG_WD;
  class RHS_M2StaticMG_WD_OCimport_01: RHS_M2StaticMG_WD
	{
		class Turrets;
	};
  class RHS_M2StaticMG_WD_OCimport_02: RHS_M2StaticMG_WD_OCimport_01
	{
    class Turrets : Turrets
		{
      class MainTurret;
    };
  };
	class RHS_M2StaticMG_MiniTripod_WD;
  class RHS_M2StaticMG_MiniTripod_WD_OCimport_01: RHS_M2StaticMG_MiniTripod_WD
	{
		class Turrets;
	};
  class RHS_M2StaticMG_MiniTripod_WD_OCimport_02: RHS_M2StaticMG_MiniTripod_WD_OCimport_01
	{
    class Turrets: Turrets
		{
      class MainTurret;
    };
  };
	class rhs_SPG9M_VDV;
  class rhs_SPG9M_VDV_OCimport_01: rhs_SPG9M_VDV
	{
		class Turrets;
	};
  class rhs_SPG9M_VDV_OCimport_02: rhs_SPG9M_VDV_OCimport_01
	{
    class Turrets: Turrets
		{
      class MainTurret;
    };
  };
	class RHS_ZU23_VDV;
  class RHS_ZU23_VDV_OCimport_01: RHS_ZU23_VDV
	{
		class Turrets;
	};
  class RHS_ZU23_VDV_OCimport_02: RHS_ZU23_VDV_OCimport_01
	{
    class Turrets: Turrets
		{
      class MainTurret;
      class CargoTurret_01;
    };
  };
	class RHS_AH64D_wd;
  class RHS_AH64D_wd_OCimport_01: RHS_AH64D_wd
	{
		class Turrets;
	};
  class RHS_AH64D_wd_OCimport_02: RHS_AH64D_wd_OCimport_01
	{
    class Turrets: Turrets
		{
      class MainTurret;
    };
  };
	class I_Mayhem_btr70: rhs_btr70_vdv
	{
		side = 2;
		faction="I_faction_MayhemPMC";
		vehicleClass = "apm_class_generic_tracked";
		editorSubcategory = "apm_generic_tracked";
		crew="I_Contractor_Mayhem_Rifleman2";
		hiddenSelectionsTextures[]=
		{
			"rhsafrf\addons\rhs_btr70\data\btr70_1_co.paa",
			"rhsafrf\addons\rhs_btr70\data\btr70_2_co.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa",
			"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
			"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
		};
	};
	class I_Mayhem_HMMWV: rhsusf_m1025_black
	{
		side = 2;
		scope = 2;
		faction="I_faction_MayhemPMC";
		displayName = "HMMWV (Unarmed)";
		crew="I_Contractor_Mayhem_Rifleman2";
	};
	class I_Mayhem_HMMWV_m2: rhsusf_m1025_black_m2
	{
		side = 2;
		scope = 2;
		faction="I_faction_MayhemPMC";
		displayName = "HMMWV (M2)";
		crew="I_Contractor_Mayhem_Rifleman2";
	};
	class I_Mayhem_HMMWV_MK19: rhsusf_m1025_black_mk19
	{
		side = 2;
		scope = 2;
		faction="I_faction_MayhemPMC";
		displayName = "HMMWV (Mk19)";
		crew="I_Contractor_Mayhem_Rifleman2";
	};
	class I_Mayhem_UH60M: RHS_UH60M
	{
    author = "Crowmedic";
    scope = 2;
    side = 2;
    faction = "I_faction_MayhemPMC";
    crew = "I_Contractor_Mayhem_Pilot";
    class Turrets: Turrets
		{
      class CopilotTurret: CopilotTurret
			{
				gunnerType = "I_Contractor_Mayhem_Pilot";
			};
      class MainTurret: MainTurret
			{
				gunnerType = "I_Contractor_Mayhem_Pilot";
			};
      class RightDoorGun: RightDoorGun
			{
				gunnerType = "I_Contractor_Mayhem_Pilot";
			};
    };
	};
	class I_Mayhem_AH64D: RHS_AH64D_wd_OCimport_02
	{
		author = "Crowmedic";
        scope = 2;
        scopeCurator = 2;
        displayName = "AH64D";
        side = 2;
        faction = "I_faction_MayhemPMC";
        crew = "I_Contractor_Mayhem_Pilot";
        class Turrets: Turrets
				{
            class MainTurret: MainTurret {gunnerType = "I_Contractor_Mayhem_Pilot";};
        };
	};
	class I_Mayhem_M113_m2: rhsgref_hidf_m113a3_m2
	{
		side = 2;
		faction="I_faction_MayhemPMC";
		vehicleClass = "apm_class_generic_tracked";
		editorSubcategory = "apm_generic_tracked";
		displayName = "M113A3 (M2)";
		crew="I_Contractor_Mayhem_Rifleman2";
	};
	class I_Mayhem_BMD1: rhsgref_cdf_bmd1
	{
		side = 2;
		faction="I_faction_MayhemPMC";
		vehicleClass = "apm_class_generic_tracked";
		editorSubcategory = "apm_generic_tracked";
		displayName = "BMD-1";
		crew="I_Contractor_Mayhem_Rifleman2";
	};
	class I_Mayhem_m1a2_tuskii: rhsusf_m1a2sep1tuskiiwd_usarmy
	{
		side = 2;
		faction="I_faction_MayhemPMC";
		vehicleClass = "apm_class_generic_tanks";
		editorSubcategory = "apm_generic_tanks";
		displayName = "M1A2 Tusk II";
		crew="I_Contractor_Mayhem_Rifleman2";
	};
	class I_Mayhem_M2Static_Tripod: RHS_M2StaticMG_WD_OCimport_02
	{
		author = "Crowmedic";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 (Tripod)";
        side = 2;
        faction = "I_faction_MayhemPMC";
        crew = "I_Contractor_Mayhem_Rifleman2";
        class Turrets: Turrets
				{
            class MainTurret: MainTurret {gunnerType = "I_Contractor_Mayhem_Rifleman2";};
        };

    };
	class I_Mayhem_M2Static: RHS_M2StaticMG_WD_OCimport_02
	{
		author = "Crowmedic";
        scope = 2;
        scopeCurator = 2;
        displayName = "M2 (Tripod)";
        side = 2;
        faction = "I_faction_MayhemPMC";
        crew = "I_Contractor_Mayhem_Rifleman2";
        class Turrets: Turrets
				{
            class MainTurret: MainTurret {gunnerType = "I_Contractor_Mayhem_Rifleman2";};
        };

	};
	class I_Mayhem_SPG9: rhs_SPG9M_VDV_OCimport_02
	{
		author = "Crowmedic";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG9";
        side = 2;
        faction = "I_faction_MayhemPMC";
        crew = "I_Contractor_Mayhem_Rifleman2";
        class Turrets: Turrets
				{
            class MainTurret: MainTurret {gunnerType = "I_Contractor_Mayhem_Rifleman2";};
        };

	};
	class I_Mayhem_ZU23_Static: RHS_ZU23_VDV_OCimport_02
	{
		author = "Crowmedic";
        scope = 2;
        scopeCurator = 2;
        displayName = "ZU-23";
        side = 2;
        faction = "I_faction_MayhemPMC";
        crew = "I_Contractor_Mayhem_Rifleman2";
        class Turrets: Turrets
				{
            class MainTurret: MainTurret {gunnerType = "I_Contractor_Mayhem_Rifleman2";};
            class CargoTurret_01: CargoTurret_01 {gunnerType = "I_Contractor_Mayhem_Rifleman2";};
        };
	};
