#include "script_component.hpp"
class CfgPatches
{
	class ADDON
	{
		units[]={};
		weapons[]={};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[]=
		{
			"apm_main"
		};
		VERSION_CONFIG;
	};
};
class CfgVehicles
{
	class B_Soldier_F;
	class APM_Hoodie_BlackBlue: B_Soldier_F
	{
		scope=1;
		displayName="Low profile operator";
		picture="\lowprofile\logo.paa";
		uniformAccessories[]={};
		nakedUniform="U_BasicBody";
		model="lowprofile\models\lp4_2.p3d";
		weapons[]={};
		respawnWeapons[]={};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\hoodie\hoodie_black.paa"
		};
		hiddenSelectionMaterial[]={};
	};
	class APM_Hoodie_BlackBlack: APM_Hoodie_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\hoodie\hoodie_black.paa",
			"lowprofile\jean\jean2_brown.paa"
		};
	};
	class APM_Hoodie_GreenBlue: APM_Hoodie_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\hoodie\hoodie_green.paa"
		};
	};
	class APM_Hoodie_GreenBlack: APM_Hoodie_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\hoodie\hoodie_green.paa",
			"lowprofile\jean\jean2_brown.paa"
		};
	};
	class APM_Hoodie_GreyBlue: APM_Hoodie_BlackBlue
	{
		scope=1;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\hoodie\Hoodie_grey_co.paa"
		};
	};
	class APM_Hoodie_GreyBlack: APM_Hoodie_BlackBlue
	{
		scope=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\hoodie\Hoodie_grey_co.paa",
			"lowprofile\jean\jean2_brown.paa"
		};
	};
	class APM_Hoodie_TanBlue: APM_Hoodie_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1",
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\hoodie\hoodie_tan.paa"
		};
	};
	class APM_Hoodie_TanBlack: APM_Hoodie_BlackBlue
	{
		scope=1;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\hoodie\Hoodie_tan.paa",
			"lowprofile\jean\jean2_brown.paa"
		};
	};
	class APM_Tee_BlackBlue: B_Soldier_F
	{
		scope=1;
		displayName="Low profile operator";
		picture="\lowprofile\logo.paa";
		uniformAccessories[]={};
		nakedUniform="U_BasicBody";
		model="lowprofile\models\lp5_3.p3d";
		weapons[]={};
		respawnWeapons[]={};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionMaterial[]={};
	};
	class APM_Tee_BlackBlack: APM_Tee_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\jean\jean2_brown.paa"
		};
	};
	class APM_Tee_BlueBlue: APM_Tee_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\tshirt\tshirt_blue_co.paa"
		};
	};
	class APM_Tee_BlueBlack: APM_Tee_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\tshirt\tshirt_blue_co.paa",
			"lowprofile\jean\jean2_brown.paa"
		};
	};
	class APM_Tee_GreenBlue: APM_Tee_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\tshirt\tshirt_green_co.paa",
		};
	};
	class APM_Tee_GreenBlack: APM_Tee_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\tshirt\tshirt_green_co.paa",
			"lowprofile\jean\jean2_brown.paa"
		};
	};
	class APM_Tee_RedBlue: APM_Tee_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\tshirt\tshirt_red_co.paa",
		};
	};
	class APM_Tee_RedBlack: APM_Tee_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\tshirt\tshirt_red_co.paa",
			"lowprofile\jean\jean2_brown.paa"
		};
	};
	class APM_Jacket_BlackBlue: B_Soldier_F
	{
		scope=1;
		displayName="Low profile operator";
		picture="\lowprofile\logo.paa";
		uniformAccessories[]={};
		nakedUniform="U_BasicBody";
		model="lowprofile\models\lpbom3.p3d";
		weapons[]={};
		respawnWeapons[]={};
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenSelectionMaterial[]={};
	};
	class APM_Jacket_BlackBlack: APM_Jacket_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\jean\jean2_brown.paa"
		};
	};
	class APM_Jacket_BlueBlue: APM_Jacket_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\bomber\BomberJacket_blue_co.paa"
		};
	};
	class APM_Jacket_BlueBlack: APM_Jacket_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\bomber\BomberJacket_blue_co.paa",
			"lowprofile\jean\jean2_brown.paa"
		};
	};
	class APM_Jacket_OliveBlue: APM_Jacket_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\bomber\BomberJacket_Olive_co.paa"
		};
	};
	class APM_Jacket_OliveBlack: APM_Jacket_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\bomber\BomberJacket_Olive_co.paa",
			"lowprofile\jean\jean2_brown.paa"
		};
	};
	class APM_Jacket_RedBlue: APM_Jacket_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\bomber\BomberJacket_red_co.paa"
		};
	};
	class APM_Jacket_RedBlack: APM_Jacket_BlackBlue
	{
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"lowprofile\bomber\BomberJacket_red_co.paa",
			"lowprofile\jean\jean2_brown.paa"
		};
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class APM_HoodieJeans_BlackBlue: Uniform_Base
	{
		scope=2;
		displayName="[APM] Hoodie/Jeans (Black/Blue)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Hoodie_BlackBlue";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_HoodieJeans_BlackBlack: Uniform_Base
	{
		scope=2;
		displayName="[APM] Hoodie/Jeans (Black/Black)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Hoodie_BlackBlack";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_HoodieJeans_GreenBlue: Uniform_Base
	{
		scope=2;
		displayName="[APM] Hoodie/Jeans (Green/Blue)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Hoodie_GreenBlue";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_HoodieJeans_GreenBlack: Uniform_Base
	{
		scope=2;
		displayName="[APM] Hoodie/Jeans (Green/Black)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Hoodie_GreenBlack";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_HoodieJeans_GreyBlue: Uniform_Base
	{
		scope=2;
		displayName="[APM] Hoodie/Jeans (Grey/Blue)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Hoodie_GreyBlue";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_HoodieJeans_GreyBlack: Uniform_Base
	{
		scope=2;
		displayName="[APM] Hoodie/Jeans (Grey/Black)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Hoodie_GreyBlack";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_HoodieJeans_TanBlue: Uniform_Base
	{
		scope=2;
		displayName="[APM] Hoodie/Jeans (Tan/Blue)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Hoodie_TanBlue";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_HoodieJeans_TanBlack: Uniform_Base
	{
		scope=2;
		displayName="[APM] Hoodie/Jeans (Tan/Black)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Hoodie_TanBlack";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_TeeJeans_BlackBlue: Uniform_Base
	{
		scope=2;
		displayName="[APM] Tee/Jeans (Black/Blue)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Tee_BlackBlue";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_TeeJeans_BlackBlack: Uniform_Base
	{
		scope=2;
		displayName="[APM] Tee/Jeans (Black/Black)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Tee_BlackBlack";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_TeeJeans_BlueBlue: Uniform_Base
	{
		scope=2;
		displayName="[APM] Tee/Jeans (Blue/Blue)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Tee_BlueBlue";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_TeeJeans_BlueBlack: Uniform_Base
	{
		scope=2;
		displayName="[APM] Tee/Jeans (Blue/Black)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Tee_BlueBlack";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_TeeJeans_GreenBlue: Uniform_Base
	{
		scope=2;
		displayName="[APM] Tee/Jeans (Green/Blue)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Tee_GreenBlue";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_TeeJeans_GreenBlack: Uniform_Base
	{
		scope=2;
		displayName="[APM] Tee/Jeans (Green/Black)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Tee_GreenBlack";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_TeeJeans_RedBlue: Uniform_Base
	{
		scope=2;
		displayName="[APM] Tee/Jeans (Red/Blue)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Tee_RedBlue";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_TeeJeans_RedBlack: Uniform_Base
	{
		scope=2;
		displayName="[APM] Tee/Jeans (Red/Black)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Tee_RedBlack";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_JacketJeans_BlackBlue: Uniform_Base
	{
		scope=2;
		displayName="[APM] Jacket/Jeans (Black/Blue)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Jacket_BlackBlue";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_JacketJeans_BlackBlack: Uniform_Base
	{
		scope=2;
		displayName="[APM] Jacket/Jeans (Black/Black)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Jacket_BlackBlack";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_JacketJeans_BlueBlue: Uniform_Base
	{
		scope=2;
		displayName="[APM] Jacket/Jeans (Blue/Blue)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Jacket_BlueBlue";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_JacketJeans_BlueBlack: Uniform_Base
	{
		scope=2;
		displayName="[APM] Jacket/Jeans (Blue/Black)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Jacket_BlueBlack";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_JacketJeans_OliveBlue: Uniform_Base
	{
		scope=2;
		displayName="[APM] Jacket/Jeans (Olive/Blue)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Jacket_OliveBlue";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_JacketJeans_OliveBlack: Uniform_Base
	{
		scope=2;
		displayName="[APM] Jacket/Jeans (Olive/Black)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Jacket_OliveBlack";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_JacketJeans_RedBlue: Uniform_Base
	{
		scope=2;
		displayName="[APM] Jacket/Jeans (Red/Blue)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Jacket_RedBlue";
			containerClass="Supply50";
			mass=50;
		};
	};
	class APM_JacketJeans_RedBlack: Uniform_Base
	{
		scope=2;
		displayName="[APM] Jacket/Jeans (Red/Black)";
		picture="\lowprofile\logo.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="APM_Jacket_RedBlack";
			containerClass="Supply50";
			mass=50;
		};
	};
};
