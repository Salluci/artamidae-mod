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
	class Turrets: Turrets
	{
		class CargoTurret_02;
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
		/*class Unarmed_Codriver_Turret_Hide //Uncomment this to enable the selection for the turret in the virtual garage.
		{
			displayName = "Hide commander turret";
			author = "LinkIsParking";
			source = "user";
			initPhase = 0;
			mass = -15;
			lockCargoAnimationPhase = 1;
			lockCargo[] = {};
			onPhaseChanged = "if ((_this select 1) == 1) then {"execute if turret hidden"} else {"execute if turret shown"};"; //1 means turret is hidden, 0 means it's shown
		};*/ //Uncomment this to enable the selection for the turret in the virtual garage.
	};
};
class LSV_01_unarmed_base_F: LSV_01_base_F
{
	class AnimationSources: AnimationSources
	{
		class Unarmed_Ammo_Hide
		{
			displayName = "Hide ammo boxes";
			author = "LinkIsParking";
			source = "user";
			initPhase = 0;
			mass = -15;
			lockCargoAnimationPhase = 0;
			lockCargo[] = {4, 5}; //Locks Right Seat 3 and Left Seat 3
			onPhaseChanged = "if ((_this select 1) == 0) then {[_this select 0] call apm_arsenal_fnc_initBoxResupply} else {[_this select 0, true] call ace_arsenal_fnc_removeBox}";
		};
	};
	/*class Turrets: Turrets //Uncomment to add commander turret to Unarmed Prowler
	{
		class CargoTurret_01: CargoTurret_02
		{
			gunnerCompartments = "Compartment5"; //Make sure only Right Seat 1 can enter turret. Might be unnecessary.
		};
		class CodRiverTurret: MainTurret
		{
			disableSoundAttenuation = 1;
			proxyType = "CPCargo";
			gunnerName = "Gunner (Right Seat 1)";
			gunnerLeftHandAnimName = "otocHlaven_2";
			gunnerRightHandAnimName = "otocHlaven_2";
			body = "CodRiverTurret";
			gun = "CodRiverGun";
			hasGunner = false; //Make sure turret can't be entered from outside vehicle.
			gunnerCompartments = "Compartment5"; //Make sure only Right Seat 1 can enter turret. Might be unnecessary.
			animationSourceBody = "CodRiverTurret";
			animationSourceGun = "CodRiverGun";
			weapons[] = {"MMG_02_vehicle"};
			magazines[] = {"130Rnd_338_Mag","130Rnd_338_Mag","130Rnd_338_Mag"};
			class TurnIn
			{
				limitsArrayTop[] = {[18.2467,-25.1915],[13.9927,25.8645]};
				limitsArrayBottom[] = {[-9.6644,-35.7248],[-9.8597,27.2035]};
			};
			class TurnOut: TurnIn
			{};
			soundServo[] = {"A3\sounds_f\dummysound",1e-006,1};
			gunnerAction = "frontGunner_lsv_01";
			gunBeg = "muzzle_2_beg";
			gunEnd = "muzzle_2_end";
			memoryPointGunnerOptics = "gunnerView_2";
			memoryPointsGetInGunner = "pos codriver";
			memoryPointsGetInGunnerDir = "pos codriver dir";
			commanding = -2;
			primaryGunner = 0;
			optics = 0;
			discreteDistance[] = {100,200,300,400,600,800,1000,1200,1500};
			discreteDistanceInitIndex = 2;
			turretInfoType = "RscOptics_Offroad_01";
			proxyIndex = 1;
			class ViewOptics: ViewOptics
			{
				minFov = 0.25;
				maxFov = 1.25;
				initFov = 0.75;
			};
			class ViewGunner: ViewGunner
			{};
		};
	};*/ //Uncomment to add commander turret to Unarmed Prowler
};
class B_LSV_01_unarmed_F;
class LSV_01_armed_base_F: LSV_01_base_F
{
	class Turrets;
};
class B_LSV_01_armed_F: LSV_01_armed_base_F
{
	class Turrets: Turrets
  {
    class TopTurret;
    class CodRiverTurret;
  };
};
class LSV_01_light_base_F: LSV_01_base_F
{
	class AnimationSources: AnimationSources
	{
		class Unarmed_Ammo_Hide
		{
			displayName = "Hide ammo boxes";
			author = "LinkIsParking";
			source = "user";
			initPhase = 0;
			mass = -15;
			lockCargoAnimationPhase = 0;
			lockCargo[] = {4, 5}; //Locks Right Seat 3 and Left Seat 3
			onPhaseChanged = "if ((_this select 1) == 0) then {[_this select 0] call apm_arsenal_fnc_initBoxResupply} else {[_this select 0, true] call ace_arsenal_fnc_removeBox}";
		};
	};
};
class B_CTRG_LSV_01_light_F: LSV_01_light_base_F
{
  displayName = "Polaris DAGOR (Light)";
};
class LSV_01_AT_base_F: LSV_01_base_F
{
	class Turrets;
};
class B_LSV_01_AT_F: LSV_01_AT_base_F
{
	class Turrets: Turrets
	{
		class CodRiverTurret;
		class TopTurret;
	};
};
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
class rhsusf_m1025_w: rhsusf_m998_w_4dr_fulltop
{
  class Turrets;
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
    class APM
    {
      author = "Crowmedic & SkunySpliff";
      displayName = "APM";
      textures[] =
      {
        "APM_Factions\data\hmmvv\m998_exterior_g_co.paa",
        "APM_Factions\data\hmmvv\m998_interior_w_co.paa",
        "APM_Factions\data\hmmvv\A2_parts_WD_co.paa",
        "APM_Factions\data\hmmvv\wheel_wranglermt_b_co.paa",
        "rhsusf_hmmwv\textures\m998_mainbody_co.paa",
        "APM_Factions\data\hmmvv\gratting_w_co.paa",
        "APM_Factions\data\hmmvv\tile_exmetal_co.paa",
        "APM_Factions\data\hmmvv\m1025_g_co.paa",
        ""
      };
      factions[] = {};
    };
    class Black
    {
      author = "LinkIsParking";
      displayName = "Black";
      textures[] =
      {
        "APM_Factions\data\hmmvv\a_exterior_black.paa",
        "APM_Factions\data\hmmvv\b_interior_black.paa",
        "APM_Factions\data\hmmvv\c_a2_black.paa",
        "APM_Factions\data\hmmvv\d_wheels_black.paa",
        "APM_Factions\data\hmmvv\e_mainbody_black.paa",
        "APM_Factions\data\hmmvv\f_gratting_black.paa",
        "APM_Factions\data\hmmvv\g_camo1_tile_black.paa",
        "APM_Factions\data\hmmvv\h_camo2_m1025_black.paa",
        ""
      };
      factions[] = {};
    };
  };
};
class rhsusf_m1025_APM: rhsusf_m1025_w
{
  scope = 1;
  editorPreview = "APM_Factions\previews\B_APM_HMMVV.jpg";
  hiddenSelectionsTextures[] =
  {
    "APM_Factions\data\hmmvv\m998_exterior_g_co.paa",
    "APM_Factions\data\hmmvv\m998_interior_w_co.paa",
    "APM_Factions\data\hmmvv\A2_parts_WD_co.paa",
    "APM_Factions\data\hmmvv\wheel_wranglermt_b_co.paa",
    "rhsusf_hmmwv\textures\m998_mainbody_co.paa",
    "APM_Factions\data\hmmvv\gratting_w_co.paa",
    "APM_Factions\data\hmmvv\tile_exmetal_co.paa",
    "APM_Factions\data\hmmvv\m1025_g_co.paa",
    ""
  };
  textureList[] = {APM,1};
};
class rhsusf_m1025_black: rhsusf_m1025_w
{
  scope = 1;
  editorPreview = "APM_Factions\previews\I_Mayhem_HMMWV.jpg";
  hiddenSelectionsTextures[] =
  {
    "APM_Factions\data\hmmvv\a_exterior_black.paa",
    "APM_Factions\data\hmmvv\b_interior_black.paa",
    "APM_Factions\data\hmmvv\c_a2_black.paa",
    "APM_Factions\data\hmmvv\d_wheels_black.paa",
    "APM_Factions\data\hmmvv\e_mainbody_black.paa",
    "APM_Factions\data\hmmvv\f_gratting_black.paa",
    "APM_Factions\data\hmmvv\g_camo1_tile_black.paa",
    "APM_Factions\data\hmmvv\h_camo2_m1025_black.paa",
    ""
  };
  textureList[] = {Black,1};
};
class rhsusf_m1025_w_m2: rhsusf_m1025_w
{
  class Turrets;
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
    class APM
    {
      author = "Crowmedic & SkunySpliff";
      displayName = "APM";
      textures[] =
      {
        "APM_Factions\data\hmmvv\m998_exterior_g_co.paa",
        "APM_Factions\data\hmmvv\m998_interior_w_co.paa",
        "APM_Factions\data\hmmvv\A2_parts_WD_co.paa",
        "APM_Factions\data\hmmvv\wheel_wranglermt_b_co.paa",
        "rhsusf_hmmwv\textures\m998_mainbody_co.paa",
        "APM_Factions\data\hmmvv\gratting_w_co.paa",
        "APM_Factions\data\hmmvv\tile_exmetal_co.paa",
        "APM_Factions\data\hmmvv\m1025_g_co.paa",
        "APM_Factions\data\hmmvv\mk64mount_w_co.paa"
      };
      factions[] = {};
    };
    class Black
    {
      author = "LinkIsParking";
      displayName = "Black";
      textures[] =
      {
        "APM_Factions\data\hmmvv\a_exterior_black.paa",
        "APM_Factions\data\hmmvv\b_interior_black.paa",
        "APM_Factions\data\hmmvv\c_a2_black.paa",
        "APM_Factions\data\hmmvv\d_wheels_black.paa",
        "APM_Factions\data\hmmvv\e_mainbody_black.paa",
        "APM_Factions\data\hmmvv\f_gratting_black.paa",
        "APM_Factions\data\hmmvv\g_camo1_tile_black.paa",
        "APM_Factions\data\hmmvv\h_camo2_m1025_black.paa",
        "APM_Factions\data\hmmvv\mk64mount_w_co.paa"
      };
      factions[] = {};
    };
  };
};
class rhsusf_m1025_APM_m2: rhsusf_m1025_w_m2
{
  scope = 1;
  editorPreview = "APM_Factions\previews\B_APM_HMMVV_M2.jpg";
  class Turrets: Turrets
  {
    class M2_Turret;
  };
  hiddenSelectionsTextures[] =
  {
    "APM_Factions\data\hmmvv\m998_exterior_g_co.paa",
    "APM_Factions\data\hmmvv\m998_interior_w_co.paa",
    "APM_Factions\data\hmmvv\A2_parts_WD_co.paa",
    "APM_Factions\data\hmmvv\wheel_wranglermt_b_co.paa",
    "rhsusf_hmmwv\textures\m998_mainbody_co.paa",
    "APM_Factions\data\hmmvv\gratting_w_co.paa",
    "APM_Factions\data\hmmvv\tile_exmetal_co.paa",
    "APM_Factions\data\hmmvv\m1025_g_co.paa",
    "APM_Factions\data\hmmvv\mk64mount_w_co.paa"
  };
  textureList[] = {APM,1};
};
class rhsusf_m1025_black_m2: rhsusf_m1025_w_m2
{
  scope = 1;
  editorPreview = "APM_Factions\previews\I_Mayhem_HMMWV_M2.jpg";
  hiddenSelectionsTextures[] =
  {
    "APM_Factions\data\hmmvv\a_exterior_black.paa",
    "APM_Factions\data\hmmvv\b_interior_black.paa",
    "APM_Factions\data\hmmvv\c_a2_black.paa",
    "APM_Factions\data\hmmvv\d_wheels_black.paa",
    "APM_Factions\data\hmmvv\e_mainbody_black.paa",
    "APM_Factions\data\hmmvv\f_gratting_black.paa",
    "APM_Factions\data\hmmvv\g_camo1_tile_black.paa",
    "APM_Factions\data\hmmvv\h_camo2_m1025_black.paa",
    "APM_Factions\data\hmmvv\mk64mount_w_co.paa"
  };
  textureList[] = {Black,1};
};
class rhsusf_m1025_w_mk19: rhsusf_m1025_w
{
  class Turrets;
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
    class APM
    {
      author = "Crowmedic & SkunySpliff";
      displayName = "APM";
      textures[] =
      {
        "APM_Factions\data\hmmvv\m998_exterior_g_co.paa",
        "APM_Factions\data\hmmvv\m998_interior_w_co.paa",
        "APM_Factions\data\hmmvv\A2_parts_WD_co.paa",
        "APM_Factions\data\hmmvv\wheel_wranglermt_b_co.paa",
        "rhsusf_hmmwv\textures\m998_mainbody_co.paa",
        "APM_Factions\data\hmmvv\gratting_w_co.paa",
        "APM_Factions\data\hmmvv\tile_exmetal_co.paa",
        "APM_Factions\data\hmmvv\m1025_g_co.paa",
        "APM_Factions\data\hmmvv\mk64mount_w_co.paa"
      };
      factions[] = {};
    };
    class Black
    {
      author = "LinkIsParking";
      displayName = "Black";
      textures[] =
      {
        "APM_Factions\data\hmmvv\a_exterior_black.paa",
        "APM_Factions\data\hmmvv\b_interior_black.paa",
        "APM_Factions\data\hmmvv\c_a2_black.paa",
        "APM_Factions\data\hmmvv\d_wheels_black.paa",
        "APM_Factions\data\hmmvv\e_mainbody_black.paa",
        "APM_Factions\data\hmmvv\f_gratting_black.paa",
        "APM_Factions\data\hmmvv\g_camo1_tile_black.paa",
        "APM_Factions\data\hmmvv\h_camo2_m1025_black.paa",
        "APM_Factions\data\hmmvv\mk64mount_w_co.paa"
      };
      factions[] = {};
    };
  };
};
class rhsusf_m1025_APM_mk19: rhsusf_m1025_w_mk19
{
  scope = 1;
  editorPreview = "APM_Factions\previews\B_APM_HMMVV_Mk19.jpg";
  class Turrets: Turrets
  {
    class M2_Turret;
  };
  hiddenSelectionsTextures[] =
  {
    "APM_Factions\data\hmmvv\m998_exterior_g_co.paa",
    "APM_Factions\data\hmmvv\m998_interior_w_co.paa",
    "APM_Factions\data\hmmvv\A2_parts_WD_co.paa",
    "APM_Factions\data\hmmvv\wheel_wranglermt_b_co.paa",
    "rhsusf_hmmwv\textures\m998_mainbody_co.paa",
    "APM_Factions\data\hmmvv\gratting_w_co.paa",
    "APM_Factions\data\hmmvv\tile_exmetal_co.paa",
    "APM_Factions\data\hmmvv\m1025_g_co.paa",
    "APM_Factions\data\hmmvv\mk64mount_w_co.paa"
  };
  textureList[] = {APM,1};
};
class rhsusf_m1025_black_mk19: rhsusf_m1025_w_mk19
{
  scope = 1;
  editorPreview = "APM_Factions\previews\I_Mayhem_HMMWV_MK19.jpg";
  hiddenSelectionsTextures[] =
  {
    "APM_Factions\data\hmmvv\a_exterior_black.paa",
    "APM_Factions\data\hmmvv\b_interior_black.paa",
    "APM_Factions\data\hmmvv\c_a2_black.paa",
    "APM_Factions\data\hmmvv\d_wheels_black.paa",
    "APM_Factions\data\hmmvv\e_mainbody_black.paa",
    "APM_Factions\data\hmmvv\f_gratting_black.paa",
    "APM_Factions\data\hmmvv\g_camo1_tile_black.paa",
    "APM_Factions\data\hmmvv\h_camo2_m1025_black.paa",
    "APM_Factions\data\hmmvv\mk64mount_w_co.paa"
  };
  textureList[] = {Black,1};
};
class B_Truck_01_box_F;
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
class B_APC_Wheeled_01_cannon_F;
class AFV_Wheeled_01_base_F: Wheeled_APC_F
{
  class Turrets;
  class textureSources
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
		    "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		    "APM_Vehicles\data\cage_charcoal.paa"
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
		    "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		    "APM_Vehicles\data\cage_charcoal.paa"
      };
      factions[] = {};
    };
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
class B_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F
{
  class Turrets: Turrets
	{
		class MainTurret;
	};
};
class B_AFV_Wheeled_01_up_cannon_F: AFV_Wheeled_01_up_base_F
{
	class Turrets: Turrets
	{
		class MainTurret;
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
				"APM_Factions\data\apc_tracked_03\apc_tracked_03_ext_charcoal_co.paa",
				"APM_Factions\data\apc_tracked_03\apc_tracked_03_ext2_charcoal_co.paa",
				"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
				"A3\armor_f\data\cage_aaf_co.paa"
			};
			factions[] = {};
		};
		class OliveDrab
		{
			displayName = "Olive Drab";
			author = "LinkIsParking";
			textures[] =
			{
				"APM_Factions\data\apc_tracked_03\apc_tracked_03_ext_green_co.paa",
				"APM_Factions\data\apc_tracked_03\apc_tracked_03_ext2_green_co.paa",
				"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
				"A3\armor_f\data\cage_aaf_co.paa"
			};
			factions[] = {};
		};
		class Tan
		{
			displayName = "Tan";
			author = "LinkIsParking";
			textures[] =
			{
				"APM_Factions\data\apc_tracked_03\apc_tracked_03_ext_tan_co.paa",
				"APM_Factions\data\apc_tracked_03\apc_tracked_03_ext2_tan_co.paa",
				"A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa",
				"A3\armor_f\data\cage_aaf_co.paa"
			};
			factions[] = {};
		};
	};
};
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
				"APM_Factions\data\melb\melb_ext_co.paa",
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
  };
};
class RHS_MELB_APM_MH6M: RHS_MELB_MH6M
{
	scope = 1;
	hiddenSelectionsTextures[] =
	{
		"APM_Factions\data\melb\melb_ext_co.paa",
		"rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
	};
};
class RHS_MELB_AH6M: RHS_MELB_Base
{
  class Turrets: Turrets
  {
    class CopilotTurret;
  };
};
class RHS_MELB_APM_AH6M: RHS_MELB_AH6M
{
	scope = 1;
	hiddenSelectionsTextures[] =
	{
		"APM_Factions\data\melb\melb_ext_co.paa",
		"rhsusf\addons\rhsusf_melb\data\decals\SN\blank_ca.paa"
	};
};
class RHS_UH60M_base;
class RHS_UH60M_US_base: RHS_UH60M_base
{
  class Turrets;
	class textureSources;
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
        "APM_Factions\Data\UH-60\uh60m_fuselage_co.paa",
        "APM_Factions\Data\UH-60\uh60m_engine_co.paa",
        "APM_Factions\Data\UH-60\default_co.paa",
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
  };
};
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
        "APM_Factions\data\ch-47\ch47_ext_1_co.paa",
        "APM_Factions\data\ch-47\ch47_ext_2_co.paa",
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
        "APM_Factions\data\ch-53\ch53_1_co.paa",
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
class MBT_02_base_F: Tank_F
{
	class textureSources
	{
		class APM
		{
			displayName = "APM";
			author = "Crowmedic & SkunySpliff";
			textures[] =
			{
				"APM_Factions\data\MBT_02k\mbt_02_body_co.paa",
				"APM_Factions\data\MBT_02k\mbt_02_turret_co.paa",
				"APM_Factions\data\MBT_02k\mbt_02_turret_co.paa",
				"A3\Armor_F\Data\camonet_CSAT_HEX_Desert_CO.paa"
			};
			factions[] = {};
		};
	};
};
class O_MBT_02_cannon_F;
class MBT_03_base_F: Tank_F
{
	class textureSources
	{
		class APM
    {
      displayName = "APM";
      author = "Crowmedic & SkunySpliff";
      textures[] =
      {
        "APM_Factions\data\MBT_03\mbt_03_ext01_co.paa",
        "APM_Factions\data\MBT_03\mbt_03_ext02_co.paa",
        "APM_Factions\data\MBT_03\mbt_03_rcws_co.paa",
        "A3\Armor_F\Data\camonet_AAF_Digi_Green_CO.paa"
      };
      factions[] = {};
    };
	};
};
class I_MBT_03_cannon_F;
class MBT_04_base_F: Tank_F
{
	class textureSources
	{
		class APM
		{
			displayName = "APM";
			author = "Crowmedic & SkunySpliff";
			textures[] =
			{
				"APM_Factions\data\MBT_04\MBT_04_exterior_green_hex_1_CO.paa",
				"APM_Factions\data\MBT_04\MBT_04_exterior_green_hex_2_CO.paa",
				"a3\armor_f\Data\camonet_CSAT_HEX_Desert_CO.paa"
			};
			factions[] = {};
		};
	};
};
class O_MBT_04_cannon_F;
class O_MBT_04_command_F;
class O_T_VTOL_02_infantry_dynamicLoadout_F;
