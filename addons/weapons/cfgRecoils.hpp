class CfgRecoils
{
  class recoil_default;
  class recoil_scarh_cqc: recoil_default
  {
    muzzleOuter[] = {0.26,0.975,0.275,0.275};
    kickBack[] = {0.0165,0.0465};
    temporary = 0.0142;
  };
  class recoil_scarh_std: recoil_default
  {
    muzzleOuter[] = {0.26,0.775,0.375,0.275};
    kickBack[] = {0.0165,0.04365};
    temporary = 0.0132;
  };
  class recoil_scarh_lb: recoil_default
  {
    muzzleOuter[] = {0.26,0.755,0.395,0.275};
    kickBack[] = {0.0165,0.0465};
    temporary = 0.0114;
  };
  class recoil_acr556: recoil_default
  {
    muzzleOuter[]={0.08,0.8,0.15,0.3};
    kickBack[]={0.0095,0.0275};
    temporary=0.01;
  };
  class recoil_acr68: recoil_default
  {
    muzzleOuter[]={0.15,1.3,0.3,0.4};
    kickBack[]={0.018,0.054};
    temporary=0.01;
  };
  class recoil_zafir: recoil_default
	{
		muzzleOuter[]={0.3,0.6,0.25,0.4};
		kickBack[]={0.028,0.038};
		temporary=0.008;
	};
  class recoil_mk48: recoil_default
  {
    muzzleOuter[] = {0.35,0.75,0.5,0.2};
    kickBack[] = {0.019,0.028};
    temporary = 0.005;
  };
  class recoil_spar: recoil_default
  {
    muzzleOuter[]={0.1,0.62,0.2,0.32};
    kickBack[]={0.02,0.045};
    temporary=0.012;
  };
  class recoil_spar_lsw: recoil_default
  {
    muzzleOuter[]={0.1,0.45,0.2,0.3};
    kickBack[]={0.018,0.04};
    temporary=0.007;
  };
  class recoil_ar15: recoil_default
  {
    muzzleOuter[]={0.1,0.6,0.2,0.2};
    kickBack[]={0.01,0.03};
    temporary=0.01;
  };
  class recoil_mx: recoil_default
  {
    muzzleOuter[] = {0.26,0.775,0.375,0.275};
    kickBack[] = {0.0165,0.04365};
    temporary = 0.01;
  };
  class recoil_mxc: recoil_default
  {
    muzzleOuter[] = {0.26,0.975,0.275,0.275};
    kickBack[] = {0.0165,0.0465};
    temporary = 0.01;
  };
  class recoil_mxm: recoil_default
  {
    muzzleOuter[] = {0.26,0.755,0.395,0.275};
    kickBack[] = {0.0165,0.0465};
    temporary = 0.01;
  };
  class recoil_sw: recoil_default
  {
    muzzleOuter[] = {0.26,0.755,0.395,0.275};
    kickBack[] = {0.0165,0.0465};
    temporary = 0.01;
  };
  class recoil_MSBS65: recoil_default
  {
    muzzleOuter[] = {0.35,0.55,0.25,0.28};
    kickBack[] = {0.024,0.048};
    temporary = 0.018;
  };
  class recoil_ak12: recoil_default
  {
    muzzleOuter[]={0.3,0.8,0.4,0.3};
    kickBack[]={0.035,0.07};
    temporary=0.01;
  };
  class recoil_ebr: recoil_default
  {
    kickBack[] = {"0.02*1.4","0.04*1.4"};
  };
  class recoil_dmr_06: recoil_default
  {
    kickBack[] = {"0.035*1.4","0.07*1.4"};
  };
  class recoil_dmr_02: recoil_default
  {
    kickBack[] = {"0.05*1.4","0.07*1.4"};
  };
  class recoil_pistol_p07: recoil_default
  {
    muzzleOuter[] = {"0.22*0.2","1*1","0.31*1","0.3*1"};
    kickBack[] = {"0.025*1.4","0.045*1.4"};
    temporary = "0.017*1.2";
  };
  class recoil_pistol_2011: recoil_default
  {
    muzzleOuter[] = {"0.14*0.2","1*1","0.27*1","0.27*1"};
    kickBack[] = {"0.03*1.4","0.045*1.4"};
    temporary = "0.017*1.2";
  };
  class recoil_pistol_acpc2: recoil_default
  {
      muzzleOuter[] = {"0.2*0.2","1.5*1","0.2*1","0.3*1"};
      kickBack[] = {"0.04*1.4","0.08*1.4"};
      temporary = "0.026*1.2";
  };
  class recoil_pistol_4five: recoil_default
  {
      muzzleOuter[] = {"0.2*0.2","1.5*1","0.2*1","0.3*1"};
      kickBack[] = {"0.04*1.4","0.08*1.4"};
      temporary = "0.032*1.2";
  };
  class recoil_mmg_01: recoil_default
  {
    muzzleOuter[] = {"0.6*0.15","1.3*0.8","0.8*0.7","0.3*0.7"};
    kickBack[] = {"0.02*1.2","0.08*1.2"};
    temporary = "0.01*1.1";
  };
  class recoil_mmg_02: recoil_default
  {
    muzzleOuter[] = {"0.45*0.15","1.4*0.7","0.6*1","0.35*0.72"};
    kickBack[] = {"0.04*1.1","0.08*1.2"};
    temporary = "0.01*1.1";
  };
};
/* Vanilla recoils for reference
class recoil_mx: recoil_default
{
  muzzleOuter[] = {0.06,1,0.4,0.3};
  kickBack[] = {0.028,0.056};
  temporary = 0.012;
};
class recoil_pdw: recoil_default
{
    muzzleOuter[] = {"0.2*0.2","1*1","0.3*1","0.3*1"};
    kickBack[] = {"0.02*1.4","0.04*1.4"};
    temporary = "0.02*1.2";
};
class recoil_pistol_p07: recoil_default
{
    muzzleOuter[] = {"0.2*0.2","1*1","0.2*1","0.3*1"};
    kickBack[] = {"0.03*1.4","0.06*1.4"};
    temporary = "0.03*1.2";
};
class recoil_pistol_acpc2: recoil_default
{
    muzzleOuter[] = {"0.2*0.2","1.5*1","0.2*1","0.3*1"};
    kickBack[] = {"0.04*1.4","0.08*1.4"};
    temporary = "0.04*1.2";
};
class recoil_pistol_4five: recoil_default
{
    muzzleOuter[] = {"0.2*0.2","1.5*1","0.2*1","0.3*1"};
    kickBack[] = {"0.04*1.4","0.08*1.4"};
    temporary = "0.06*1.2";
};
class recoil_mxc: recoil_default
{
  muzzleOuter[] = {0.06,1.2,0.4,0.3};
  kickBack[] = {0.042,0.084};
  temporary = 0.018;
};
class recoil_mxm: recoil_default
{
  muzzleOuter[] = {0.06,0.8,0.4,0.3};
  kickBack[] = {0.028,0.056};
  temporary = 0.012;
};
class recoil_sw: recoil_default
{
  muzzleOuter[] = {0.06,0.8,0.5*1,0.2*1};
  kickBack[] = {0.028,0.056};
  temporary = 0.012;
};
class recoil_spar_dmr: recoil_default
{
  muzzleOuter[]={0.4,1.5,0.5,0.6};
  kickBack[]={0.04,0.08};
  temporary=0.01;
};
class recoil_spar: recoil_default
{
  muzzleOuter[]={0.1,0.6,0.2,0.2};
  kickBack[]={0.01,0.03};
  temporary=0.01;
};
class recoil_spar_lsw: recoil_default
{
  muzzleOuter[]={0.1,0.4,0.3,0.2};
  kickBack[]={0.01,0.03};
  temporary=0.005;
};
class recoil_ak12: recoil_default
{
  muzzleOuter[]={0.3,0.8,0.4,0.3};
  kickBack[]={0.03,0.06};
  temporary=0.005;
};
class recoil_akm: recoil_default
{
  muzzleOuter[]={0.3,1,0.3,0.4};
  kickBack[]={0.04,0.08};
  temporary=0.01;
};
*/
