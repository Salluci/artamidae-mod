class LOP_Weap_LeeEnfield: EBR_base_F
{
  magazineWell[] = {"CBA_303B_LeeEn"};
};
class UK3CB_Enfield: rhs_weap_XM2010_Base_F
{
  magazineWell[] = {"CBA_303B_LeeEn"};
};
class APM_weap_SR25C: rhs_weap_sr25
{
  magazines[] = {"APM_20Rnd_65C_AR10_EPR_Mag"};
  magazineWell[] = {"CBA_65C_AR10"};
  displayName = "SR-25C";
  descriptionShort = "Precision Rifle<br/>Caliber: 6.5x47mm Creedmoor";
  baseWeapon = "APM_weap_SR25C";
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    mass = 85.3;
  };
};
class APM_weap_SR25C_EC: rhs_weap_sr25_ec
{
  magazines[] = {"APM_20Rnd_65C_AR10_EPR_Mag"};
  magazineWell[] = {"CBA_65C_AR10"};
  displayName = "SR-25C (EC)";
  descriptionShort = "Precision Rifle<br/>Caliber: 6.5x47mm Creedmoor";
  baseWeapon = "APM_weap_SR25C_EC";
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    mass = 76.4;
    class MuzzleSlot: asdg_MuzzleSlot_65
    {};
  };
};
