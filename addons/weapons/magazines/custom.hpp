//-------------"Universal" Magazines-------------
class APM_20Rnd_762x51_M80A1_EPR_Mag: 20Rnd_762x51_Mag
{
  ammo = "HLC_762x51_EPR";
  displayName = "7.62x51mm 20Rnd Mag (M80A1 EPR)";
  displayNameShort = "M80A1 EPR";
  mass = 12.13;
};
class APM_20Rnd_762x51_M61_AP_Mag: 20Rnd_762x51_Mag
{
  ammo = "HLC_762x51_AP";
  displayName = "7.62x51mm 20Rnd Mag (M61 AP)";
  displayNameShort = "M61 AP";
  mass = 12.78;
};





//-------------.50 Magazines-------------
class apm_10rnd_50bmg_amax_m107: rhsusf_mag_10Rnd_STD_50BMG_M33
{
  ammo = "ACE_127x99_Ball_AMAX";
  displayName = ".50 BMG 10Rnd M107 Mag (AMAX)";
  displayNameShort = "12.7mm AMAX";
};
class apm_10rnd_50bmg_api_m107: rhsusf_mag_10Rnd_STD_50BMG_M33
{
  ammo = "ACE_127x99_API";
  displayName = ".50 BMG 10Rnd M107 Mag (API)";
  displayNameShort = "12.7mm API";
};
class apm_5rnd_50bmg_heapi: 5Rnd_127x108_Mag
{
  ammo = "rhsusf_ammo_127x99_mk211";
  displayName = ".50 BMG 5Rnd Mag (HEAPI)";
  displayNameShort = "12.7mm HEAPI";
};





//-------------Pistol Magazines-------------
class 15rnd_9x21_m1911_mag: 16Rnd_9x21_Mag
{
  count = 15;
  displayName = "9x19mm 15Rnd M2011 Mag";
  descriptionShort = "Caliber: 9x19mm<br />Rounds: 15<br />Used in: Custom Covert 9mm";
};


//-------------G3 Magazines-------------
class apm_20rnd_762x51_epr_G3: hlc_20rnd_762x51_b_G3
{
  displayName = "7.62x51mm 20Rnd G3 Mag (M80A1 EPR)";
  ammo = "HLC_762x51_EPR";
  displayNameShort = "M80A1 EPR";
  mass = 12.13;
};
class apm_20rnd_762x51_m61_g3: hlc_20rnd_762x51_b_G3
{
  displayName = "7.62x51mm 20Rnd G3 Mag (M61 AP)";
  ammo = "HLC_762x51_AP";
  displayNameShort = "M61 AP";
  mass = 12.78;
};
class apm_20rnd_762x51_sblr_g3: hlc_20rnd_762x51_b_G3
{
  displayName = "7.62x51mm 20Rnd G3 Mag (M118 LR)";
  ammo = "ACE_762x51_Ball_M118LR";
  displayNameShort = "M118 LR";
  mass = 12.78;
};
class apm_20rnd_762x51_ap_g3: hlc_20rnd_762x51_b_G3
{
  displayName = "7.62x51mm 20Rnd G3 Mag (M993 AP)";
  ammo = "ACE_762x51_Ball_M993_AP";
  displayNameShort = "M993 AP";
  mass = 11.9;
};




//-------------MSBS Magazines-------------
class APM_30Rnd_65_Creedmor_MSBS_mag: 30Rnd_65x39_caseless_msbs_mag
{
  displayName="6.5x47mm 30Rnd MSBS Mag (EPR)";
  descriptionShort = "Caliber: 6.5x47mm (EPR)<br />Rounds: 30<br />Used in: MSBS";
  displayNameShort = "6.5x47mm EPR";
  ammo = "ACE_65_Creedmor_Ball";
  author = "LinkIsParking";
  __mass65CM30
};
class APM_30Rnd_65_CM_T_MSBS_Mag: APM_30Rnd_65_Creedmor_MSBS_mag
{
  displayName = "6.5x47mm 30Rnd MSBS Mag (Tracer)";
  displayNameShort = "6.5x47mm Tracer";
  tracersEvery = 1;
};
class APM_30Rnd_65_HPBT_MSBS_mag: 30Rnd_65x39_caseless_msbs_mag
{
  displayName="6.5x47mm 30Rnd MSBS Mag (HPBT)";
  descriptionShort = "Caliber: 6.5x47mm (HPBT)<br />Rounds: 30<br />Used in: MSBS";
  displayNameShort = "6.5x47mm HPBT";
  ammo = "ACE_65x47_Ball_Scenar";
  author = "LinkIsParking";
  __mass65CM30
};






//-------------MX Magazines-------------
class APM_30Rnd_65_Creedmoor_black_mag: 30Rnd_65x39_caseless_black_mag
{
  author = "LinkIsParking";
  ammo = "ACE_65_Creedmor_Ball";
  initSpeed = 857;
  displayName = "6.5x47mm 30Rnd Black MX Mag (EPR)";
  displayNameShort = "6.5x47mm EPR";
  descriptionShort = "Caliber: 6.5x47mm (EPR)<br />Rounds: 30<br />Used in: MX Series";
  __mass65CM30
};
class APM_30Rnd_65_Creedmoor_khaki_mag: 30Rnd_65x39_caseless_khaki_mag
{
  author = "LinkIsParking";
  ammo = "ACE_65_Creedmor_Ball";
  initSpeed = 857;
  displayName = "6.5x47mm 30Rnd Khaki MX Mag (EPR)";
  displayNameShort = "6.5x47mm EPR";
  descriptionShort = "Caliber: 6.5x47mm (EPR)<br />Rounds: 30<br />Used in: MX Series";
  __mass65CM30
};
class APM_30Rnd_65_Creedmoor_black_tracer_mag: APM_30Rnd_65_Creedmoor_black_mag
{
  displayName = "6.5x47mm 30Rnd Black MX Mag (Tracer)";
  tracersEvery = 1;
};
class APM_30Rnd_65_Creedmoor_khaki_tracer_mag: APM_30Rnd_65_Creedmoor_khaki_mag
{
  displayName = "6.5x47mm 30Rnd Black MX Mag (Tracer)";
  tracersEvery = 1;
};
class APM_30Rnd_65_Creedmoor_sand_tracer_mag: ACE_30Rnd_65_Creedmor_mag
{
  displayName = "6.5x47mm 30Rnd Sand MX Mag (Tracer)";
  tracersEvery = 1;
};
class APM_30Rnd_65x47_Scenar_black_mag: 30Rnd_65x39_caseless_black_mag
{
  author = "LinkIsParking";
  ammo = "ACE_65x47_Ball_Scenar";
  initSpeed = 826;
  displayName = "6.5x47mm 30Rnd Black MX Mag (HPBT)";
  displayNameShort = "6.5x47mm HPBT";
  descriptionShort = "Caliber: 6.5x47mm (HPBT)<br />Rounds: 30<br />Used in: MX Series";
  __mass65CM30
};
class APM_30Rnd_65x47_Scenar_Khaki_mag: 30Rnd_65x39_caseless_Khaki_mag
{
  author = "LinkIsParking";
  ammo = "ACE_65x47_Ball_Scenar";
  initSpeed = 826;
  displayName = "6.5x47mm 30Rnd Khaki MX Mag (HPBT)";
  displayNameShort = "6.5x47mm HPBT";
  descriptionShort = "Caliber: 6.5x47mm (HPBT)<br />Rounds: 30<br />Used in: MX Series";
  __mass65CM30
};






//-------------KH2002 Magazines-------------
class APM_30Rnd_65_Creedmor_k_mag: 30Rnd_65x39_caseless_green
{
  displayName="6.5x47mm 30Rnd KH2002 Mag (EPR)";
  descriptionShort = "Caliber: 6.5x47mm (EPR)<br />Rounds: 30<br />Used in: Katiba, Type 115";
  displayNameShort = "6.5x47mm EPR";
  ammo = "ACE_65_Creedmor_Ball";
  author = "LinkIsParking";
  __mass65CM30
};
class APM_30Rnd_65_Creedmor_kT_mag: APM_30Rnd_65_Creedmor_k_mag
{
  displayName="6.5x47mm 30Rnd KH2002 Mag (Tracer)";
  tracersEvery = 1;
};
class APM_30Rnd_65_HPBT_k_mag: 30Rnd_65x39_caseless_green
{
  displayName="6.5x47mm 30Rnd KH2002 Mag (HPBT)";
  descriptionShort = "Caliber: 6.5x47mm (HPBT)<br />Rounds: 30<br />Used in: Katiba, Type 115";
  displayNameShort = "6.5x47mm HPBT";
  ammo = "ACE_65x47_Ball_Scenar";
  author = "LinkIsParking";
  __mass65CM30
};






//-------------Mk200 Magazines-------------
class apm_200rnd_65cm_cased_box: 200Rnd_65x39_Cased_Box
{
  displayName = "6.5x47mm 200Rnd Box (EPR)";
  displayNameShort = "6.5x47mm EPR";
  descriptionShort = "Caliber: 6.5x47mm (EPR)<br />Rounds: 200<br />Used in: Mk200";
  ammo = "ACE_65_Creedmor_Ball";
  __mass65CM200
};
class apm_200rnd_65cm_cased_box_tracer: 200Rnd_65x39_Cased_Box_Tracer
{
  displayName = "6.5x47mm 200Rnd Box (Tracer)";
  displayNameShort = "6.5x47mm EPR";
  descriptionShort = "Caliber: 6.5x47mm (EPR)<br />Rounds: 200<br />Used in: Mk200";
  ammo = "ACE_65_Creedmor_Ball";
  __mass65CM200
};
class apm_200rnd_65cm_hpbt_cased_box: 200Rnd_65x39_Cased_Box
{
  displayName = "6.5x47mm 200Rnd Box (HPBT)";
  displayNameShort = "6.5x47mm HPBT";
  descriptionShort = "Caliber: 6.5x47mm (HPBT)<br />Rounds: 200<br />Used in: Mk200";
  ammo = "ACE_65x47_Ball_Scenar";
  __mass65CM200
};




//-------------AWM Magazines-------------
class APM_5Rnd_338LM_FMJ: hlc_5rnd_300WM_FMJ_AWM
{
  ammo = "B_338_Ball";
  displayName = ".338 LM 5Rnd AICS (FMJ)";
  displayNameShort = ".338 LM FMJ";
  descriptionShort = "Caliber: .338 Lapua Magnum<br />Rounds: 5";
};
class APM_5Rnd_338LM_AP: hlc_5rnd_300WM_AP_AWM
{
  ammo = "ACE_338_Ball_API526";
  displayName = ".338 LM 5Rnd AICS (API)";
  displayNameShort = ".338 LM API";
  descriptionShort = "Caliber: .338 Lapua Magnum<br />Rounds: 5";
};
class APM_5Rnd_338LM_300gr: hlc_5rnd_300WM_mk248_AWM
{
  ammo = "ACE_338_Ball";
  displayName = ".338 LM 5Rnd AICS (BTHP)";
  displayNameShort = ".338 LM BTHP";
  descriptionShort = "Caliber: .338 Lapua Magnum<br />Rounds: 5";
};
class APM_5Rnd_300WM_OTM: hlc_5rnd_300WM_mk248_AWM
{
  ammo = "ACE_762x67_Ball_Berger_Hybrid_OTM";
  displayName = ".300 WM 5Rnd AICS (OTM)";
  displayNameShort = ".300 WM OTM";
  descriptionShort = "Caliber: .300 Winchester Magnum<br />Rounds: 5";
};






//-------------T-5000 Magazines-------------
class apm_5rnd_338lm_300gr_t5000: rhs_5Rnd_338lapua_t5000
{
  displayName = ".338 LM 5Rnd T-5000 (BTHP)";
  displayNameShort = ".338 LM BTHP";
  ammo = "ACE_338_Ball";
  mass = 15;
};
class apm_5rnd_338lm_ap_t5000: rhs_5Rnd_338lapua_t5000
{
  displayName = ".338 LM 5Rnd T-5000 (API)";
  ammo = "ACE_338_Ball_API526";
  displayNameShort = ".338 LM API";
  mass = 14;
};





//-------------LWMMG Magazines-------------
class apm_130rnd_338nm_tracer_box: 130Rnd_338_Mag
{
  displayName = ".338 NM 130Rnd Belt (Tracer)";
  tracersEvery = 1;
  displayNameShort = "Tracer";
};
class apm_130rnd_338nm_IRDIM_box: apm_130rnd_338nm_tracer_box
{
  displayName = ".338 NM 130Rnd Belt (IR-DIM)";
  ammo = "B_338_NM_IRDIM";
  displayNameShort = "IR-DIM";
};
class apm_60rnd_338nm_FMJ_box: 130Rnd_338_Mag
{
  displayName = ".338 NM 60Rnd Box (FMJ)";
  count = 60;
  mass = 99.6;
  scope = 2;
};
class apm_60rnd_338nm_tracer_box: apm_60rnd_338nm_FMJ_box
{
  displayName = ".338 NM 60Rnd Box (Tracer)";
  tracersEvery = 1;
  displayNameShort = "Tracer";
};
class apm_60rnd_338nm_IRDIM_box: apm_60rnd_338nm_tracer_box
{
  displayName = ".338 NM 60Rnd Box (IR-DIM)";
  ammo = "B_338_NM_IRDIM";
  displayNameShort = "IR-DIM";
};



//-------------SCAR-H Magazines-------------
class APM_20Rnd_762x51_SCAR_mk319_Mag: rhs_mag_20Rnd_SCAR_762x51_m80_ball
{
  displayName = "7.62x51mm 20Rnd SCAR-H Mag (Mk319 Mod 0)";
  displayNameShort = "Mk319 Mod 0";
  ammo = "HLC_762x51_Barrier";
  author = "LinkIsParking";
  mass = 11.9;
};
class APM_20Rnd_762x51_SCAR_mk319_Mag_bk: rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk
{
  displayName = "7.62x51mm 20Rnd Black SCAR-H Mag (Mk319 Mod 0)";
  displayNameShort = "Mk319 Mod 0";
  ammo = "HLC_762x51_Barrier";
  author = "LinkIsParking";
  mass = 11.9;
};
class APM_20Rnd_762x51_SCAR_M993_AP_mag: rhs_mag_20Rnd_SCAR_762x51_m80_ball
{
  displayName = "7.62x51mm 20Rnd SCAR-H Mag (M993 AP)";
  displayNameShort = "M993 AP";
  ammo = "ACE_762x51_Ball_M993_AP";
  author = "LinkIsParking";
  mass = 11.9;
};
class APM_20Rnd_762x51_SCAR_M993_AP_mag_bk: rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk
{
  displayName = "7.62x51mm 20Rnd Black SCAR-H Mag (M993 AP)";
  displayNameShort = "M993 AP";
  ammo = "ACE_762x51_Ball_M993_AP";
  author = "LinkIsParking";
  mass = 11.9;
};
class APM_20Rnd_762x51_SCAR_SD_mag: rhs_mag_20Rnd_SCAR_762x51_m80_ball
{
  displayName = "7.62x51mm 20Rnd SCAR-H Mag (BT Subsonic)";
  displayNameShort = "BT Subsonic";
  ammo = "HLC_762x51_BTSub";
  author = "LinkIsParking";
  mass = 11.7;
};
class APM_20Rnd_762x51_SCAR_SD_mag_bk: rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk
{
  displayName = "7.62x51mm 20Rnd Black SCAR-H Mag (BT Subsonic)";
  displayNameShort = "BT Subsonic";
  ammo = "HLC_762x51_BTSub";
  author = "LinkIsParking";
  mass = 11.7;
};






//-------------SR-25 Magazines-------------
class APM_20Rnd_762x51_SR25_M61_AP_Mag: rhsusf_20Rnd_762x51_SR25_m118_special_mag
{
  displayName = "7.62x51mm 20Rnd AR-10 Mag (M61 AP)";
  displayNameShort = "M61 AP";
  dlc = "RHS_USAF";
  ammo = "HLC_762x51_AP";
  author = "LinkIsParking";
  mass = 12.78;
};
class APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag: rhsusf_20Rnd_762x51_SR25_m118_special_mag
{
  displayName = "7.62x51mm 20Rnd AR-10 Mag (M80A1 EPR)";
  displayNameShort = "M80A1 EPR";
  ammo = "HLC_762x51_EPR";
  author = "LinkIsParking";
  mass = 12.13;
};
class APM_20Rnd_762x51_SR25_M80_ball_mag: rhsusf_20Rnd_762x51_SR25_m118_special_mag
{
  displayName = "7.62x51mm 20Rnd AR-10 Mag (M80 Ball)";
  displayNameShort = "M80 Ball";
  ammo = "HLC_762x51_Ball";
  author = "LinkIsParking";
  mass = 12.78;
};
class APM_20Rnd_762x51_SR25_Mk319_mag: rhsusf_20Rnd_762x51_SR25_m118_special_mag
{
  displayName = "7.62x51mm 20Rnd AR-10 Mag (Mk319 Mod 0)";
  displayNameShort = "Mk319 Mod 0";
  ammo = "HLC_762x51_Barrier";
  author = "LinkIsParking";
  mass = 11.9;
};
class APM_20Rnd_762x51_SR25_BTSub_mag: rhsusf_20Rnd_762x51_SR25_m118_special_mag
{
  displayName = "7.62x51mm 20Rnd AR-10 Mag (BT Subsonic)";
  displayNameShort = "BT Subsonic";
  ammo = "HLC_762x51_BTSub";
  author = "LinkIsParking";
};
class APM_20Rnd_762x51_SR25_IRDIM_mag: rhsusf_20Rnd_762x51_SR25_m118_special_mag
{
  displayName = "7.62x51mm 20Rnd AR-10 Mag (M62 IR-DIM)";
  displayNameShort = "M62 IR-DIM";
  ammo = "HLC_B_762x51_Tracer_Dim";
  author = "LinkIsParking";
  tracersEvery = 1;
  mass = 12.13;
};
class APM_20Rnd_65C_AR10_EPR_Mag: rhsusf_20Rnd_762x51_SR25_m118_special_mag
{
  displayName = "6.5x47mm 20Rnd AR-10 Mag (EPR)";
  displayNameShort = "6.5x47mm EPR";
  descriptionShort = "Caliber: 6.5x47mm (EPR)<br />Rounds: 20<br />Used in: SR-25C";
  ammo = "ACE_65_Creedmor_Ball";
  tracersEvery = 4;
  mass = 9.61;
};
class APM_20Rnd_65C_AR10_Tracer_Mag: APM_20Rnd_65C_AR10_EPR_Mag
{
  displayName = "6.5x47mm 20Rnd AR-10 Mag (Tracer)";
  displayNameShort = "6.5x47mm Tracer";
  descriptionShort = "Caliber: 6.5x47mm (Tracer)<br />Rounds: 20<br />Used in: SR-25C";
  tracersEvery = 1;
};
class APM_20Rnd_65C_AR10_HPBT_Mag: APM_20Rnd_65C_AR10_EPR_Mag
{
  displayName = "6.5x47mm 20Rnd AR-10 Mag (HPBT)";
  displayNameShort = "6.5x47mm HPBT";
  descriptionShort = "Caliber: 6.5x47mm (HPBT)<br />Rounds: 20<br />Used in: SR-25C";
  ammo = "ACE_65x47_Ball_Scenar";
};





//-------------M14 Magazines-------------
class APM_20Rnd_762x51_M80A1EPR_mag: rhsusf_20Rnd_762x51_m118_special_Mag
{
  ammo = "HLC_762x51_EPR";
  displayName = "7.62x51mm 20Rnd M14 Mag (M80A1 EPR)";
  displayNameShort = "M80A1 EPR";
  mass = 12.13;
};
class apm_20Rnd_762x51_EPR_M14: hlc_20Rnd_762x51_B_M14
{
  displayName = "7.62x51mm 20Rnd M14 Mag (M80A1 EPR)";
  displayNameShort = "M80A1 EPR";
  ammo = "HLC_762x51_EPR";
  mass = 12.13;
};
class apm_20rnd_762x51_LR_M14: hlc_20Rnd_762x51_B_M14
{
  displayName = "7.62x51mm 20Rnd M14 Mag (M118 LR)";
  displayNameShort = "M118 LR";
  ammo = "ACE_762x51_Ball_M118LR";
  mass = 12.78;
};
class apm_20rnd_762x51_AP_M14: hlc_20Rnd_762x51_B_M14
{
  displayName = "7.62x51mm 20Rnd M14 Mag (M61 AP)";
  displayNameShort = "M61 AP";
  ammo = "HLC_762x51_AP";
  mass = 12.78;
};
class apm_20rnd_762x51_AP3_M14: hlc_20Rnd_762x51_B_M14
{
  displayName = "7.62x51mm 20Rnd M14 Mag (M993 AP)";
  displayNameShort = "M993 AP";
  ammo = "ACE_762x51_Ball_M993_AP";
  mass = 11.9;
};








//-------------9.3 Magazines-------------
class apm_150rnd_93x64_Tracer_Belt: 150Rnd_93x64_Mag
{
  displayName = "9.3x64mm 150Rnd Belt (Tracer)";
  tracersEvery = 1;
  displayNameShort = "Tracer";
};
class apm_150rnd_93x64_IRDIM_Belt: apm_150rnd_93x64_Tracer_Belt
{
  displayName = "9.3x64mm 150Rnd Belt (IR-DIM)";
  ammo = "B_93x64_IRDIM";
  displayNameShort = "IR-DIM";
};
class apm_80rnd_93x64_FMJ_Belt: 150Rnd_93x64_Mag
{
  displayName = "9.3x64mm 80Rnd Belt (FMJ)";
  count = 80;
  mass = 78.5;
};
class apm_80rnd_93x64_Tracer_Belt: apm_80rnd_93x64_FMJ_Belt
{
  displayName = "9.3x64mm 80Rnd Belt (Tracer)";
  tracersEvery = 1;
  displayNameShort = "Tracer";
};
class apm_80rnd_93x64_IRDIM_Belt: apm_80rnd_93x64_Tracer_Belt
{
  displayName = "9.3x64mm 80Rnd Belt (IR-DIM)";
  ammo = "B_93x64_IRDIM";
  displayNameShort = "IR-DIM";
};
class apm_10rnd_93x64_Tracer_Mag: 10Rnd_93x64_DMR_05_Mag
{
  displayName = "9.3x64mm 10Rnd Mag (Tracer)";
  tracersEvery = 1;
  displayNameShort = "Tracer";
};
class apm_10rnd_93x64_IRDIM_Mag: apm_10rnd_93x64_Tracer_Mag
{
  displayName = "9.3x64mm 10Rnd Mag (IR-DIM)";
  ammo = "B_93x64_IRDIM";
  displayNameShort = "IR-DIM";
};



//-------------6.8 Magazines-------------
class apm_30rnd_68x43_FMJ_PMAG: hlc_30rnd_68x43_FMJ
{
  displayName = "6.8mm 30Rnd PMAG (FMJ)";
  modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_PMAG;
  model = "\hlc_core\mesh\magazines\30rnd_556NATO_PMAG.p3d";
  picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_epr_ca.paa";
  mass = "14.2 * 0.82";
};
class apm_30rnd_68x43_OTM_PMAG: hlc_30rnd_68x43_OTM
{
  displayName = "6.8mm 30Rnd PMAG (BT)";
  modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_PMAG;
  model = "\hlc_core\mesh\magazines\30rnd_556NATO_PMAG.p3d";
  picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_spr_ca.paa";
  mass = "15.5 * 0.82";
};
class apm_30rnd_68x43_Sub_PMAG: hlc_30rnd_68x43_Sub
{
  displayName = "6.8mm 30Rnd PMAG (Subsonic)";
  modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_PMAG;
  model = "\hlc_core\mesh\magazines\30rnd_556NATO_PMAG.p3d";
  picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_s_ca.paa";
  mass = "13.6 * 0.82";
};
class apm_30Rnd_68x43_IRDIM_PMAG: hlc_30Rnd_68x43_IRDIM
{
  displayName = "6.8mm 30Rnd PMAG (IR-DIM)";
  picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_t_ca.paa";
  modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_PMAG;
  mass = "14.2 * 0.82";
};
class apm_30Rnd_68x43_Tracer_PMAG: hlc_30RNd_68x43_Tracer
{
  displayName = "6.8mm 30Rnd PMAG (Tracer)";
  picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_t_ca.paa";
  modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_PMAG;
  mass = "14.2 * 0.82";
};
class apm_30rnd_68x43_FMJ_EMAG: hlc_30rnd_68x43_FMJ
{
  displayName = "6.8mm 30Rnd EMAG (FMJ)";
  modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_EMAG;
  model = "\hlc_core\mesh\magazines\30rnd_556NATO_EMAG.p3d";
  picture = "\hlc_core\tex\ui\ammo\stanag\m_EMAG_epr_ca.paa";
  mass = "13.8 * 0.82";
};
class apm_30rnd_68x43_OTM_EMAG: hlc_30rnd_68x43_OTM
{
  displayName = "6.8mm 30Rnd EMAG (BT)";
  modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_EMAG;
  model = "\hlc_core\mesh\magazines\30rnd_556NATO_EMAG.p3d";
  picture = "\hlc_core\tex\ui\ammo\stanag\m_EMAG_spr_ca.paa";
  mass = "15.1 * 0.82";
};
class apm_30rnd_68x43_Sub_EMAG: hlc_30rnd_68x43_Sub
{
  displayName = "6.8mm 30Rnd EMAG (Subsonic)";
  modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_EMAG;
  model = "\hlc_core\mesh\magazines\30rnd_556NATO_EMAG.p3d";
  picture = "\hlc_core\tex\ui\ammo\stanag\m_EMAG_s_ca.paa";
  mass = "13.2 * 0.82";
};
class apm_30Rnd_68x43_IRDIM_EMAG: hlc_30Rnd_68x43_IRDIM
{
  displayName = "6.8mm 30Rnd EMAG (IR-DIM)";
  picture = "\hlc_core\tex\ui\ammo\stanag\m_EMAG_t_ca.paa";
  modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_EMAG;
  mass = "13.8 * 0.82";
};
class apm_30Rnd_68x43_Tracer_EMAG: hlc_30RNd_68x43_Tracer
{
  displayName = "6.8mm 30Rnd EMAG (Tracer)";
  picture = "\hlc_core\tex\ui\ammo\stanag\m_EMAG_t_ca.paa";
  modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_EMAG;
  mass = "13.8 * 0.82";
};
