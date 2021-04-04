class B_AssaultPackSpec_Base: Bag_Base
{
  author = "AveryTheKitty";
  mapSize = 0.45;
  model = "\A3\Characters_F_EPA\BLUFOR\backpack_kerry.p3d";
  hiddenSelections[] = {"camo1","camo2"};
  hiddenSelectionsTextures[] = {"\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_compact_rgr_CO.paa","x\APM\addons\Equipment\Data\vests_rgr_CO.paa"};
  maximumLoad = 180;
  mass = 25;
};
class B_AssaultPackSpec_blk: B_AssaultPackSpec_Base
{
  author = "AveryTheKitty";
  scope = 2;
  picture = "x\APM\addons\Equipment\Data\Icons\VSM_Black.paa";
  displayName = "Assault Pack (Black, Expanded)";
  hiddenSelectionsTextures[] = {"MLO_Ghost\Data\VSM_black_compact.paa","MLO_Ghost\Data\VSM_Black_Vest.paa"};
};
class B_AssaultPackSpec_OD: B_AssaultPackSpec_Base
{
  author = "AveryTheKitty";
  scope = 2;
  picture = "\VSM_OGA\Data\Icons\VSM_OGA_OD.paa";
  displayName = "Assault Pack (OD, Expanded)";
  hiddenSelectionsTextures[] = {"VSM_OGA\Data\VSM_OGA_OD_compact.paa","VSM_OGA\Data\VSM_OGA_OD_Vest.paa"};
};
class B_TacticalPack_rgr: B_TacticalPack_Base
{
  hiddenSelectionsTextures[] = {"x\APM\addons\Equipment\Data\backpack_small_rgr_CO.paa"};
  picture = "x\APM\addons\Equipment\Data\UI\icon_B_TacticalPack_rgr_CA.paa";
};
class MLO_Black_Backpack_AssaultPack: B_AssaultPack_Base
{
  displayName = "Assault Pack (Black)";
};
class MLO_Black_Backpack_Kitbag: B_Kitbag_Base
{
  displayName = "Kitbag (Black)";
};
class MLO_Black_Backpack_Carryall: B_Carryall_Base
{
  displayName = "Carryall Backpack (Black)";
};
