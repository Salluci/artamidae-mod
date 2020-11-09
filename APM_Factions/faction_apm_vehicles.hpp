//Vehicles
class B_APM_DAGOR: B_LSV_01_unarmed_F
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman3";
	textureList[]={"tacs_black",1};
};
class B_APM_DAGOR_XM312: B_LSV_01_armed_F
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_TL2";
	textureList[]={"tacs_black",1};
	class Turrets: Turrets
	{
		class TopTurret: TopTurret
		{
			gunnerType = "B_Contractor_APM_AR1";
		};
		class CodRiverTurret: CodRiverTurret
		{
			gunnerType = "B_Contractor_APM_Grenadier1";
		};
	};
};
class B_APM_DAGOR_Light: B_CTRG_LSV_01_light_F
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman1";
	textureList[]={"tacs_black",1};
};
class B_APM_DAGOR_Titan: B_LSV_01_AT_F
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_TL1";
	textureList[]={"tacs_black",1};
	class Turrets: Turrets
	{
		class TopTurret: TopTurret
		{
			gunnerType = "B_Contractor_APM_Marksman1";
		};
		class CodRiverTurret: CodRiverTurret
		{
			gunnerType = "B_Contractor_APM_Rifleman2";
		};
	};
};
class B_APM_HMMWV: rhsusf_m1025_APM
{
	author = "Crowmedic";
	scope = 2;
	displayName = "HMMWV (Unarmed)";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Grenadier1";
};
class B_APM_HMMWV_M2: rhsusf_m1025_APM_m2
{
	author = "Crowmedic";
	scope = 2;
	displayName = "HMMWV (M2)";
	side = 1;
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman1";
	class Turrets: Turrets
	{
		class M2_Turret: M2_Turret
		{
			gunnerType = "B_Contractor_APM_Rifleman2";
		};
	};
};
class B_APM_HMMWV_MK19: rhsusf_m1025_APM_mk19
{
	author = "Crowmedic";
	scope = 2;
	scopeCurator = 2;
	displayName = "HMMWV (Mk 19)";
	side = 1;
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman1";
	class Turrets: Turrets
	{
		class M2_Turret: M2_Turret
		{
			gunnerType = "B_Contractor_APM_Rifleman2";
		};
	};
};
class B_APM_HEMTT_FOB: B_Truck_01_box_F
{
	author = "Crowmedic";
	displayName = "FOB Truck";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman1";
	editorSubcategory = "apm_generic_fob";
	vehicleClass = "apm_class_generic_FOB";
	class EventHandlers
	{
		init = "[_this select 0] call fob_truck_init; [_this select 0] call apm_arsenal_fnc_initBoxResupply;";
	};
};
class B_APM_BadgerIFV: B_APC_Wheeled_01_cannon_F
{
	author = "Crowmedic";
	crew = "B_Contractor_APM_Rifleman2";
	faction = "B_faction_APM";
	textureList[] = {"Charcoal",1};
};
class B_APM_Rooikat: B_AFV_Wheeled_01_Cannon_F
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman1";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret {gunnerType = "B_Contractor_APM_Rifleman2";};
	};
};
class B_APM_Rooikat_up: B_AFV_Wheeled_01_up_cannon_F
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman1";
	textureList[] = {"Charcoal",1};
	class Turrets: Turrets
	{
		class MainTurret: MainTurret {gunnerType = "B_Contractor_APM_Rifleman2";};
	};
};
class B_APM_MH6M: RHS_MELB_APM_MH6M
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	scope = 2;
	crew = "B_Contractor_APM_Rifleman1";
	textureList[] = {"APM",1};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret
		{
			gunnerType = "B_Contractor_APM_Rifleman1";
		};
	};
};
class B_APM_AH6M: RHS_MELB_APM_AH6M
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	scope = 2;
	crew = "B_Contractor_APM_Rifleman1";
	textureList[] = {"APM",1};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret
		{
			gunnerType = "B_Contractor_APM_Rifleman1";
		};
	};
};
class B_APM_UH60M: RHS_UH60M
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman2";
	textureList[] = {"APM",1};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret
		{
			gunnerType = "B_Contractor_APM_Rifleman1";
		};
	};
};
class B_APM_CH47F: RHS_CH_47F
{
	crew = "B_Contractor_APM_Rifleman2";
	faction = "B_faction_APM";
	vehicleClass = "Air";
	textureList[] = {"APM",1};
};
class B_APM_CH53E: rhsusf_CH53E_USMC
{
	crew = "B_Contractor_APM_Rifleman2";
	faction = "B_faction_APM";
	vehicleClass = "Air";
	textureList[] = {"APM",1};
};
class B_APM_CH53E_GAU21: rhsusf_CH53E_USMC_GAU21
{
	crew = "B_Contractor_APM_Rifleman2";
	faction = "B_faction_APM";
	vehicleClass = "Air";
	textureList[] = {"APM",1};
	class Turrets: Turrets
	{
		class GAU21: GAU21
		{
			gunnerType = "B_Contractor_APM_AR1";
		};
	};
};
class B_APM_T14K: O_MBT_04_command_F
{
  side = 1;
  scope = 2;
  crew = "B_Contractor_APM_Rifleman2";
  faction = "B_faction_APM";
  editorPreview = "\APM_Factions\previews\B_APM_T14K.jpg";
  scopeCurator = 2;
  hiddenSelectionsTextures[] =
  {
    "\APM_Factions\Data\MBT_04\MBT_04_exterior_green_hex_1_CO.paa",
    "\APM_Factions\Data\MBT_04\MBT_04_exterior_green_hex_2_CO.paa",
    "a3\armor_f\Data\camonet_CSAT_HEX_Desert_CO.paa"
  };
};
class B_APM_T14: O_MBT_04_cannon_F
{
  side = 1;
  scope = 2;
  crew = "B_Contractor_APM_Rifleman2";
  editorPreview = "\APM_Factions\previews\B_APM_T14.jpg";
  faction = "B_faction_APM";
  scopeCurator = 2;
  hiddenSelectionsTextures[] =
  {
    "\APM_Factions\data\MBT_04\MBT_04_exterior_green_hex_1_CO.paa",
    "\APM_Factions\data\MBT_04\MBT_04_exterior_green_hex_2_CO.paa",
    "a3\armor_f\Data\camonet_CSAT_HEX_Desert_CO.paa"
  };
};
class B_APM_T100: O_MBT_02_cannon_F
{
  side = 1;
  scope = 2;
  crew = "B_Contractor_APM_Rifleman2";
  editorPreview = "\APM_Factions\previews\B_APM_T100.jpg";
  faction = "B_faction_APM";
  scopeCurator = 2;
  hiddenSelectionsTextures[] =
  {
    "\APM_Factions\data\MBT_02k\mbt_02_body_co.paa",
    "\APM_Factions\data\MBT_02k\mbt_02_turret_co.paa",
    "\APM_Factions\data\MBT_02k\mbt_02_turret_co.paa",
    "A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
  };
};
class B_APM_Leopard2: I_MBT_03_cannon_F
{
  side = 1;
  scope = 2;
  crew = "B_Contractor_APM_Rifleman2";
  editorPreview = "\APM_Factions\previews\B_APM_Leopard2.jpg";
  faction = "B_faction_APM";
  scopeCurator = 2;
  hiddenSelectionsTextures[] =
  {
    "\APM_Factions\data\MBT_03\mbt_03_ext01_co.paa",
    "\APM_Factions\data\MBT_03\mbt_03_ext02_co.paa",
    "\APM_Factions\data\MBT_03\mbt_03_rcws_co.paa",
    "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
  };
};
class RHS_Mi24V_vdv;
class RHS_Mi24V_vdv_OCimport_01: RHS_Mi24V_vdv
{
  scope = 0;
  class Turrets;
};
class RHS_Mi24V_vdv_OCimport_02: RHS_Mi24V_vdv_OCimport_01
{
  class EventHandlers;
  class Turrets: Turrets
  {
    class MainTurret;
  };
  class textureSources;
};
class B_APM_Mi24v: RHS_Mi24V_vdv_OCimport_02
{
  author = "Crowmedic";
  scope = 2;
  displayName = "Mi-24v";
  editorPreview = "\APM_Factions\previews\B_APM_Mi24v.jpg";
  side = 1;
  faction = "B_faction_APM";
  editorSubcategory = "EdSubcat_Helicopters";
  vehicleClass = "Air";
  crew = "B_Contractor_APM_Rifleman4";
  hiddenSelectionsTextures[] =
  {
    "APM_Factions\Data\Mi-24\mi24p_001_co.paa",
    "APM_Factions\Data\Mi-24\mi24p_002_co.paa",
    "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
  };
  class Turrets: Turrets
  {
    class MainTurret: MainTurret
    {
    	gunnerType = "B_Contractor_APM_Rifleman4";
    };
  };
  class textureSources: textureSources
  {
    class APM
    {
      displayName = "APM";
      author = "Crowmedic & SkunySpliff";
      textures[] =
      {
        "APM_Factions\Data\Mi-24\mi24p_001_co.paa",
        "APM_Factions\Data\Mi-24\mi24p_002_co.paa",
        "rhsafrf\addons\rhs_a2port_air\Mi17\data\camo\mi8_det_g_camo1_co.paa"
      };
      factions[] = {};
    };
  };
};
class B_T_VTOL_01_infantry_F;
class B_T_VTOL_01_infantry_F_OCimport_01: B_T_VTOL_01_infantry_F
{
  scope = 0;
  class EventHandlers;
  class Turrets;
  class textureSources;
};
class B_T_VTOL_01_infantry_F_OCimport_02: B_T_VTOL_01_infantry_F_OCimport_01
{
  class EventHandlers;
  class Turrets: Turrets
  {
    class CopilotTurret;
    class PassengerTurret_01;
    class PassengerTurret_02;
    class CargoTurret_03;
    class CargoTurret_04;
  };
  class textureSources: textureSources
  {
    class Blue;
    class Olive;
  };
};
class B_APM_Blackfish_infantry: B_T_VTOL_01_infantry_F_OCimport_02
{
  author = "Crowmedic";
  scope = 2;
  scopeCurator = 2;
  side = 1;
  faction = "B_faction_APM";
  crew = "B_Contractor_APM_Rifleman1";
  textureList[] = {"APM", 1};
  class Turrets: Turrets
  {
    class CopilotTurret: CopilotTurret {gunnerType = "B_Contractor_APM_Rifleman1";};
  };
  hiddenSelectionsTextures[] =
  {
    "APM_Factions\data\VTOL_01\VTOL_01_EXT01_blue_CO.paa",
    "APM_Factions\data\VTOL_01\VTOL_01_EXT02_blue_CO.paa",
    "APM_Factions\data\VTOL_01\VTOL_01_EXT03_blue_CO.paa",
    "APM_Factions\data\VTOL_01\VTOL_01_EXT04_blue_CO.paa"
  };
  class textureSources: textureSources
  {
    class Blue: Blue {factions[] = {};};
    class Olive: Olive {factions[] = {};};
    class APM
    {
      displayName = "APM";
      author = "Crowmedic & SkunySpliff";
      textures[] =
      {
        "APM_Factions\data\VTOL_01\VTOL_01_EXT01_blue_CO.paa",
        "APM_Factions\data\VTOL_01\VTOL_01_EXT02_blue_CO.paa",
        "APM_Factions\data\VTOL_01\VTOL_01_EXT03_blue_CO.paa",
        "APM_Factions\data\VTOL_01\VTOL_01_EXT04_blue_CO.paa"
      };
      factions[] = {};
    };
  };
};
class B_T_VTOL_01_vehicle_F;
class B_T_VTOL_01_vehicle_F_OCimport_01: B_T_VTOL_01_vehicle_F
{
  scope = 0;
  class EventHandlers;
  class Turrets;
  class textureSources;
};
class B_T_VTOL_01_vehicle_F_OCimport_02: B_T_VTOL_01_vehicle_F_OCimport_01
{
  class EventHandlers;
  class Turrets: Turrets
  {
    class CopilotTurret;
    class PassengerTurret_01;
    class PassengerTurret_02;
  };
  class textureSources: textureSources
  {
    class Blue;
    class Olive;
  };
};
class B_APM_Blackfish_Vehicle: B_T_VTOL_01_vehicle_F_OCimport_02
{
  author = "Crowmedic";
  scope = 2;
  scopeCurator = 2;
  side = 1;
  faction = "B_faction_APM";
  crew = "B_Contractor_APM_Rifleman2";
  class Turrets: Turrets
  {
    class CopilotTurret: CopilotTurret {gunnerType = "B_Contractor_APM_Rifleman2";};
  };
  hiddenSelectionsTextures[] =
  {
    "APM_Factions\data\VTOL_01\VTOL_01_EXT01_blue_CO.paa",
    "APM_Factions\data\VTOL_01\VTOL_01_EXT02_blue_CO.paa",
    "APM_Factions\data\VTOL_01\VTOL_01_EXT03_blue_CO.paa",
    "APM_Factions\data\VTOL_01\VTOL_01_EXT04_blue_CO.paa"
  };
  class textureSources: textureSources
  {
    class Blue: Blue {factions[] = {};};
    class Olive: Olive {factions[] = {};};
    class APM
    {
      displayName = "APM";
      author = "Crowmedic & SkunySpliff";
      textures[] =
      {
        "APM_Factions\data\VTOL_01\VTOL_01_EXT01_blue_CO.paa",
        "APM_Factions\data\VTOL_01\VTOL_01_EXT02_blue_CO.paa",
        "APM_Factions\data\VTOL_01\VTOL_01_EXT03_blue_CO.paa",
        "APM_Factions\data\VTOL_01\VTOL_01_EXT04_blue_CO.paa"
      };
      factions[] = {};
    };
  };
};
class B_T_VTOL_01_armed_F;
class B_T_VTOL_01_armed_F_OCimport_01: B_T_VTOL_01_armed_F
{
  scope = 0;
  class EventHandlers;
  class Turrets;
  class textureSources;
};
class B_T_VTOL_01_armed_F_OCimport_02: B_T_VTOL_01_armed_F_OCimport_01
{
  class EventHandlers;
  class Turrets: Turrets
  {
    class CopilotTurret;
    class GunnerTurret_01;
    class GunnerTurret_02;
  };
  class textureSources: textureSources
  {
    class Blue;
    class Olive;
  };
};
class B_APM_Blackfish_Armed: B_T_VTOL_01_armed_F_OCimport_02
  {
  author = "Crowmedic";
  scope = 2;
  scopeCurator = 2;
  side = 1;
  faction = "B_faction_APM";
  crew = "B_Contractor_APM_Rifleman1";
  hiddenSelectionsTextures[] =
  {
    "APM_Factions\data\VTOL_01\VTOL_01_EXT01_blue_CO.paa",
    "APM_Factions\data\VTOL_01\VTOL_01_EXT02_blue_CO.paa",
    "APM_Factions\data\VTOL_01\VTOL_01_EXT03_blue_CO.paa",
    "APM_Factions\data\VTOL_01\VTOL_01_EXT04_blue_CO.paa"
  };
  class textureSources: textureSources
  {
    class Blue: Blue {factions[] = {};};
    class Olive: Olive {factions[] = {};};
    class APM
    {
      displayName = "APM";
      author = "Crowmedic & SkunySpliff";
      textures[] =
      {
        "APM_Factions\data\VTOL_01\VTOL_01_EXT01_blue_CO.paa",
        "APM_Factions\data\VTOL_01\VTOL_01_EXT02_blue_CO.paa",
        "APM_Factions\data\VTOL_01\VTOL_01_EXT03_blue_CO.paa",
        "APM_Factions\data\VTOL_01\VTOL_01_EXT04_blue_CO.paa"
      };
      factions[] = {};
    };
  };
  class Turrets: Turrets
  {
      class CopilotTurret: CopilotTurret {gunnerType = "B_Contractor_APM_Rifleman2";};
      class GunnerTurret_01: GunnerTurret_01 {gunnerType = "B_Contractor_APM_Rifleman2";};
      class GunnerTurret_02: GunnerTurret_02 {gunnerType = "B_Contractor_APM_Rifleman2";};
  };
};
