//Base classes for vehicles, and classes for BIS_fnc_initVehicle, make sure it's first #include
class Car;
class Car_F: Car
{
	class AnimationSources;
	class NewTurret;
	class Turrets
	{
		class MainTurret: NewTurret
		{
			class ViewGunner;
			class ViewOptics;
		};
	};
};
class StaticCannon;
class B_G_HMG_02_F;
class B_G_HMG_02_high_F;
class RHS_MK19_TriPod_base;
class RHS_M6_wd;
class rhs_Kornet_Base;
class I_G_Offroad_01_F;
class I_G_Offroad_01_armed_F;
class I_G_Offroad_01_AT_F;
class B_Truck_01_box_F;
class B_Truck_01_ammo_F;
class B_Truck_01_fuel_F;
class B_Truck_01_covered_F;
class B_Truck_01_transport_F;
class LSV_01_base_F: Car_F //Add camo to all factions, add APM camo
{
	class textureSources
	{
		class Black
		{
			factions[] = {};
		};
		class Olive
		{
			factions[] = {};
		};
		class Sand
		{
			factions[] = {};
		};
		class Dazzle
		{
			factions[] = {};
		};
    class tacs_black
    {
      author = "Kresky";
      displayName = "Dark Black";
      factions[] = {};
      textures[] =
      {
        "\x\tacs\addons\vehicles\data\polaris_black_ext01_co.paa",
        "\x\tacs\addons\vehicles\data\polaris_black_ext02_co.paa",
        "\x\tacs\addons\vehicles\data\polaris_black_ext03_co.paa",
        "\x\tacs\addons\vehicles\data\polaris_black_adds_co.paa",
        "\x\tacs\addons\vehicles\data\polaris_black_atlauncher_co.paa",
        "\x\tacs\addons\vehicles\data\polaris_black_attube_co.paa"
      };
    };
    class tacs_tan
    {
      author = "Kresky";
      displayName = "Tan";
      factions[] = {};
      textures[] =
      {
        "\x\tacs\addons\vehicles\data\polaris_tan_ext01_co.paa",
        "\x\tacs\addons\vehicles\data\polaris_tan_ext02_co.paa",
        "\x\tacs\addons\vehicles\data\polaris_tan_ext03_co.paa",
        "\x\tacs\addons\vehicles\data\polaris_tan_adds_co.paa",
        "\x\tacs\addons\vehicles\data\polaris_tan_atlauncher_co.paa",
        "\x\tacs\addons\vehicles\data\polaris_tan_attube_co.paa"
      };
  	};
	};
	class AnimationSources: AnimationSources
	{
		class Unarmed_Rear_Cage_Hide
		{
			displayName = "Hide rear cage";
			author = "LinkIsParking";
			source = "user";
			initPhase = 0;
			mass = -15;
		};
	};
};
class LSV_01_unarmed_base_F;
class B_LSV_01_unarmed_F;
class LSV_01_armed_base_F;
class B_LSV_01_armed_F;
class LSV_01_light_base_F;
class B_CTRG_LSV_01_light_F: LSV_01_light_base_F
{
  displayName = "Polaris DAGOR (Light)";
};
class LSV_01_AT_base_F;
class B_LSV_01_AT_F;
class LSV_02_base_F: Car_F
{
  class textureSources
  {
    class Arid
		{
			factions[] = {};
		};
    class Black
		{
			factions[] = {};
		};
    class GreenHex
		{
			factions[] = {};
		};
  };
};
class O_LSV_02_unarmed_F;
class LSV_02_armed_base_F;
class O_LSV_02_armed_F: LSV_02_armed_base_F
{
  class Turrets;
};
class LSV_02_AT_base_F;
class O_LSV_02_AT_F: LSV_02_AT_base_F
{
  class Turrets;
};
class rhsusf_m998_w_4dr_fulltop;
class rhsusf_m1025_w;
class rhsusf_m1025_w_m2;
class rhsusf_m1025_w_mk19;
class rhsusf_m113_usarmy;
class rhs_2b14_82mm_vdv;
class rhs_d30_vdv;
class rhs_d30_at_vdv;
class rhs_zu23_base: StaticCannon
{
	class Turrets;
};
class RHS_ZU23_VDV: rhs_zu23_base
{
	class Turrets: Turrets
	{
		class MainTurret;
		class CargoTurret_01;
	};
};
class rhs_ural_base;
class RHS_BM21_VDV_01;
class rhsgref_brdm2;
class rhs_btr60_base;
class rhs_btr80a_vdv;
class rhs_bmp1k_vdv;
class rhs_t80b;
class rhs_mi24v_vvs;
class RHSGREF_A29_Base;
class rhs_tigr_base;
class rhs_tigr_vdv: rhs_tigr_base
{
	class Turrets;
};
class rhs_tigr_m_vdv: rhs_tigr_vdv
{
	class Turrets: Turrets
	{
		class MainTurret;
		class CargoTurret_01;
		class CargoTurret_02;
	};
};
class rhs_tigr_sts_vdv: rhs_tigr_vdv
{
	class Turrets: Turrets
	{
		class MainTurret;
		class AGS_Turret;
	};
};
class Wheeled_APC_F: Car_F
{
	class NewTurret;
	class Turrets
	{
		class MainTurret: NewTurret
		{
			class CommanderOptics;
		};
	};
};
class APC_Wheeled_01_Base_F: Wheeled_APC_F
{
	class EventHandlers;
	class Turrets;
};
class B_APC_Wheeled_01_Base_F: APC_Wheeled_01_Base_F
{
	class EventHandlers;
	class Turrets;
};
class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_Base_F
{
	class EventHandlers;
};
class B_AFV_Wheeled_01_cannon_F;
class B_AFV_Wheeled_01_up_cannon_F;
class APC_Wheeled_03_base_F: Wheeled_Apc_F
{
	class Turrets;
};
class I_APC_Wheeled_03_cannon_F;
class Tank_F;
class APC_Tracked_03_base_F: Tank_F
{
	class Turrets;
};
class I_APC_tracked_03_cannon_F;
class Air;
class Helicopter: Air
{
	class Turrets
	{
		class NewTurret;
		class MainTurret;
	};
};
class Helicopter_Base_F: Helicopter
{
  class Turrets: Turrets
	{};
};
class Helicopter_Base_H: Helicopter_Base_F
{
  class Turrets: Turrets
	{
		class CopilotTurret;
		class MainTurret;
	};
};
class O_Heli_Attack_02_dynamicloadout_F;
class RHS_MELB_Base: Helicopter_Base_H
{
  class Turrets;
	class TextureSources
	{
		class APM
		{
			displayName = "APM";
			author = "LinkIsParking";
			textures[] =
			{
				"x\APM\addons\Factions\data\melb\melb_ext_co.paa",
				"rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
			};
			factions[] = {};
		};
		class USArmy
		{
			displayName = "US Army";
			author = "Red Hammer Studios";
			textures[] =
			{
				"rhsusf\addons\rhsusf_melb\data\melb_ext_co.paa",
				"rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
			};
			factions[] = {};
		};
	};
};
class RHS_MELB_MH6M: RHS_MELB_Base
{
  class Turrets: Turrets
  {
    class CopilotTurret;
		class CargoTurret_03;
		class CargoTurret_04;
		class CargoTurret_05;
		class CargoTurret_06;
		class CargoTurret_07;
		class CargoTurret_08;
  };
};
class RHS_MELB_AH6M: RHS_MELB_Base
{
  class Turrets: Turrets
  {
    class CopilotTurret;
  };
};
class RHS_UH60M_base;
class RHS_UH60M_US_base: RHS_UH60M_base
{
  class Turrets;
	class textureSources;
	class EventHandlers;
};
class RHS_UH60M: RHS_UH60M_US_base
{
	class textureSources: textureSources
  {
    class Standard
    {
      factions[] = {};
    };
    class APM
    {
      displayName = "APM";
      author = "Crowmedic & SkunySpliff";
      textures[] =
      {
        "x\APM\addons\factions\data\UH-60\uh60m_fuselage_co.paa",
        "x\APM\addons\factions\data\UH-60\uh60m_engine_co.paa",
        "x\APM\addons\factions\data\UH-60\default_co.paa",
        "rhsusf\addons\rhsusf_a2port_air\uh60m\data\uh60m_dust_filter_co.paa"
      };
      factions[] = {};
    };
  };
  class Turrets: Turrets
  {
    class CopilotTurret;
    class MainTurret;
    class RightDoorGun;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
  };
};
class Heli_Transport_01_base_F;
class Heli_Light_01_base_F;
class Heli_Light_01_unarmed_base_F;
class Heli_Transport_02_base_F;
class RHS_CH_47F_base: Heli_Transport_02_base_F
{
  class textureSources
  {
    class standard
    {
      factions[] = {};
    };
    class Desert
    {
      factions[] = {};
    };
    class APM
    {
      displayName = "APM";
      author = "Crowmedic & SkunySpliff";
      textures[] =
      {
        "x\APM\addons\factions\data\ch-47\ch47_ext_1_co.paa",
        "x\APM\addons\factions\data\ch-47\ch47_ext_2_co.paa",
        "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47f_nalepky_ca.paa",
        "rhsusf\addons\rhsusf_a2port_air\ch47\data\ch47_ext_mlod_co.paa"
      };
      factions[] = {};
    };
  };
};
class RHS_CH_47F;
class rhsusf_CH53E_USMC: Helicopter_Base_H
{
  class textureSources
  {
    class standard
    {
      factions[] = {};
    };
    class APM
    {
      displayName = "APM";
      author = "Crowmedic & SkunySpliff";
      textures[] =
      {
        "x\APM\addons\factions\data\ch-53\ch53_1_co.paa",
        "rhsusf\addons\rhsusf_decals\Data\Numbers\USMCBlackShadow\5_ca.paa",
        "rhsusf\addons\rhsusf_decals\Data\Numbers\USMCBlackShadow\5_ca.paa"
      };
      factions[] = {};
    };
  };
  class Turrets;
};
class rhsusf_CH53E_USMC_GAU21: rhsusf_CH53E_USMC
{
  class Turrets: Turrets
  {
    class GAU21;
  };
};
class Heli_Attack_02_base_F;
class RHS_Mi24_base;
class Heli_Light_02_base_F;
class RHS_Mi8_base;
class RHS_AH64D;
class B_MBT_01_TUSK_F;
class B_T_APC_Tracked_01_AA_F;
class RHS_M2A3_BUSKIII_wd;
class O_MBT_02_cannon_F;
class I_MBT_03_cannon_F;
class O_MBT_04_command_F;
class B_T_VTOL_01_infantry_F;
class B_T_VTOL_01_vehicle_F;
class B_T_VTOL_01_armed_F;
class O_T_VTOL_02_infantry_dynamicLoadout_F;
class B_Plane_CAS_01_dynamicLoadout_F;
class O_Plane_Fighter_02_F;
class B_Plane_Fighter_01_F;
