class rhs_weap_m14ebrri;
class rhs_weap_sr25: rhs_weap_m14ebrri
{
  ace_overheating_mrbs = 2846;
  recoil = "recoil_dmr_03"; //SR-25 recoil tweak
  class WeaponSlotsInfo;
};
class rhs_weap_sr25_ec: rhs_weap_sr25
{
  class WeaponSlotsInfo;
};
class rhs_weap_m14_base: srifle_EBR_F
{
  ace_overheating_mrbs = 1423;
  recoil = "recoil_dmr_06";
};
class rhsusf_weap_m1911a1: hgun_ACPC2_F
{
  class Single: Single
  {
    __ROF(400);
  };
};
class rhs_weap_SCAR_Base: arifle_MX_Base_F
{
  class Single: Mode_SemiAuto
  {
    __ROF(650);
  };
  class FullAuto: Mode_FullAuto
  {
    __ROF(650);
  };
};
class rhs_weap_SCAR_H_base: rhs_weap_SCAR_Base
{
  class Single: Single
  {
    __ROF(650);
  };
  class FullAuto: FullAuto
  {
    __ROF(650);
  };
};
class rhs_weap_SCAR_H_CQC_Base: rhs_weap_SCAR_H_Base
{
  ace_overheating_mrbs = 2000;
  recoil = "recoil_scarh_cqc";
  class Single: Single
  {
    __MOA(2.3);
    __ROF(650);
  };
  class FullAuto: FullAuto
  {
    __MOA(2.3);
    __ROF(650);
  };
};
class rhs_weap_SCAR_H_STD_Base: rhs_weap_SCAR_H_Base
{
  ace_overheating_mrbs = 2200;
  recoil = "recoil_scarh_std";
  class Single: Single
  {
    __MOA(1.7);
    __ROF(650);
  };
  class FullAuto: FullAuto
  {
    __MOA(1.7);
    __ROF(650);
  };
};
class rhs_weap_SCAR_H_LB_Base: rhs_weap_SCAR_H_Base
{
  ace_overheating_mrbs = 2400;
  recoil = "recoil_scarh_lb";
  class Single: Single
  {
    __MOA(1.2);
    __ROF(650);
  };
  class FullAuto: FullAuto
  {
    __MOA(1.2);
    __ROF(650);
  };
};
class rhsusf_weap_MP7A1_base_f: SMG_02_base_F
{
  ace_overheating_mrbs = 576;
  inertia = 0.3;
};
class rhs_weap_M249_base: LMG_Mk200_F
{
  ace_overheating_mrbs = 5850;
  magazineWell[] = {"CBA_556x45_MINIMI", "CBA_556x45_STANAG"};
};
class rhs_weap_saw_base: Rifle_Base_F
{
  ace_overheating_mrbs = 5850;
};
class rhs_weap_lmg_minimipara: rhs_weap_saw_base
{
  magazineWell[] = {"CBA_556x45_MINIMI", "CBA_556x45_STANAG"};
};
class rhs_weap_m240_base: rhs_weap_M249_base
{
  ace_overheating_mrbs = 2962;
  magazineWell[] = {"CBA_762x51_LINKS"};
  UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
  class manual: Mode_FullAuto
  {
    sounds[] = {"StandardSound","SilencedSound"};
  };
};
class rhs_weap_m79: Rifle_Base_F
{
  magazineWell[] = {"CBA_40mm_M203","CBA_40mm_EGLM"};
};
class rhs_weap_mg42_base: Rifle_Base_F
{
  magazineWell[] = {"CBA_792x57_LINKS"};
  UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
};
class rhs_weap_vhs2_base: Rifle_Base_F
{
  class VHS_BG: UGL_F
  {
    magazineWell[] = {"CBA_40mm_M203","CBA_40mm_EGLM"};
  };
};
class rhsusf_weap_glock17g4: hgun_P07_F
{
  class Single: Single
  {
    __ROF(705);
  };
};
class rhs_weap_g36_base;
class rhs_weap_g36c: rhs_weap_g36_base
{
  handanim[] = {"OFP2_ManSkeleton","hlc_wp_g36\anim\handpose_ar18.rtm"};
};
class rhs_weap_pya: hgun_Rook40_F
{
  modes[] = {"Single"};
};
#include "RHS\AK.hpp"
#include "RHS\AR15.hpp"
#include "RHS\Sniper.hpp"
#include "RHS\Pointer.hpp"
