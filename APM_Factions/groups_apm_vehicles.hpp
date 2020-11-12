
class Motorized
{
  name = "Motorized Infantry";
  class b_bapmf_motorized_HMMWV_fireteam
	{
    name = "HMMWV Fireteam";
    side = 1;
    faction = "B_faction_APM";
    icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = {0,0,0};
      rank = "SERGEANT";
      side = 1;
      vehicle = "B_APM_HMMWV_M2";
    };
    class Unit1
    {
      position[] = {5,-5,0};
      rank = "CORPORAL";
      side = 1;
      vehicle = "B_Contractor_APM_TL1";
    };
    class Unit2
    {
      position[] = {-5,-5,0};
      rank = "PRIVATE";
      side = 1;
      vehicle = "B_Contractor_APM_Rifleman1";
    };
    class Unit3
    {
      position[] = {10,-10,0};
      rank = "PRIVATE";
      side = 1;
      vehicle = "B_Contractor_APM_Grenadier1";
    };
    class Unit4
    {
      position[] = {-10,-10,0};
      rank = "PRIVATE";
      side = 1;
      vehicle = "B_Contractor_APM_Marksman1";
    };
  };
};
class Mechanized
{
  name = "Mechanized Infantry";
  class b_bapmf_mechanized_HMMWV_column
	{
    name = "HMMWV Column";
    side = 1;
    faction = "B_faction_APM";
    icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = {0,0,0};
      rank = "SERGEANT";
      side = 1;
      vehicle = "B_APM_HMMWV_M2";
    };
    class Unit1
    {
      position[] = {5,-8,0};
      rank = "PRIVATE";
      side = 1;
      vehicle = "B_APM_HMMWV_M2";
    };
    class Unit2
    {
      position[] = {-5,-8,0};
      rank = "PRIVATE";
      side = 1;
      vehicle = "B_APM_HMMWV_MK19";
    };
    class Unit3
    {
      position[] = {10,-13,0};
      rank = "PRIVATE";
      side = 1;
      vehicle = "B_APM_HMMWV_M2";
    };
  };
};
class Air
{
  name = "Air";
  class b_bapmf_air_ah_6m_escort
	{
    name = "AH-6M Escort";
    side = 1;
    faction = "B_faction_APM";
    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
    rarityGroup = 0.5;
    class Unit0
		{
      position[] = {0,0,0};
      rank = "SERGEANT";
      side = 1;
      vehicle = "B_APM_AH6M";
    };
    class Unit1
		{
      position[] = {0,-20,0};
      rank = "PRIVATE";
      side = 1;
      vehicle = "B_APM_AH6M";
    };
  };
  class b_bapmf_air_blackhawk_escort
	{
    name = "Blackhawk Escort";
    side = 1;
    faction = "B_faction_APM";
    icon = "\A3\ui_f\data\map\markers\nato\b_air.paa";
    rarityGroup = 0.5;
    class Unit0
		{
      position[] = {0,0,0};
      rank = "SERGEANT";
      side = 1;
      vehicle = "B_APM_UH60M";
    };
    class Unit1
		{
      position[] = {25,-30,0};
      rank = "PRIVATE";
      side = 1;
      vehicle = "B_APM_UH60M";
    };
  };
};
