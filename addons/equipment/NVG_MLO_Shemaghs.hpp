class VSM_Shemagh_Blk_NVG: ACE_NVG_Wide
{
  author="LinkIsParking";
  scope=2;
  displayname="[VSM] Scarf (Black)";
  model="x\APM\addons\Equipment\data\G_Shemagh.p3d";
  modelOptics = "\A3\Weapons_F\empty";
  visionMode[] = {"Normal","Normal"};
  picture = "\VSM_OGA\Data\Icons\VSM_OGA_Grey.paa";
  hiddenSelections[]=
  {
    "camo"
  };
  hiddenSelectionsTextures[]=
  {
    "x\APM\addons\Equipment\Data\VSM_Shemagh_Black_co"
  };
  class ItemInfo: ItemInfo
  {
    type = 616;
    hmdType = 0;
    mass = 0;
    uniformmodel="x\APM\addons\Equipment\data\G_Shemagh.p3d";
    modelOff="x\APM\addons\Equipment\data\G_Shemagh.p3d";
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "x\APM\addons\Equipment\Data\VSM_Shemagh_Black_co"
    };
  };
};
class VSM_Shemagh_Coyote_NVG: VSM_Shemagh_Blk_NVG
{
  displayName = "[VSM] Scarf (Coyote)";
  picture="\VSM_OGA\Data\Icons\VSM_OGA.paa";
  hiddenSelectionsTextures[]=
  {
    "x\APM\addons\Equipment\Data\do_equip_co"
  };
  class ItemInfo: ItemInfo
  {
    hiddenSelectionsTextures[]=
    {
      "x\APM\addons\Equipment\Data\do_equip_co"
    };
  };
};
class VSM_Shemagh_OD_NVG: VSM_Shemagh_Blk_NVG
{
  displayName = "[VSM] Scarf (OD)";
  picture = "\VSM_OGA\Data\Icons\VSM_OGA_OD.paa";
  hiddenSelectionsTextures[]=
  {
    "x\APM\addons\Equipment\Data\VSM_Shemagh_Olive_co"
  };
  class ItemInfo: ItemInfo
  {
    hiddenSelectionsTextures[]=
    {
      "x\APM\addons\Equipment\Data\VSM_Shemagh_Olive_co"
    };
  };
};
