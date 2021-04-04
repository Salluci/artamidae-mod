class TRYK_U_B_ODTAN: Uniform_Base
{
  class ItemInfo;
};
class TRYK_U_B_ODTAN_Tshirt: Uniform_Base
{
  class ItemInfo;
};
class TRYK_U_B_OD_BLK: Uniform_Base
{
  class ItemInfo;
};
class TRYK_U_B_OD_BLK_2: Uniform_Base
{
  class ItemInfo;
};
class APM_CombatUniformTan: TRYK_U_B_ODTAN
{
  displayName = "[APM] Crye G3 (OD Tan)";
  class ItemInfo: ItemInfo
  {
    uniformClass = "B_APMMilTan_soldier_F";
    containerClass = "Supply70";
    mass = 35;
  };
};
class APM_CombatUniformTan_Rolled: TRYK_U_B_ODTAN_Tshirt
{
  displayName = "[APM] Crye G3 SS (OD Tan)";
  class ItemInfo: ItemInfo
  {
    uniformClass = "B_APMMilTan_soldier_SS_F"
    containerClass = "Supply70";
    mass = 35;
  };
};
class APM_CombatUniformBlack: TRYK_U_B_OD_BLK
{
  displayName = "[APM] Crye G3 (OD Black)";
  class ItemInfo: ItemInfo
  {
    uniformClass = "B_APMMilBlack_soldier_F";
    containerClass = "Supply70";
    mass = 35;
  };
};
class APM_CombatUniformBlack_Rolled: TRYK_U_B_OD_BLK_2
{
  displayName = "[APM] Crye G3 SS (OD Black)";
  class ItemInfo: ItemInfo
  {
    uniformClass = "B_APMMilBlack_soldier_SS_F"
    containerClass = "Supply70";
    mass = 35;
  };
};
