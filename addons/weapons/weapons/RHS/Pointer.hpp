class rhsusf_acc_anpeq15: acc_pointer_IR
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_laser";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_light";
  MRT_switchItemHintText = "IR Laser";
  displayName="AN/PEQ-15/M952V";
  descriptionUse = "<t color='#9cf953'>Use: </t>Press L Turn ON/OFF, LShift + L to change mode.";
  descriptionShort = "Weapon Mounted Laser/Light Combo.<br/>Press LShift + L to change modes.<br/>Current Mode: IR Laser";
  rhs_acc_combo = "";
  rhs_acc_combo_text = "";
  rhs_anpeq15_base = "rhsusf_acc_anpeq15";
  class ItemInfo: InventoryFlashLightItem_Base_F
  {
    class FlashLight
    {
    };
    class Pointer
    {
      irLaserPos = "laser pos";
      irLaserEnd = "laser dir";
      irDistance = 5;
    };
  };
};
class rhsusf_acc_anpeq15_laser: rhsusf_acc_anpeq15
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_light";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15";
  descriptionShort = "Weapon Mounted Laser/Light Combo.<br/>Press LShift + L to change modes.<br/>Current Mode: Visible Laser";
  MRT_switchItemHintText = "Laser";
  rhs_anpeq15_base = "rhsusf_acc_anpeq15_laser";
  ACE_laserpointer = 1;
  scope = 1;
  class ItemInfo: InventoryFlashLightItem_Base_F
  {
    class FlashLight
    {
      color[]={0,0,0};
      ambient[]={0,0,0};
      intensity=0;
      size=0;
      innerAngle=0;
      outerAngle=0;
      coneFadeCoef=5;
      position="laser dir";
      direction="laser";
      useFlare=0;
      flareSize=0;
      flareMaxDistance="100.0f";
      dayLight=0;
      class Attenuation
      {
        start=0;
        constant=0;
        linear=0;
        quadratic=0;
        hardLimitStart=0;
        hardLimitEnd=0;
      };
      scale[]={0};
    };
    class Pointer
    {
      irLaserPos = "laser pos";
      irLaserEnd = "laser dir";
      irDistance = 5;
    };
  };
};
class rhsusf_acc_anpeq15_light: rhsusf_acc_anpeq15
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_laser";
  descriptionShort = "Weapon Mounted Laser/Light Combo.<br/>Press LShift + L to change modes.<br/>Current Mode: Flashlight";
  descriptionUse = "<t color='#9cf953'>Use: </t>Press L Turn ON/OFF, LShift + L to change mode.";
  MRT_switchItemHintText = "Flashlight";
  rhs_acc_combo = "";
  rhs_acc_combo_text = "";
  displayName="AN/PEQ-15/M952V";
  scope = 1;
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
class rhsusf_acc_anpeq15_wmx: rhsusf_acc_anpeq15
{
  displayName = "AN/PEQ-15 + WMX";
  rhs_acc_combo = "";
  rhs_acc_combo_text = "";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_wmx_laser";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_wmx_light";
  descriptionUse = "<t color='#9cf953'>Use: </t>Press L Turn ON/OFF, LShift + L to change mode.";
  descriptionShort = "Weapon Mounted Laser/Light Combo.<br/>Press LShift + L to change modes.<br/>Current Mode: IR Laser";
  class Pointer
  {
    irLaserPos = "laser pos";
    irLaserEnd = "laser dir";
    irDistance = 5;
  };
  class FlashLight
  {
  };
};
class rhsusf_acc_anpeq15_wmx_light: rhsusf_acc_anpeq15_light
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_wmx";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_wmx_laser";
  descriptionShort = "Weapon Mounted Laser/Light Combo.<br/>Press LShift + L to change modes.<br/>Current Mode: Flashlight";
  descriptionUse = "<t color='#9cf953'>Use: </t>Press L Turn ON/OFF, LShift + L to change mode.";
  MRT_switchItemHintText = "Flashlight";
  rhs_acc_combo = "";
  rhs_acc_combo_text = "";
  displayName="AN/PEQ-15 + WMX";
  scope = 1;
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
class rhsusf_acc_anpeq15_wmx_laser: rhsusf_acc_anpeq15_laser
{
  rhs_anpeq15_base = "rhsusf_acc_anpeq15_laser";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_wmx_light";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_wmx";
  picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_anpeq15_wmx_light_ca.paa";
  author = "Red Hammer Studios";
  displayName = "AN/PEQ-15 + WMX";
  weaponInfoType = "RHS_Flashlight3";
  model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side";
};
class rhsusf_acc_anpeq15_bk: rhsusf_acc_anpeq15
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_laser";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_light";
  displayName="AN/PEQ-15/M952V (Black)";
  rhs_acc_combo = "";
  rhs_acc_combo_text = "";
};
class rhsusf_acc_anpeq15_bk_light: rhsusf_acc_anpeq15_light
{
  rhs_acc_combo = "";
  rhs_acc_combo_text = "";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_laser";
  displayName="AN/PEQ-15/M952V (Black)";
};
class rhsusf_acc_anpeq15_bk_laser: rhsusf_acc_anpeq15_laser
{
  model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top";
  picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_anpeq15_bk_ca.paa";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_light";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk";
  displayName="AN/PEQ-15/M952V (Black)";
  rhs_anpeq15_base = "rhsusf_acc_anpeq15_bk_laser";
};

class rhsusf_acc_anpeq15A: acc_pointer_IR
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15A_red";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15A_red";
  MRT_switchItemHintText = "IR Laser";
};
class ACE_acc_pointer_red;
class rhsusf_acc_anpeq15A_red: ACE_acc_pointer_red
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15A";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15A";
  MRT_switchItemHintText = "Laser";
  picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_anpeq15A_ca.paa";
  dlc = "RHS_USAF";
  author = "Red Hammer Studios";
  displayName = "AN/PEQ-15A";
};
class rhsusf_acc_anpeq15side: acc_pointer_IR
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15side_red";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15side_red";
  MRT_switchItemHintText = "IR Laser";
};
class rhsusf_acc_anpeq15side_red: rhsusf_acc_anpeq15side
{
  scope = 1;
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15side";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15side";
  MRT_switchItemHintText = "Laser";
  ACE_laserpointer = 1;
  class ItemInfo: InventoryFlashLightItem_Base_F
  {
    class FlashLight
    {
      color[]={0,0,0};
      ambient[]={0,0,0};
      intensity=0;
      size=0;
      innerAngle=0;
      outerAngle=0;
      coneFadeCoef=5;
      position="laser dir";
      direction="laser";
      useFlare=0;
      flareSize=0;
      flareMaxDistance="100.0f";
      dayLight=0;
      class Attenuation
      {
        start=0;
        constant=0;
        linear=0;
        quadratic=0;
        hardLimitStart=0;
        hardLimitEnd=0;
      };
      scale[]={0};
    };
    class Pointer
    {
      irLaserPos = "laser pos";
      irLaserEnd = "laser dir";
      irDistance = 5;
    };
  };
};
class rhsusf_acc_anpeq15side_bk: rhsusf_acc_anpeq15side
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15side_bk_red";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15side_bk_red";
};
class rhsusf_acc_anpeq15side_bk_red: rhsusf_acc_anpeq15side_red
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15side_bk";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15side_bk";
  picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_anpeq15side_bk_ca.paa";
  author = "Red Hammer Studios";
  displayName = "AN/PEQ-15 Black";
  model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_side";
};
class rhsusf_acc_anpeq15_top: rhsusf_acc_anpeq15A
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_top_red";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_top_red";
};
class rhsusf_acc_anpeq15_top_red: rhsusf_acc_anpeq15A_red
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_top";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_top";
  author = "Red Hammer Studios";
  picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_anpeq15side_ca.paa";
  displayName = "AN/PEQ-15 (Top)";
  descriptionShort = "Laser";
  model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_single";
  rhs_anpeq15_base = "rhsusf_acc_anpeq15_top_red";
};
class rhsusf_acc_anpeq15_bk_top: rhsusf_acc_anpeq15_top
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_top_red";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_top_red";
};
class rhsusf_acc_anpeq15_bk_top_red: rhsusf_acc_anpeq15_top_red
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_top";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_top";
  author = "Red Hammer Studios";
  picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_anpeq15side_bk_ca.paa";
  displayName = "AN/PEQ-15 Black (Top)";
  model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_single";
  rhs_anpeq15_base = "rhsusf_acc_anpeq15_bk_top_red";
  weaponInfoType = "RHS_LaserTop2";
};
class rhsusf_acc_M952V: rhsusf_acc_anpeq15_light
{
  scope = 2;
};
class rhsusf_acc_anpeq16a: rhsusf_acc_anpeq15
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_green";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_light";
  MRT_switchItemHintText = "IR Laser";
  rhs_acc_combo = "";
  rhs_acc_combo_text = "";
  rhs_anpeq15_base = "rhsusf_acc_anpeq16a";
  displayName = "AN/PEQ-16A";
};
class rhsusf_acc_anpeq16a_light: rhsusf_acc_anpeq15_light
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_green";
  MRT_switchItemHintText = "Flashlight";
  rhs_acc_combo = "";
  rhs_acc_combo_text = "";
  rhs_anpeq15_base = "rhsusf_acc_anpeq16a_light";
  displayName = "AN/PEQ-16A";
};
class rhsusf_acc_anpeq16a_green: rhsusf_acc_anpeq15_laser
{
  ACE_laserpointer = 2;
  displayName = "AN/PEQ-16A";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_light";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a";
  rhs_anpeq15_base = "rhsusf_acc_anpeq16a_green";
  picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_anpeq16a_ca.paa";
  dlc = "RHS_USAF";
  author = "Red Hammer Studios";
  model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ16\peq16a";
};
class rhsusf_acc_anpeq16a_top: rhsusf_acc_anpeq16a
{
  displayName = "AN/PEQ-16A (Top)";
  model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ16\peq16a_top";
  rhs_anpeq15_base = "rhsusf_acc_anpeq16a_top";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_top_green";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_light_top";
  MRT_switchItemHintText = "IR Laser";
  rhs_acc_combo = "";
  rhs_acc_combo_text = "";
};
class rhsusf_acc_anpeq16a_light_top: rhsusf_acc_anpeq16a_light
{
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_top";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_top_green";
  MRT_switchItemHintText = "Flashlight";
  rhs_acc_combo = "";
  rhs_acc_combo_text = "";
  rhs_anpeq15_base = "rhsusf_acc_anpeq16a_light_top";
  displayName = "AN/PEQ-16A (Top)";
};
class rhsusf_acc_anpeq16a_top_green: rhsusf_acc_anpeq16a_green
{
  ACE_laserpointer = 2;
  displayName = "AN/PEQ-16A (Top)";
  model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ16\peq16a_top";
  picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_anpeq16a_ca.paa";
  rhs_acc_combo = "";
  rhs_acc_combo_text = "";
  rhs_anpeq15_base = "rhsusf_acc_anpeq16a_top_green";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_light_top";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_top";
  MRT_switchItemHintText = "Laser";
};
class rhsusf_acc_anpeq15_bk_sc: rhsusf_acc_anpeq15_bk
{
  rhs_acc_combo = "";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_laser_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_light_sc";
};
class rhsusf_acc_anpeq15_bk_light_sc: rhsusf_acc_anpeq15_bk_light
{
  rhs_acc_combo = "";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_laser_sc";
};
class rhsusf_acc_anpeq15_bk_laser_sc: rhsusf_acc_anpeq15_bk_laser
{
  scope = 1;
  scopeArsenal = 0;
  rhs_acc_combo = "";
  author = "Red Hammer Studios";
  model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_sc";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_light_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_sc";
};
class rhsusf_acc_anpeq15_sc: rhsusf_acc_anpeq15
{
  rhs_acc_combo = "";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_laser_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_light_sc";
};
class rhsusf_acc_anpeq15_light_sc: rhsusf_acc_anpeq15_light
{
  rhs_acc_combo = "";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_laser_sc";
};
class rhsusf_acc_anpeq15_laser_sc: rhsusf_acc_anpeq15_laser
{
  scope = 1;
  scopeArsenal = 0;
  rhs_acc_combo = "";
  author = "Red Hammer Studios";
  model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_sc";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_light_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_sc";
};
class rhsusf_acc_anpeq15_wmx_sc: rhsusf_acc_anpeq15_wmx
{
  rhs_acc_combo = "";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_wmx_laser_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_wmx_light_sc";
};
class rhsusf_acc_anpeq15_wmx_light_sc: rhsusf_acc_anpeq15_wmx_light
{
  rhs_acc_combo = "";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_wmx_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_wmx_laser_sc";
};
class rhsusf_acc_anpeq15_wmx_laser_sc: rhsusf_acc_anpeq15_wmx_laser
{
  scope = 1;
  scopeArsenal = 0;
  rhs_acc_combo = "";
  author = "Red Hammer Studios";
  model = "\rhsusf\addons\rhsusf_weapons\acc\flashlight\WMX\WMX_A3_side_sc";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_wmx_light_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_wmx_sc";
};
class rhsusf_acc_anpeq15_top_sc: rhsusf_acc_anpeq15_top
{
  rhs_acc_combo = "";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_top_red_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_top_red_sc";
};
class rhsusf_acc_anpeq15_top_red_sc: rhsusf_acc_anpeq15_top_red
{
  scope = 1;
  scopeArsenal = 0;
  rhs_acc_combo = "";
  author = "Red Hammer Studios";
  model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_top_single_sc";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_top_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_top_sc";
};
class rhsusf_acc_anpeq15_bk_top_sc: rhsusf_acc_anpeq15_bk_top
{
  rhs_acc_combo = "";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_top_red_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_top_red_sc";
};
class rhsusf_acc_anpeq15_bk_top_red_sc: rhsusf_acc_anpeq15_bk_top_red
{
  scope = 1;
  scopeArsenal = 0;
  rhs_acc_combo = "";
  author = "Red Hammer Studios";
  model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ15\PEQ15_A3_BK_top_single_sc";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq15_bk_top_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq15_bk_top_sc";
};
class rhsusf_acc_anpeq16a_top_sc: rhsusf_acc_anpeq16a_top
{
  scope = 1;
  scopeArsenal = 0;
  rhs_acc_combo = "";
  author = "Red Hammer Studios";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_top_green_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_light_top_sc";
};
class rhsusf_acc_anpeq16a_light_top_sc: rhsusf_acc_anpeq16a_light_top
{
  scope = 1;
  scopeArsenal = 0;
  rhs_acc_combo = "";
  author = "Red Hammer Studios";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_top_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_top_green_sc";
};
class rhsusf_acc_anpeq16a_top_green_sc: rhsusf_acc_anpeq16a_top_green
{
  scope = 1;
  scopeArsenal = 0;
  rhs_acc_combo = "";
  author = "Red Hammer Studios";
  model = "\rhsusf\addons\rhsusf_weapons\acc\lasers\ANPEQ16\peq16a_top_sc";
  MRT_SwitchItemNextClass="rhsusf_acc_anpeq16a_light_top_sc";
  MRT_SwitchItemPrevClass="rhsusf_acc_anpeq16a_top_sc";
};
class rhs_acc_2dpZenit: acc_flashlight
{
  class ItemInfo: ItemInfo
  {
    class FlashLight: FlashLight
    {
      color[]={600,750,900};
      ambient[]={10,7.5,5};
      position="flashdir";
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
class rhs_acc_perst1ik: acc_pointer_IR
{
  MRT_SwitchItemNextClass="rhs_acc_perst1ik_green";
  MRT_SwitchItemPrevClass="rhs_acc_perst1ik_green";
  MRT_switchItemHintText = "IR Laser";
};
class rhs_acc_perst1ik_green: rhs_acc_perst1ik
{
  MRT_SwitchItemNextClass="rhs_acc_perst1ik";
  MRT_SwitchItemPrevClass="rhs_acc_perst1ik";
  MRT_switchItemHintText = "Laser";
  ACE_laserpointer = 2;
  scope = 1;
  class ItemInfo: InventoryFlashLightItem_Base_F
  {
    class FlashLight
    {
      color[]={0,0,0};
      ambient[]={0,0,0};
      intensity=0;
      size=0;
      innerAngle=0;
      outerAngle=0;
      coneFadeCoef=5;
      position="laser dir";
      direction="laser";
      useFlare=0;
      flareSize=0;
      flareMaxDistance="100.0f";
      dayLight=0;
      class Attenuation
      {
        start=0;
        constant=0;
        linear=0;
        quadratic=0;
        hardLimitStart=0;
        hardLimitEnd=0;
      };
      scale[]={0};
    };
    class Pointer
    {
      irLaserPos = "laser pos";
      irLaserEnd = "laser dir";
      irDistance = 5;
    };
  };
};
class rhs_acc_perst1ik_ris: rhs_acc_perst1ik
{
  MRT_SwitchItemNextClass="rhs_acc_perst1ik_ris_green";
  MRT_SwitchItemPrevClass="rhs_acc_perst1ik_ris_green";
  MRT_switchItemHintText = "IR Laser";
};
class rhs_acc_perst1ik_ris_green: rhs_acc_perst1ik_ris
{
  MRT_SwitchItemNextClass="rhs_acc_perst1ik_ris";
  MRT_SwitchItemPrevClass="rhs_acc_perst1ik_ris_green";
  MRT_switchItemHintText = "Laser";
  ACE_laserpointer = 2;
  scope = 1;
  class ItemInfo: InventoryFlashLightItem_Base_F
  {
    class FlashLight
    {
      color[]={0,0,0};
      ambient[]={0,0,0};
      intensity=0;
      size=0;
      innerAngle=0;
      outerAngle=0;
      coneFadeCoef=5;
      position="laser dir";
      direction="laser";
      useFlare=0;
      flareSize=0;
      flareMaxDistance="100.0f";
      dayLight=0;
      class Attenuation
      {
        start=0;
        constant=0;
        linear=0;
        quadratic=0;
        hardLimitStart=0;
        hardLimitEnd=0;
      };
      scale[]={0};
    };
    class Pointer
    {
      irLaserPos = "laser pos";
      irLaserEnd = "laser dir";
      irDistance = 5;
    };
  };
};
