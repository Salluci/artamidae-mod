class cfgMagazines
{
  class SmokeShell;
  class HandGrenade;
  class ACE_M14: SmokeShell
  {
    scope = 1;
  };
  class rhs_mag_mk84: HandGrenade
  {
    scope = 1;
  };
  class CA_Magazine;
  class 10Rnd_338_Mag: CA_Magazine //338/300 Win Mag Magazines
  {
    displayName = ".338 LM 10Rnd Mag (FMJ)";
  };
  class ACE_10Rnd_338_API526_Mag: 10Rnd_338_Mag
  {
    displayName = ".338 LM 10Rnd Mag (API)";
  };
  class ACE_10Rnd_338_300gr_HPBT_Mag: 10Rnd_338_Mag
  {
    displayName = ".338 LM 10Rnd Mag (BTHP)";
  };
  class ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag: 10Rnd_338_Mag
  {
    author = "ACE-Team";
    ammo = "ACE_762x67_Ball_Berger_Hybrid_OTM";
    displayName = ".300 WM 10Rnd Mag (OTM)";
    displayNameShort = ".300 WM OTM";
    descriptionShort = "Caliber: .300 Winchester Magnum<br />Rounds: 10";
    initSpeed = 800;
  };
  class ACE_20Rnd_762x67_Mk248_Mod_0_Mag: 10Rnd_338_Mag
  {
    author = "ACE-Team";
    ammo = "HLC_300WM_BTSP";
    displayName = ".300 WM 10Rnd Mag (BTSP)";
    displayNameShort = ".300 WM BTSP";
    descriptionShort = "Caliber: .300 Winchester Magnum<br />Rounds: 10";
    initSpeed = 865;
  };
  class ACE_20Rnd_762x67_Mk248_Mod_1_Mag: 10Rnd_338_Mag
  {
    author = "ACE-Team";
    ammo = "HLC_300WM_BTHP";
    displayName = ".300 WM 10Rnd Mag (BTHP)";
    displayNameShort = ".300 WM BTHP";
    descriptionShort = "Caliber: .300 Winchester Magnum<br />Rounds: 10";
    initSpeed = 847;
  };
  class 30Rnd_45ACP_Mag_SMG_01;
  class 9rnd_45ACP_Mag: 30Rnd_45ACP_Mag_SMG_01
  {
    count = 15;
    displayName = ".45 ACP 15Rnd M1911 Mag";
    descriptionShort = "Caliber: .45 ACP<br />Rounds: 15<br />Used in: Custom Covert II";
  };
  class 16Rnd_9x21_Mag;
  class 11Rnd_45ACP_Mag: CA_Magazine
  {
    count = 15;
    displayName = ".45 ACP 15Rnd FN Mag";
    descriptionShort = "Caliber: .45 ACP<br />Rounds: 15<br />Used in: FNX-45, FNP-45";
  };
  class 30Rnd_65x39_caseless_mag: CA_Magazine //MSBS Magazines rename + Variants
  {
    displayName = "6.5x39mm 30Rnd Sand MX Mag (FMJ)";
    __mass6530
  };
  class 30Rnd_65x39_caseless_black_mag: 30Rnd_65x39_caseless_mag
  {
    displayName = "6.5x39mm 30Rnd Black MX Mag (FMJ)";
  };
  class 30Rnd_65x39_caseless_khaki_mag: 30Rnd_65x39_caseless_mag
  {
    displayName = "6.5x39mm 30Rnd Khaki MX Mag (FMJ)";
  };
  class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag
  {
    displayName = "6.5x39mm 30Rnd Sand MX Mag (Tracer)";
  };
  class 30Rnd_65x39_caseless_black_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer
  {
    displayName = "6.5x39mm 30Rnd Black MX Mag (Tracer)";
  };
  class 30Rnd_65x39_caseless_khaki_mag_Tracer: 30Rnd_65x39_caseless_mag_Tracer
  {
    displayName = "6.5x39mm 30Rnd Khaki MX Mag (Tracer)";
  };
  class 100Rnd_65x39_caseless_mag: CA_Magazine
  {
    displayName = "6.5x39mm 100Rnd Sand MX Mag (FMJ)";
    __mass65100
  };
  class 100Rnd_65x39_caseless_black_mag: 100Rnd_65x39_caseless_mag
  {
    displayName = "6.5x39mm 100Rnd Black MX Mag (FMJ)";
  };
  class 100Rnd_65x39_caseless_khaki_mag: 100Rnd_65x39_caseless_mag
  {
    displayName = "6.5x39mm 100Rnd Khaki MX Mag (FMJ)";
  };
  class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag
  {
    displayName = "6.5x39mm 100Rnd Sand MX Mag (Tracer)";
  };
  class 100Rnd_65x39_caseless_khaki_mag_tracer: 100Rnd_65x39_caseless_mag_Tracer
  {
    displayName = "6.5x39mm 100Rnd Khaki MX Mag (Tracer)";
  };
  class 100Rnd_65x39_caseless_black_mag_tracer: 100Rnd_65x39_caseless_mag_Tracer
  {
    displayName = "6.5x39mm 100Rnd Black MX Mag (Tracer)";
  };
  class ACE_30Rnd_65_Creedmor_mag: 30Rnd_65x39_caseless_mag
  {
    displayName = "6.5x47mm 30Rnd Sand MX Mag (EPR)";
    displayNameShort = "6.5x47mm EPR";
    __mass65CM30
  };
  class ACE_30Rnd_65x47_Scenar_mag: 30Rnd_65x39_caseless_mag
  {
    displayName = "6.5x47mm 30Rnd Sand MX Mag (HPBT)";
    descriptionShort = "Caliber: 6.5x47mm (HPBT)<br />Rounds: 30<br />Used in: MX Series";
    __mass65CM30
  };
  class 30Rnd_65x39_caseless_msbs_mag: 30Rnd_65x39_caseless_mag
  {
  	displayName = "6.5x39mm 30Rnd MSBS Mag (FMJ)";
  	descriptionShort = "Caliber: 6.5x39 mm STANAG Caseless<br />Rounds: 30<br />Used in: MSBS";
  };
  class 30Rnd_65x39_caseless_msbs_mag_Tracer: 30Rnd_65x39_caseless_msbs_mag
  {
  	displayName = "6.5x39mm 30Rnd MSBS Mag (Tracer)";
  	descriptionShort = "Caliber: 6.5x39 mm STANAG Caseless<br />Rounds: 30<br />Used in: MSBS";
  };
  class 30Rnd_65x39_caseless_green: CA_Magazine //Type 115/Katiba Creedmoor/HPBT
  {
    displayName = "6.5x39mm 30Rnd KH2002 Mag (FMJ)";
    scope = 2;
    scopeArsenal = 2;
  };
  class 30Rnd_65x39_caseless_green_mag_tracer: 30Rnd_65x39_caseless_green
  {
    displayName = "6.5x39mm 30Rnd KH2002 Mag (Tracer)";
    scope = 2;
    scopeArsenal = 2;
  };
  class 200Rnd_65x39_cased_box: 100Rnd_65x39_caseless_mag
  {
    displayName = "6.5x39mm 200Rnd Box (FMJ)";
    ammo = "B_65x39_Caseless";
    __mass65200
  };
  class 200Rnd_65x39_cased_Box_Red: 100Rnd_65x39_caseless_mag
  {
    displayName = "6.5x39mm 200Rnd Box (FMJ)";
    scope = 1;
    __mass65200
  };
  class 200Rnd_65x39_cased_box_Tracer: 200Rnd_65x39_cased_box
  {
    displayName = "6.5x39mm 200Rnd Box (Tracer)";
  };
  class ACE_200Rnd_65x39_cased_Box_Tracer_Dim: 200Rnd_65x39_cased_Box
  {
    displayName = "6.5x39mm 200Rnd Box (IR-DIM)";
  };
  class 200Rnd_65x39_cased_box_Tracer_Red: 200Rnd_65x39_cased_box
  {
    displayName = "6.5x39mm 200Rnd Box (Tracer)";
    scope = 1;
  };
  class 30Rnd_556x45_Stanag: CA_Magazine //5.56 STANAG Mags and Belts. RHS has too many mags.
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45mm 30rnd Mag (EPR)";
    displayNameShort = "M855A1 EPR";
    scopeArsenal = 2;
    mass = 9.4;
  };
  class 30Rnd_556x45_Stanag_Sand: 30Rnd_556x45_Stanag
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45mm 30rnd Sand Mag (EPR)";
    displayNameShort = "M855A1 EPR";
    scopeArsenal = 2;
    mass = 9.4;
  };
  class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45mm 30rnd Mag (Tracer)";
    displayNameShort = "M856A1 Tracer";
    scopeArsenal = 2;
    mass = 9.4;
  };
  class 30Rnd_556x45_Stanag_Sand_Tracer_Red: 30Rnd_556x45_Stanag_Sand
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45mm 30rnd Sand Mag (Tracer)";
    displayNameShort = "M856A1 Tracer";
    scopeArsenal = 2;
    mass = 9.4;
  };
  class 30Rnd_556x45_Stanag_Sand_Tracer_Yellow: 30Rnd_556x45_Stanag_Sand
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45mm 30rnd Sand Mag (Tracer)";
    displayNameShort = "M856A1 Tracer";
    scopeArsenal = 0;
    scope = 1;
    mass = 9.4;
  };
  class 30Rnd_556x45_Stanag_Sand_Tracer_Green: 30Rnd_556x45_Stanag_Sand
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45mm 30rnd Sand Mag (Tracer)";
    displayNameShort = "M856A1 Tracer";
    scopeArsenal = 0;
    scope = 1;
    mass = 9.4;
  };
  class 20Rnd_556x45_UW_mag: 30Rnd_556x45_Stanag
  {
    displayName = "5.56x45mm 20Rnd RFB Mag (EPR)";
  };
  class ACE_30Rnd_556x45_Stanag_Mk262_Mag: 30Rnd_556x45_Stanag
  {
    ammo = "HLC_556NATO_SPR";
    displayName = "5.56x45mm 30Rnd Mag (SBLR)";
    displayNameShort = "Mk262 Mod 1 SBLR";
    mass = 9.7;
  };
  class ACE_30Rnd_556x45_Stanag_Mk318_Mag: 30Rnd_556x45_Stanag
  {
    ammo = "HLC_556NATO_SOST";
    displayName = "5.56x45mm 30Rnd Mag (SOST)";
    displayNameShort = "Mk318 Mod 1 SOST";
    mass = 9.5;
  };
  class ACE_30Rnd_556x45_Stanag_Tracer_Dim: 30Rnd_556x45_Stanag
  {
    ammo = "HLC_B_556x45_Ball_Tracer_Dim";
    displayName = "5.56x45mm 30Rnd Mag (IR-DIM)";
    displayNameShort = "M856A1 IR-DIM";
  };
  class ACE_30Rnd_556x45_Stanag_M995_AP_Mag: 30Rnd_556x45_Stanag
  {
    displayName = "5.56x45mm 30Rnd Mag (AP)";
    displayNameShort = "M995 AP";
    mass = 9.2;
  };
  class 29rnd_300BLK_STANAG: 30Rnd_556x45_Stanag
  {
    displayName = ".300 BLK 30Rnd Mag (EPR)";
  };
  class 29rnd_300BLK_STANAG_T: 29rnd_300BLK_STANAG
  {
    displayName = ".300 BLK 30Rnd Mag (Subsonic)";
  };
  class 29rnd_300BLK_STANAG_S: 29rnd_300BLK_STANAG
  {
    displayName = ".300 BLK 30Rnd Mag (BT)";
  };
  class hlc_50rnd_300BLK_STANAG_EPR: 29rnd_300BLK_STANAG
  {
    displayName = ".300 BLK 50Rnd X-15 Drum (EPR)";
  };
  class hlc_5rnd_3006_1903: 30Rnd_556x45_Stanag
  {
    displayName = ".30-06 5Rnd Clip (FMJ)";
  };
  class hlc_5rnd_3006_T_1903: hlc_5rnd_3006_1903
  {
    displayName = ".30-06 5Rnd Clip (Tracer)";
  };
  class 130Rnd_338_Mag: CA_Magazine
  {
    displayName = ".338 NM 130Rnd Belt (FMJ)";
    mass = 215.8;
    descriptionShort = "Caliber: .338 Norma Magnum<br />Rounds: 130<br />Used in: LWMMG";
    scope = 2;
  };
  class 7Rnd_408_Mag: CA_Magazine
  {
    displayName = ".408 CT 7Rnd Mag (BT)";
  };
  class 5Rnd_127x108_Mag: CA_Magazine
  {
    displayName = "12.7x108mm 5Rnd GM6 Mag (FMJ)";
  };
  class 5Rnd_127x108_APDS_Mag: 5Rnd_127x108_Mag
  {
    displayName = "12.7x108mm 5Rnd GM6 Mag (APDS)";
  };
  class ACE_5Rnd_127x99_Mag: 5Rnd_127x108_Mag
  {
    displayName = ".50 BMG 5Rnd Mag (FMJ)";
    displayNameShort = "12.7mm FMJ";
  };
  class ACE_5Rnd_127x99_AMAX_Mag: 5Rnd_127x108_Mag
  {
    displayName = ".50 BMG 5Rnd Mag (AMAX)";
    displayNameShort = "12.7mm AMAX";
  };
  class ACE_5Rnd_127x99_API_Mag: 5Rnd_127x108_Mag
  {
    displayName = ".50 BMG 5Rnd Mag (API)";
  };
  class 10Rnd_127x54_Mag: CA_Magazine
  {
    displayName = "12.7x54mmR 10Rnd Mag (Subsonic)";
  };
  class ACE_7Rnd_408_305gr_Mag: 7Rnd_408_Mag
  {
    displayName = ".408 CT 7Rnd Mag (HP)";
  };
  class 10Rnd_RHS_50BMG_Box;
  class rhsusf_mag_10Rnd_STD_50BMG_M33: 10Rnd_RHS_50BMG_Box
  {
    ammo = "B_127x99_Ball";
    displayName = ".50 BMG 10Rnd M107 Mag (FMJ)";
    displayNameShort = "12.7mm FMJ";
    mass = 32;
  };
  class rhsusf_mag_10Rnd_STD_50BMG_mk211: rhsusf_mag_10Rnd_STD_50BMG_M33
  {
    displayName = ".50 BMG 10Rnd M107 Mag (HEAPI)";
    displayNameShort = "12.7mm HEAPI";
  };
  class rhsusf_50Rnd_762x51: CA_Magazine
  {
    displayName = "7.62x51mm 50Rnd Softpack (M80 Ball)";
    ammo = "HLC_762x51_Ball";
    mass = 32.41;
  };
  class rhsusf_50Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51
  {
    displayName = "7.62x51mm 50Rnd Softpack (M61 AP)";
    ammo = "HLC_762x51_AP";
    mass = 32.41;
  };
  class rhsusf_50Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51
  {
    displayName = "7.62x51mm 50Rnd Softpack (M62 Tracer)";
    ammo = "HLC_762x51_Tracer";
    mass = 31.75;
  };
  class rhsusf_50Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51
  {
    displayName = "7.62x51mm 50Rnd Softpack (M80A1 EPR)";
    ammo = "HLC_762x51_EPR";
    mass = 30.86;
  };
  class rhsusf_50Rnd_762x51_m82_blank: rhsusf_50Rnd_762x51
  {
    displayName = "7.62x51mm 50Rnd Softpack (M82 Blank)";
  };
  class rhsusf_100Rnd_762x51: rhsusf_50Rnd_762x51
  {
    displayName = "7.62x51mm 100Rnd Box (M80 Ball)";
    mass = 62.61;
  };
  class rhsusf_100Rnd_762x51_m61_ap: rhsusf_50Rnd_762x51_m61_ap
  {
    displayName = "7.62x51mm 100Rnd Box (M61 AP)";
    mass = 62.61;
  };
  class rhsusf_100Rnd_762x51_m62_tracer: rhsusf_50Rnd_762x51_m62_tracer
  {
    displayName = "7.62x51mm 100Rnd Box (M62 Tracer)";
    mass = 61.07;
  };
  class rhsusf_100Rnd_762x51_m80a1epr: rhsusf_50Rnd_762x51_m80a1epr
  {
    displayName = "7.62x51mm 100Rnd Box (M80A1 EPR)";
    mass = 59.52;
  };
  class rhsusf_100Rnd_762x51_m82_blank: rhsusf_50Rnd_762x51_m82_blank
  {
    displayName = "7.62x51mm 100Rnd Box (M82 Blank)";
  };
  class 20Rnd_762x51_Mag: CA_Magazine //7.62x51 Magazines. RHS again.
  {
    ammo = "HLC_762x51_Ball";
    displayName = "7.62x51mm 20Rnd Mag (M80 Ball)";
    displayNameShort = "M80 Ball";
    mass = 12.78;
  };
  class ACE_20Rnd_762x51_M118LR_Mag: 20Rnd_762x51_Mag
  {
    displayName = "7.62x51mm 20Rnd Mag (M118 LR)";
    displayNameShort = "M118 LR";
    mass = 12.78;
  };
  class ACE_20Rnd_762x51_M993_AP_Mag: 20Rnd_762x51_Mag
  {
    displayName = "7.62x51mm 20Rnd Mag (M993 AP)";
    displayNameShort = "M993 AP";
    mass = 11.9;
  };
  class ACE_20Rnd_762x51_Mk316_Mod_0_Mag: 20Rnd_762x51_Mag
  {
    ammo = "HLC_762x51_MK316_20in";
    displayName = "7.62x51mm 20Rnd Mag (Mk316 Mod 0)";
    displayNameShort = "Mk316 Mod 0";
    mass = 13.01;
  };
  class ACE_20Rnd_762x51_Mk319_Mod_0_Mag: 20Rnd_762x51_Mag
  {
    ammo = "HLC_762x51_Barrier";
    displayName = "7.62x51mm 20Rnd Mag (Mk319 Mod 0)";
    displayNameShort = "Mk319 Mod 0";
    mass = 11.9;
  };
  class ACE_20Rnd_762x51_Mag_SD: 20Rnd_762x51_Mag
  {
    ammo = "HLC_762x51_BTSub";
    displayName = "7.62x51mm 20Rnd Mag (BT Subsonic)";
    displayNameShort = "BT Subsonic";
    mass = 11.7;
  };
  class ACE_20Rnd_762x51_Mag_Tracer: 20Rnd_762x51_Mag
  {
    ammo = "HLC_762x51_Tracer";
    displayName = "7.62x51mm 20Rnd Mag (M62 Tracer)";
    displayNameShort = "M62 Tracer";
    mass = 12.13;
  };
  class ACE_20Rnd_762x51_Mag_Tracer_Dim: 20Rnd_762x51_Mag
  {
    ammo = "HLC_B_762x51_Tracer_Dim";
    displayName = "7.62x51mm 20Rnd Mag (M62 IR-DIM)";
    displayNameShort = "M62 IR-DIM";
    mass = 12.13;
  };
  class hlc_20Rnd_762x51_B_M14: 30Rnd_556x45_Stanag
  {
    displayName = "7.62x51mm 20Rnd M14 Mag (M80 Ball)";
    displayNameShort = "M80 Ball";
    mass = 12.78;
  };
  class hlc_20Rnd_762x51_barrier_M14: hlc_20Rnd_762x51_B_M14
  {
    displayName = "7.62x51mm 20Rnd M14 Mag (Mk319 Mod 0)";
    displayNameShort = "Mk319 Mod 0";
  	ammo = "HLC_762x51_Barrier";
    mass = 11.9;
  };
  class hlc_20Rnd_762x51_mk316_M14: hlc_20Rnd_762x51_B_M14
  {
    displayName = "7.62x51mm 20Rnd M14 Mag (Mk316 Mod 0)";
    displayNameShort = "Mk316 Mod 0";
    mass = 13.01;
  };
  class hlc_20Rnd_762x51_T_m14: hlc_20Rnd_762x51_B_M14
  {
    displayName = "7.62x51mm 20Rnd M14 Mag (M62 Tracer)";
    displayNameShort = "M62 Tracer";
    ammo = "HLC_762x51_Tracer";
    mass = 12.13;
  };
  class hlc_20Rnd_762x51_Tdim_M14: hlc_20Rnd_762x51_B_M14
  {
    displayName = "7.62x51mm 20Rnd M14 Mag (M62 IR-DIM)";
    displayNameShort = "M62 IR-DIM";
    ammo = "HLC_B_762x51_Tracer_Dim";
    mass = 12.13;
  };
  class hlc_20Rnd_762x51_S_M14: hlc_20Rnd_762x51_B_M14
  {
    displayName = "7.62x51mm 20Rnd M14 Mag (BT Subsonic)";
    displayNameShort = "BT Subsonic";
    mass = 11.7;
  };
  class hlc_50Rnd_762x51_B_M14: hlc_20Rnd_762x51_B_M14
  {
    displayName = "7.62x51mm 50Rnd M14 X-308 Drum (M80 Ball)";
    displayNameShort = "M80 Ball";
    mass = 22.27;
  };
  class hlc_50Rnd_762x51_T_M14: hlc_20Rnd_762x51_B_M14
  {
    displayName = "7.62x51mm 50Rnd M14 X-308 Drum (M62 Tracer)";
    displayNameShort = "M62 Tracer";
    ammo = "HLC_762x51_Tracer";
    mass = 21.83;
  };
  class hlc_50Rnd_762x51_TDim_M14: hlc_20Rnd_762x51_B_M14
  {
    displayName = "7.62x51mm 50Rnd M14 X-308 Drum (M62 IR-DIM)";
    displayNameShort = "M62 IR-DIM";
    mass = 21.83;
  };
  class hlc_30Rnd_556x45_B_AUG: 30Rnd_556x45_Stanag
  {
    displayName = "5.56x45mm 30Rnd AUG Mag (EPR)";
    displayNameShort = "M855A1 EPR";
    mass = 9.4;
  };
  class hlc_40Rnd_556x45_B_AUG: 30Rnd_556x45_Stanag
  {
    displayName = "5.56x45mm 42Rnd AUG Mag (EPR)";
    displayNameShort = "M855A1 EPR";
    mass = 12.57;
  };
  class rhs_mag_30Rnd_556x45_M855A1_Stanag: 30Rnd_556x45_Stanag
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45mm 30Rnd STANAG Mag (EPR)";
    displayNameShort = "M855A1 EPR";
  };
  class rhs_mag_30Rnd_556x45_M855A1_PMAG: rhs_mag_30Rnd_556x45_M855A1_Stanag
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45mm 30Rnd PMAG M2 (EPR)";
    displayNameShort = "M855A1 EPR";
  };
  class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_PMAG
  {
      ammo = "HLC_556NATO_EPR";
      tracersEvery = 1;
      displayName = "5.56x45mm 30Rnd PMAG M2 (Tracer)";
      displayNameShort = "M856A1 Tracer";
  };
  class rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag
  {
      ammo = "HLC_556NATO_EPR";
      tracersEvery = 1;
      displayName = "5.56x45mm 30Rnd STANAG Mag (Tracer)";
      displayNameShort = "M856A1 Tracer";
  };
  class rhs_mag_100Rnd_556x45_M855A1_cmag: rhs_mag_30Rnd_556x45_M855A1_Stanag
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45m 100Rnd C-MAG (EPR)";
    displayNameShort = "M855A1 EPR";
    mass = 33.73;
  };
  class rhs_mag_100Rnd_556x45_Mk318_cmag: rhs_mag_100Rnd_556x45_M855A1_cmag
  {
      ammo = "HLC_556NATO_SOST";
      displayName = "5.56x45m 100Rnd C-MAG (SOST)";
      displayNameShort = "Mk318 Mod 0 SOST";
      mass = 34.83;
  };
  class rhs_mag_100Rnd_556x45_Mk262_cmag: rhs_mag_100Rnd_556x45_M855A1_cmag
  {
      ammo = "HLC_556NATO_SPR";
      displayName = "5.56x45m 100Rnd C-MAG (SBLR)";
      displayNameShort = "Mk262 Mod 1 SBLR";
      mass = 35.94;
  };
  class rhs_mag_30Rnd_556x45_Mk262_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
  {
    ammo = "HLC_556NATO_SPR";
    displayName = "5.56x45mm 30Rnd STANAG Mag (SBLR)";
    displayNameShort = "Mk262 Mod 1 SBLR";
    mass = 9.7;
  };
  class rhs_mag_30Rnd_556x45_Mk318_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
  {
    ammo = "HLC_556NATO_SOST";
    displayName = "5.56x45mm 30Rnd STANAG Mag (SOST)";
    displayNameShort = "Mk318 Mod 0 SOST";
    mass = 9.5;
  };
  class rhs_mag_30Rnd_556x45_Mk262_PMAG: rhs_mag_30Rnd_556x45_M855A1_PMAG
  {
    ammo = "HLC_556NATO_SPR";
    displayName = "5.56x45mm 30Rnd PMAG M2 (SBLR)";
    displayNameShort = "Mk262 Mod 1 SBLR";
    mass = 9.7;
  };
  class rhs_mag_30Rnd_556x45_Mk318_PMAG: rhs_mag_30Rnd_556x45_M855A1_PMAG
  {
    ammo = "HLC_556NATO_SOST";
    displayName = "5.56x45mm 30Rnd PMAG M2 (SOST)";
    displayNameShort = "Mk318 Mod 0 SOST";
    mass = 9.5;
  };
  class rhs_mag_30Rnd_556x45_M855A1_EPM: rhs_mag_30Rnd_556x45_M855A1_Stanag
  {
    displayName = "5.56x45mm 30Rnd STANAG Mag (EPR)";
  };
  class rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
  {
    displayName = "5.56x45mm 30Rnd STANAG Mag (Tracer)";
    displayNameShort = "M856A1 Tracer";
  };
  class rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger: rhs_mag_30Rnd_556x45_M855A1_EPM
  {
    displayName = "5.56x45mm 30Rnd Ranger Mag (EPR)";
  };
  class rhs_mag_30Rnd_556x45_M855A1_EPM_Ranger_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red
  {
    displayName = "5.56x45mm 30Rnd Ranger Mag (Tracer)";
    displayNameShort = "M856A1 Tracer";
  };
  class rhs_mag_30Rnd_556x45_M855A1_EPM_Pull: rhs_mag_30Rnd_556x45_M855A1_EPM
  {
    displayName = "5.56x45mm 30Rnd Puller Mag (EPR)";
  };
  class rhs_mag_30Rnd_556x45_M855A1_EPM_Pull_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_EPM_Tracer_Red
  {
    displayName = "5.56x45mm 30Rnd Puller Mag (Tracer)";
    displayNameShort = "M856A1 Tracer";
  };
  class rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger: rhs_mag_30Rnd_556x45_M855A1_Stanag
  {
    displayName = "5.56x45mm 30Rnd Ranger Mag (EPR)";
  };
  class rhs_mag_30Rnd_556x45_M855A1_Stanag_Ranger_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
  {
    displayName = "5.56x45mm 30Rnd Ranger Mag (Tracer)";
    displayNameShort = "M856A1 Tracer";
  };
  class rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull: rhs_mag_30Rnd_556x45_M855A1_Stanag
  {
    displayName = "5.56x45mm 30Rnd Puller Mag (EPR)";
  };
  class rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull_Tracer_Red: rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red
  {
    displayName = "5.56x45mm 30Rnd Puller Mag (Tracer)";
    displayNameShort = "M856A1 Tracer";
  };
  class rhs_mag_30Rnd_556x45_Mk262_Stanag_Ranger: rhs_mag_30Rnd_556x45_Mk262_Stanag
  {
    displayName = "5.56x45mm 30Rnd Ranger Mag (SBLR)";
    displayNameShort = "Mk262 Mod 1 SBLR";
  };
  class rhs_mag_30Rnd_556x45_Mk262_Stanag_Pull: rhs_mag_30Rnd_556x45_Mk262_Stanag
  {
    displayName = "5.56x45mm 30Rnd Puller Mag (SBLR)";
    displayNameShort = "Mk262 Mod 1 SBLR";
  };
  class rhs_mag_30Rnd_556x45_Mk318_Stanag_Ranger: rhs_mag_30Rnd_556x45_Mk318_Stanag
  {
    displayName = "5.56x45mm 30Rnd Ranger Mag (SOST)";
    displayNameShort = "Mk318 Mod 0 SOST";
  };
  class rhs_mag_30Rnd_556x45_Mk318_Stanag_Pull: rhs_mag_30Rnd_556x45_Mk318_Stanag
  {
    displayName = "5.56x45mm 30Rnd Puller Mag (SOST)";
    displayNameShort = "Mk318 Mod 0 SOST";
  };
  class rhs_mag_30Rnd_556x45_M193_Stanag: 30Rnd_556x45_Stanag
  {
    displayName = "5.56x45mm 30Rnd STANAG Mag (Ball)";
    displayNameShort = "M193 Ball";
  };
  class rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M193_Stanag
  {
    displayName = "5.56x45mm 30Rnd STANAG Mag (Ball Tracer)";
    displayNameShort = "M196 Tracer";
  };
  class rhs_mag_20Rnd_556x45_M193_Stanag: rhs_mag_30Rnd_556x45_M193_Stanag
  {
    displayName = "5.56x45mm 20Rnd STANAG Mag (Ball)";
    displayNameShort = "M193 Ball";
  };
  class rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red: rhs_mag_30Rnd_556x45_M196_Stanag_Tracer_Red
  {
    displayName = "5.56x45mm 20Rnd STANAG Mag (Ball Tracer)";
    displayNameShort = "M196 Tracer";
  };
  class rhs_mag_30Rnd_556x45_M200_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
  {
    displayName = "5.56x45mm 30Rnd STANAG Mag (Blanks)";
  };
  class rhs_mag_20Rnd_556x45_M200_Stanag: rhs_mag_30Rnd_556x45_M200_Stanag
  {
    displayName = "5.56x45mm 20Rnd STANAG Mag (Blanks)";
  };
  class rhs_mag_20Rnd_556x45_Mk262_Stanag: rhs_mag_30Rnd_556x45_Mk262_Stanag
  {
    displayName = "5.56x45mm 20Rnd STANAG Mag (SBLR)";
    displayNameShort = "Mk262 Mod 1 SBLR";
  };
  class rhs_mag_20Rnd_556x45_M193_2MAG_Stanag: rhs_mag_20Rnd_556x45_M193_Stanag
  {
    displayName = "5.56x45mm 20Rnd Jungle Mag (Ball)";
    displayNameShort = "M193 Ball";
  };
  class rhs_mag_20Rnd_556x45_M196_2MAG_Stanag_Tracer_Red: rhs_mag_20Rnd_556x45_M196_Stanag_Tracer_Red
  {
    displayName = "5.56x45mm 20Rnd Jungle Mag (Ball Tracer)";
    displayNameShort = "M196 Tracer";
  };
  class rhs_mag_20Rnd_556x45_M855A1_Stanag: rhs_mag_30Rnd_556x45_M855A1_Stanag
  {
    displayName = "5.56x45mm 20Rnd STANAG Mag (EPR)";
  };
  class rhs_mag_30Rnd_556x45_Mk318_SCAR: rhs_mag_30Rnd_556x45_Mk318_Stanag
  {
    displayName = "5.56x45mm 30Rnd SCAR Mag (SOST)";
    displayNameShort = "Mk318 Mod 0 SOST";
  };
  class rhs_mag_30Rnd_556x45_Mk318_SCAR_Pull: rhs_mag_30Rnd_556x45_Mk318_SCAR
  {
    displayName = "5.56x45mm 30Rnd SCAR Puller Mag (SOST)";
    displayNameShort = "Mk318 Mod 0 SOST";
  };
  class rhs_mag_30Rnd_556x45_Mk318_SCAR_Ranger: rhs_mag_30Rnd_556x45_Mk318_SCAR
  {
    displayName = "5.56x45mm 30Rnd SCAR Ranger Mag (SOST)";
    displayNameShort = "Mk318 Mod 0 SOST";
  };
  class rhs_200rnd_556x45_B_SAW;
  class rhs_200rnd_556x45_M_SAW;
  class rhsusf_200Rnd_556x45_box: rhs_200rnd_556x45_B_SAW
  {
      ammo = "HLC_556NATO_EPR";
      displayName = "5.56x45mm 200Rnd Box (EPR)";
      displayNameShort = "M855A1 EPR";
      mass = 60.85;
  };
  class rhsusf_200rnd_556x45_mixed_box: rhs_200rnd_556x45_M_SAW
  {
      ammo = "HLC_556NATO_EPR";
      tracersEvery = 4;
      displayName = "5.56x45mm 200Rnd Box (EPR, TE4)";
      displayNameShort = "M856A1 Tracer";
      mass = 60.85;
  };
  class rhsusf_100Rnd_556x45_soft_pouch: rhs_mag_30Rnd_556x45_M855A1_Stanag
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45mm 100Rnd Softpack (EPR)";
    displayNameShort = "M855A1 EPR";
    mass = 31.53;
  };
  class rhsusf_100Rnd_556x45_mixed_soft_pouch: rhsusf_100Rnd_556x45_soft_pouch
  {
    ammo = "HLC_556NATO_EPR";
    tracersEvery = 4;
    displayName = "5.56x45mm 100Rnd Softpack (EPR, TE4)";
    displayNameShort = "M856A1 Tracer";
    mass = 31.53;
  };
  class rhsusf_200Rnd_556x45_soft_pouch: rhsusf_100Rnd_556x45_soft_pouch
  {
    displayName = "5.56x45mm 200Rnd Softpack (EPR)";
    displayNameShort = "M855A1 EPR";
    mass = 58.64;
  };
  class rhsusf_200Rnd_556x45_mixed_soft_pouch: rhsusf_200Rnd_556x45_soft_pouch
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45mm 200Rnd Softpack (EPR, TE4)";
    displayNameShort = "M856A1 Tracer";
    mass = 58.64;
  };
  class 200Rnd_556x45_Box_F: CA_Magazine
  {
      modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
      modelSpecialIsProxy = 1;
      displayName = "5.56x45mm 200Rnd Box (EPR)";
      displayNameShort = "M855A1 EPR";
      ammo = "HLC_556NATO_EPR";
      scopeArsenal = 0;
      scope = 1;
      mass = 60.85;
  };
  class 200Rnd_556x45_Box_Red_F: 200Rnd_556x45_Box_F
  {
    displayName = "5.56x45mm 200Rnd Box (EPR)";
    displayNameShort = "M855A1 EPR";
    ammo = "HLC_556NATO_EPR_Tracer";
    scopeArsenal = 2;
    scope = 2;
    mass = 60.85;
  };
  class 200Rnd_556x45_Box_Tracer_F: 200Rnd_556x45_Box_F
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45mm 200Rnd Box (Tracer)";
    displayNameShort = "M856A1 Tracer";
    scopeArsenal = 0;
    scope = 1;
    mass = 60.85;
  };
  class 200Rnd_556x45_Box_Tracer_Red_F: 200Rnd_556x45_Box_Tracer_F
  {
    displayName = "5.56x45mm 200Rnd Box (Tracer)";
    ammo = "HLC_556NATO_EPR_Tracer";
    displayNameShort = "M856A1 Tracer";
    scopeArsenal = 2;
    scope = 2;
    mass = 60.85;
  };
  class hlc_200rnd_556x45_M_SAW: 30Rnd_556x45_Stanag
  {
    modelSpecial = "rhsusf\addons\rhsusf_weapons\mag_proxies\rhs_mag_556x45_m249_box_200rnd";
    modelSpecialIsProxy = 1;
    tracersEvery = 4;
    displayName = "5.56x45mm 200Rnd Box (EPR, TE4)";
    displayNameShort = "M855A1 EPR";
    mass = 60.85;
  };
  class hlc_200rnd_556x45_B_SAW: hlc_200rnd_556x45_M_SAW
  {
    displayName = "5.56x45mm 200Rnd Box (EPR)";
    displayNameShort = "M855A1 EPR";
    mass = 60.85;
  };
  class HLC_200Rnd_556x45_T_SAW: hlc_200rnd_556x45_M_SAW
  {
    ammo = "HLC_556NATO_EPR_Tracer";
    displayName = "5.56x45mm 200Rnd Box (Tracer)";
    displayNameShort = "M856A1 Tracer";
    mass = 60.85;
  };
  class HLC_200Rnd_556x45_Mdim_SAW: hlc_200rnd_556x45_M_SAW
  {
    ammo = "HLC_B_556x45_Ball_Tracer_Dim";
    displayName = "5.56x45mm 200Rnd Box (IR-DIM)";
    displayNameShort = "M856A1 IR-DIM";
    tracersEvery = 1;
    mass = 60.85;
  };
  class 150Rnd_556x45_Drum_Mag_F: CA_Magazine
  {
    ammo = "HLC_556NATO_EPR_Tracer";
    displayName = "5.56x45mm 150Rnd Drum (EPR)";
    displayNameShort = "M855A1 EPR";
    mass = 45.2;
  };
  class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F
  {
    displayName = "5.56x45mm 150Rnd Drum (Tracer)";
    displayNameShort = "M856A1 Tracer";
  };
  class 150Rnd_556x45_Drum_Sand_Mag_F: 150Rnd_556x45_Drum_Mag_F
  {
    displayName = "5.56x45mm 150Rnd Sand Drum (EPR)";
  };
  class 150Rnd_556x45_Drum_Sand_Mag_Tracer_F: 150Rnd_556x45_Drum_Sand_Mag_F
  {
    displayName = "5.56x45mm 150Rnd Sand Drum (Tracer)";
    displayNameShort = "M856A1 Tracer";
  };
  class 150Rnd_556x45_Drum_Green_Mag_F: 150Rnd_556x45_Drum_Mag_F
  {
    displayName = "5.56x45mm 150Rnd Green Drum (EPR)";
  };
  class 150Rnd_556x45_Drum_Green_Mag_Tracer_F: 150Rnd_556x45_Drum_Green_Mag_F
  {
    displayName = "5.56x45mm 150Rnd Green Drum (Tracer)";
    displayNameShort = "M856A1 Tracer";
  };
  class hlc_30rnd_556x45_EPR: 30Rnd_556x45_Stanag
  {
    displayName = "5.56x45mm 30Rnd USGI EPM (EPR)";
    mass = 9.4;
  };
  class hlc_30rnd_556x45_EPR_PMAG: hlc_30rnd_556x45_EPR
  {
    displayName = "5.56x45mm 30Rnd PMAG M3 (EPR)";
    mass = 9.4;
  };
  class hlc_30rnd_556x45_EPR_STANAGHD: hlc_30rnd_556x45_EPR
  {
    displayName = "5.56x45mm 30Rnd HK EPM (EPR)";
    mass = 9.4;
  };
  class hlc_30rnd_556x45_EPR_EMAG: hlc_30rnd_556x45_EPR
  {
    displayName = "5.56x45mm 30Rnd EMAG (EPR)";
    mass = 9.4;
  };
  class hlc_30rnd_556x45_EPR_L5: hlc_30rnd_556x45_EPR
  {
    displayName = "5.56x45mm 30Rnd L5 (EPR)";
    mass = 9.4;
  };
  class hlc_50rnd_556x45_EPR: hlc_30rnd_556x45_EPR
  {
    displayName = "5.56x45mm 50Rnd X-15 Drum (EPR)";
    mass = 18.08;
  };
  class rhsgref_30rnd_556x45_m21: CA_Magazine
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45mm 30Rnd M21 Mag (EPR)";
    displayNameShort = "M855A1 EPR";
    mass = 9.4;
  };
  class rhssaf_30rnd_556x45_EPR_G36: 30Rnd_556x45_Stanag
  {
    ammo = "HLC_556NATO_EPR";
    displayName = "5.56x45mm 30Rnd G36 Mag (EPR)";
    displayNameShort = "M855A1 EPR";
    mass = 9.4;
  };
  class rhssaf_30rnd_556x45_MDIM_G36: 30Rnd_556x45_Stanag
  {
    ammo = "HLC_B_556x45_Ball_Tracer_Dim";
    displayName = "5.56x45mm 30Rnd G36 Mag (IR-DIM)";
    displayNameShort = "M855A1 EPR IR-DIM";
    tracersEvery = 1;
    mass = 9.4;
  };
  class rhssaf_30rnd_556x45_TDIM_G36: 30Rnd_556x45_Stanag
  {
    ammo = "HLC_B_556x45_Ball_Tracer_Dim";
    displayName = "5.56x45mm 30Rnd G36 Mag (IR-DIM/3)";
    displayNameShort = "M855A1 EPR IR-DIM";
    scopeArsenal = 0;
    mass = 9.4;
  };
  class rhssaf_30rnd_556x45_Tracers_G36: 30Rnd_556x45_Stanag
  {
    ammo = "HLC_556NATO_EPR_Tracer";
    displayName = "5.56x45mm 30Rnd G36 Mag (Tracer)";
    mass = 9.4;
  };
  class rhssaf_30rnd_556x45_SOST_G36: 30Rnd_556x45_Stanag
  {
    ammo = "HLC_556NATO_SOST";
    displayName = "5.56x45mm 30Rnd G36 Mag (SOST)";
    displayNameShort = "Mk318 Mod 0 SOST";
    mass = 9.5;
  };
  class rhssaf_30rnd_556x45_SPR_G36: 30Rnd_556x45_Stanag
  {
    ammo = "HLC_556NATO_SPR";
    displayName = "5.56x45mm 30Rnd G36 Mag (SBLR)";
    displayNameShort = "Mk262 Mod 1 SBLR";
    mass = 9.7;
  };
  class rhssaf_100rnd_556x45_EPR_G36: 30Rnd_556x45_Stanag
  {
    ammo = "HLC_556NATO_EPR_Tracer";
    displayName = "5.56x45mm 100Rnd G36 C-Mag (EPR)";
    displayNameShort = "M855A1 EPR";
    mass = 31.53;
  };
  class rhsgref_30rnd_556x45_vhs2: CA_Magazine
  {
    ammo = "HLC_556NATO_EPR_Tracer";
    displayName = "5.56x45mm 30Rnd VHS-2 Mag (EPR)";
    displayNameShort = "M855A1 EPR";
    mass = 9.4;
  };
  class rhsusf_20rnd_762x51_m118_special_mag: CA_Magazine
  {
    ammo = "ACE_762x51_Ball_M118LR";
    displayName = "7.62x51mm 20Rnd M14 Mag (M118 LR)";
    displayNameShort = "M118 LR";
    mass = 12.78;
  };
  class rhsusf_20rnd_762x51_m80_mag: rhsusf_20Rnd_762x51_m118_special_Mag
  {
    ammo = "HLC_762x51_Ball";
    displayName = "7.62x51mm 20Rnd M14 Mag (M80 Ball)";
    displayNameShort = "M80 Ball";
    mass = 12.78;
  };
  class rhsusf_20rnd_762x51_m993_mag: rhsusf_20Rnd_762x51_m118_special_Mag
  {
    ammo = "ACE_762x51_Ball_M993_AP";
    displayName = "7.62x51mm 20Rnd M14 Mag (M993 AP)";
    displayNameShort = "M993 AP";
    mass = 11.9;
  };
  class rhsusf_20rnd_762x51_m62_mag: rhsusf_20Rnd_762x51_m118_special_Mag
  {
    ammo = "HLC_762x51_Tracer";
    displayName = "7.62x51mm 20Rnd M14 Mag (M62 Tracer)";
    displayNameShort = "M62 Tracer";
    mass = 12.13;
  };
  class rhsusf_20rnd_762x51_SR25_m62_mag: rhsusf_20rnd_762x51_m62_mag
  {
    displayName = "7.62x51mm 20Rnd AR-10 Mag (M62 Tracer)";
    displayNameShort = "M62 Tracer";
    mass = 12.13;
  };
  class rhsusf_20Rnd_762x51_SR25_m118_special_mag: rhsusf_20rnd_762x51_m118_special_mag
  {
    ammo = "ACE_762x51_Ball_M118LR";
    displayName = "7.62x51mm 20Rnd AR-10 Mag (M118 LR)";
    displayNameShort = "M118 LR";
    mass = 12.78;
  };
  class rhsusf_20Rnd_762x51_SR25_m993_mag: rhsusf_20Rnd_762x51_m993_mag
  {
    ammo = "ACE_762x51_Ball_M993_AP";
    displayName = "7.62x51mm 20Rnd AR-10 Mag (M993 AP)";
    displayNameShort = "M993 AP";
    mass = 11.9;
  };
  class rhsusf_20Rnd_762x51_SR25_Mk316_Special_mag: rhsusf_20rnd_762x51_m118_special_mag
  {
    ammo = "HLC_762x51_MK316_20in";
    displayName = "7.62x51mm 20Rnd AR-10 Mag (Mk316 Mod 0)";
    displayNameShort = "Mk316 Mod 0";
  };
  class rhs_mag_20Rnd_SCAR_762x51_m80_ball: CA_Magazine
  {
    displayName = "7.62x51mm 20Rnd SCAR-H Mag (M80 Ball)";
    displayNameShort = "M80 Ball";
    ammo = "HLC_762x51_Ball";
    mass = 12.78;
  };
  class rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk: rhs_mag_20Rnd_SCAR_762x51_m80_ball
  {
      displayName = "7.62x51mm 20Rnd Black SCAR-H Mag (M80 Ball)";
      displayNameShort = "M80 Ball";
      mass = 12.78;
  };
  class rhs_mag_20Rnd_SCAR_762x51_m80a1_epr: rhs_mag_20Rnd_SCAR_762x51_m80_ball
  {
    ammo = "HLC_762x51_EPR";
    displayName = "7.62x51mm 20Rnd SCAR-H Mag (M80A1 EPR)";
    displayNameShort = "M80A1 EPR";
    mass = 12.13;
  };
  class rhs_mag_20Rnd_SCAR_762x51_m80a1_epr_bk: rhs_mag_20Rnd_SCAR_762x51_m80a1_epr
  {
    displayName = "7.62x51mm 20Rnd Black SCAR-H Mag (M80A1 EPR)";
    displayNameShort = "M80A1 EPR";
    mass = 12.13;
  };
  class rhs_mag_20Rnd_SCAR_762x51_mk316_special: rhs_mag_20Rnd_SCAR_762x51_m80_ball
  {
    ammo = "HLC_762x51_MK316_20in";
    displayName = "7.62x51mm 20Rnd SCAR-H Mag (Mk316 Mod 0)";
    displayNameShort = "Mk316 Mod 0";
  };
  class rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk: rhs_mag_20Rnd_SCAR_762x51_mk316_special
  {
    displayName = "7.62x51mm 20Rnd Black SCAR-H Mag (Mk316 Mod 0)";
    displayNameShort = "Mk316 Mod 0";
  };
  class rhs_mag_20Rnd_SCAR_762x51_m118_special: rhs_mag_20Rnd_SCAR_762x51_m80_ball
  {
    ammo = "ACE_762x51_Ball_M118LR";
    displayName = "7.62x51mm 20Rnd SCAR-H Mag (M118 LR)";
    displayNameShort = "M118 LR";
    mass = 12.78;
  };
  class rhs_mag_20Rnd_SCAR_762x51_m118_special_bk: rhs_mag_20Rnd_SCAR_762x51_m118_special
  {
    displayName = "7.62x51mm 20Rnd Black SCAR-H Mag (M118 LR)";
    displayNameShort = "M118 LR";
    mass = 12.78;
  };
  class rhs_mag_20Rnd_SCAR_762x51_m62_tracer: rhs_mag_20Rnd_SCAR_762x51_m80_ball
  {
    ammo = "HLC_762x51_Tracer";
    displayName = "7.62x51mm 20Rnd SCAR-H Mag (M62 Tracer)";
    displayNameShort = "M62 Tracer";
    mass = 12.13;
  };
  class rhs_mag_20Rnd_SCAR_762x51_m62_tracer_bk: rhs_mag_20Rnd_SCAR_762x51_m62_tracer
  {
    displayName = "7.62x51mm 20Rnd Black SCAR-H Mag (M62 Tracer)";
    displayNameShort = "M62 Tracer";
    mass = 12.13;
  };
  class rhs_mag_20Rnd_SCAR_762x51_m61_ap: rhs_mag_20Rnd_SCAR_762x51_m80_ball
  {
    displayName = "7.62x51mm 20Rnd SCAR-H Mag (M61 AP)";
    displayNameShort = "M61 AP";
    ammo = "HLC_762x51_AP";
    mass = 12.78;
  };
  class rhs_mag_20Rnd_SCAR_762x51_m61_ap_bk: rhs_mag_20Rnd_SCAR_762x51_m61_ap
  {
    displayName = "7.62x51mm 20Rnd Black SCAR-H Mag (M61 AP)";
    displayNameShort = "M61 AP";
    mass = 12.78;
  };
  class 10Rnd_Mk14_762x51_Mag: 20Rnd_762x51_Mag
  {
    displayName = "7.62x51mm 10Rnd Mag (M80A1 EPR)";
  };
  class ACE_10Rnd_762x51_M118LR_Mag: 10Rnd_Mk14_762x51_Mag
  {
    ammo = "ACE_762x51_Ball_M118LR";
    displayName = "7.62x51mm 10Rnd Mag (M118 LR)";
  };
  class ACE_10Rnd_762x51_M993_AP_Mag: 10Rnd_Mk14_762x51_Mag
  {
    ammo = "ACE_762x51_Ball_M993_AP";
    displayName = "7.62x51mm 10Rnd Mag (M993 AP)";
  };
  class ACE_10Rnd_762x51_Mk316_Mod_0_Mag: 10Rnd_Mk14_762x51_Mag
  {
    ammo = "HLC_762x51_MK316_20in";
    displayName = "7.62x51mm 10Rnd Mag (Mk316 Mod 0)";
  };
  class ACE_10Rnd_762x51_Mk319_Mod_0_Mag: 10Rnd_Mk14_762x51_Mag
  {
    ammo = "HLC_762x51_Barrier";
    displayName = "7.62x51mm 10Rnd Mag (Mk319 Mod 0)";
  };
  class rhsusf_5Rnd_762x51_m118_special_Mag: CA_Magazine
  {
    ammo = "HLC_762x51_MK316_20in";
    displayName = "7.62x51mm 5rnd Clip (Mk316 Mod 0)";
  };
  class rhsusf_5Rnd_762x51_m993_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
  {
    ammo = "HLC_762x51_Barrier";
    displayName = "7.62x51mm 5rnd Clip (Mk319 Mod 0)";
  };
  class rhsusf_5Rnd_762x51_m62_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
  {
    ammo = "HLC_762x51_Tracer";
    displayName = "7.62x51mm 5rnd Clip (M62 Tracer)";
  };
  class rhsusf_10Rnd_762x51_m118_special_Mag: CA_Magazine
  {
    ammo = "HLC_762x51_MK316_20in";
    displayName = "7.62x51mm 10rnd AICS (Mk316 Mod 0)";
  };
  class rhsusf_10Rnd_762x51_AICS_m118_special_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
  {
    displayName = "7.62x51mm 10rnd AICS (Mk316 Mod 0)";
  };
  class rhsusf_10Rnd_762x51_m62_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
  {
    ammo = "HLC_762x51_Tracer";
    displayName = "7.62x51mm 10rnd AICS (M62 Tracer)";
  };
  class rhsusf_10Rnd_762x51_m993_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
  {
    ammo = "HLC_762x51_Barrier";
    displayName = "7.62x51mm 10rnd AICS (Mk319 Mod 0)";
  };
  class rhsusf_5Rnd_762x51_AICS_m118_special_Mag: rhsusf_5Rnd_762x51_m118_special_Mag
  {
    displayName = "7.62x51mm 5rnd AICS (Mk316 Mod 0)";
  };
  class rhsusf_5Rnd_762x51_AICS_m993_Mag: rhsusf_5Rnd_762x51_m993_Mag
  {
    displayName = "7.62x51mm 5rnd AICS (Mk319 Mod 0)";
  };
  class rhsusf_5Rnd_762x51_AICS_m62_Mag: rhsusf_5Rnd_762x51_m62_Mag
  {
    displayName = "7.62x51mm 5rnd AICS (M62 Tracer)";
  };
  class rhs_mag_20Rnd_762x51_m80_fnfal: CA_Magazine
  {
    ammo = "HLC_762x51_EPR";
    displayName = "7.62x51mm 20rnd FN FAL (M80A1 EPR)";
    displayNameShort = "M80A1 EPR";
  };
  class rhs_mag_20Rnd_762x51_m80a1_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
  {
    scopeArsenal = 0;
  };
  class rhs_mag_20Rnd_762x51_m62_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
  {
    ammo = "HLC_762x51_Tracer";
    displayName = "7.62x51mm 20rnd FN FAL Mag (M62 Tracer)";
  };
  class rhs_mag_30Rnd_762x51_m80_fnfal: rhs_mag_20Rnd_762x51_m80_fnfal
  {
    ammo = "HLC_762x51_EPR";
    displayName = "7.62x51mm 30rnd FN FAL Mag (M80A1 EPR)";
    displayNameShort = "M80A1 EPR";
  };
  class rhs_mag_30Rnd_762x51_m80a1_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal
  {
    scopeArsenal = 0;
  };
  class rhs_mag_30Rnd_762x51_m62_fnfal: rhs_mag_30Rnd_762x51_m80_fnfal
  {
    ammo = "HLC_762x51_Tracer"
    displayName = "7.62x51mm 30rnd FN FAL Mag (M62 Tracer)";
  };
  class hlc_20Rnd_762x51_B_fal;
  class hlc_5rnd_300WM_FMJ_AWM : 30Rnd_556x45_Stanag
  {
    displayName = ".300 WM 5Rnd AICS (FMJ)";
    displayNameShort = ".300 WM FMJ";
  };
  class hlc_5rnd_300WM_SBT_AWM: hlc_5rnd_300WM_FMJ_AWM
  {
    displayName = ".300 WM 5Rnd AICS (BT Subsonic)";
    displayNameShort = ".300 WM Subsonic";
  };
  class hlc_5rnd_300WM_mk248_AWM: hlc_5rnd_300WM_FMJ_AWM
  {
    displayName = ".300 WM 5Rnd AICS (BTHP)";
    displayNameShort = ".300 WM BTHP";
  };
  class hlc_5rnd_300WM_BTSP_AWM: hlc_5rnd_300WM_FMJ_AWM
  {
    displayName = ".300 WM 5Rnd AICS (BTSP)";
    displayNameShort = ".300 WM BTSP";
  };
  class hlc_5rnd_300WM_T_AWM: hlc_5rnd_300WM_FMJ_AWM
  {
    displayName = ".300 WM 5Rnd AICS (FMJ Tracer)";
    displayNameShort = ".300 WM Tracer";
  };
  class hlc_5rnd_300WM_AP_AWM : hlc_5rnd_300WM_FMJ_AWM
  {
    displayName = ".300 WM 5Rnd AICS (AP)";
    displayNameShort = ".300 WM AP";
  };
  class rhsusf_5Rnd_300winmag_xm2010 : CA_Magazine
  {
    mass = 15;
    ammo = "HLC_300WM_BTHP";
    displayName = ".300 WM 5Rnd AICS (BTHP)";
    model = "\hlc_wp_fhAWC\mesh\magazine\magazine.p3d";
    modelSpecial = \hlc_wp_fhAWC\mesh\magazine\proxy\5Rnd_300wm_AW.p3d;
    modelSpecialIsProxy = 1;
    picture = "\hlc_wp_fhawc\tex\ui\m_awm_hpbt_ca";
    scopeArsenal = 2;
  };
  class hlc_100Rnd_762x51_B_M60E4: 30Rnd_556x45_Stanag
  {
    displayName = "7.62x51mm 100Rnd M13 Belt (M80A1 EPR)";
    displayNameShort = "M80A1 EPR";
    ammo = "HLC_762x51_EPR";
    mass = 61.73;
  };
  class hlc_100Rnd_762x51_M_M60E4: hlc_100Rnd_762x51_B_M60E4
  {
    displayName = "7.62x51mm 100Rnd M13 Belt (M80A1 EPR, TE4)";
    displayNameShort = "M80A1 EPR/M62 Tracer";
    ammo = "HLC_762x51_EPR";
    mass = 62.14;
  };
  class hlc_100Rnd_762x51_T_M60E4: hlc_100Rnd_762x51_B_M60E4
  {
    displayName = "7.62x51mm 100Rnd M13 Belt (M62 Tracer)";
    displayNameShort = "M62 Tracer";
    ammo = "HLC_762x51_Tracer";
    mass = 63.27;
  };
  class hlc_100Rnd_762x51_MDim_M60E4: hlc_100Rnd_762x51_B_M60E4
  {
    displayName = "7.62x51mm 100Rnd M13 Belt (M62 IR-DIM)";
    displayNameShort = "M62 IR-DIM";
    mass = 63.27;
    tracersEvery = 1;
  };
	class hlc_100Rnd_762x51_Barrier_M60E4: hlc_100Rnd_762x51_B_M60E4
	{
		displayName="7.62x51mm 100Rnd M13 Belt (Mk319 Mod 0, TE4)";
    displayNameShort = "Mk319 Mod 0";
    mass = 60.87;
	};
  class hlc_200Rnd_762x51_B_M60E4: 30Rnd_556x45_Stanag
  {
    displayName = "7.62x51mm 200Rnd M13 Belt (M80A1 EPR)";
    displayNameShort = "M80A1 EPR";
    ammo = "HLC_762x51_EPR";
    mass = 114.64;
  };
  class hlc_200Rnd_762x51_M_M60E4: hlc_200Rnd_762x51_B_M60E4
  {
    displayName = "7.62x51mm 200Rnd M13 Belt (M80A1 EPR, TE4)";
    displayNameShort = "M80A1 EPR/M62 Tracer";
    ammo = "HLC_762x51_EPR";
    mass = 115.47;
  };
  class hlc_200Rnd_762x51_MDim_M60E4: hlc_200Rnd_762x51_B_M60E4
  {
    displayName = "7.62x51mm 200Rnd M13 Belt (M62 IR-DIM)";
    displayNameShort = "M62 IR-DIM";
    mass = 117.95;
    tracersEvery = 1;
  };
  class hlc_200Rnd_762x51_T_M60E4: hlc_200Rnd_762x51_B_M60E4
  {
    displayName = "7.62x51mm 200Rnd M13 Belt (M62 Tracer)";
    displayNameShort = "M62 Tracer";
    ammo = "HLC_762x51_Tracer";
    mass = 117.95;
  };
	class hlc_200Rnd_762x51_Barrier_M60E4: hlc_200Rnd_762x51_B_M60E4
	{
		displayName="7.62x51mm 200Rnd M13 Belt (Mk319 Mod 0, TE4)";
    displayNameShort = "Mk319 Mod 0";
    mass = 112.92;
	};
  class 150Rnd_762x51_Box: CA_Magazine
  {
    displayName = "7.62x51mm 150Rnd Box (M80A1 EPR)";
    displayNameShort = "M80A1 EPR";
    ammo = "HLC_762x51_EPR";
    mass = 88.18;
    tracersEvery = 0;
  };
  class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box
  {
    displayName = "7.62x51mm 150Rnd Box (M62 Tracer)";
    displayNameShort = "M62 Tracer";
    ammo = "HLC_762x51_Tracer";
    mass = 90.5;
  };
  class 150Rnd_762x54_Box: 150Rnd_762x51_Box
  {
    displayName = "7.62x54mm 150Rnd Box (7N26 API)";
    displayNameShort = "7N26 API";
    ammo = "rhs_B_762x54_7N26_Ball";
    mass = 96.45;
  };
  class 150Rnd_762x54_Box_Tracer: 150Rnd_762x54_Box
  {
    displayName = "7.62x54mm 150Rnd Box (7T2 Tracer)";
    displayNameShort = "7T2 Tracer";
    ammo = "rhs_B_762x54_Ball_Tracer_Green";
    mass = 96.45;
  };
  class CA_LauncherMagazine;
	class rhs_mag_smaw_SR: CA_LauncherMagazine
	{
		allowedSlots[]={701,801,901};
	};
  class hlc_30rnd_68x43_FMJ : 30Rnd_556x45_Stanag
  {
    count = 30;
    descriptionshort = "Caliber: 6.8x43mm SPC FMJ-BT<br />Type: Full Metal Jacket<br />Rounds: 30";
    displayName = "6.8mm 30Rnd USGI EPM (FMJ)";
    modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG;
    modelSpecialIsProxy = 1;
    mass = "13.4 * 0.82"; //14.2 for the PMAG
  };
  class hlc_30rnd_68x43_OTM: hlc_30rnd_68x43_FMJ
  {
    count = 30;
    descriptionshort = "Caliber: 6.8x43mm SPC BT-BT<br />Type: Type: Ballistic Tip Boat Tail (Alliant RL10X at 27.5 grains, CCI BR4 primer, SSA-S Brass, SPC II rating MAXIMUM LOAD, Hornady SST Bullet)<br />Rounds: 30";
    displayName = "6.8mm 30Rnd USGI EPM (BT)";
    modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG;
    modelSpecialIsProxy = 1;
    picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_spr_ca.paa";
    mass = "14.7 * 0.82"; //15.5 for the PMAG
  };
  class hlc_30rnd_68x43_Tracer: hlc_30rnd_68x43_FMJ
  {
    count = 30;
    descriptionshort = "Caliber: 6.8x43mm SPC Tracer<br />Type: Incendiary Tracer<br />Rounds: 30";
    displayName = "6.8mm 30Rnd USGI EPM (Tracer)";
    modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG;
    modelSpecialIsProxy = 1;
  };
  class hlc_30rnd_68x43_MIRDIM: hlc_30rnd_68x43_FMJ
  {
    count = 30;
    descriptionshort = "Caliber: 6.8x43mm FMJ/IRDIM Tracer<br />Type:FMJ/IR-only Incendiary Tracer<br />Rounds: 30";
		displayName = "6.8mm 30Rnd USGI EPM (IR-DIM/3)";
    modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG;
    modelSpecialIsProxy = 1;
    scopeArsenal = 0;
  };
  class hlc_30rnd_68x43_MFMJ: hlc_30rnd_68x43_FMJ
  {
    count = 30;
    descriptionshort = "Caliber: 6.8x43mm FMJ/Tracer<br />Type: FMJ/Incendiary Tracer<br />Rounds: 30";
    displayName = "6.8mm 30Rnd USGI EPM (Tracer/3)";
    modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG;
    modelSpecialIsProxy = 1;
    scopeArsenal = 0;
  };
  class hlc_30rnd_68x43_IRDIM: hlc_30rnd_68x43_Tracer
  {
    count = 30;
    descriptionshort = "Caliber: 6.8x43mm SPC IRDIM Tracer<br />Type: IR-only Incendiary Tracer<br />Rounds: 30";
    displayName = "6.8mm 30Rnd USGI EPM (IR-DIM)";
    modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG;
    modelSpecialIsProxy = 1;
  };
  class hlc_30rnd_68x43_Sub : hlc_30rnd_68x43_Tracer
  {
    count = 30;
    descriptionshort = "Caliber: 6.8x43mm SPC Spitzer SP<br />Type: Spitzer Soft Point (Alliant RL9 at 20 grains, CCI BR4 Primer, SSA-S Brass, Speer HOT-COR Bullet)<br />Rounds: 30";
    displayName = "6.8mm 30Rnd USGI EPM (Subsonic)";
    mass = "12.8 * 0.82"; //13.6 for the PMAG
    modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG;
    modelSpecialIsProxy = 1;
  };
  class rhs_30Rnd_762x39mm;
  class rhs_5Rnd_338lapua_t5000: rhs_30Rnd_762x39mm
  {
    displayName = ".338 LM 5Rnd T-5000 (FMJ)";
    displayNameShort = ".338 LM FMJ";
    mass = 14;
  };
  class 150Rnd_93x64_Mag: CA_Magazine
  {
    displayName = "9.3x64mm 150Rnd Belt (FMJ)";
    count = 150;
    descriptionShort = "Caliber: 9.3x64mm<br />Rounds: 150<br />Used in: HK121";
    mass = 147.2;
  };
  class 10Rnd_93x64_DMR_05_Mag: 150Rnd_93x64_Mag
  {
    displayName = "9.3x64mm 10Rnd Mag (FMJ)";
    mass = 11.16;
  };
  #include "Magazines\NIA.hpp"
  #include "Magazines\custom.hpp"
  #include "Magazines\Cleanup.hpp"
};
