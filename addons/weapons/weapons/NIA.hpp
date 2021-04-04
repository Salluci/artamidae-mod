#include "NIA\FAL.hpp"
#include "NIA\AWM.hpp"
#include "NIA\SAW.hpp"
#include "NIA\HoneyBadger.hpp"
#include "NIA\M60.hpp"
#include "NIA\ACR.hpp"
#include "NIA\AK.hpp"
#include "NIA\G3.hpp"
#include "NIA\M16.hpp"
#include "NIA\G36.hpp"
#include "NIA\MP5.hpp"

class hlc_ar15_base: Rifle_Base_F
{
  recoil = "recoil_ar15";
};
class hlc_rifle_bcmjack: hlc_ar15_base
{
  class WeaponSlotsInfo;
};
class hlc_rifle_bcmblackjack: hlc_rifle_bcmjack
{
  magazines[] = {"hlc_30rnd_556x45_EPR"};
  magazineWell[] = {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
  recoil = "recoil_ar15";
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: asdg_MuzzleSlot_556
    {
      iconPosition[] = {0,0.45};
      iconScale = 0.2;
    };
  };
};
class hlc_mg42_base;
class hlc_lmg_mg3: hlc_mg42_base
{
  magazineWell[] = {CBA_762x51_MG3};
};
class HLC_bipod_UTGShooters: bipod_01_F_snd
{
  picture = "\a3\Weapons_F_Mark\Data\UI\icon_bipod_01_F_blk_ca.paa";
  class ItemInfo;
};
class hlc_grip_AFG2: HLC_bipod_UTGShooters
{
  picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_grip2_ca.paa";
  scope = 2;
  weaponInfoType="RHS_Gripod2";
  inertia=-0.2;
  class ItemInfo: ItemInfo
  {
    mass=1.58125;
  };
};
class hlc_grip_PMVFG: HLC_bipod_UTGShooters
{
  picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_kac_grip_ca.paa";
  scope = 2;
  weaponInfoType="RHS_Gripod3";
  inertia=-0.2;
  class ItemInfo: ItemInfo
  {
    mass=1.58125;
  };
};
class hlc_grip_SAW_Grip1: bipod_01_F_snd
{
  picture = "\rhsusf\addons\rhsusf_inventoryicons\data\accessories\rhsusf_acc_grip4_ca.paa";
  scope = 2;
  weaponInfoType="RHS_Gripod1";
  inertia=-0.2;
  class ItemInfo: ItemInfo
  {
    mass=1.58125;
  };
};
class hlc_grip_SAW_Grip2: hlc_grip_SAW_Grip1
{
  scope = 2;
  displayName="SAW Pistol Grip (Tan)";
};
