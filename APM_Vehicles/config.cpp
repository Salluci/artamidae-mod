class cfgPatches
{
  class GSHT_Vehicles
  {
    weapons[] = {};
    units[] = {};
    requiredVersion = 1.0;
    requiredAddons[]=
		{
			"A3_Data_F_Oldman_Loadorder",
      "APM_Factions"
    };
    name = "GHST Vehicle Retextures";
    author = "LinkIsParking";
  };
};
class CfgVehicles
{
  class Wheeled_APC_F;
  class APC_Wheeled_01_Base_F: Wheeled_APC_F
  {
    class textureSources
    {
      class Sand
      {
        Vehicles[] = {};
      };
      class Olive
      {
        Vehicles[] = {};
      };
      class Charcoal
      {
        author = "LinkIsParking";
        displayName = "Charcoal";
        textures[] =
        {
          "APM_Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_base_charcoal_co.paa",
          "APM_Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_adds_charcoal_co.paa",
          "APM_Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_tows_charcoal_co.paa",
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
          "APM_Vehicles\data\cage_charcoal.paa"
        };
      };
  		class Tan
      {
        author = "LinkIsParking";
        displayName = "Tan";
        textures[] =
        {
          "APM_Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_base_Tan_co.paa",
          "APM_Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_adds_Tan_co.paa",
          "APM_Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_tows_Tan_co.paa",
          "a3\Armor_F\Data\camonet_NATO_desert_CO.paa",
          "APM_Vehicles\data\cage_tan.paa"
        };
      };
  		class OliveGreen
      {
        author = "LinkIsParking";
        displayName = "Olive Green";
        textures[] =
        {
          "APM_Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_base_Green_co.paa",
          "APM_Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_adds_Green_co.paa",
          "APM_Vehicles\data\APC_Wheeled_01\APC_Wheeled_01_tows_Green_co.paa",
          "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
          "APM_Vehicles\data\cage_green.paa"
        };
      };
    };
  };
  class AFV_Wheeled_01_base_F: Wheeled_Apc_F
  {
    class TextureSources
    {
      class Sand
      {
        factions[] = {};
      };
      class Green
      {
        factions[] = {};
      };
    };
    class Charcoal
    {
      displayName = "Charcoal";
      author = "LinkIsParking";
      textures[] =
      {
				"APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_charcoal_CO.paa",
		    "APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_charcoal_CO.paa",
		    "APM_Factions\data\rooikat\afv_wheeled_01_wheel_CO.paa",
		    "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		    "APM_Vehicles\data\cage_charcoal.paa"
      };
      factions[] = {};
    };
    class Tan
    {
      displayName = "Tan";
      author = "LinkIsParking";
      textures[] =
      {
				"APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_tan_CO.paa",
		    "APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_tan_CO.paa",
		    "APM_Factions\data\rooikat\afv_wheeled_01_wheel_CO.paa",
		    "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		    "APM_Vehicles\data\cage_tan.paa"
      };
      factions[] = {};
    };
    class OliveGreen
    {
      displayName = "Olive Green";
      author = "LinkIsParking";
      textures[] =
      {
				"APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_green_CO.paa",
		    "APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_green_CO.paa",
		    "APM_Factions\data\rooikat\afv_wheeled_01_wheel_CO.paa",
		    "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		    "APM_Vehicles\data\cage_green.paa"
      };
      factions[] = {};
    };
  };
  class AFV_Wheeled_01_up_base_F: AFV_Wheeled_01_base_F
  {
    class textureSources: textureSources
    {
      class Sand
      {
        factions[] = {};
      };
      class Green
      {
        factions[] = {};
      };
      class Charcoal
      {
        displayName = "Charcoal";
        author = "LinkIsParking";
        textures[] =
        {
          "APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_charcoal_CO.paa",
  		    "APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_charcoal_CO.paa",
  		    "APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_wheel_CO.paa",
  				"APM_Vehicles\data\cage_charcoal.paa",
  		    "APM_Vehicles\data\afv_wheeled_01\afv_commander_tow_charcoal_CO.paa",
  				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
  		    "APM_Vehicles\data\cage_charcoal.paa"
        };
      factions[] = {};
      };
      class Tan
      {
        displayName = "Tan";
        author = "LinkIsParking";
        textures[] =
        {
          "APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_tan_CO.paa",
  		    "APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_tan_CO.paa",
  		    "APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_wheel_CO.paa",
  				"APM_Vehicles\data\cage_tan.paa",
  		    "APM_Vehicles\data\afv_wheeled_01\afv_commander_tow_tan_CO.paa",
  				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
  		    "APM_Vehicles\data\cage_tan.paa"
        };
        factions[] = {};
      };
      class OliveGreen
      {
        displayName = "Olive Green";
        author = "LinkIsParking";
        textures[] =
        {
          "APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext1_green_CO.paa",
  		    "APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_ext2_green_CO.paa",
  		    "APM_Vehicles\data\afv_wheeled_01\afv_wheeled_01_wheel_CO.paa",
  				"APM_Vehicles\data\cage_green.paa",
  		    "APM_Vehicles\data\afv_wheeled_01\afv_commander_tow_green_CO.paa",
  				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
  		    "APM_Vehicles\data\cage_green.paa"
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
  				"APM_Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_charcoal_co.paa",
  				"APM_Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext2_charcoal_co.paa",
  				"APM_Vehicles\data\RCWS30_charcoal_co.paa",
  				"APM_Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_alpha_charcoal_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
  				"APM_Vehicles\data\cage_charcoal.paa"
  			};
  			Vehicles[] = {};
  		};
  		class OliveGreen
  		{
  			displayName = "Olive Green";
  			author = "LinkIsParking";
  			textures[] =
  			{
  				"APM_Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_Green_co.paa",
  				"APM_Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext2_Green_co.paa",
  				"APM_Vehicles\data\RCWS30_green_co.paa",
  				"APM_Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_alpha_Green_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
  				"APM_Vehicles\data\cage_green.paa"
  			};
  			Vehicles[] = {};
  		};
  		class Tan
  		{
  			displayName = "Tan";
  			author = "LinkIsParking";
  			textures[] =
  			{
  				"APM_Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_tan_co.paa",
  				"APM_Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext2_tan_co.paa",
  				"APM_Vehicles\data\RCWS30_tan_co.paa",
  				"APM_Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_alpha_tan_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_desert_CO.paa",
  				"APM_Vehicles\data\cage_tan.paa"
  			};
  			Vehicles[] = {};
  		};
  	};
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
  				"APM_Vehicles\data\apc_tracked_03\apc_tracked_03_ext_charcoal_co.paa",
  				"APM_Vehicles\data\apc_tracked_03\apc_tracked_03_ext2_charcoal_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
  				"APM_Vehicles\data\cage_charcoal.paa"
  			};
  			Vehicles[] = {};
  		};
  		class OliveGreen
  		{
  			displayName = "Olive Green";
  			author = "LinkIsParking";
  			textures[] =
  			{
  				"APM_Vehicles\data\apc_tracked_03\apc_tracked_03_ext_green_co.paa",
  				"APM_Vehicles\data\apc_tracked_03\apc_tracked_03_ext2_green_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
  				"APM_Vehicles\data\cage_green.paa"
  			};
  			Vehicles[] = {};
  		};
  		class Tan
  		{
  			displayName = "Tan";
  			author = "LinkIsParking";
  			textures[] =
  			{
  				"APM_Vehicles\data\apc_tracked_03\apc_tracked_03_ext_tan_co.paa",
  				"APM_Vehicles\data\apc_tracked_03\apc_tracked_03_ext2_tan_co.paa",
  				"a3\Armor_F\Data\camonet_NATO_desert_CO.paa",
  				"APM_Vehicles\data\cage_tan.paa"
  			};
  			Vehicles[] = {};
  		};
  	};
  };
};
