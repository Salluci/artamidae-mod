class O_Skua_LSV_Unarmed: O_LSV_02_unarmed_F
{
  faction = "O_faction_SkuaIntl";
  crew = "O_Contractor_Skua_AR3";
  hiddenSelectionsTextures[] =
  {
    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
  };
  textureList[] = {"Black",1};
  animationList[] = {"Unarmed_Doors_Hide",1};
};
class O_Skua_LSV_M134: O_LSV_02_armed_F
{
  faction = "O_faction_SkuaIntl";
  crew = "O_Contractor_Skua_AR2";
  hiddenSelectionsTextures[] =
  {
    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
  };
  textureList[] = {"Black",1};
  animationList[] = {"Unarmed_Doors_Hide",1};
};
class O_Skua_LSV_Metis: O_LSV_02_AT_F
{
  faction = "O_faction_SkuaIntl";
  crew = "O_Contractor_Skua_HAT1";
  hiddenSelectionsTextures[] =
  {
    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
    "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa",
    "\A3\Weapons_F_Tank\Launchers\Vorona\Data\Vorona_green_F_CO.paa"
  };
  textureList[] = {"Black",1};
  animationList[] = {"Unarmed_Doors_Hide",1};
};
class O_Skua_PandurII: I_APC_Wheeled_03_cannon_F
{
  side = 0;
  faction = "O_faction_SkuaIntl";
  crew = "O_Contractor_Skua_R1";
  textureList[] = {"Charcoal",1};
  hiddenSelectionsTextures[] =
  {
    "x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_charcoal_co.paa",
    "x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext2_charcoal_co.paa",
    "x\APM\addons\Vehicles\data\apc_wheeled_03\RCWS30_charcoal_co.paa",
    "x\APM\addons\Vehicles\data\apc_wheeled_03\apc_wheeled_03_ext_alpha_charcoal_co.paa",
    "a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
    "x\APM\addons\Vehicles\data\cage_charcoal.paa"
  };
};
class O_Skua_Kajman: O_Heli_Attack_02_dynamicloadout_F
{
  faction = "O_faction_SkuaIntl";
  crew = "O_Contractor_Skua_Pilot";
  typicalCargo[] = {"O_Contractor_Skua_R2"};
  textureList[] = {"Black",1};
  hiddenSelectionsTextures[] =
  {
    "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_black_CO.paa",
    "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_black_CO.paa"
  };
};
class O_Skua_AH6M: RHS_MELB_AH6M
{
  side = 0;
  crew = "O_Contractor_Skua_Pilot";
  faction = "O_faction_SkuaIntl";
};
class O_Skua_MH6M: RHS_MELB_MH6M
{
  side = 0;
  crew = "O_Contractor_Skua_Pilot";
  faction = "O_faction_SkuaIntl";
};
class O_Skua_T14K: O_MBT_04_command_F
{
  faction = "O_faction_SkuaIntl";
  crew = "O_Contractor_Skua_R1";
  textureList[] = {"Grey",1};
  hiddenSelectionsTextures[] =
  {
    "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_1_CO.paa",
    "a3\Armor_F_Tank\MBT_04\Data\MBT_04_exterior_2_CO.paa",
    "A3\Armor_F\Data\camonet_CSAT_Stripe_Desert_CO.paa"
  };
};
class O_Skua_Xian_Infantry: O_T_VTOL_02_infantry_dynamicLoadout_F
{
  faction = "O_faction_SkuaIntl";
  crew = "O_Contractor_Skua_Pilot";
  typicalCargo[] = {"O_Contractor_Skua_R2"};
  hiddenSelectionsTextures[] =
  {
    "\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT01_CO.paa",
    "\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT02_CO.paa",
    "\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_L_CO.paa",
    "\A3\Air_F_Exp\VTOL_02\Data\VTOL_02_EXT03_R_CO.paa"
  };
  textureList[] = {"Grey",1};
};
class O_Skua_A10D: B_Plane_CAS_01_dynamicLoadout_F
{
  side = 0;
  faction = "O_faction_SkuaIntl";
  crew = "O_Contractor_Skua_Pilot";
};
class O_Skua_Shikra: O_Plane_Fighter_02_F
{
  faction = "O_faction_SkuaIntl";
  crew = "O_Contractor_Skua_Pilot";
};
