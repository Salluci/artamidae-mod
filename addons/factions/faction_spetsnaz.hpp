class I_soldier_F;
class I_soldier_F_OCimport_01: I_soldier_F { scope = 0; class EventHandlers; };
class I_soldier_F_OCimport_02: I_soldier_F_OCimport_01 { class EventHandlers; };

class I_Soldier_AR_F;
class I_Soldier_AR_F_OCimport_01: I_Soldier_AR_F { scope = 0; class EventHandlers; };
class I_Soldier_AR_F_OCimport_02: I_Soldier_AR_F_OCimport_01 { class EventHandlers; };

class I_Soldier_GL_F;
class I_Soldier_GL_F_OCimport_01: I_Soldier_GL_F { scope = 0; class EventHandlers; };
class I_Soldier_GL_F_OCimport_02: I_Soldier_GL_F_OCimport_01 { class EventHandlers; };

class I_Soldier_TL_F;
class I_Soldier_TL_F_OCimport_01: I_Soldier_TL_F { scope = 0; class EventHandlers; };
class I_Soldier_TL_F_OCimport_02: I_Soldier_TL_F_OCimport_01 { class EventHandlers; };

class I_Soldier_M_F;
class I_Soldier_M_F_OCimport_01: I_Soldier_M_F { scope = 0; class EventHandlers; };
class I_Soldier_M_F_OCimport_02: I_Soldier_M_F_OCimport_01 { class EventHandlers; };

class I_Soldier_LAT_F;
class I_Soldier_LAT_F_OCimport_01: I_Soldier_LAT_F { scope = 0; class EventHandlers; };
class I_Soldier_LAT_F_OCimport_02: I_Soldier_LAT_F_OCimport_01 { class EventHandlers; };

class I_medic_F;
class I_medic_F_OCimport_01: I_medic_F { scope = 0; class EventHandlers; };
class I_medic_F_OCimport_02: I_medic_F_OCimport_01 { class EventHandlers; };

class I_Soldier_SL_F;
class I_Soldier_SL_F_OCimport_01: I_Soldier_SL_F { scope = 0; class EventHandlers; };
class I_Soldier_SL_F_OCimport_02: I_Soldier_SL_F_OCimport_01 { class EventHandlers; };

class I_Sniper_F;
class I_Sniper_F_OCimport_01: I_Sniper_F { scope = 0; class EventHandlers; };
class I_Sniper_F_OCimport_02: I_Sniper_F_OCimport_01 { class EventHandlers; };

class I_Spotter_F;
class I_Spotter_F_OCimport_01: I_Spotter_F { scope = 0; class EventHandlers; };
class I_Spotter_F_OCimport_02: I_Spotter_F_OCimport_01 { class EventHandlers; };

class I_C_Soldier_Para_5_F;
class I_C_Soldier_Para_5_F_OCimport_01: I_C_Soldier_Para_5_F { scope = 0; class EventHandlers; };
class I_C_Soldier_Para_5_F_OCimport_02: I_C_Soldier_Para_5_F_OCimport_01 { class EventHandlers; };

class O_RUS_Rifleman_01: I_soldier_F_OCimport_02 {
  author = "jarrad96";
  scope = 2;
  scopeCurator = 2;
  displayName = "Rifleman";
  side = 0;
  faction = "RUS";

  identityTypes[] = { "Head_Greek" , "LanguageRUS_F" , "G_HAF_default" };


  class EventHandlers: EventHandlers {
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};

    class ALiVE_orbatCreator {
      init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_rifle_ak74m_MTK','','','SMA_eotech',['hlc_30Rnd_545x39_EP_ak',30],[],''],[],['hgun_Rook40_F','','','',['16Rnd_9x21_Mag',16],[],''],['Surpat_Camo_Unf',[['FirstAidKit',6]]],['VSM_FAPC_Operator_OGA_OD',[['hlc_30Rnd_545x39_EP_ak',10,30],['16Rnd_9x21_Mag',2,16],['MiniGrenade',2,1],['SmokeShell',2,1],['SmokeShellGreen',1,1]]],[],'Surpat_Helmet','VSM_balaclava2_Black',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','NVGoggles_OPFOR']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
    };

  };

  // custom attributes (do not delete)
  ALiVE_orbatCreator_owned = 1;

};

class O_RUS_Autorifleman_01: I_Soldier_AR_F_OCimport_02 {
  author = "jarrad96";
  scope = 2;
  scopeCurator = 2;
  displayName = "Autorifleman";
  side = 0;
  faction = "RUS";

  identityTypes[] = { "Head_Greek" , "LanguageRUS_F" , "G_HAF_default" };


  class EventHandlers: EventHandlers {
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};

    class ALiVE_orbatCreator {
      init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_rifle_rpk74n','','','hlc_optic_kobra',['hlc_45Rnd_545x39_t_rpk',45],[],''],[],['hgun_Rook40_F','','','',['16Rnd_9x21_Mag',16],[],''],['Surpat_Camo_Unf_R',[['FirstAidKit',6]]],['VSM_FAPC_MG_OGA_OD',[['16Rnd_9x21_Mag',2,16],['MiniGrenade',2,1],['SmokeShell',2,1],['SmokeShellGreen',1,1],['hlc_45Rnd_545x39_t_rpk',12,45]]],[],'Surpat_Boonie_HS','VSM_FaceMask_black',['Binocular','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','NVGoggles_OPFOR']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
    };

  };

  // custom attributes (do not delete)
  ALiVE_orbatCreator_owned = 1;

};

class O_RUS_Grenadier_01: I_Soldier_GL_F_OCimport_02 {
  author = "jarrad96";
  scope = 2;
  scopeCurator = 2;
  displayName = "Grenadier";
  side = 0;
  faction = "RUS";

  identityTypes[] = { "Head_Greek" , "LanguageRUS_F" , "G_HAF_default" };


  class EventHandlers: EventHandlers {
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};

    class ALiVE_orbatCreator {
      init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_rifle_ak74m_gl','','','hlc_optic_kobra',['hlc_30Rnd_545x39_EP_ak',30],['hlc_VOG25_AK',1],''],[],['hgun_Rook40_F','','','',['16Rnd_9x21_Mag',16],[],''],['Surpat_Camo_Unf_TG',[['FirstAidKit',5]]],['VSM_FAPC_Operator_OGA_OD',[['16Rnd_9x21_Mag',2,16],['MiniGrenade',2,1],['SmokeShell',2,1],['SmokeShellGreen',1,1],['hlc_30Rnd_545x39_EP_ak',10,30],['hlc_VOG25_AK',9,1],['hlc_GRD_White',1,1]]],[],'VSM_OD_spray_OPS','VSM_Balaclava2_black_Goggles',['Binocular','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','NVGoggles_OPFOR']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
    };

  };

  // custom attributes (do not delete)
  ALiVE_orbatCreator_owned = 1;

};

class O_RUS_Fireteam_Leader_01: I_Soldier_TL_F_OCimport_02 {
  author = "jarrad96";
  scope = 2;
  scopeCurator = 2;
  displayName = "Fireteam Leader";
  side = 0;
  faction = "RUS";

  identityTypes[] = { "Head_Greek" , "LanguageRUS_F" , "G_HAF_default" };


  class EventHandlers: EventHandlers {
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};

    class ALiVE_orbatCreator {
      init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_rifle_ak74m_MTK','','','SMA_eotechG33_3XDOWN',['hlc_30Rnd_545x39_EP_ak',30],[],''],[],['hgun_Rook40_F','muzzle_snds_L','','',['16Rnd_9x21_Mag',16],[],''],['Surpat_Camo_Unf_R',[['FirstAidKit',6]]],['VSM_FAPC_Breacher_OGA_OD',[['hlc_30Rnd_545x39_EP_ak',10,30],['16Rnd_9x21_Mag',2,16],['MiniGrenade',2,1],['SmokeShell',2,1],['SmokeShellGreen',1,1]]],[],'VSM_Black_OPS_2','VSM_balaclava2_Black',['Binocular','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','NVGoggles_OPFOR']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
    };

  };

  // custom attributes (do not delete)
  ALiVE_orbatCreator_owned = 1;

};

class O_RUS_Marksman_VKSS_01: I_Soldier_M_F_OCimport_02
{
  author = "jarrad96";
  scope = 2;
  scopeCurator = 2;
  displayName = "Marksman (VKSS)";
  side = 0;
  faction = "RUS";
  identityTypes[] = { "Head_Greek" , "LanguageRUS_F" , "G_HAF_default" };
  class EventHandlers: EventHandlers
  {
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
    class ALiVE_orbatCreator
    {
      init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['srifle_DMR_04_F','','SMA_ANPEQ15_BLK','optic_DMS',['10Rnd_127x54_Mag',10],[],'bipod_03_F_blk'],[],['hgun_Rook40_F','','','',['16Rnd_9x21_Mag',16],[],''],['Surpat_Camo_Unf',[['FirstAidKit',6]]],['VSM_FAPC_Operator_OGA_OD',[['16Rnd_9x21_Mag',2,16],['MiniGrenade',2,1],['SmokeShell',2,1],['SmokeShellGreen',1,1],['10Rnd_127x54_Mag',12,10]]],[],'Surpat_Cap','VSM_Facemask_black_Peltor',['Rangefinder','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','NVGoggles_OPFOR']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
    };
  };
  // custom attributes (do not delete)
  ALiVE_orbatCreator_owned = 1;
};
class O_RUS_Rifleman_AT_01: I_Soldier_LAT_F_OCimport_02
{
  author = "jarrad96";
  scope = 2;
  scopeCurator = 2;
  displayName = "Rifleman (AT)";
  side = 0;
  faction = "RUS";
  identityTypes[] = { "Head_Greek" , "LanguageRUS_F" , "G_HAF_default" };
  class EventHandlers: EventHandlers
  {
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
    class ALiVE_orbatCreator
    {
      init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_rifle_ak74m_MTK','','','SMA_eotech552',['hlc_30Rnd_545x39_EP_ak',30],[],''],['launch_RPG7_F','','','',['RPG7_F',1],[],''],['hgun_Rook40_F','','','',['16Rnd_9x21_Mag',16],[],''],['Surpat_Camo_Unf',[['FirstAidKit',6]]],['VSM_FAPC_Operator_OGA_OD',[['hlc_30Rnd_545x39_EP_ak',10,30],['16Rnd_9x21_Mag',2,16],['MiniGrenade',2,1],['SmokeShell',2,1],['SmokeShellGreen',1,1]]],['I_Fieldpack_oli_LAT',[['NLAW_F',2,1]]],'VSM_OGA_OD_OPS','VSM_balaclava2_Black',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','NVGoggles_OPFOR']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
    };
  };
  // custom attributes (do not delete)
  ALiVE_orbatCreator_owned = 1;
};
class O_RUS_Medic_01: I_medic_F_OCimport_02
{
  author = "jarrad96";
  scope = 2;
  scopeCurator = 2;
  displayName = "Medic";
  side = 0;
  faction = "RUS";
  identityTypes[] = { "Head_Greek" , "LanguageRUS_F" , "G_HAF_default" };
  class EventHandlers: EventHandlers
  {
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
    class ALiVE_orbatCreator
    {
      init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_rifle_ak74m','','','',['hlc_30Rnd_545x39_B_AK',30],[],''],[],['hgun_Rook40_F','','','',['16Rnd_9x21_Mag',16],[],''],['Surpat_Camo_Unf',[['FirstAidKit',6]]],['VSM_FAPC_Operator_OGA_OD',[['16Rnd_9x21_Mag',2,16],['MiniGrenade',2,1],['SmokeShell',2,1],['SmokeShellGreen',2,1],['hlc_30Rnd_545x39_EP_ak',10,30]]],['I_Fieldpack_oli_Medic',[['Medikit',1],['FirstAidKit',10]]],'VSM_Mich2000_2_CamoSprayOD','VSM_balaclava2_Black',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','NVGoggles_OPFOR']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
    };
  };
  // custom attributes (do not delete)
  ALiVE_orbatCreator_owned = 1;
};
class O_RUS_Squad_Leader_01: I_Soldier_SL_F_OCimport_02
{
  author = "jarrad96";
  scope = 2;
  scopeCurator = 2;
  displayName = "Squad Leader";
  side = 0;
  faction = "RUS";
  identityTypes[] = { "Head_Greek" , "LanguageRUS_F" , "G_HAF_default" };
  class EventHandlers: EventHandlers
  {
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
    class ALiVE_orbatCreator
    {
      init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_rifle_ak12','','','SMA_eotech552_3XDOWN',['hlc_30Rnd_545x39_EP_ak',30],[],''],[],['hgun_Rook40_F','muzzle_snds_L','','',['16Rnd_9x21_Mag',16],[],''],['Surpat_Camo_Unf',[['FirstAidKit',6]]],['VSM_FAPC_Breacher_OGA_OD',[['16Rnd_9x21_Mag',2,16],['MiniGrenade',2,1],['SmokeShell',2,1],['SmokeShellGreen',1,1],['hlc_30Rnd_545x39_EP_ak',10,30],['I_IR_Grenade',1,1]]],[],'VSM_Black_OPS_2','VSM_balaclava2_Black',['Binocular','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','NVGoggles_OPFOR']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
    };
  };
  // custom attributes (do not delete)
  ALiVE_orbatCreator_owned = 1;
};
class O_RUS_Sniper_01: I_Sniper_F_OCimport_02
{
  author = "jarrad96";
  scope = 2;
  scopeCurator = 2;
  displayName = "Sniper";
  side = 0;
  faction = "RUS";
  identityTypes[] = { "Head_Greek" , "LanguageRUS_F" , "G_NATO_sniper" };
  class EventHandlers: EventHandlers
  {
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
    class ALiVE_orbatCreator
    {
      init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['srifle_DMR_05_blk_F','','SMA_ANPEQ15_BLK','optic_KHS_blk',['10Rnd_93x64_DMR_05_Mag',10],[],'bipod_01_F_blk'],[],['hgun_Rook40_F','muzzle_snds_L','','',['16Rnd_9x21_Mag',16],[],''],['Surpat_Camo_Unf_Ghillie',[['FirstAidKit',5],['SmokeShell',2,1]]],['V_Chestrig_rgr',[['16Rnd_9x21_Mag',2,16],['SmokeShellGreen',1,1],['I_IR_Grenade',1,1],['10Rnd_93x64_DMR_05_Mag',7,10]]],[],'Surpat_Boonie_HS','',['Rangefinder','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','NVGoggles_INDEP']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
    };
  };
  // custom attributes (do not delete)
  ALiVE_orbatCreator_owned = 1;
};
class O_RUS_Spotter_01: I_Spotter_F_OCimport_02
{
  author = "jarrad96";
  scope = 2;
  scopeCurator = 2;
  displayName = "Spotter";
  side = 0;
  faction = "RUS";
  identityTypes[] = { "Head_Greek" , "LanguageRUS_F" , "G_NATO_sniper" };
  class EventHandlers: EventHandlers
  {
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
    class ALiVE_orbatCreator
    {
      init = "if (local (_this select 0)) then {_unit = _this select 0;_onSpawn = {_unit = _this select 0;_unit setUnitLoadout [['hlc_rifle_aku12','hlc_muzzle_545SUP_AK','','SMA_ELCAN_SPECTER',['hlc_30Rnd_545x39_EP_ak',30],[],''],[],['hgun_Rook40_F','muzzle_snds_L','','',['16Rnd_9x21_Mag',16],[],''],['Surpat_Camo_Unf_Ghillie',[['FirstAidKit',5],['SmokeShell',2,1]]],['V_Chestrig_rgr',[['16Rnd_9x21_Mag',3,16],['SmokeShellGreen',1,1],['MiniGrenade',1,1],['hlc_30Rnd_545x39_EP_ak',8,30],['I_IR_Grenade',2,1]]],[],'Surpat_Boonie_HS','',['Rangefinder','','','',[],[],''],['ItemMap','ItemGPS','ItemRadio','ItemCompass','ItemWatch','NVGoggles_INDEP']];reload _unit;};[_unit] call _onSpawn;_unit addMPEventHandler ['MPRespawn', _onSpawn];};";
    };
  };
  // custom attributes (do not delete)
  ALiVE_orbatCreator_owned = 1;
};
