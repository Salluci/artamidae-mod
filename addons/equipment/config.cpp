#include "script_component.hpp"
class CfgPatches
{
	class ADDON
	{
		units[]={};
		weapons[]={};
		magazines[]={};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[]=
		{
			"apm_main"
		};
		name="APM Equipment";
		author="LinkIsParking";
		VERSION_CONFIG;
	};
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class Vest_Camo_Base;
	class VestItem;
	class NVGoggles;
	class ACE_NVG_Wide: NVGoggles
	{
		displayName = "NV Goggles (Wide, Brown)";
	  class ItemInfo;
	};
	class ACE_NVG_Wide_Black: ACE_NVG_Wide
	{
    author = "LinkIsParking";
    model = "\A3\Weapons_f\binocular\nvg_proxy_OPFOR";
    picture = "\A3\Weapons_F\Data\UI\gear_nvg_opfor_CA.paa";
		displayName = "NV Goggles (Wide, Black)";
    class ItemInfo: ItemInfo
		{
			uniformModel = "A3\weapons_f\binocular\nvg_proxy_OPFOR.p3d";
    	modelOff = "A3\weapons_f\binocular\NVG_proxy_off_OPFOR.p3d";
		};
	};
	class ACE_NVG_Wide_Green: ACE_NVG_Wide
	{
    author = "LinkIsParking";
    model = "\A3\Weapons_f\binocular\nvg_proxy_INDEP";
    picture = "\A3\Weapons_F\Data\UI\gear_nvg_indep_CA.paa";
		displayName = "NV Goggles (Wide, Green)";
    class ItemInfo: ItemInfo
		{
			uniformModel = "A3\weapons_f\binocular\nvg_proxy_INDEP.p3d";
    	modelOff = "A3\weapons_f\binocular\NVG_proxy_off_INDEP.p3d";
		};
	};
	#include "BlackMLOUniforms.hpp"
	#include "WoodlandMLOUniforms.hpp"
	#include "ModularCarrierRetex.hpp"
	#include "APMUniform.hpp"
	#include "WeapRetex.hpp"
	#include "NVG_Beards.hpp"
	#include "NVG_MLO_Shemaghs.hpp"
	#include "BlackMLOVests.hpp"
	#include "WoodlandMLOVests.hpp"
	#include "Ghillies.hpp"
};
class cfgVehicles
{
	#include "Arsenal.hpp"
	class B_Soldier_F;
	class B_Soldier_base_F;
	class B_Soldier_03_f;
	class B_AssaultPack_Base;
	class B_Kitbag_Base;
	class Bag_Base;
	class B_Carryall_Base;
	class B_TacticalPack_base;
	class VSM_OGA_Crye_SS_Grey_Uniform;
	class VSM_OGA_Crye_Grey_Uniform;
	class VSM_Scorpion_Uniform;
	class VSM_Scorpion_Uniform_SS;
	class B_ghillie_base_F;
	class O_ghillie_base_F;
	#include "MLOCfgVehicles.hpp"
	#include "AlsoGhillies.hpp"
	#include "Backpacks.hpp"
	class B_APMMilTan_soldier_F: VSM_OGA_Crye_Grey_Uniform
	{
	  author = "LinkIsParking";
	  displayName = "[VSM] APM (Crye - Tan Pants)";
	  hiddenSelectionsTextures[] = {"x\APM\addons\Equipment\Data\apm_odtan_co"};
	  hiddenSelectionsMaterials[] = {"VSM_ProjectHonor\Data\VSM_ARD"};
	};
	class B_APMMilBlack_soldier_F: VSM_OGA_Crye_Grey_Uniform
	{
	  displayName = "[VSM] APM (Crye - Black Pants)";
	  hiddenSelectionsTextures[] = {"x\APM\addons\Equipment\Data\apm_odblack_co"};
	  hiddenSelectionsMaterials[] = {"VSM_ProjectHonor\Data\VSM_ARD"};
	};
	class B_APMMilTan_soldier_SS_F: VSM_OGA_Crye_SS_Grey_Uniform
	{
	  author = "LinkIsParking";
	  displayName = "[VSM] APM (Crye SS - Tan Pants)";
	  hiddenSelectionsTextures[] = {"x\APM\addons\Equipment\Data\apm_odtan_co"};
	};
	class B_APMMilBlack_soldier_SS_F: VSM_OGA_Crye_SS_Grey_Uniform
	{
	  displayName = "[VSM] APM (Crye SS - Black Pants)";
	  hiddenSelectionsTextures[] = {"x\APM\addons\Equipment\Data\apm_odblack_co"};
	};
};
class cfgMagazines
{
	class CA_Magazine;
	class 7Rnd_408_Mag: CA_Magazine
	{
		picture="x\APM\addons\equipment\Data\ui\icon_mag_408";
	};
};
class cfgGlasses
{
	class None;
	#include "MLO_Shemaghs.hpp"
};
