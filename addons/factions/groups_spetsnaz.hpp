class Infantry
{
  name = "Infantry";
  class rus_infantry_sentry
  {
    name = "Sentry";
    side = 0;
    faction = "RUS";
    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = { 0 , 0 , 0 };
      rank = "SERGEANT";
      side = 0;
      vehicle = "O_RUS_Rifleman_01";
    };
    class Unit1
    {
      position[] = { 5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_Grenadier_01";
    };
  };
  class rus_infantry_fireteam
  {
    name = "Fireteam";
    side = 0;
    faction = "RUS";
    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = { 0 , 0 , 0 };
      rank = "SERGEANT";
      side = 0;
      vehicle = "O_RUS_Fireteam_Leader_01";
    };
    class Unit1
    {
      position[] = { 5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_Autorifleman_01";
    };
    class Unit2
    {
      position[] = { -5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_Grenadier_01";
    };
    class Unit3
    {
      position[] = { 10 , -10 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_Rifleman_01";
    };
  };
  class rus_infantry_squad
  {
    name = "Squad";
    side = 0;
    faction = "RUS";
    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = { 0 , 0 , 0 };
      rank = "SERGEANT";
      side = 0;
      vehicle = "O_RUS_Squad_Leader_01";
    };
    class Unit1
    {
      position[] = { 5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_Medic_01";
    };
    class Unit2
    {
      position[] = { -5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_Marksman_VKSS_01";
    };
    class Unit3
    {
      position[] = { 10 , -10 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_Rifleman_AT_01";
    };
    class Unit4
    {
      position[] = { -10 , -10 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_Autorifleman_01";
    };
    class Unit5
    {
      position[] = { 15 , -15 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_Grenadier_01";
    };
    class Unit6
    {
      position[] = { -15 , -15 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_Rifleman_01";
    };
    class Unit7
    {
      position[] = { 20 , -20 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_Rifleman_01";
    };
  };
};
class SpecOps
{
  name = "Special Forces";
  class rus_specops_sniper_team
  {
    name = "Sniper Team";
    side = 0;
    faction = "RUS";
    icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
    rarityGroup = 0.5;

    class Unit0
    {
      position[] = { 0 , 0 , 0 };
      rank = "SERGEANT";
      side = 0;
      vehicle = "O_RUS_Sniper_01";
    };
    class Unit1
    {
      position[] = { 5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_Spotter_01";
    };
  };
  class rus_specops_recon_element
  {
    name = "Recon Element";
    side = 0;
    faction = "RUS";
    icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
    rarityGroup = 0.5;

    class Unit0 {
      position[] = { 0 , 0 , 0 };
      rank = "SERGEANT";
      side = 0;
      vehicle = "O_RUS_Recon_01";
    };
    class Unit1 {
      position[] = { 5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_Marksman_VKSS_01";
    };
  };
};
class Support
{
  name = "Support Infantry";
  class rus_support_sso_sentry
  {
    name = "SSO Sentry";
    side = 0;
    faction = "RUS";
    icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = { 0 , 0 , 0 };
      rank = "SERGEANT";
      side = 0;
      vehicle = "O_RUS_SSO_Rifleman_01";
    };
    class Unit1
    {
      position[] = { 5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Grenadier_01";
    };
  };
  class rus_support_sso_fireteam
  {
    name = "SSO Fireteam";
    side = 0;
    faction = "RUS";
    icon = "\A3\ui_f\data\map\markers\nato\n_support.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = { 0 , 0 , 0 };
      rank = "SERGEANT";
      side = 0;
      vehicle = "O_RUS_SSO_Fireteam_Leader_01";
    };
    class Unit1
    {
      position[] = { 5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Autorifleman_01";
    };
    class Unit2
    {
      position[] = { -5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Rifleman_AT_01";
    };
    class Unit3
    {
      position[] = { 10 , -10 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Rifleman_01";
    };
  };
  class rus_support_sso_assault_team
  {
    name = "SSO Assault Team";
    side = 0;
    faction = "RUS";
    icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = { 0 , 0 , 0 };
      rank = "SERGEANT";
      side = 0;
      vehicle = "O_RUS_SSO_Fireteam_Leader_01";
    };
    class Unit1
    {
      position[] = { 5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Autorifleman_01";
    };
    class Unit2
    {
      position[] = { -5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Grenadier_01";
    };
    class Unit3
    {
      position[] = { 10 , -10 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Rifleman_01";
    };
  };
  class rus_support_sso_squad
  {
    name = "SSO Squad";
    side = 0;
    faction = "RUS";
    icon = "\A3\ui_f\data\map\markers\nato\n_support.paa";
    rarityGroup = 0.5;
    class Unit0
    {
      position[] = { 0 , 0 , 0 };
      rank = "SERGEANT";
      side = 0;
      vehicle = "O_RUS_SSO_Squad_Leader_01";
    };
    class Unit1
    {
      position[] = { 5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Autorifleman_01";
    };
    class Unit2
    {
      position[] = { -5 , -5 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Rifleman_AT_01";
    };
    class Unit3
    {
      position[] = { 10 , -10 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Medic_01";
    };
    class Unit4
    {
      position[] = { -10 , -10 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Marksman_01";
    };
    class Unit5
    {
      position[] = { 15 , -15 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Grenadier_01";
    };
    class Unit6
    {
      position[] = { -15 , -15 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Rifleman_01";
    };
    class Unit7
    {
      position[] = { 20 , -20 , 0 };
      rank = "PRIVATE";
      side = 0;
      vehicle = "O_RUS_SSO_Rifleman_01";
    };
  };
};
