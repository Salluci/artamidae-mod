#include "script_component.hpp"
class CfgPatches
{
	class ADDON
	{
		units[]=
		{
			"APM_large_box",
			"APM_large_crate",
			"APM_moduleAC130",
			"APM_moduleAddAPMArsenal",
			"APM_moduleAddResupplyArsenal",
			"APM_moduleDebugMedical"
		};
		weapons[]={};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[]=
		{
			"apm_main"
		};
		author="LinkIsParking";
		name="APM Scripting & Misc";
		VERSION_CONFIG;
	};
	class APM_boxMod
	{
		addonRootClass="apm_misc";
		name="APM Scripting & Misc";
		requiredAddons[] ={};
		units[]={};
		weapons[]={};
		VERSION_CONFIG;
	};
};
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
#include "CfgMoves.hpp"
#include "ace_medical_treatment_actions.hpp"

class CfgInventoryGlobalVariable {
    maxSoldierLoad=9999999999; //For convenience's sake.
};

class CfgBrains {
  class DefaultSoldierBrain {
    class Components {
      class AIBrainAimingErrorComponent {
        maxAngularErrorTurrets = 0.15;  // half of the error cone in radians, used for turrets
      };
    };
  };
};

class Mode_SemiAuto;

class cfgFactionClasses {
	class APM_Modules {
		displayName = "APM Modules";
		priority = 2;
		side = 7;
	};
};

class cfgWeapons
{
	class ItemCore;
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class InventoryItem_Base_F;
	class UniformItem: InventoryItem_Base_F
	{
		type=801;
		uniformType="Neopren";
	};
	class Uniform_Base: ItemCore
	{
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
		};
	};
	class U_BasicBody: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
		};
	};
	class U_BasicBody_Swim: Uniform_Base
	{
		class ItemInfo: UniformItem
		{
			uniformType="Neopren";
		};
	};
	class FirstAidKit: ItemCore
	{
		scope = 1;
		scopeArsenal = 0;
	};
	class Medikit: ItemCore
	{
		scope = 1;
		scopeArsenal = 0;
	};
	#include "ACE_Weight.hpp"
	#include "UMI.hpp"
	#include "AI.hpp"

	class InventoryFlashLightItem_Base_F;
	class acc_flashlight: ItemCore
	{
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
			 color[]={600,750,900};
			 ambient[]={10,7.5,5};
			 position="flash dir";
			 direction="flash";
			 size=1;
			 innerAngle=24;
			 outerAngle=30;
			 coneFadeCoef=3;
			 intensity=350;
			 useFlare=1;
			 dayLight=1;
			 FlareSize=0.69999999;
			 flareMaxDistance=250;
			 onlyInNvg=0;
			 scale[]={0};
			 class Attenuation
			 {
			  start=40;
			  constant=80;
			  linear=50;
			  quadratic=12;
			  hardLimitStart=140;
			  hardLimitEnd=180;
			 };
			};
		};
	};
	class acc_flashlight_pistol: ItemCore
	{
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
			 color[]={600,750,900};
			 ambient[]={10,7.5,5};
			 position="flash dir";
			 direction="flash";
			 size=1;
			 innerAngle=24;
			 outerAngle=30;
			 coneFadeCoef=3;
			 intensity=350;
			 useFlare=1;
			 dayLight=1;
			 FlareSize=0.69999999;
			 flareMaxDistance=250;
			 onlyInNvg=0;
			 scale[]={0};
			 class Attenuation
			 {
			  start=40;
			  constant=80;
			  linear=50;
			  quadratic=12;
			  hardLimitStart=140;
			  hardLimitEnd=180;
			 };
			};
		};
	};
	class Pistol_Base_F;
	class ACE_Flashlight_Maglite_ML300L: Pistol_Base_F
	{
		class FlashLight
		{
		 color[]={600,750,900};
		 ambient[]={10,7.5,5};
		 position="flash dir";
		 direction="flash";
		 size=1;
		 innerAngle=24;
		 outerAngle=30;
		 coneFadeCoef=3;
		 intensity=350;
		 useFlare=1;
		 dayLight=1;
		 FlareSize=0.69999999;
		 flareMaxDistance=250;
		 onlyInNvg=0;
		 scale[]={0};
		 class Attenuation
		 {
			start=40;
			constant=80;
			linear=50;
			quadratic=12;
			hardLimitStart=140;
			hardLimitEnd=180;
		 };
		};
	};
};

class cfgAmmo
{
	class SmokeShell;
	class RocketCore;
  class RocketBase: RocketCore
	{
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_1",
			0.316228,
			1.5,
			900
		};
		whistleDist=24;
	};
  class R_PG7_F: RocketBase
	{
  	aiAmmoUsageFlags = "64 + 128 + 256 + 512";
    airLock = 1;
    allowAgainstInfantry = 1;
    cost = 40;
    effectsMissile = "missile3";
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",
			0.316228,
			1.5,
			900
		};
		whistleDist=24;
  };
  class M_SPG9_HEAT: RocketBase
	{
    aiAmmoUsageFlags = "64 + 128 + 512";
    allowAgainstInfantry = 1;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",
			0.316228,
			1.5,
			900
		};
		whistleDist=24;
  };
  class R_PG32V_F: RocketBase
	{
    aiAmmoUsageFlags = "64 + 128 + 256 + 512";
    airLock = 1;
    allowAgainstInfantry = 1;
    cost = 40;
		soundFly[]=
		{
			"A3\Sounds_F\arsenal\weapons\Launchers\RPG32\Fly_RPG32",
			0.316228,
			1.5,
			900
		};
		whistleDist=24;
  };
  class R_MRAAWS_HEAT_F: RocketBase
	{
    aiAmmoUsageFlags = "64 + 128 + 512";
    allowAgainstInfantry = 1;
    cost = 40;
  };
	class rhs_rpg26_rocket;
  class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket
	{
    aiAmmoUsageFlags = "64 + 128 + 256 + 512";
    airLock = 1;
    allowAgainstInfantry = 1;
    cost = 40;
  };
	class MissileCore;
	class MissileBase: MissileCore
	{
		soundFly[]=
		{
			"A3\Sounds_F\weapons\Rockets\rocket_fly_2",
			6,
			1.5,
			400
		};
		whistleDist=24;
	};
};
class CfgSounds
{
	sounds[]=
	{
		"BRIDGE_PunchSound"
	};
	class BRIDGE_PunchSound
	{
		name="BRIDGE_PunchSound";
		sound[]=
		{
			"x\APM\Addons\Misc\Data\Sounds\punchSound.ogg",
			3,
			1
		};
		titles[]={};
	};
};
