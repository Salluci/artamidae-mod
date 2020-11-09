class rhs_weap_m4_Base: arifle_MX_Base_F
{
  recoil = "recoil_ar15";
  class Single: Mode_SemiAuto
  {
    dispersion="((2) * 0.00029088)";
  };
  class Burst: Mode_Burst
  {
    dispersion="((2) * 0.00029088)";
    reloadTime = "((60)/937)";
  };
  class FullAuto: Mode_FullAuto
  {
    dispersion="((2) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: asdg_MuzzleSlot_556
    {
      class compatibleItems: compatibleItems
      {
        muzzle_snds_M = 1;
      };
    };
  };
};
class rhs_weap_m4: rhs_weap_m4_Base
{
  ace_overheating_mrbs = 837;
  class Single: Single
  {
    dispersion="((2.5) * 0.00029088)";
  };
  class Burst: Burst
  {
    dispersion="((2.5) * 0.00029088)";
  };
};
class rhs_weap_m4a1: rhs_weap_m4_Base
{
  ace_overheating_mrbs = 1120;
  class Single: Single //Typical US Army GI M4A1 performance is 1-2 MOA.
  {
    dispersion="((2) * 0.00029088)";
  };
  class FullAuto: FullAuto
  {
    dispersion="((2) * 0.00029088)";
  };
  class WeaponSlotsInfo;
};

class rhs_weap_m27iar : rhs_weap_m4a1
{
  ace_overheating_mrbs = 1933;
  class Single: Single //Was made to be more accurate than Marine GI 3MOA M4A1.
  {
    dispersion="((1.9) * 0.00029088)";
  };
  class FullAuto: FullAuto
  {
    dispersion="((1.9) * 0.00029088)";
  };
};
class rhs_weap_m4a1_blockII: rhs_weap_m4a1
{
  ace_overheating_mrbs = 1691;
  class Single: Single //Ranger spec is 1.5MOA. Typically better.
  {
    dispersion="((1.12) * 0.00029088)";
    reloadTime = "((60)/857)";
  };
  class FullAuto: FullAuto
  {
    dispersion="((1.12) * 0.00029088)";
    reloadTime = "((60)/857)";
  };
  class WeaponSlotsInfo;
};

class rhs_weap_mk18: rhs_weap_m4a1_blockII
{
  ace_overheating_mrbs = 738;
  class Single: Single //Spec is 2MOA.
  {
    dispersion="((2.3) * 0.00029088)";
    reloadTime = "((60)/896)";
  };
  class FullAuto: FullAuto
  {
    dispersion="((2.3) * 0.00029088)";
    reloadTime = "((60)/896)";
  };
};
class rhs_weap_m16a4: rhs_weap_m4_Base
{
  ace_overheating_mrbs = 1327;
  class Single: Single
  {
    dispersion="((1.6) * 0.00029088)";
    reloadTime = "((60)/937)";
  };
  class Burst: Burst
  {
    dispersion="((1.6) * 0.00029088)";
    reloadTime = "((60)/937)";
  };
  class WeaponSlotsInfo;
};
class rhs_weap_m16a4_imod: rhs_weap_m16a4
{
  ace_overheating_mrbs = 1691;
  class Single: Single //DMR variant w/ aftermarket components.
  {
    dispersion="((1.27) * 0.00029088)";
  };
  class Burst: Burst
  {
    dispersion="((1.27) * 0.00029088)";
  };
};
class rhs_weap_m16a4_carryhandle_M203: rhs_weap_m16a4
{
  class Single;
  class Burst;
};
class rhs_weap_m16a4_imod_M203: rhs_weap_m16a4_carryhandle_M203
{
  ace_overheating_mrbs = 1691;
  class Single: Single
  {
    dispersion="((1.27) * 0.00029088)";
  };
  class Burst: Burst
  {
    dispersion="((1.27) * 0.00029088)";
  };
};
class rhs_weap_hk416d10: rhs_weap_m4a1
{
  ace_overheating_mrbs = 973;
  recoil = "recoil_ar15";
  class Single: Single
  {
    reloadTime = "((60)/750)";
    dispersion="((1.12) * 0.00029088)";
  };
  class Burst: Burst
  {
    reloadTime = "((60)/750)";
    dispersion="((1.12) * 0.00029088)";
  };
  class FullAuto: FullAuto
  {
    reloadTime = "((60)/750)";
    dispersion="((1.12) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    mass = 69;
    class MuzzleSlot: asdg_MuzzleSlot_556
    {
      class compatibleItems: compatibleItems
      {
        muzzle_snds_M = 1;
      };
    };
  };
};
class rhs_weap_hk416d145: rhs_weap_hk416d10
{
  ace_overheating_mrbs = 1892;
  class Single: Single
  {
    dispersion="((1.12) * 0.00029088)";
  };
  class FullAuto: FullAuto
  {
    dispersion="((1.12) * 0.00029088)";
  };
};
