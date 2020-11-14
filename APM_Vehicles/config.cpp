class CfgPatches
{
  class APM_Vehicles
	{
    units[] = {};
		requiredVersion=1.4;
		requiredAddons[]=
		{
			"A3_Data_F_Oldman_Loadorder"
		};
		name="APM Vehicle Retextures";
		author="LinkIsParking";
	};
};
class DefaultEventHandlers
{
	init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
};
class CfgVehicles
{
  class rhsusf_m998_w_4dr_fulltop;
  class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop
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
      class Olive
      {
        factions[] = {};
      };
      class Black
      {
        author = "LinkIsParking";
        displayName = "Black";
        textures[] =
        {
          "x\APM\addons\vehicles\data\hmmvv\a_exterior_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\b_interior_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\c_a2_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\d_wheels_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\e_mainbody_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\f_gratting_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\g_camo1_tile_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\h_camo2_m1025_black.paa",
          ""
        };
        factions[] = {};
      };
    };
  };
  class rhsusf_m1025_w_m2: rhsusf_m1025_w
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
      class Olive
      {
        factions[] = {};
      };
      class Black
      {
        author = "LinkIsParking";
        displayName = "Black";
        textures[] =
        {
          "x\APM\addons\vehicles\data\hmmvv\a_exterior_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\b_interior_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\c_a2_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\d_wheels_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\e_mainbody_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\f_gratting_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\g_camo1_tile_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\h_camo2_m1025_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\mk64mount_w_co.paa"
        };
        factions[] = {};
      };
    };
  };
  class rhsusf_m1025_w_mk19: rhsusf_m1025_w
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
      class Olive
      {
        factions[] = {};
      };
      class Black
      {
        author = "LinkIsParking";
        displayName = "Black";
        textures[] =
        {
          "x\APM\addons\vehicles\data\hmmvv\a_exterior_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\b_interior_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\c_a2_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\d_wheels_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\e_mainbody_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\f_gratting_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\g_camo1_tile_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\h_camo2_m1025_black.paa",
          "x\APM\addons\vehicles\data\hmmvv\mk64mount_w_co.paa"
        };
        factions[] = {};
      };
    };
  };
  class Wheeled_APC_F;
  class APC_Wheeled_01_Base_F: Wheeled_APC_F
  {
    class textureSources
    {
      class Sand
      {
        factions[] = {};
      };
      class Olive
      {
        factions[] = {};
      };
      class Charcoal
      {
        author = "LinkIsParking";
        displayName = "Charcoal";
        textures[] =
        {
          "x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_base_charcoal_co.paa",
          "x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_adds_charcoal_co.paa",
          "x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_tows_charcoal_co.paa",
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
          "x\APM\addons\Vehicles\data\cage_charcoal.paa"
        };
      };
  		class Tan
      {
        author = "LinkIsParking";
        displayName = "Tan";
        textures[] =
        {
          "x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_base_Tan_co.paa",
          "x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_adds_Tan_co.paa",
          "x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_tows_Tan_co.paa",
          "a3\Armor_F\Data\camonet_NATO_desert_CO.paa",
          "x\APM\addons\Vehicles\data\cage_tan.paa"
        };
      };
  		class OliveGreen
      {
        author = "LinkIsParking";
        displayName = "Olive Green";
        textures[] =
        {
          "x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_base_Green_co.paa",
          "x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_adds_Green_co.paa",
          "x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_tows_Green_co.paa",
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
          "x\APM\addons\Vehicles\data\cage_green.paa"
        };
      };
    };
  };
  class AFV_Wheeled_01_base_F;
  class B_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F
  {
    class textureSources
    {
      class Green
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
      class Tan
      {
        displayName = "Tan";
        author = "LinkIsParking";
        textures[] =
        {
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_tan_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_tan_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_wheel_CO.paa",
          "a3\Armor_F\Data\camonet_NATO_desert_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\cage_tan.paa"
        };
        factions[] = {};
      };
      class Charcoal
      {
        displayName = "Charcoal";
        author = "LinkIsParking";
        textures[] =
        {
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_charcoal_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_charcoal_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_wheel_CO.paa",
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\cage_charcoal.paa"
        };
        factions[] = {};
      };
      class OliveGreen
      {
        displayName = "Olive Green";
        author = "LinkIsParking";
        textures[] =
        {
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_Green_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_Green_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_wheel_CO.paa",
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\cage_Green.paa"
        };
        factions[] = {};
      };
    };
  };
  class AFV_Wheeled_01_up_base_F;
  class B_AFV_Wheeled_01_up_cannon_F: AFV_Wheeled_01_up_base_F
  {
    class textureSources
    {
      class Green
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
      class Tan
      {
        displayName = "Tan";
        author = "LinkIsParking";
        textures[] =
        {
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_tan_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_tan_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_wheel_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\cage_tan.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_commander_tow_tan_CO.paa",
          "a3\Armor_F\Data\camonet_NATO_desert_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\cage_tan.paa"
        };
        factions[] = {};
      };
      class OliveGreen
      {
        displayName = "Olive Green";
        author = "LinkIsParking";
        textures[] =
        {
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_Green_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_Green_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_wheel_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\cage_Green.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_commander_tow_Green_CO.paa",
          "a3\Armor_F\Data\camonet_NATO_green_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\cage_Green.paa"
        };
        factions[] = {};
      };
      class Charcoal
      {
        displayName = "Charcoal";
        author = "LinkIsParking";
        textures[] =
        {
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_Charcoal_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_Charcoal_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_wheel_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\cage_Charcoal.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\afv_commander_tow_Charcoal_CO.paa",
          "a3\Armor_F\Data\camonet_NATO_green_CO.paa",
          "x\APM\addons\Vehicles\data\afv_wheeled_01\cage_Charcoal.paa"
        };
        factions[] = {};
      };
    };
  };
  class APC_Wheeled_03_base_F: Wheeled_Apc_F
  {
  	class TextureSources
  	{
  		class Charcoal
  		{
  			displayName = "Charcoal";
  			author = "LinkIsParking";
  			textures[] =
  			{
  				"x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_charcoal_co.paa",
  				"x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext2_charcoal_co.paa",
  				"x\APM\addons\Vehicles\data\RCWS30_charcoal_co.paa",
  				"x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_alpha_charcoal_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
  				"x\APM\addons\Vehicles\data\cage_charcoal.paa"
  			};
  			Vehicles[] = {};
  		};
  		class OliveGreen
  		{
  			displayName = "Olive Green";
  			author = "LinkIsParking";
  			textures[] =
  			{
  				"x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_Green_co.paa",
  				"x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext2_Green_co.paa",
  				"x\APM\addons\Vehicles\data\RCWS30_green_co.paa",
  				"x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_alpha_Green_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
  				"x\APM\addons\Vehicles\data\cage_green.paa"
  			};
  			Vehicles[] = {};
  		};
  		class Tan
  		{
  			displayName = "Tan";
  			author = "LinkIsParking";
  			textures[] =
  			{
  				"x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_tan_co.paa",
  				"x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext2_tan_co.paa",
  				"x\APM\addons\Vehicles\data\RCWS30_tan_co.paa",
  				"x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_alpha_tan_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_desert_CO.paa",
  				"x\APM\addons\Vehicles\data\cage_tan.paa"
  			};
  			Vehicles[] = {};
  		};
  	};
  };
  class Tank;
  class Tank_F: Tank
  {
    class EventHandlers;
  };
  class APC_Tracked_03_base_F: Tank_F
  {
  	class TextureSources
  	{
  		class Charcoal
  		{
  			displayName = "Charcoal";
  			author = "LinkIsParking";
  			textures[] =
  			{
  				"x\APM\addons\Vehicles\data\apc_tracked_03\apc_tracked_03_ext_charcoal_co.paa",
  				"x\APM\addons\Vehicles\data\apc_tracked_03\apc_tracked_03_ext2_charcoal_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
  				"x\APM\addons\Vehicles\data\cage_charcoal.paa"
  			};
  			Vehicles[] = {};
  		};
  		class OliveGreen
  		{
  			displayName = "Olive Green";
  			author = "LinkIsParking";
  			textures[] =
  			{
  				"x\APM\addons\Vehicles\data\apc_tracked_03\apc_tracked_03_ext_green_co.paa",
  				"x\APM\addons\Vehicles\data\apc_tracked_03\apc_tracked_03_ext2_green_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
  				"x\APM\addons\Vehicles\data\cage_green.paa"
  			};
  			Vehicles[] = {};
  		};
  		class Tan
  		{
  			displayName = "Tan";
  			author = "LinkIsParking";
  			textures[] =
  			{
  				"x\APM\addons\Vehicles\data\apc_tracked_03\apc_tracked_03_ext_tan_co.paa",
  				"x\APM\addons\Vehicles\data\apc_tracked_03\apc_tracked_03_ext2_tan_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_desert_CO.paa",
  				"x\APM\addons\Vehicles\data\cage_tan.paa"
  			};
  			Vehicles[] = {};
  		};
  	};
  };
  class B_MBT_01_base_F;
  class B_MBT_01_cannon_F: B_MBT_01_base_F
  {
    class textureSources
    {
      class Olive
      {
        factions[] = {};
      };
      class Sand
      {
        factions[] = {};
      };
    };
  };
  class MBT_03_base_F: Tank_F
  {
    class EventHandlers: EventHandlers
    {
      init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
    };
  	class textureSources
  	{
  		class Charcoal
      {
        displayName = "Charcoal";
        author = "LinkIsParking";
        textures[] =
        {
          "x\APM\addons\vehicles\data\MBT_03\mbt_03_ext01_charcoal_co.paa",
          "x\APM\addons\vehicles\data\MBT_03\mbt_03_ext02_charcoal_co.paa",
          "x\APM\addons\vehicles\data\MBT_03\mbt_03_rcws_grey_co.paa",
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
        };
        factions[] = {};
      };
      class Green
      {
        displayName = "Green";
        author = "LinkIsParking";
        textures[] =
        {
          "x\APM\addons\vehicles\data\MBT_03\mbt_03_ext01_Green_co.paa",
          "x\APM\addons\vehicles\data\MBT_03\mbt_03_ext02_Green_co.paa",
          "x\APM\addons\vehicles\data\MBT_03\mbt_03_rcws_Green_co.paa",
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
        };
        factions[] = {};
      };
      class Tan
      {
        displayName = "Tan";
        author = "LinkIsParking";
        textures[] =
        {
          "x\APM\addons\vehicles\data\MBT_03\mbt_03_ext01_tan_co.paa",
          "x\APM\addons\vehicles\data\MBT_03\mbt_03_ext02_tan_co.paa",
          "x\APM\addons\vehicles\data\MBT_03\mbt_03_rcws_tan_co.paa",
          "a3\Armor_F\Data\camonet_NATO_desert_CO.paa"
        };
        factions[] = {};
      };
  	};
  };
  class VTOL_Base_F;
  class VTOL_01_Base_F: VTOL_Base_F
  {
  	class textureSources
  	{
  		class Blue
  		{
  			factions[] = {};
  		};
  		class Olive
  		{
  			factions[] = {};
  		};
      class Black
      {
        displayName = "Black";
        author = "LinkIsParking";
        factions[] = {};
        textures[] =
        {
          "x\APM\addons\vehicles\data\VTOL_01\VTOL_01_EXT01_black_CO.paa",
          "x\APM\addons\vehicles\data\VTOL_01\VTOL_01_EXT02_black_CO.paa",
          "x\APM\addons\vehicles\data\VTOL_01\VTOL_01_EXT03_black_CO.paa",
          "x\APM\addons\vehicles\data\VTOL_01\VTOL_01_EXT04_black_CO.paa"
        };
      };
  	};
  };
  class Helicopter_Base_H;
  class Heli_Transport_01_base_F: Helicopter_Base_H
  {
    class EventHandlers
    {
      fired = "";
      class APM_EventHandlers
  		{
  			init = "_this call ace_fastroping_fnc_equipFRIES";
  		};
    };
  };
  class RHS_UH60M_base;
  class RHS_UH60M_US_base: RHS_UH60M_base
  {
  	class textureSources;
  	class EventHandlers;
  };
  class RHS_UH60M: RHS_UH60M_US_base
  {
  	class EventHandlers: EventHandlers
  	{
  		class APM_EventHandlers
  		{
  			init = "_this call ace_fastroping_fnc_equipFRIES";
  		};
  	};
  };
  class Heli_Light_01_base_F;
  class Heli_Light_01_unarmed_base_F: Heli_Light_01_base_F
  {
  	ace_fastroping_enabled = 1;
  	ace_fastroping_friesAttachmentPoint[] = {0.583, 0.79, -0.01};
  	ace_fastroping_ropeOrigins[] = {[1.116, 0.79, -0.01],[-1.116, 0.79, -0.01]};
  };
  class Heli_Attack_02_base_F;
  class RHS_Mi24_base: Heli_Attack_02_base_F
  {
    ace_fastroping_enabled = 1;
  };
  class Heli_Light_02_base_F;
  class RHS_Mi8_base: Heli_Light_02_base_F
  {
    ace_fastroping_enabled = 1;
  };
};
