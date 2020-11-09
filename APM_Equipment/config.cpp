class CfgPatches
{
	class APM_Equipment
	{
		units[]=
		{
		};
		weapons[]=
		{
		};
		magazines[]=
		{
		};
		requiredVersion=1.3200001;
		requiredAddons[]=
		{
			"VSM_Armor_Patch",
      "Vanilla_Armor_Patch"
		};
		name="APM Equipment";
		author="LinkIsParking";
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
	class VSM_Bowman_cap_Black;
	class APM_Bowman_Cap_Black: VSM_Bowman_cap_Black
	{
		displayName = "[VSM] Bowman Elite II -Cap (Dark Black)";
		hiddenSelectionsTextures[] = {"\VSM_Bowman\data\Bowman_Base_co.paa","APM_Equipment\data\VSM_Bowman_USBlack.paa"};
	};
	#include "BlackMLOUniforms.hpp"
	#include "ModularCarrierRetex.hpp"
	#include "APMUniform.hpp"
	#include "WeapRetex.hpp"
	#include "NVG_Beards.hpp"
	#include "NVG_MLO_Shemaghs.hpp"
	#include "NVG_WAINO_Shemaghs.hpp"
	#include "BlackMLOVests.hpp"
};
class cfgVehicles
{
	#include "Arsenal.hpp"
	class B_Soldier_F;
	class B_Soldier_base_F;
	class B_Soldier_03_f;
	class B_AssaultPack_Base;
	class B_Kitbag_Base;
	class B_Carryall_Base;
	class VSM_OGA_Crye_SS_Grey_Uniform;
	class VSM_OGA_Crye_Grey_Uniform;
	class VSM_Scorpion_Uniform;
	class VSM_Scorpion_Uniform_SS;
	class APM_OGA_Crye_SS_black_Uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
    author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye SS Black)";
    hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_black.paa"};
	};
	class APM_OGA_Crye_black_Uniform: VSM_OGA_Crye_Grey_Uniform
	{
    author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye Black)";
    hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_black.paa"};
	};
	class APM_OGA_Crye_Grey_black_pants_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye Grey - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OGA_grey_black_pants.paa"};
	};
	class APM_OGA_Crye_SS_Grey_black_pants_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye SS Grey - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OGA_grey_black_pants.paa"};
	};
	class APM_OGA_Crye_Grey_black_Shirt_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye Grey - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OGA_grey_black_Shirt.paa"};
	};
	class APM_OGA_Crye_SS_Grey_black_Shirt_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye SS Grey - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OGA_grey_black_Shirt.paa"};
	};
	class APM_OGA_OD_Crye_OD_black_pants_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye OD - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OGA_OD_black_pants.paa"};
	};
	class APM_OGA_OD_Crye_SS_OD_black_pants_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye SS OD - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OGA_OD_black_pants.paa"};
	};
	class APM_OGA_OD_Crye_OD_black_Shirt_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye OD - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OGA_OD_black_Shirt.paa"};
	};
	class APM_OGA_OD_Crye_SS_OD_black_Shirt_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye SS OD - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OGA_OD_black_Shirt.paa"};
	};
	class APM_OGA_Crye_black_Shirt_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OGA_black_Shirt.paa"};
	};
	class APM_OGA_Crye_black_Pants_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OGA_black_pants.paa"};
	};
	class APM_OGA_Crye_SS_black_Shirt_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye SS - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OGA_black_Shirt.paa"};
	};
	class APM_OGA_Crye_SS_black_Pants_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] OGA (Crye SS - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OGA_black_pants.paa"};
	};
	class B_APMMilTan_soldier_F: VSM_OGA_Crye_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] APM (Crye - Tan Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\apm_odtan_co.paa"};
		hiddenSelectionsMaterials[] = {"VSM_ProjectHonor\Data\VSM_ARD.RVMAT"};
	};
	class B_APMMilBlack_soldier_F: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] APM (Crye - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\apm_odblack_co.paa"};
		hiddenSelectionsMaterials[] = {"VSM_ProjectHonor\Data\VSM_ARD.RVMAT"};
	};
	class B_APMMilTan_soldier_SS_F: VSM_OGA_Crye_SS_Grey_Uniform
	{
		author = "LinkIsParking";
    displayName = "[VSM] APM (Crye SS - Tan Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\apm_odtan_co.paa"};
	};
	class B_APMMilBlack_soldier_SS_F: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] APM (Crye SS - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\apm_odblack_co.paa"};
	};
	class APM_MulticamTropic_Crye_black_Pants_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] MulticamTropic (Crye - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_MulticamTropic_Black_Pants.paa"};
	};
	class APM_MulticamTropic_Crye_black_Shirt_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] MulticamTropic (Crye - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_MulticamTropic_Black_Shirt.paa"};
	};
	class APM_MulticamTropic_Crye_SS_black_Pants_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] MulticamTropic (Crye SS - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_MulticamTropic_Black_Pants.paa"};
	};
	class APM_MulticamTropic_Crye_SS_black_Shirt_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] MulticamTropic (Crye SS - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_MulticamTropic_Black_Shirt.paa"};
	};
	class APM_Scorpion_Crye_black_Pants_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] Scorpion (Crye - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_Scorpion_Black_Pants.paa"};
	};
	class APM_Scorpion_Crye_black_Shirt_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] Scorpion (Crye - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_Scorpion_Black_Shirt.paa"};
	};
	class APM_Scorpion_Crye_SS_black_Pants_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] Scorpion (Crye SS - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_Scorpion_Black_Pants.paa"};
	};
	class APM_Scorpion_Crye_SS_black_Shirt_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] Scorpion (Crye SS - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_Scorpion_Black_Shirt.paa"};
	};
	class APM_Multicam_Crye_black_Pants_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] Multicam (Crye - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_Multicam_Black_Pants.paa"};
	};
	class APM_Multicam_Crye_black_Shirt_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] Multicam (Crye - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_Multicam_Black_Shirt.paa"};
	};
	class APM_Multicam_Crye_SS_black_Pants_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] Multicam (Crye SS - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_Multicam_Black_Pants.paa"};
	};
	class APM_Multicam_Crye_SS_black_Shirt_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] Multicam (Crye SS - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_Multicam_Black_Shirt.paa"};
	};
	class APM_ProjectHonor_Crye_black_Pants_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] ProjectHonor (Crye - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_ProjectHonor_Black_Pants.paa"};
	};
	class APM_ProjectHonor_Crye_black_Shirt_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] ProjectHonor (Crye - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_ProjectHonor_Black_Shirt.paa"};
	};
	class APM_ProjectHonor_Crye_SS_black_Pants_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] ProjectHonor (Crye SS - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_ProjectHonor_Black_Pants.paa"};
	};
	class APM_ProjectHonor_Crye_SS_black_Shirt_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] ProjectHonor (Crye SS - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_ProjectHonor_Black_Shirt.paa"};
	};
	class APM_OCP_Crye_black_Pants_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] OCP (Crye - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OCP_Black_Pants.paa"};
	};
	class APM_OCP_Crye_black_Shirt_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] OCP (Crye - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OCP_Black_Shirt.paa"};
	};
	class APM_OCP_Crye_SS_black_Pants_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] OCP (Crye SS - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OCP_Black_Pants.paa"};
	};
	class APM_OCP_Crye_SS_black_Shirt_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] OCP (Crye SS - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_OCP_Black_Shirt.paa"};
	};
	class APM_M81_Crye_black_Pants_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] M81 (Crye - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_M81_Black_Pants.paa"};
	};
	class APM_M81_Crye_black_Shirt_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] M81 (Crye - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_M81_Black_Shirt.paa"};
	};
	class APM_M81_Crye_SS_black_Pants_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] M81 (Crye SS - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_M81_Black_Pants.paa"};
	};
	class APM_M81_Crye_SS_black_Shirt_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] M81 (Crye SS - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_M81_Black_Shirt.paa"};
	};
	class APM_AOR1_Crye_black_Pants_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] AOR1 (Crye - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_AOR1_Black_Pants.paa"};
	};
	class APM_AOR1_Crye_black_Shirt_uniform: VSM_OGA_Crye_Grey_Uniform
	{
		displayName = "[VSM] AOR1 (Crye - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_AOR1_Black_Shirt.paa"};
	};
	class APM_AOR1_Crye_SS_black_Pants_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] AOR1 (Crye SS - Black Pants)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_AOR1_Black_Pants.paa"};
	};
	class APM_AOR1_Crye_SS_black_Shirt_uniform: VSM_OGA_Crye_SS_Grey_Uniform
	{
		displayName = "[VSM] AOR1 (Crye SS - Black Shirt)";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_ARD_AOR1_Black_Shirt.paa"};
	};
	class APM_Black_Backpack_AssaultPack: B_AssaultPack_Base
	{
		author = "LinkIsParking";
		scope = 2;
		hiddenSelectionsTextures[] = {"APM_Equipment\Data\VSM_Black_compact.paa"};
		picture = "APM_Equipment\Data\Icons\VSM_Black.paa";
		displayName = "Assault Pack (Black)";
	};
	class APM_Black_Backpack_Kitbag: B_Kitbag_Base
	{
		author = "LinkIsParking";
		scope = 2;
		hiddenSelectionsTextures[] = {"APM_Equipment\Data\VSM_Black_kitbag.paa"};
		picture = "APM_Equipment\Data\Icons\VSM_Black.paa";
		displayName = "Kitbag (Black)";
	};
	class APM_Black_Backpack_Carryall: B_Carryall_Base
	{
		author = "LinkIsParking";
		scope = 2;
		hiddenSelectionsTextures[] = {"APM_Equipment\Data\VSM_Black_carryall.paa"};
		picture = "APM_Equipment\Data\Icons\VSM_Black.paa";
		displayName = "Carryall Backpack (Black)";
	};
	class APM_Black_Uniform: VSM_Scorpion_Uniform
	{
		displayName = "[VSM] Black";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_Black_1.paa"};
	};
	class APM_Black_Uniform_SS: VSM_Scorpion_Uniform_SS
	{
		displayName = "[VSM] Black SS";
		hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_Black_1.paa"};
	};
	class APM_Black_Tan_Pants_Uniform: VSM_Scorpion_Uniform
	{
			displayName = "[VSM] Black (Tan Pants)";
			hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_Black_Tan_Pants_1.paa"};
	};
	class APM_Black_Tan_Pants_Uniform_SS: VSM_Scorpion_Uniform_SS
	{
			displayName = "[VSM] Black SS (Tan Pants)";
			hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_Black_Tan_Pants_1.paa"};
	};
	class APM_Black_OD_Pants_Uniform: VSM_Scorpion_Uniform
	{
			displayName = "[VSM] Black (Tan Pants)";
			hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_Black_OD_Pants_1.paa"};
	};
	class APM_Black_OD_Pants_Uniform_SS: VSM_Scorpion_Uniform_SS
	{
			displayName = "[VSM] Black SS (Tan Pants)";
			hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_Black_OD_Pants_1.paa"};
	};
	class APM_OGA_Black_Pants_Uniform: VSM_Scorpion_Uniform
	{
			displayName = "[VSM] OGA (Black Pants)";
			hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_OGA_Black_Pants_1.paa"};
	};
	class APM_OGA_Black_Pants_Uniform_SS: VSM_Scorpion_Uniform_SS
	{
			displayName = "[VSM] OGA SS (Black Pants)";
			hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_OGA_Black_Pants_1.paa"};
	};
	class APM_OGA_OD_Black_Pants_Uniform: VSM_Scorpion_Uniform
	{
			displayName = "[VSM] OGA OD (Black Pants)";
			hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_OGA_OD_Black_Pants_1.paa"};
	};
	class APM_OGA_OD_Black_Pants_Uniform_SS: VSM_Scorpion_Uniform_SS
	{
			displayName = "[VSM] OGA OD SS (Black Pants)";
			hiddenSelectionsTextures[] = {"\APM_Equipment\Data\VSM_OGA_OD_Black_Pants_1.paa"};
	};
	class VSM_Multicam_Casual_uniform;
	class APM_Black_Casual_Uniform: VSM_Multicam_Casual_uniform
	{
		displayName = "[VSM] Polo (Black Pants)";
		uniformClass = "APM_Black_Casual_Camo";
		hiddenSelectionsTextures[] = {"VSM_OGA\Data\VSM_Black_button_up.paa","APM_Equipment\Data\VSM_ARD_black.paa"};
	};
	class APM_Black_Uniform_TShirt: B_Soldier_F
	{
		displayName = "[VSM] Massif Black (Tee)";
		model = "\A3\characters_f_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"VSM_Scorpion\Data\MOH_TSHIRT.paa","\APM_Equipment\Data\VSM_Black_1.paa"};
	};
};
class cfgGlasses
{
	class None;
	#include "MLO_Shemaghs.hpp"
};
