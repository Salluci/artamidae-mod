class cfgVehicles
{
  class VTOL_01_base_F: VTOL_base_F
  {
    class Turrets;
  };
  class VTOL_01_armed_base_F: VTOL_01_base_F
  {
    class NewTurret;
    class Turrets: Turrets
    {
      class GunnerTurret_01: NewTurret
      {
        magazines[] = {"100Rnd_105mm_HEAT_MP","40Rnd_105mm_APFSDS_T_Red","4000Rnd_20mm_Tracer_Red_shells","1000Rnd_20mm_AP_shells"};
        minElev = -40;
        minTurn = 65;
        maxTurn = 115;
      };
      class GunnerTurret_02: NewTurret
      {
        magazines[] = {"240Rnd_40mm_GPR_Tracer_Red_shells","240Rnd_40mm_GPR_Tracer_Red_shells","160Rnd_40mm_APFSDS_Tracer_Red_shells","160Rnd_40mm_APFSDS_Tracer_Red_shells"};
        minElev = -40;
        minTurn = 65;
        maxTurn = 115;
      };
    };
  };
};
