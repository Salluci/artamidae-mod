class rhs_weap_XM2010_Base_F: Rifle_Base_F
{
  magazineWell[] = {"CBA_300WM_AI"};
  class Single: Mode_SemiAuto
  {
    dispersion = "((0.6) * 0.00029088)";
  };
};
class rhs_weap_m24sws: rhs_weap_XM2010_Base_F
{
  magazineWell[] = {};
  class Single: Single
  {
    dispersion = "((1.1) * 0.00029088)";
  };
};
class rhs_weap_m40a5: rhs_weap_XM2010_Base_F
{
  magazineWell[] = {};
  class Single: Single
  {
    dispersion = "((1.3) * 0.00029088)";
  };
};
class rhs_weap_orsis_Base_F: Rifle_Base_F
{
  class Single: Mode_SemiAuto //Spec for T-5000 is 0.5MOA
  {
    dispersion="((0.5) * 0.00029088)";
  };
  magazines[] += {"apm_5rnd_338lm_ap_t5000", "apm_5rnd_338lm_300gr_t5000"};
};
