class cfgMagazines
{
  class CA_Magazine;
  class 10Rnd_338_Mag; //338/300 Win Mag Magazines
  class ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag: 10Rnd_338_Mag
  {
    author = "ACE-Team";
    ammo = "ACE_762x67_Ball_Berger_Hybrid_OTM";
    displayName = ".300WM 10Rnd Mag (Berger Hybrid OTM)";
    displayNameShort = ".300WM OTM";
    descriptionShort = "Caliber: .300 Winchester Magnum<br />Rounds: 10";
    initSpeed = 800;
  };
  class ACE_20Rnd_762x67_Mk248_Mod_0_Mag: 10Rnd_338_Mag
  {
    author = "ACE-Team";
    displayName = ".300WM 10Rnd Mag (Mk248 Mod 0)";
    displayNameShort = ".300WM BTSP";
    descriptionShort = "Caliber: .300 Winchester Magnum<br />Rounds: 10";
    initSpeed = 865;
  };
  class ACE_20Rnd_762x67_Mk248_Mod_1_Mag: 10Rnd_338_Mag
  {
    author = "ACE-Team";
    displayName = ".300WM 10Rnd Mag (Mk248 Mod 1)";
    displayNameShort = ".300WM BTHP";
    descriptionShort = "Caliber: .300 Winchester Magnum<br />Rounds: 10";
    initSpeed = 847;
  };
  class 30Rnd_65x39_caseless_mag; //MSBS Magazines rename + Variants
  class 30Rnd_65x39_caseless_msbs_mag: 30Rnd_65x39_caseless_mag
  {
  	displayName = "6.5mm 30Rnd MSBS Mag";
  	descriptionShort = "Caliber: 6.5x39 mm STANAG Caseless<br />Rounds: 30<br />Used in: MSBS";
  };
  class 30Rnd_65x39_caseless_msbs_mag_Tracer: 30Rnd_65x39_caseless_msbs_mag
  {
  	displayName = "6.5mm 30Rnd MSBS Tracer Mag";
  	descriptionShort = "Caliber: 6.5x39 mm STANAG Caseless<br />Rounds: 30<br />Used in: MSBS";
  };
  class APM_30Rnd_65_Creedmor_MSBS_mag: 30Rnd_65x39_caseless_msbs_mag
  {
  	displayName="6.5mm Creedmoor 30Rnd MSBS Mag";
  	descriptionShort = "Caliber: 6.5x47mm Creedmor<br />Rounds: 30<br />Used in: MSBS";
  	displayNameShort = "6.5mm CM";
  	ammo = "ACE_65_Creedmor_Ball";
  	author = "LinkIsParking";
  };
  class APM_30Rnd_65_HPBT_MSBS_mag: 30Rnd_65x39_caseless_msbs_mag
  {
  	displayName="6.5x47mm 30Rnd MSBS Mag (HPBT Scenar)";
  	descriptionShort = "Caliber: 6.5x47mm (HPBT Scenar)<br />Rounds: 30<br />Used in: MSBS";
  	displayNameShort = "6.5mm Lapua";
  	ammo = "ACE_65x47_Ball_Scenar";
  	author = "LinkIsParking";
  };
  class 30Rnd_65x39_caseless_green; //Type 115/Katiba Creedmoor/HPBT
  class APM_30Rnd_65_Creedmor_k_mag: 30Rnd_65x39_caseless_green
  {
  	displayName="6.5mm Creedmoor 30Rnd Mag";
  	descriptionShort = "Caliber: 6.5x47mm Creedmor<br />Rounds: 30<br />Used in: Katiba, Type 115";
  	displayNameShort = "6.5mm CM";
  	ammo = "ACE_65_Creedmor_Ball";
  	author = "LinkIsParking";
  };
  class APM_30Rnd_65_HPBT_k_mag: 30Rnd_65x39_caseless_green
  {
  	displayName="6.5x47mm 30Rnd Mag (HPBT Scenar)";
  	descriptionShort = "Caliber: 6.5x47mm (HPBT Scenar)<br />Rounds: 30<br />Used in: Katiba, Type 115";
  	displayNameShort = "6.5mm Lapua";
  	ammo = "ACE_65x47_Ball_Scenar";
  	author = "LinkIsParking";
  };
  class 200Rnd_556x45_Box_F: CA_Magazine
  {
      scopeArsenal = 0;
  };
  class 200Rnd_556x45_Box_Red_F: 200Rnd_556x45_Box_F
  {
    displayName = "5.56mm 200Rnd Box";
    scopeArsenal = 2;
  };
  class 200Rnd_556x45_Box_Tracer_F: 200Rnd_556x45_Box_F
  {
    scopeArsenal = 0;
  };
  class 200Rnd_556x45_Box_Tracer_Red_F: 200Rnd_556x45_Box_Tracer_F
  {
    displayName = "5.56mm 200Rnd Box (Tracer)";
    scopeArsenal = 2;
  };
  class 20Rnd_762x51_Mag: CA_Magazine //7.62x51 Magazines. RHS again.
  {
    displayName = "7.62mm 20Rnd Mag (M80 Ball)";
  };
  class ACE_20Rnd_762x51_Mag_SD: 20Rnd_762x51_Mag
  {
    displayName = "7.62mm 20Rnd Mag (Subsonic)";
  };
  class ACE_20Rnd_762x51_Mag_Tracer: 20Rnd_762x51_Mag
  {
    displayName = "7.62mm 20Rnd Mag (Tracer)";
  };
  class ACE_20Rnd_762x51_Mag_Tracer_Dim: 20Rnd_762x51_Mag
  {
    displayName = "7.62mm 20Rnd Mag (IR-DIM)";
  };
  class rhsusf_20Rnd_762x51_SR25_m118_special_mag;
  class APM_20Rnd_762x51_SR25_M61_AP_Mag: rhsusf_20Rnd_762x51_SR25_m118_special_mag
  {
    displayName = "20rnd SR-25 M61 AP";
    displayNameShort = "M61 AP";
    ammo = "rhs_ammo_762x51_M61_AP";
    author = "LinkIsParking";
    scopeArsenal = 2;
  };
  class APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag: rhsusf_20Rnd_762x51_SR25_m118_special_mag
  {
    displayName = "20rnd SR-25 M80A1 EPR";
    displayNameShort = "M80A1 EPR";
    ammo = "rhs_ammo_762x51_M80A1EPR_Ball"
    author = "LinkIsParking";
    scopeArsenal = 2;
  };
  class rhs_mag_20Rnd_SCAR_762x51_m80_ball;
  class APM_20Rnd_762x51_SCAR_mk319_Mag: rhs_mag_20Rnd_SCAR_762x51_m80_ball
  {
    displayName = "20Rnd SCAR Mk319 Mod 0";
    displayNameShort = "Mk319 Mod 0";
    ammo = "HLC_762x51_Barrier";
    author = "LinkIsParking";
  };
  class APM_20Rnd_762x51_SCAR_mk319_Mag_bk: rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk
  {
    displayName = "20Rnd SCAR Mk319 Mod 0 (black)";
    displayNameShort = "Mk319 Mod 0";
    ammo = "HLC_762x51_Barrier";
    author = "LinkIsParking";
    scopeArsenal = 2;
  };
  class 10Rnd_Mk14_762x51_Mag: 20Rnd_762x51_Mag
  {
    displayName = "7.62mm 10Rnd Mag (M80 Ball)";
  };
  class ACE_10Rnd_762x51_M118LR_Mag: 10Rnd_Mk14_762x51_Mag
  {
  };
  class ACE_10Rnd_762x51_M993_AP_Mag: 10Rnd_Mk14_762x51_Mag
  {
  };
  class ACE_10Rnd_762x51_Mk316_Mod_0_Mag: 10Rnd_Mk14_762x51_Mag
  {
    scopeArsenal = 2;
    displayName = "7.62mm 10Rnd Mag (Mk316 Mod 0)";
  };
  class ACE_10Rnd_762x51_Mk319_Mod_0_Mag: 10Rnd_Mk14_762x51_Mag
  {
    scopeArsenal = 2;
    displayName = "7.62mm 10Rnd Mag (Mk319 Mod 0)";
  };
  class CA_LauncherMagazine;
	class rhs_mag_smaw_SR: CA_LauncherMagazine
	{
		allowedSlots[]={701,801,901};
	};
};
