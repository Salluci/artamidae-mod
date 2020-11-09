class HLC_300Blackout_Ball;

class HLC_300Blackout_SMK: HLC_300Blackout_Ball
{
	typicalSpeed = 601;
	visibleFire = 3.8;
	ACE_bulletLength = 31.623;
  ACE_bulletMass = 7.77587;
	ACE_ballisticCoefficients[] = { 0.358 };
	ACE_muzzleVelocities[] = { 578, 616, 655 };
	airFriction = -0.00120798;
};
class HLC_556NATO_EPR: B_556x45_Ball
{
	tracerScale = 1;
  tracerStartTime=0.073;
	tracerEndTime=4;
};
class HLC_556NATO_EPR_Tracer: HLC_556NATO_EPR
{
	tracerScale = 1;
	tracerStartTime=0.073;
	tracerEndTime=4;
};
class HLC_B_556x45_Ball_Tracer_Dim: HLC_556NATO_EPR
{
	tracerScale = 1;
  tracerStartTime=0.073;
	tracerEndTime=4;
};
class ACE_556x45_Ball_M995_AP: B_556x45_Ball
{
	hit = 11.38;
};
class HLC_68x43_FMJ: B_556x45_Ball
{
	typicalSpeed = 815.34;
	ACE_bulletMass = 7.45187; //Cartridge weight: 16.8 grams
	ACE_bulletLength = 24.18;
	ACE_ballisticCoefficients[] = { 0.378 };
	ACE_dragModel = 1;
	ACE_muzzleVelocities[] = { 755, 786, 815, 827, 837, 858 };
	airFriction = -0.00106608;
};

class HLC_68x43_OTM: HLC_68x43_FMJ
{
	typicalSpeed = 795;
	ACE_bulletMass = 7.77587; //Cartridge weight: 17.53 grams
	ACE_bulletLength = 31.5976;
	ACE_ballisticCoefficients[] = { 0.4 };
	ACE_dragModel = 1;
	ACE_muzzleVelocities[] = { 737, 767, 795, 806, 816, 836 };
	airFriction = -0.00101344;
};

class hlc_68x43_Sub: HLC_68x43_FMJ
{
	nvgOnly = 1;
	typicalSpeed = 317;
	visibleFire = 0.55;
  audibleFire = 0.65;
	ACE_dragModel = 1;
	ACE_bulletMass = 9.71984; //Cartridge weight: 18.95 grams
	ACE_bulletLength = 29.85;
	ACE_muzzleVelocities[] = { 307, 310, 317, 320, 325, 336 };
	ACE_ballisticCoefficients[] = { 0.455 };
	airFriction = -0.0005319;
};
class ACE_762x51_Ball_M118LR: B_762x51_Ball
{
	caliber = 0.9;
	tracerScale = 1.2; //0.6;
  tracerStartTime=0.0073;  // Based on the British L5A1 which burns out to 1000m
  tracerEndTime=4;  // Time in seconds calculated with ballistics calculator
};
class ACE_762x51_Ball_M993_AP: B_762x51_Ball
{
	tracerScale = 1.2; //0.6;
  tracerStartTime=0.073;  // Based on the British L5A1 which burns out to 1000m
  tracerEndTime=4;  // Time in seconds calculated with ballistics calculator
	hit = 14.52;
	caliber = 1.8;
};
class HLC_762x51_Ball: B_762x51_Ball
{
	tracerScale = 1.2; //0.6;
  tracerStartTime=0.073;  // Based on the British L5A1 which burns out to 1000m
  tracerEndTime=4;  // Time in seconds calculated with ballistics calculator
};
class HLC_762x51_tracer: HLC_762x51_ball
{
  cartridge = "FxCartridge_762";
  model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
  nvgonly = 0;
	tracerScale = 1.2; //0.6;
	tracerStartTime=0.073;  // Based on the British L5A1 which burns out to 1000m
	tracerEndTime=4;  // Time in seconds calculated with ballistics calculator
	ACE_bulletMass = 9.20145; //Cartridge Weight: 24.75 grams
	ACE_bulletLength = 34.29;
	typicalSpeed = 854.66;
	ACE_muzzleVelocities[] = { 721, 824, 845, 855, 862, 867 };
  ACE_barrelLengths[] = { 254.0, 406.4, 508.0, 558.8, 609.6, 660.4 };
	ACE_dragModel = 1;
	ACE_ballisticCoefficients[] = { 0.47 };
	airFriction = -0.00083895;
};
class HLC_762x51_AP: HLC_762x51_Ball
{
	cartridge = "FxCartridge_762";
  model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	caliber = 1.55;
	hit = 13.2;
	ACE_bulletMass = 9.71984; //Cartridge Weight: 25.46 grams
	ACE_bulletLength = 32.51;
	typicalSpeed = 856.18;
	ACE_ballisticCoefficients[] = { 0.43 };
	ACE_dragModel = 1;
	ACE_barrelLengths[] = { 254.0, 406.4, 508.0, 558.8, 609.6, 660.4 };
	ACE_muzzleVelocities[] = { 723, 826, 847, 857, 865, 870 };
};
class HLC_762x51_EPR: HLC_762x51_Ball
{
	ACE_bulletMass = 8.42386; //Cartridge Weight: 24 grams
	ACE_bulletLength = 30.14;
	ACE_ballisticCoefficients[] = { 0.21 };
	ACE_dragModel = 7;
	caliber = 1.23;
	hit = 14.3;
};
class HLC_B_762x51_Tracer_Dim: HLC_762x51_Tracer
{
	nvgOnly = 1;
	tracerScale = 1.3;
};
