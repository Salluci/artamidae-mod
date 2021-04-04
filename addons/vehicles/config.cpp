#include "script_component.hpp"
class CfgPatches
{
  class ADDON
	{
    units[] = {
      "rhsusf_m1025_black",
      "rhsusf_m1025_black_m2",
      "rhsusf_m1025_black_mk19",
      "B_APC_WHeeled_01_cannon_charcoal_F",
      "B_AFV_Wheeled_01_cannon_charcoal_F",
      "B_AFV_Wheeled_01_up_cannon_charcoal_F",
      "I_APC_Wheeled_03_cannon_charcoal_F",
      "I_APC_Wheeled_03_cannon_olive_F",
      "I_APC_Wheeled_03_cannon_tan_F",
      "I_APC_tracked_03_cannon_charcoal_F",
      "I_APC_tracked_03_cannon_olive_F",
      "I_APC_tracked_03_cannon_tan_F",
      "I_MBT_03_cannon_charcoal_F",
      "I_MBT_03_cannon_olive_F",
      "I_MBT_03_cannon_tan_F",
      "O_Heli_Attack_02_dynamicloadout_ghex_F"
    };
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[]=
		{
			"A3_Data_F_Oldman_Loadorder"
		};
		name="APM Vehicle Retextures";
		author="LinkIsParking";
    VERSION_CONFIG;
	};
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
          "\x\APM\addons\vehicles\data\hmmwv\a_exterior_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\b_interior_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\c_a2_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\d_wheels_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\e_mainbody_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\f_gratting_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\g_camo1_tile_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\h_camo2_m1025_black.paa",
          ""
        };
        factions[] = {};
      };
    };
  };
  class rhsusf_m1025_black: rhsusf_m1025_w
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\vehicles\data\hmmwv\a_exterior_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\b_interior_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\c_a2_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\d_wheels_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\e_mainbody_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\f_gratting_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\g_camo1_tile_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\h_camo2_m1025_black.paa",
      ""
    };
    textureList[] = {"Black", 1};
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
          "\x\APM\addons\vehicles\data\hmmwv\a_exterior_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\b_interior_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\c_a2_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\d_wheels_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\e_mainbody_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\f_gratting_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\g_camo1_tile_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\h_camo2_m1025_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\mk64mount_w_co.paa"
        };
        factions[] = {};
      };
    };
  };
  class rhsusf_m1025_black_m2: rhsusf_m1025_w_m2
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\vehicles\data\hmmwv\a_exterior_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\b_interior_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\c_a2_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\d_wheels_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\e_mainbody_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\f_gratting_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\g_camo1_tile_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\h_camo2_m1025_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\mk64mount_w_co.paa"
    };
    textureList[] = {"Black", 1};
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
          "\x\APM\addons\vehicles\data\hmmwv\a_exterior_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\b_interior_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\c_a2_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\d_wheels_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\e_mainbody_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\f_gratting_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\g_camo1_tile_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\h_camo2_m1025_black.paa",
          "\x\APM\addons\vehicles\data\hmmwv\mk64mount_w_co.paa"
        };
        factions[] = {};
      };
    };
  };
  class rhsusf_m1025_black_mk19: rhsusf_m1025_w_mk19
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\vehicles\data\hmmwv\a_exterior_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\b_interior_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\c_a2_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\d_wheels_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\e_mainbody_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\f_gratting_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\g_camo1_tile_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\h_camo2_m1025_black.paa",
      "\x\APM\addons\vehicles\data\hmmwv\mk64mount_w_co.paa"
    };
    textureList[] = {"Black", 1};
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
        factions[] = {};
        textures[] =
        {
          "\x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_base_charcoal_co.paa",
          "\x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_adds_charcoal_co.paa",
          "\x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_tows_charcoal_co.paa",
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
          "\x\APM\addons\Vehicles\data\cage_charcoal.paa"
        };
      };
    };
  };
  class B_APC_Wheeled_01_cannon_F;
  class B_APC_WHeeled_01_cannon_charcoal_F: B_APC_Wheeled_01_cannon_F
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_base_charcoal_co.paa",
      "\x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_adds_charcoal_co.paa",
      "\x\APM\addons\Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_tows_charcoal_co.paa",
      "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
      "\x\APM\addons\Vehicles\data\cage_charcoal.paa"
    };
    textureList[] = {"Charcoal",1};
   };
  class AFV_Wheeled_01_base_F: Wheeled_APC_F
  {
    class TextureSources
    {
      class Green
      {
        factions[] = {};
      };
      class Sand
      {
        factions[] = {};
      };
      class Charcoal
      {
        displayName = "Charcoal";
        author = "LinkIsParking";
        textures[] =
        {
          "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_charcoal_CO.paa",
          "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_charcoal_CO.paa",
          "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_wheel_CO.paa",
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
          "\x\APM\addons\Vehicles\data\afv_wheeled_01\cage_charcoal.paa"
        };
        factions[] = {};
      };
    };
  };
  class B_AFV_Wheeled_01_cannon_F;
  class B_AFV_Wheeled_01_cannon_charcoal_F: B_AFV_Wheeled_01_cannon_F
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_charcoal_CO.paa",
      "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_charcoal_CO.paa",
      "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_wheel_CO.paa",
      "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
      "\x\APM\addons\Vehicles\data\afv_wheeled_01\cage_charcoal.paa"
    };
    textureList[] = {"Charcoal",1};
  };
  class AFV_Wheeled_01_up_base_F: AFV_Wheeled_01_base_F
  {
    class TextureSources: TextureSources
    {
      class Charcoal: Charcoal
      {
        textures[] =
        {
          "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_Charcoal_CO.paa",
          "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_Charcoal_CO.paa",
          "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_wheel_CO.paa",
          "\x\APM\addons\Vehicles\data\afv_wheeled_01\cage_Charcoal.paa",
          "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_commander_tow_Charcoal_CO.paa",
          "a3\Armor_F\Data\camonet_NATO_green_CO.paa",
          "\x\APM\addons\Vehicles\data\afv_wheeled_01\cage_Charcoal.paa"
        };
      };
    };
  };
  class B_AFV_Wheeled_01_up_cannon_F;
  class B_AFV_Wheeled_01_up_cannon_charcoal_F: B_AFV_Wheeled_01_up_cannon_F
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_Charcoal_CO.paa",
      "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_Charcoal_CO.paa",
      "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_wheeled_01_wheel_CO.paa",
      "\x\APM\addons\Vehicles\data\afv_wheeled_01\cage_Charcoal.paa",
      "\x\APM\addons\Vehicles\data\afv_wheeled_01\afv_commander_tow_Charcoal_CO.paa",
      "a3\Armor_F\Data\camonet_NATO_green_CO.paa",
      "\x\APM\addons\Vehicles\data\afv_wheeled_01\cage_Charcoal.paa"
    };
    textureList[] = {"Charcoal",1};
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
  				"\x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_charcoal_co.paa",
  				"\x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext2_charcoal_co.paa",
  				"\x\APM\addons\Vehicles\data\apc_wheeled_03\RCWS30_charcoal_co.paa",
  				"\x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_alpha_charcoal_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
  				"\x\APM\addons\Vehicles\data\cage_charcoal.paa"
  			};
  			factions[] = {};
  		};
      class Tan
      {
        displayName = "Sand";
        author = "AveryTheKitty";
        factions[] = {};
        textures[] =
        {
          "\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_CO.paa",
          "\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_CO.paa",
          "\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_CO.paa",
          "\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_CO.paa",
          "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
          "\A3\Armor_F\Data\cage_sand_CO.paa"
        };
      };
      class Olive
      {
        displayName = "Olive";
        author = "AveryTheKitty";
        factions[] = {};
        textures[] =
        {
          "\x\APM\addons\Vehicles\data\APC_Wheeled_03\APC_Wheeled_03_Ext_olive_CO.paa",
          "\x\APM\addons\Vehicles\data\APC_Wheeled_03\APC_Wheeled_03_Ext2_olive_CO.paa",
          "\x\APM\addons\Vehicles\data\APC_Wheeled_03\RCWS30_olive_CO.paa",
          "\x\APM\addons\Vehicles\data\APC_Wheeled_03\APC_Wheeled_03_Ext_alpha_olive_CO.paa",
          "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
          "\A3\Armor_F\Data\cage_olive_CO.paa"
        };
      };
  	};
  };
  class I_APC_Wheeled_03_cannon_F;
  class I_APC_Wheeled_03_cannon_charcoal_F: I_APC_Wheeled_03_cannon_F
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_charcoal_co.paa",
      "\x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext2_charcoal_co.paa",
      "\x\APM\addons\Vehicles\data\apc_wheeled_03\RCWS30_charcoal_co.paa",
      "\x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_alpha_charcoal_co.paa",
      "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
      "\x\APM\addons\Vehicles\data\cage_charcoal.paa"
    };
    textureList[] = {"Charcoal",1};
  };
  class I_APC_Wheeled_03_cannon_olive_F: I_APC_Wheeled_03_cannon_F
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\Vehicles\data\APC_Wheeled_03\APC_Wheeled_03_Ext_olive_CO.paa",
      "\x\APM\addons\Vehicles\data\APC_Wheeled_03\APC_Wheeled_03_Ext2_olive_CO.paa",
      "\x\APM\addons\Vehicles\data\APC_Wheeled_03\RCWS30_olive_CO.paa",
      "\x\APM\addons\Vehicles\data\APC_Wheeled_03\APC_Wheeled_03_Ext_alpha_olive_CO.paa",
      "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa",
      "\A3\Armor_F\Data\cage_olive_CO.paa"
    };
    textureList[] = {"Olive",1};
  };
  class I_APC_Wheeled_03_cannon_tan_F: I_APC_Wheeled_03_cannon_F
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_CO.paa",
      "\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext2_CO.paa",
      "\A3\Armor_F_Gamma\APC_Wheeled_03\Data\RCWS30_CO.paa",
      "\A3\Armor_F_Gamma\APC_Wheeled_03\Data\APC_Wheeled_03_Ext_alpha_CO.paa",
      "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
      "\A3\Armor_F\Data\cage_sand_CO.paa"
    };
    textureList[] = {"Tan",1};
  };
  class Tank_F;
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
  				"\x\APM\addons\Vehicles\data\apc_tracked_03\apc_tracked_03_ext_charcoal_co.paa",
  				"\x\APM\addons\Vehicles\data\apc_tracked_03\apc_tracked_03_ext2_charcoal_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
  				"\x\APM\addons\Vehicles\data\cage_charcoal.paa"
  			};
  			factions[] = {};
  		};
  		class OliveGreen
  		{
  			displayName = "Olive";
  			author = "AveryTheKitty";
  			textures[] =
        {
          "\x\APM\addons\Vehicles\data\APC_Tracked_03\APC_Tracked_03_Ext_olive_CO.paa",
          "\x\APM\addons\Vehicles\data\APC_Tracked_03\APC_Tracked_03_Ext2_olive_CO.paa",
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
          "\A3\Armor_F\Data\cage_olive_CO.paa"
        };
  			factions[] = {};
  		};
  		class Tan
  		{
  			displayName = "Sand";
  			author = "AveryTheKitty";
  			textures[] =
        {
          "\x\APM\addons\Vehicles\data\APC_Tracked_03\APC_Tracked_03_Ext_CO.paa",
          "\x\APM\addons\Vehicles\data\APC_Tracked_03\APC_Tracked_03_Ext2_CO.paa",
          "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
          "\A3\Armor_F\Data\cage_sand_CO.paa"
        };
  			factions[] = {};
  		};
  	};
  };
  class I_APC_tracked_03_cannon_F;
  class I_APC_tracked_03_cannon_charcoal_F: I_APC_tracked_03_cannon_F
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\Vehicles\data\apc_tracked_03\apc_tracked_03_ext_charcoal_co.paa",
      "\x\APM\addons\Vehicles\data\apc_tracked_03\apc_tracked_03_ext2_charcoal_co.paa",
      "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
      "\x\APM\addons\Vehicles\data\cage_charcoal.paa"
    };
    textureList[] = {"Charcoal",1};
  };
  class I_APC_tracked_03_cannon_olive_F: I_APC_tracked_03_cannon_F
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\Vehicles\data\APC_Tracked_03\APC_Tracked_03_Ext_olive_CO.paa",
      "\x\APM\addons\Vehicles\data\APC_Tracked_03\APC_Tracked_03_Ext2_olive_CO.paa",
      "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
      "\A3\Armor_F\Data\cage_olive_CO.paa"
    };
    textureList[] = {"OliveGreen",1};
  };
  class I_APC_tracked_03_cannon_tan_F: I_APC_tracked_03_cannon_F
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\Vehicles\data\APC_Tracked_03\APC_Tracked_03_Ext_CO.paa",
      "\x\APM\addons\Vehicles\data\APC_Tracked_03\APC_Tracked_03_Ext2_CO.paa",
      "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa",
      "\A3\Armor_F\Data\cage_sand_CO.paa"
    };
    textureList[] = {"Tan",1};
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
  	class textureSources
  	{
  		class Charcoal
      {
        displayName = "Charcoal";
        author = "LinkIsParking";
        textures[] =
        {
          "\x\APM\addons\vehicles\data\MBT_03\mbt_03_ext01_charcoal_co.paa",
          "\x\APM\addons\vehicles\data\MBT_03\mbt_03_ext02_charcoal_co.paa",
          "\x\APM\addons\vehicles\data\MBT_03\mbt_03_rcws_grey_co.paa",
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
        };
        factions[] = {};
      };
      class Green
      {
        displayName = "Olive";
        author = "AveryTheKitty";
        textures[] =
        {
          "\x\APM\addons\Vehicles\data\MBT_03\MBT_03_ext01_olive_CO.paa",
          "\x\APM\addons\Vehicles\data\MBT_03\MBT_03_ext02_olive_CO.paa",
          "\x\APM\addons\Vehicles\data\MBT_03\MBT_03_rcws_olive_CO.paa",
          "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
        };
        factions[] = {};
      };
      class Tan
      {
        displayName = "Sand";
        author = "LinkIsParking";
        textures[] =
        {
          "\x\APM\addons\Vehicles\data\MBT_03\MBT_03_ext01_CO.paa",
          "\x\APM\addons\Vehicles\data\MBT_03\MBT_03_ext02_CO.paa",
          "\x\APM\addons\Vehicles\data\MBT_03\MBT_03_rcws_CO.paa",
          "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
        };
        factions[] = {};
      };
  	};
  };
  class I_MBT_03_cannon_F;
  class I_MBT_03_cannon_tan_F: I_MBT_03_cannon_F
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\Vehicles\data\MBT_03\MBT_03_ext01_CO.paa",
      "\x\APM\addons\Vehicles\data\MBT_03\MBT_03_ext02_CO.paa",
      "\x\APM\addons\Vehicles\data\MBT_03\MBT_03_rcws_CO.paa",
      "\A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"
    };
    textureList[] = {"Tan", 1};
  };
  class I_MBT_03_cannon_charcoal_F: I_MBT_03_cannon_F
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      x\APM\addons\vehicles\data\MBT_03\mbt_03_ext01_charcoal_co.paa",
      "\x\APM\addons\vehicles\data\MBT_03\mbt_03_ext02_charcoal_co.paa",
      "\x\APM\addons\vehicles\data\MBT_03\mbt_03_rcws_grey_co.paa",
      "a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
    };
    textureList[] = {"Charcoal",1};
  };
  class I_MBT_03_cannon_olive_F: I_MBT_03_cannon_F
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\Vehicles\data\MBT_03\MBT_03_ext01_olive_CO.paa",
      "\x\APM\addons\Vehicles\data\MBT_03\MBT_03_ext02_olive_CO.paa",
      "\x\APM\addons\Vehicles\data\MBT_03\MBT_03_rcws_olive_CO.paa",
      "\A3\Armor_F\Data\camonet_NATO_Green_CO.paa"
    };
    textureList[] = {"Green",1};
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
          "\x\APM\addons\vehicles\data\VTOL_01\VTOL_01_EXT01_black_CO.paa",
          "\x\APM\addons\vehicles\data\VTOL_01\VTOL_01_EXT02_black_CO.paa",
          "\x\APM\addons\vehicles\data\VTOL_01\VTOL_01_EXT03_black_CO.paa",
          "\x\APM\addons\vehicles\data\VTOL_01\VTOL_01_EXT04_black_CO.paa"
        };
      };
  	};
  };
  class Helicopter_Base_H;
  class Helicopter_Base_F;
  class Heli_Transport_01_base_F;
  class RHS_UH60M_base;
  class RHS_UH60M_US_base;
  class RHS_UH60M;
  class Heli_Light_01_base_F;
  class Heli_Light_01_unarmed_base_F;
  class Heli_Attack_02_base_F: Helicopter_Base_F
  {
    class TextureSources
    {
      class Black
      {
        factions[] = {};
      };
      class Opfor
      {
        factions[] = {};
      };
      class GreenHex
      {
        displayName = "Green Hex";
        author = "AveryTheKitty";
        factions[] = {};
        textures[] =
        {
          "\x\APM\addons\vehicles\data\Heli_Attack_02\Heli_Attack_02_body1_ghex_CO.paa",
          "\x\APM\addons\vehicles\data\Heli_Attack_02\Heli_Attack_02_body2_ghex_CO.paa"
        };
      };
    };
  };
  class O_Heli_Attack_02_dynamicloadout_F;
  class O_Heli_Attack_02_dynamicloadout_ghex_F: O_Heli_Attack_02_dynamicloadout_F
  {
    scope = 1;
    hiddenSelectionsTextures[] =
    {
      "\x\APM\addons\vehicles\data\Heli_Attack_02\Heli_Attack_02_body1_ghex_CO.paa",
      "\x\APM\addons\vehicles\data\Heli_Attack_02\Heli_Attack_02_body2_ghex_CO.paa"
    };
    textureList[] = {"GreenHex",1};
  };
  class RHS_Mi24_base;
  class Heli_Light_02_base_F;
  class RHS_Mi8_base;
};
