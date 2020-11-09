class VSM_Shemagh_Blk_NVG: ACE_NVG_Wide
{
  author="LinkIsParking";
  scope=2;
  displayname="[VSM] Scarf (Black Plain)";
  model="\WAINO\data\W_smg.p3d";
  modelOptics = "\A3\Weapons_F\empty";
  visionMode[] = {"Normal","Normal"};
  picture = "\VSM_OGA\Data\Icons\VSM_OGA_Grey.paa";
  hiddenSelections[]=
  {
    "camo"
  };
  hiddenSelectionsTextures[]=
  {
    "\VSM_Shemagh\Textures\VSM_Shemagh_Black_Plain"
  };
  class ItemInfo: ItemInfo
  {
    type = 616;
    hmdType = 0;
    mass = 0;
    uniformModel="\WAINO\data\W_smg.p3d";
    modelOff="\WAINO\data\W_smg.p3d";
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\VSM_Shemagh\Textures\VSM_Shemagh_Black_Plain"
    };
  };
};
class VSM_Shemagh_Bl_NVG: VSM_Shemagh_Blk_NVG
{
  displayName = "[VSM] Scarf (Black)";
  hiddenSelectionsTextures[]=
  {
    "\VSM_Shemagh\Textures\VSM_Shemagh_Black"
  };
  class ItemInfo: ItemInfo
  {
    hiddenSelectionsTextures[]=
    {
      "\VSM_Shemagh\Textures\VSM_Shemagh_Black"
    };
  };
};
class VSM_Shemagh_Tan_Plain_NVG: VSM_Shemagh_Blk_NVG
{
  displayName = "[VSM] Scarf (Tan Plain)";
  picture="\VSM_OGA\Data\Icons\VSM_OGA.paa";
  hiddenSelectionsTextures[]=
  {
    "\VSM_Shemagh\Textures\VSM_Shemagh_Tan_Plain"
  };
  class ItemInfo: ItemInfo
  {
    hiddenSelectionsTextures[]=
    {
      "\VSM_Shemagh\Textures\VSM_Shemagh_Tan_Plain"
    };
  };
};
class VSM_Shemagh_Tan_NVG: VSM_Shemagh_Blk_NVG
{
  displayName = "[VSM] Scarf (Tan)";
  picture="\VSM_OGA\Data\Icons\VSM_OGA.paa";
  hiddenSelectionsTextures[]=
  {
    "\VSM_Shemagh\Textures\VSM_Shemagh_Tan"
  };
  class ItemInfo: ItemInfo
  {
    hiddenSelectionsTextures[]=
    {
      "\VSM_Shemagh\Textures\VSM_Shemagh_Tan"
    };
  };
};
class VSM_Shemagh_OD_Plain_NVG: VSM_Shemagh_Blk_NVG
{
  displayName = "[VSM] Scarf (OD Plain)";
  picture = "\VSM_OGA\Data\Icons\VSM_OGA_OD.paa";
  hiddenSelectionsTextures[]=
  {
    "\VSM_Shemagh\Textures\VSM_Shemagh_Olive_Plain"
  };
  class ItemInfo: ItemInfo
  {
    hiddenSelectionsTextures[]=
    {
      "\VSM_Shemagh\Textures\VSM_Shemagh_Olive_Plain"
    };
  };
};
class VSM_Shemagh_OD_NVG: VSM_Shemagh_Blk_NVG
{
  displayName = "[VSM] Scarf (OD)";
  picture = "\VSM_OGA\Data\Icons\VSM_OGA_OD.paa";
  hiddenSelectionsTextures[]=
  {
    "\VSM_Shemagh\Textures\VSM_Shemagh_Olive"
  };
  class ItemInfo: ItemInfo
  {
    hiddenSelectionsTextures[]=
    {
      "\VSM_Shemagh\Textures\VSM_Shemagh_Olive"
    };
  };
};
