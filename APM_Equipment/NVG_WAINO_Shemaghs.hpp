class W_SMG_Blk_NVG: ACE_NVG_Wide
{
  author="zabb";
  scope=2;
  displayname="WAINO Shemagh (Black)";
  model="\WAINO\data\W_smg.p3d";
  modelOptics = "\A3\Weapons_F\empty";
  visionMode[] = {"Normal","Normal"};
  picture = "\WAINO\data\UI_Shemagh_BK.paa";
  hiddenSelections[]=
  {
  };
  hiddenSelectionsTextures[]=
  {
  };
  class ItemInfo: ItemInfo
  {
    type = 616;
    hmdType = 0;
    mass = 0;
    uniformModel="\WAINO\data\W_smg.p3d";
    modelOff="\WAINO\data\W_smg.p3d";
  };
};
class W_SMG_Red_NVG: W_SMG_Blk_NVG
{
  displayname="WAINO Shemagh (Vermillion)";
  picture="\WAINO\data\UI_Shemagh_VM.paa";
  hiddenSelections[]=
  {
    "camo"
  };
  hiddenSelectionsTextures[]=
  {
    "\zabb\TACV1\do_equip_co_TN"
  };
  class ItemInfo: ItemInfo
  {
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\zabb\TACV1\do_equip_co_TN"
    };
  };
};
class WAINO_SMG_FT: W_SMG_Blk_NVG
{
  displayname="WAINO Shemagh (Tan/Foliage)";
  picture="\WAINO\data\UI_Shemagh_FT.paa";
  hiddenSelections[]=
  {
    "camo"
  };
  hiddenSelectionsTextures[]=
  {
    "\zabb\TACV1\do_equip_co_OD"
  };
  class ItemInfo: ItemInfo
  {
    hiddenSelections[]=
    {
      "camo"
    };
    hiddenSelectionsTextures[]=
    {
      "\zabb\TACV1\do_equip_co_OD"
    };
  };
};
