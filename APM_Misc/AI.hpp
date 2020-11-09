class MGun;
class LMG_RCWS: MGun
{
  aiDispersionCoefX = 5;
  aiDispersionCoefY = 4;
  class manual;
  class close: manual
  {
    aiBurstTerminable = 0;
    aiDispersionCoefX = 6.0;
    aiDispersionCoefY = 7.0;
  };
  class short: close
  {
    aiBurstTerminable = 0;
  };
  class medium: close
  {
    aiBurstTerminable = 0;
  };
  class far: close
  {
    aiBurstTerminable = 0;
  };
};
class HMG_127: LMG_RCWS
{
  class manual;
  class close: manual
  {
    aiBurstTerminable = 0;
    aiDispersionCoefX = 6.0;
    aiDispersionCoefY = 7.0;
  };
  class short: close
  {
    aiBurstTerminable = 0;
  };
  class medium: close
  {
    aiBurstTerminable = 0;
  };
  class far: close
  {
    aiBurstTerminable = 0;
  };
};
class LMG_coax: LMG_RCWS
{
  class manual;
  class close: manual
  {
    aiBurstTerminable = 0;
    aiDispersionCoefX = 6.0;
    aiDispersionCoefY = 7.0;
  };
  class short: close
  {
    aiBurstTerminable = 0;
  };
  class medium: close
  {
    aiBurstTerminable = 0;
  };
  class far: close
  {
    aiBurstTerminable = 0;
  };
};
class cannonCore;
class autocannon_Base_F: CannonCore
{
  aiDispersionCoefX = 6;
  aiDispersionCoefY = 5;
};
class LauncherCore;
class Launcher_Base_F;
class Launch_RPG7_F: Launcher_Base_F
{
  class Single: Mode_SemiAuto
  {
    aiDispersionCoefX = 2.5;
    aiDispersionCoefY = 3;
    aiRateOfFireDispersion = 10;
    aiRateOfFireDistance = 300;
    maxRange = 400;
    maxRangeProbab = 0.4;
    midRange = 250;
    midRangeProbab = 0.9;
    minRange = 5;
    minRangeProbab = 0.56;
    sounds[] = {"StandardSound"};
  };
};
class launch_RPG32_F: Launcher_Base_F
{
  class Single: Mode_SemiAuto
  {
    aiDispersionCoefX = 2.5;
    aiDispersionCoefY = 3;
    aiRateOfFire = 7;
    aiRateOfFireDispersion = 3;
    aiRateOfFireDistance = 400;
    maxRange = 600;
    maxRangeProbab = 0.85;
    midRange = 300;
    midRangeProbab = 0.85;
    minRange = 10;
    minRangeProbab = 0.3;
  };
};
