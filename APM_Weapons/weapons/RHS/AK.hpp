class rhs_weap_ak74m_Base_F: Rifle_Base_F
{
  recoil = "recoil_aks";
  class Single: Mode_SemiAuto
  {
    dispersion = "((2.2) * 0.00029088)";
  };
  class FullAuto: Mode_FullAuto
  {
    dispersion = "((2.2) * 0.00029088)";
  };
};
class rhs_weap_ak74m: rhs_weap_ak74m_Base_F
{
  class Single;
  class FullAuto;
};
class rhs_weap_ak74mr: rhs_weap_ak74m
{
  class Single: Single
  {
    dispersion = "((1.7) * 0.00029088)";
  };
  class FullAuto: FullAuto
  {
    dispersion = "((1.7) * 0.00029088)";
  };
};
class rhs_weap_akm: rhs_weap_ak74m
{
  class Single: Single
  {
    dispersion = "((3.2) * 0.00029088)";
  };
  class FullAuto: FullAuto
  {
    dispersion = "((3.2) * 0.00029088)";
  };
};
class rhs_weap_ak103_base: rhs_weap_akm
{
  class Single: Single
  {
    dispersion = "((2.9) * 0.00029088)";
  };
  class Burst: Mode_Burst
  {
    dispersion = "((2.9) * 0.00029088)";
  };
  class FullAuto: FullAuto
  {
    dispersion = "((2.9) * 0.00029088)";
  };
};
class rhs_weap_ak104: rhs_weap_ak103_base
{
  ACE_barrelLength = 314;
};
class rhs_weap_ak105: rhs_weap_ak74m
{
  ACE_barrelLength = 314;
};
class rhs_weap_asval: rhs_weap_ak74m
{
  class Single: Single
  {
    dispersion = "((1.6) * 0.00029088)";
  };
  class FullAuto: FullAuto
  {
    dispersion = "((1.6) * 0.00029088)";
  };
};
class rhs_weap_vss: rhs_weap_asval
{
  class Single: Single
  {
    dispersion = "((1.2) * 0.00029088)";
  };
  class FullAuto: FullAuto
  {
    dispersion = "((1.2) * 0.00029088)";
  };
};
