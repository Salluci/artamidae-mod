class srifle_EBR_F;
class srifle_EBR_blk_F: srifle_EBR_F
{
  author="LinkIsParking";
  baseWeapon="srifle_EBR_blk_F";
  displayName="Mk14 Mod 1 EBR (Black)";
  hiddenSelectionsTextures[]=
  {
    "x\APM\addons\Equipment\Data\srifle_EBR_blk_F_1_CO.paa",
    "x\APM\addons\Equipment\Data\srifle_EBR_blk_F_2_CO.paa"
  };
  picture="x\APM\addons\Equipment\Data\UI\icon_srifle_EBR_blk_F_X_CA.paa";
};
class srifle_DMR_02_F;
class srifle_DMR_02_tna_F: srifle_DMR_02_F
{
  author="LinkIsParking";
  baseWeapon="srifle_DMR_02_tna_F";
  displayName = "Noreen ""Bad News"" ULR (Tropic)";
  hiddenSelectionsTextures[] = {"x\APM\addons\Equipment\Data\DMR_02_01_tna_CO.paa","x\APM\addons\Equipment\Data\DMR_02_02_tna_CO.paa"};
  picture = "x\APM\addons\Equipment\Data\UI\icon_srifle_DMR_02_tna_F_X_CA.paa";
};
class srifle_DMR_05_blk_F;
class srifle_DMR_05_ghex_F: srifle_DMR_05_blk_F
{
  author="LinkIsParking";
  baseWeapon="srifle_DMR_05_ghex_F";
  displayName = "Cyrus (Green Hex)";
  hiddenSelectionsTextures[] = {"x\APM\addons\Equipment\Data\DMR_05_01_ghex_CO.paa","x\APM\addons\Equipment\Data\DMR_05_02_ghex_CO.paa"};
  picture = "x\APM\addons\Equipment\Data\UI\icon_srifle_DMR_05_ghex_F_X_CA.paa";
};
class srifle_LRR_camo_F;
class srifle_LRR_sand_F: srifle_LRR_camo_F
{
  author="LinkIsParking";
  baseWeapon="srifle_LRR_sand_F";
  displayName = "M200 Intervention (Sand)";
  hiddenSelectionsTextures[]= {"x\APM\addons\Equipment\Data\srifle_m200_sand_F.paa"};
};
class LMG_Zafir_F;
class LMG_Zafir_blk_F: LMG_Zafir_F
{
  author="LinkIsParking";
  baseWeapon="LMG_Zafir_blk_F";
  displayName = "Negev NG7R (Black)";
  hiddenSelectionsTextures[] = {"x\APM\addons\Equipment\Data\LMG_Zafir_blk_F_01_CO.paa","x\APM\addons\Equipment\Data\LMG_Zafir_blk_F_02_CO.paa"};
  picture = "x\APM\addons\Equipment\Data\UI\icon_LMG_Zafir_black_F_X_ca.paa";
};
class LMG_Negev_F;
class LMG_Negev_blk_F: LMG_Negev_F
{
  author="LinkIsParking";
  baseWeapon="LMG_Negev_blk_F";
  displayName = "Negev NG7 (Black)";
  hiddenSelectionsTextures[] = {"x\APM\addons\Equipment\Data\LMG_Zafir_blk_F_01_CO.paa","x\APM\addons\Equipment\Data\LMG_Zafir_blk_F_02_CO.paa"};
  picture = "x\APM\addons\Equipment\Data\UI\icon_LMG_Zafir_black_F_X_ca.paa";
};
class MMG_01_hex_F;
class MMG_01_black_F: MMG_01_hex_F
{
    author = "LinkIsParking";
    baseWeapon = "MMG_01_black_F";
    displayName = "HK121 (Black)";
    picture = "x\APM\addons\Equipment\Data\UI\icon_MMG_01_black_F_X_CA.paa";
    hiddenSelectionsTextures[] = {"x\APM\addons\Equipment\Data\MMG_01_01_black_CO.paa","x\APM\addons\Equipment\Data\MMG_01_02_black_CO.paa","x\APM\addons\Equipment\Data\MMG_01_03_black_CO.paa"};
    class LinkedItems
    {
      class LinkedItemsUnder
      {
        slot = "UnderBarrelSlot";
        item = "bipod_02_F_blk";
      };
    };
};
class hgun_Pistol_heavy_01_green_F;
class hgun_Pistol_heavy_01_black_F: hgun_Pistol_heavy_01_green_F
{
  displayname="FNX-45 Tactical (Black)";
  hiddenSelectionsTextures[]=
  {
    "x\APM\addons\Equipment\data\45_BLK.paa"
  };
  baseweapon="hgun_Pistol_heavy_01_black_F";
};
class hgun_ACPC2_F;
class hgun_9mmC2_F;
class hgun_ACPC2_classic_F: hgun_ACPC2_F
{
  displayname="Custom Covert .45 (Classic)";
  hiddenSelectionsTextures[]=
  {
    "x\APM\addons\Equipment\data\ACP_CLA.paa"
  };
  baseweapon="hgun_ACPC2_classic_F";
};
class hgun_ACPC2_tan_F: hgun_ACPC2_F
{
  displayname="Custom Covert .45 (Tan)";
  hiddenSelectionsTextures[] = {"\A3\Weapons_F_Beta\Pistols\acpc2\data\Acpc2_co"};
  baseweapon="hgun_ACPC2_tan_F";
};
class hgun_9mmC2_tan_F: hgun_9mmC2_F
{
  displayName = "Custom Covert 9mm (Tan)";
  hiddenSelectionsTextures[] = {"\A3\Weapons_F_Beta\Pistols\acpc2\data\Acpc2_co"};
  baseweapon="hgun_9mmC2_tan_F";
};
class hgun_9mmC2_Classic_F: hgun_9mmC2_F
{
  displayName = "Custom Covert 9mm (Classic)";
  hiddenSelectionsTextures[]=
  {
    "x\APM\addons\Equipment\data\ACP_CLA.paa"
  };
  baseweapon="hgun_9mmC2_classic_F";
};
