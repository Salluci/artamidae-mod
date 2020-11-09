  class BulletBase;
  class B_762x51_Ball;
  class HLC_762x51_Ball: B_762x51_Ball
  {
    hit = 20.5;
    caliber = 1.6;
    typicalSpeed = 820;
  };
  class HLC_762x51_Barrier: HLC_762x51_Ball
  {
    caliber = 2;
    hit = 25;
    typicalSpeed = 910;
  };
  class HLC_762x51_MK316_20in: HLC_762x51_Ball
  {
    hit = 19;
    typicalSpeed = 721;
  };
  class rhs_ammo_762x51_M61_AP: HLC_762x51_Ball
  {
    caliber = 2.4;
    hit = 23;
    airfriction = -0.00088651;
  };
  class B_556x45_Ball;
  class HLC_556NATO_EPR: B_556x45_Ball
  {
    typicalSpeed = 921;
  };
  class HLC_556NATO_SPR: HLC_556NATO_EPR
  {
    typicalSpeed = 838;
  };
  class HLC_556NATO_SOST: HLC_556NATO_EPR
  {
    hit = 12.43;
    typicalSpeed = 950;
    caliber = 1.4;
  };
  class ACE_556x45_Ball_M995_AP: B_556x45_Ball
  {
    hit = 10.28;
    caliber = 1.6;
  };
  class B_762x54_Ball: B_762x51_Ball
  {
    caliber = 1.4;
    hit = 22;
    typicalSpeed = 838;
  };
  class HLC_762x54_Ball: HLC_762x51_Ball
  {
    caliber = 1.4;
    hit = 22;
    typicalSpeed = 838;
  };
  class HLC_762x54_AP: HLC_762x54_Ball
  {
    caliber = 2;
    hit = 24;
    typicalSpeed = 838;
  };
  class rhs_B_762x54_Ball: B_762x51_Ball
  {
    caliber = 1.4;
    hit = 22;
    typicalSpeed = 832;
  };
  class rhs_B_762x54_7N1_Ball: rhs_B_762x54_Ball
  {
    caliber = 2;
    hit = 20;
    typicalSpeed = 838;
  };
  class rhs_B_762x54_7N14_Ball: rhs_B_762x54_Ball
  {
    caliber = 2.1;
    hit = 24;
    typicalSpeed = 838;
  };
  class rhs_B_762x54_7N26_Ball: rhs_B_762x54_Ball
  {
    caliber = 1.2;
    hit = 20;
    typicalSpeed = 832;
  };
  class rhs_B_762x54_7BZ3_Ball: rhs_B_762x54_Ball
  {
    caliber = 2.4;
    hit = 19;
    typicalSpeed = 832;
  };
  class B_65x39_Caseless: BulletBase
  {
    hit = 14;
    typicalSpeed = 774;
  };
  class ACE_65_Creedmoor_Ball: B_65x39_Caseless
  {
    hit = 15;
    typicalSpeed = 830;
    caliber = 0.4;
  };
  class ACE_65x47_Ball_Scenar: B_65x39_Caseless
  {
    hit = 13;
    typicalSpeed = 776;
    caliber = 1.6;
  };
  class B_338_Ball: BulletBase
  {
    caliber = 2.1;
    hit = 35;
    typicalSpeed = 860;
  };
  class ACE_338_Ball: B_338_Ball
  {
    caliber = 1.6;
    hit = 33;
    typicalSpeed = 750;
  };
  class ACE_338_Ball_API526: B_338_Ball
  {
    caliber = 2.7;
    hit = 30;
    typicalSpeed = 880;
  };
  class ACE_762x67_Ball_Berger_Hybrid_OTM: B_762x51_Ball
  {
    caliber = 0.8;
    hit = 38;
    typicalSpeed = 800;
  };
  class ACE_762x67_Ball_Mk248_Mod_0: B_762x51_Ball
  {
    caliber = 2;
    hit = 28;
    typicalSpeed = 865;
  };
  class ACE_762x67_Ball_Mk248_Mod_1: B_762x51_Ball
  {
    caliber = 0.5;
    hit = 30;
    typicalSpeed = 847;
  };
  class B_338_NM_Ball: BulletBase
  {
    caliber = 3;
    hit = 28;
  };
//airfriction = acceleration / v^2
//-0.00103711 = acceleration / v^2
//-0.00103711 = acceleration / 780^2
//acceleration = -640.97m/s^2
//speed at 100m: 721m/s
//speed at 300m: 611m/s
//speed at 450m: 525m/s
//speed at 500m: 502m/s
//speed at 800m: 368m/s
