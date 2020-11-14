class Motorized
{
  name = "Motorized Infantry";
  class I_Mayhem_Motor_Offroad
  {
    name = "Offroad Recon Team"
    side = 2;
    faction = "I_faction_MayhemPMC";
    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = {0,0,0};
      rank = "SERGEANT";
      side = 2;
      vehicle = "I_Mayhem_Offroad";
    };
    class Unit1
    {
      position[] = {5,-5,0};
      rank = "CORPORAL";
      side = 2;
      vehicle = "I_Contractor_Mayhem_TL1";
    };
    class Unit2
    {
      position[] = {-5,-5,0};
      rank = "PRIVATE";
      side = 2;
      vehicle = "I_Contractor_Mayhem_Rifleman1";
    };
    class Unit3
    {
      position[] = {10,-10,0};
      rank = "PRIVATE";
      side = 2;
      vehicle = "I_Contractor_Mayhem_Grenadier1";
    };
    class Unit4
    {
      position[] = {-10,-10,0};
      rank = "PRIVATE";
      side = 2;
      vehicle = "I_Contractor_Mayhem_Marksman1";
    };
  };
  class I_Mayhem_Motor_Tigr
  {
    name = "GAZ Patrol Squad"
    side = 2;
    faction = "I_faction_MayhemPMC";
    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = {0,0,0};
      rank = "SERGEANT";
      side = 2;
      vehicle = "I_Mayhem_TIGR";
    };
    class Unit1
    {
      vehicle = "I_Contractor_Mayhem_Medic1";
      position[] = {5,-5,0};
      rank = "CORPORAL";
      side = 2;
    };
    class Unit2
    {
      vehicle = "I_Contractor_Mayhem_Rifleman1";
      position[] = {-5,-5,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit3
    {
      vehicle = "I_Contractor_Mayhem_Grenadier1";
      position[] = {-10,-10,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit4
    {
      vehicle = "I_Contractor_Mayhem_Grenadier2";
      position[] = {15,-15,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit5
    {
      vehicle = "I_Contractor_Mayhem_AR1";
      position[] = {-15,-15,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit6
    {
      vehicle = "I_Contractor_Mayhem_AR1";
      position[] = {20,-20,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit7
    {
      vehicle = "I_Contractor_Mayhem_Marksman1";
      position[] = {-20,-20,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit8
    {
      vehicle = "I_Contractor_Mayhem_AT1";
      position[] = {25,-25,0};
      rank = "PRIVATE";
      side = 2;
    };
  };
  class I_Mayhem_Motor_Tigr_STS
  {
    name = "GAZ Assault Team"
    side = 2;
    faction = "I_faction_MayhemPMC";
    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = {0,0,0};
      rank = "SERGEANT";
      side = 2;
      vehicle = "I_Mayhem_TIGR_Armed";
    };
    class Unit1
    {
      vehicle = "I_Contractor_Mayhem_Medic1";
      position[] = {5,-5,0};
      rank = "CORPORAL";
      side = 2;
    };
    class Unit2
    {
      vehicle = "I_Contractor_Mayhem_Rifleman1";
      position[] = {-5,-5,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit3
    {
      vehicle = "I_Contractor_Mayhem_Ammo_AT";
      position[] = {10,-10,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit4
    {
      vehicle = "I_Contractor_Mayhem_Grenadier1";
      position[] = {-10,-10,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit5
    {
      position[] = {-10,-10,0};
      rank = "PRIVATE";
      side = 2;
      vehicle = "I_Contractor_Mayhem_Marksman1";
    };
  };
};
class Mechanized
{
  name = "Mechanized Infantry";
  class I_Mayhem_Mech_Warrior
  {
    name = "Warrior Squad";
    side = 2;
    faction = "I_faction_MayhemPMC";
    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = {0,0,0};
      rank = "SERGEANT";
      side = 2;
      vehicle = "I_Mayhem_FV510";
    };
    class Unit1
    {
      vehicle = "I_Contractor_Mayhem_TL1";
      position[] = {5,-5,0};
      rank = "CORPORAL";
      side = 2;
    };
    class Unit2
    {
      vehicle = "I_Contractor_Mayhem_Medic1";
      position[] = {-5,-5,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit3
    {
      vehicle = "I_Contractor_Mayhem_Ammo_AT";
      position[] = {10,-10,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit4
    {
      vehicle = "I_Contractor_Mayhem_Grenadier1";
      position[] = {-10,-10,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit5
    {
      vehicle = "I_Contractor_Mayhem_AT1";
      position[] = {15,-15,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit6
    {
      vehicle = "I_Contractor_Mayhem_AR2";
      position[] = {-15,-15,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit7
    {
      vehicle = "I_Contractor_Mayhem_AR2";
      position[] = {20,-20,0};
      rank = "PRIVATE";
      side = 2;
    };
  };
  class I_Mayhem_Mech_M2A3
  {
    name = "M2A3 Squad";
    side = 2;
    faction = "I_faction_MayhemPMC";
    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = {0,0,0};
      rank = "SERGEANT";
      side = 2;
      vehicle = "I_Mayhem_M2A3";
    };
    class Unit1
    {
      vehicle = "I_Contractor_Mayhem_TL1";
      position[] = {5,-5,0};
      rank = "CORPORAL";
      side = 2;
    };
    class Unit2
    {
      vehicle = "I_Contractor_Mayhem_Medic1";
      position[] = {-5,-5,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit3
    {
      vehicle = "I_Contractor_Mayhem_Ammo_AT";
      position[] = {10,-10,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit4
    {
      vehicle = "I_Contractor_Mayhem_Grenadier1";
      position[] = {-10,-10,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit5
    {
      vehicle = "I_Contractor_Mayhem_AT1";
      position[] = {15,-15,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit6
    {
      vehicle = "I_Contractor_Mayhem_AR2";
      position[] = {-15,-15,0};
      rank = "PRIVATE";
      side = 2;
    };
    class Unit7
    {
      vehicle = "I_Contractor_Mayhem_AR2";
      position[] = {20,-20,0};
      rank = "PRIVATE";
      side = 2;
    };
  };
};
class Armored
{
  name = "Armor";
};
class Air
{
	name = "Air";
};
