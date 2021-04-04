class O_Krampus_Soldier_Base: O_Soldier_base_F
{
  author = "LinkIsParking";
  displayName = "Krampus Minion";
  faction = "O_faction_KrampusLegion";
  CBA_facewearList[] = {};
  headgearList[] = {};
  genericNames="NATOMen"
  editorSubcategory = "EdSubcat_Personnel";
  vehicleClass = "Men";
  scope = 0;
  identityTypes[] =  {"LanguageENG_F","Head_NATO"};
  apm_loadout = '';
  apm_insignia = "";
  cost = 120000;
  camouflage = 1;
  sensitivity = 2.5;
  threat[] = {1, 0.7, 0.5};
};
class O_Krampus_Rifleman_F: O_Krampus_Soldier_Base
{
  scope = 2;
  displayName = "Rifleman (SG-551)";
  apm_loadout = '[["hlc_rifle_SG551LB_TAC","","rhsusf_acc_M952V","SMA_eotech552",["hlc_30Rnd_556x45_T_sg550",30],[],"rhsusf_acc_grip3"],[],["hlc_pistol_P226R_Stainless","","acc_flashlight_pistol","HLC_Optic_Romeo1_RX",["hlc_12Rnd_357SIG_B_P226",12],[],""],["VSM_OGA_Crye_grey_Camo",[["ACE_packingBandage",20],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_morphine",2],["ACE_splint",2],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["hlc_12Rnd_357SIG_B_P226",2,12]]],["V_CarrierRigKBT_01_heavy_Black_F",[["hlc_30Rnd_556x45_T_sg550",12,30],["MiniGrenade",2,1],["SmokeShell",2,1]]],[],"rhsgref_helmet_m1942_heergreycover","G_Balaclava_TI_blk_F",[],["ItemMap","","TFAR_fadak","ItemCompass","","TRYK_G_Shades_Blue_NV"]]';
  role = "Rifleman";
};
class O_Krampus_Leader_F: O_Krampus_Soldier_Base
{
  scope = 2;
  displayName = "Chief (SG-551)";
  role = "SpecialOperative";
  apm_loadout = '[["hlc_rifle_SG551SB_TAC","","rhsusf_acc_wmx_bk","SMA_MICRO_T2_LM",["hlc_30Rnd_556x45_T_sg550",30],[],""],[],["hlc_pistol_P226R_Stainless","","acc_flashlight_pistol","HLC_Optic_Romeo1_RX",["hlc_12Rnd_357SIG_B_P226",12],[],""],["VSM_OGA_Crye_grey_Camo",[["ACE_packingBandage",20],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_morphine",2],["ACE_splint",2],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["hlc_12Rnd_357SIG_B_P226",2,12]]],["V_CarrierRigKBT_01_heavy_Black_F",[["MiniGrenade",4,1],["SmokeShell",2,1],["hlc_30Rnd_556x45_T_sg550",10,30],["ACE_HandFlare_Red",2,1],["ACE_CTS9",2,1],["rhs_mag_an_m14_th3",2,1]]],[],"rhsgref_helmet_m1942_heergreycover","G_Balaclava_TI_blk_F",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","TFAR_fadak","ItemCompass","TFAR_microdagr","TRYK_G_Shades_Blue_NV"]]';
};
class O_Krampus_Officer_F: O_Krampus_Soldier_Base
{
  scope = 2;
  displayName = "Officer (SG-553)";
  role = "Officer";
  apm_loadout = '[["hlc_rifle_SG553SB","","","",["hlc_30Rnd_556x45_T_sg550",30],[],""],[],["hlc_pistol_P226R_Stainless","","acc_flashlight_pistol","HLC_Optic_Romeo1_RX",["hlc_12Rnd_357SIG_B_P226",12],[],""],["VSM_OGA_Crye_grey_Camo",[["ACE_packingBandage",20],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_morphine",2],["ACE_splint",2],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["hlc_12Rnd_357SIG_B_P226",2,12]]],["V_CarrierRigKBT_01_light_Black_F",[["ACE_CableTie",2],["ACE_IR_Strobe_Item",4],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["MineDetector",1],["ACE_tourniquet",2],["ACE_splint",2],["SmokeShell",2,1],["ACE_HandFlare_Red",2,1],["ACE_CTS9",2,1],["rhs_mag_an_m14_th3",2,1],["hlc_30Rnd_556x45_T_sg550",5,30],["ACE_HandFlare_Green",2,1],["SmokeShellRed",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",2,1],["hlc_12Rnd_357SIG_B_P226",2,12]]],[],"H_MilCap_gry","G_Bandanna_sport",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","TFAR_fadak","ItemCompass","TFAR_microdagr","TRYK_Shemagh_MESH_NV"]]';
};
class O_Krampus_RTO_F: O_Krampus_Soldier_Base
{
  scope = 2;
  displayName = "Radio Operator (SG-551)";
  role = "SpecialOperative";
  apm_loadout = '[["hlc_rifle_SG551LB","","","",["hlc_30Rnd_556x45_T_sg550",30],[],""],["rhs_weap_m72a7","","","",[],[],""],["hlc_pistol_P226R_Stainless","","acc_flashlight_pistol","HLC_Optic_Romeo1_RX",["hlc_12Rnd_357SIG_B_P226",12],[],""],["VSM_OGA_Crye_grey_Camo",[["ACE_packingBandage",20],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_morphine",2],["ACE_splint",2],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["hlc_12Rnd_357SIG_B_P226",2,12]]],["V_CarrierRigKBT_01_light_Black_F",[["ACE_CableTie",2],["ACE_IR_Strobe_Item",4],["ACE_Flashlight_XL50",1],["ACE_MapTools",1],["MineDetector",1],["ACE_tourniquet",2],["ACE_splint",2],["SmokeShell",2,1],["ACE_HandFlare_Red",2,1],["ACE_CTS9",2,1],["rhs_mag_an_m14_th3",2,1],["ACE_HandFlare_Green",2,1],["SmokeShellRed",2,1],["SmokeShellBlue",2,1],["SmokeShellGreen",2,1],["hlc_12Rnd_357SIG_B_P226",2,12],["hlc_30Rnd_556x45_T_sg550",8,30]]],["B_RadioBag_01_black_F",[]],"rhsgref_helmet_m1942_heergreycover","G_Balaclava_TI_blk_F",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","TFAR_fadak","ItemCompass","TFAR_microdagr","TRYK_Shemagh_MESH_NV"]]';
};
class O_Krampus_AT_F: O_Krampus_Soldier_Base
{
  scope = 2;
  displayName = "AT Rifleman (SMAW)";
  role = "MissileSpecialist";
  engineer = true;
  apm_loadout = '[["hlc_rifle_SG551SB_TAC","","rhsusf_acc_M952V","rhsusf_acc_T1_low",["hlc_30Rnd_556x45_T_sg550",30],[],""],["rhs_weap_smaw","","","rhsusf_acc_eotech_552",["rhs_mag_smaw_HEDP",1],[],""],["hlc_pistol_P226R_Stainless","","acc_flashlight_pistol","HLC_Optic_Romeo1_RX",["hlc_12Rnd_357SIG_B_P226",12],[],""],["VSM_OGA_Crye_grey_Camo",[["ACE_packingBandage",20],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_morphine",2],["ACE_splint",2],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["hlc_12Rnd_357SIG_B_P226",2,12]]],["V_CarrierRigKBT_01_heavy_Black_F",[["MiniGrenade",2,1],["SmokeShell",2,1],["hlc_30Rnd_556x45_T_sg550",10,30],["rhs_mag_smaw_SR",2,5]]],["APM_Black_Backpack_Kitbag",[["rhs_mag_smaw_HEDP",2,1]]],"rhsgref_helmet_m1942_heergreycover","G_Balaclava_TI_blk_F",[],["ItemMap","","TFAR_fadak","ItemCompass","","TRYK_G_Shades_Blue_NV"]]';
};
class O_Krampus_GL_F: O_Krampus_Soldier_Base
{
  scope = 2;
  displayName = "Grenadier (SG-551 UGL)";
  role = "Grenadier";
  apm_loadout = '[["hlc_rifle_SG551LB_TAC_GL","","rhsusf_acc_M952V","rhsusf_acc_RX01_NoFilter",["hlc_30Rnd_556x45_T_sg550",30],["rhs_mag_M433_HEDP",1],""],[],["hlc_pistol_P226R_Stainless","","acc_flashlight_pistol","HLC_Optic_Romeo1_RX",["hlc_12Rnd_357SIG_B_P226",12],[],""],["VSM_OGA_Crye_grey_Camo",[["ACE_packingBandage",20],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_morphine",2],["ACE_splint",2],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["hlc_12Rnd_357SIG_B_P226",2,12]]],["V_CarrierRigKBT_01_heavy_Black_F",[["MiniGrenade",2,1],["SmokeShell",2,1],["hlc_30Rnd_556x45_T_sg550",10,30],["rhs_mag_M433_HEDP",15,1],["1Rnd_SmokeRed_Grenade_shell",4,1],["ACE_40mm_Flare_white",4,1]]],[],"rhsgref_helmet_m1942_heergreycover","G_Balaclava_TI_blk_F",[],["ItemMap","","TFAR_fadak","ItemCompass","","TRYK_G_Shades_Blue_NV"]]';
};
class O_Krampus_MG_F: O_Krampus_Soldier_Base
{
  scope = 2;
  displayName = "Machine Gunner (PKP)";
  role = "MachineGunner";
  apm_loadout = '[["rhs_weap_pkp","","","rhs_acc_pkas",["rhs_100Rnd_762x54mmR",100],[],""],[],["hlc_pistol_P226R_Stainless","","acc_flashlight_pistol","HLC_Optic_Romeo1_RX",["hlc_12Rnd_357SIG_B_P226",12],[],""],["VSM_OGA_Crye_grey_Camo",[["ACE_packingBandage",20],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_morphine",2],["ACE_splint",2],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["hlc_12Rnd_357SIG_B_P226",4,12]]],["V_PlateCarrierSpec_blk",[["MiniGrenade",2,1],["SmokeShell",1,1],["rhs_100Rnd_762x54mmR_green",1,100]]],["APM_Black_Backpack_Kitbag",[["rhs_100Rnd_762x54mmR_green",4,100]]],"rhsgref_helmet_m1942_heergreycover","G_Balaclava_TI_blk_F",[],["ItemMap","","TFAR_fadak","ItemCompass","","TRYK_G_Shades_Blue_NV"]]';
};
class O_Krampus_Marksman_F: O_Krampus_Soldier_Base
{
  scope = 2;
  displayName = "Marksman (SG-550 SP)";
  role = "Marksman";
  apm_loadout = '[["hlc_rifle_SG550Sniper_RIS","","","optic_DMS_weathered_F",["hlc_30Rnd_556x45_EPR_sg550",30],[],""],[],["hlc_pistol_P226R_Stainless","","acc_flashlight_pistol","HLC_Optic_Romeo1_RX",["hlc_12Rnd_357SIG_B_P226",12],[],""],["VSM_OGA_Crye_grey_Camo",[["ACE_packingBandage",20],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_morphine",2],["ACE_splint",2],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["hlc_12Rnd_357SIG_B_P226",2,12]]],["V_CarrierRigKBT_01_light_Black_F",[["MiniGrenade",4,1],["SmokeShell",6,1],["hlc_30Rnd_556x45_EPR_sg550",10,30]]],[],"rhsgref_helmet_m1942_heergreycover","G_Balaclava_TI_blk_F",[],["ItemMap","","TFAR_fadak","ItemCompass","","TRYK_Shemagh_MESH_NV"]]';
};
class O_Krampus_AA_F: O_Krampus_AT_F
{
  displayName = "AA Rifleman (FIM-92)";
  apm_loadout = '[["hlc_rifle_SG553SB_TAC","","rhsusf_acc_M952V","rhsusf_acc_T1_low",["hlc_30Rnd_556x45_T_sg550",30],[],""],["rhs_weap_fim92","","","",["rhs_fim92_mag",1],[],""],["hlc_pistol_P226R_Stainless","","acc_flashlight_pistol","HLC_Optic_Romeo1_RX",["hlc_12Rnd_357SIG_B_P226",12],[],""],["VSM_OGA_Crye_grey_Camo",[["ACE_packingBandage",20],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_morphine",2],["ACE_splint",2],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["hlc_12Rnd_357SIG_B_P226",2,12]]],["V_CarrierRigKBT_01_light_Black_F",[["MiniGrenade",2,1],["SmokeShell",2,1],["rhs_mag_smaw_SR",2,5]]],["APM_Black_Backpack_Kitbag",[["rhs_fim92_mag",1,1]]],"rhsgref_helmet_m1942_heergreycover","G_Balaclava_TI_blk_F",[],["ItemMap","","TFAR_fadak","ItemCompass","","TRYK_G_Shades_Blue_NV"]]';
};
class O_Krampus_Pilot_F: O_Krampus_Soldier_Base
{
  displayName = "Pilot (SG-553)";
  scope = 2;
  role = "Pilot";
  apm_loadout = '[["hlc_rifle_SG553SB_TAC","","","SMA_MICRO_T2_LM",["hlc_30Rnd_556x45_T_sg550",30],[],""],[],["hlc_pistol_P226R_Stainless","","acc_flashlight_pistol","HLC_Optic_Romeo1_RX",["hlc_12Rnd_357SIG_B_P226",12],[],""],["U_O_R_Gorka_01_black_F",[["ACE_packingBandage",20],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_morphine",2],["ACE_splint",2],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["hlc_12Rnd_357SIG_B_P226",1,12]]],["V_CarrierRigKBT_01_light_Black_F",[["ToolKit",1],["MiniGrenade",2,1],["SmokeShell",2,1],["hlc_30Rnd_556x45_T_sg550",5,30],["ACE_HandFlare_Green",2,1],["ACE_HandFlare_Red",2,1],["ACE_HandFlare_White",2,1],["SmokeShellBlue",2,1],["SmokeShellRed",2,1],["ACE_Chemlight_HiWhite",4,1]]],[],"rhsusf_hgu56p_visor_black","G_Balaclava_TI_blk_F",[],["ItemMap","","TFAR_fadak","ItemCompass","",""]]';
};
class O_Krampus_Crew_F: O_Krampus_Soldier_Base
{
  displayName = "Crewman (SG-553)";
  scope = 2;
  role = "Crewman";
  apm_loadout = '[["hlc_rifle_SG553SB_TAC","","","SMA_MICRO_T2_LM",["hlc_30Rnd_556x45_T_sg550",30],[],""],[],["hlc_pistol_P226R_Stainless","","acc_flashlight_pistol","HLC_Optic_Romeo1_RX",["hlc_12Rnd_357SIG_B_P226",12],[],""],["U_O_R_Gorka_01_black_F",[["ACE_packingBandage",20],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_morphine",2],["ACE_splint",2],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["hlc_12Rnd_357SIG_B_P226",1,12]]],["V_CarrierRigKBT_01_Black_F",[["MiniGrenade",3,1],["SmokeShell",2,1],["hlc_30Rnd_556x45_T_sg550",4,30],["ACE_HandFlare_Green",1,1]]],[],"H_Tank_eaf_F","G_Balaclava_TI_blk_F",[],["ItemMap","","TFAR_fadak","ItemCompass","","TRYK_ESS_BLKBLK_NV"]]';
};
class O_Krampus_SF_F: O_Krampus_Soldier_Base
{
  scope = 2;
  displayName = "SF Rifleman (SG-550)";
  role = "SpecialOperative";
  editorSubcategory = "EdSubcat_Personnel_SpecialForces";
  vehicleClass = "MenSniper";
  apm_loadout = '[["hlc_rifle_SG550_RIS","muzzle_snds_M","","SMA_ELCAN_SPECTER_4z",["hlc_30Rnd_556x45_EPR_sg550",30],[],""],[],["hlc_pistol_P226R_Stainless","","acc_flashlight_pistol","HLC_Optic_Romeo1_RX",["hlc_12Rnd_357SIG_B_P226",12],[],""],["TRYK_U_B_Snowt",[["ACE_packingBandage",20],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_morphine",2],["ACE_splint",2],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["ACE_M26_Clacker",1],["hlc_12Rnd_357SIG_B_P226",1,12]]],["V_TacVest_blk",[["MiniGrenade",2,1],["SmokeShell",2,1],["ACE_HandFlare_Red",2,1],["ACE_CTS9",1,1],["rhs_mag_an_m14_th3",1,1],["hlc_30Rnd_556x45_EPR_sg550",8,30],["DemoCharge_Remote_Mag",1,1]]],[],"TRYK_H_Helmet_Snow","rhsusf_shemagh2_white",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","TFAR_fadak","ItemCompass","TFAR_microdagr","TRYK_ESS_wh_NV"]]';
};
class O_Krampus_Sniper_F: O_Krampus_SF_F
{
  displayName = "SF Sniper (SG-550 SP)";
  role = "Marksman";
  apm_loadout = '[["hlc_rifle_SG550Sniper_RIS","muzzle_snds_M","","rhsusf_acc_M8541_low",["hlc_30Rnd_556x45_EPR_sg550",30],[],""],[],["hlc_pistol_P226R_Stainless","","acc_flashlight_pistol","HLC_Optic_Romeo1_RX",["hlc_12Rnd_357SIG_B_P226",12],[],""],["TRYK_U_B_Snowt",[["ACE_packingBandage",20],["ACE_CableTie",2],["ACE_EntrenchingTool",1],["ACE_morphine",2],["ACE_splint",2],["ACE_tourniquet",2],["ACE_Flashlight_XL50",1],["ACE_M26_Clacker",1],["hlc_12Rnd_357SIG_B_P226",1,12]]],["V_TacVest_blk",[["MiniGrenade",2,1],["SmokeShell",2,1],["ACE_HandFlare_Red",2,1],["ACE_CTS9",1,1],["rhs_mag_an_m14_th3",1,1],["DemoCharge_Remote_Mag",1,1],["hlc_30Rnd_556x45_EPR_sg550",8,30]]],[],"TRYK_H_Helmet_Snow","rhsusf_shemagh2_white",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemGPS","TFAR_fadak","ItemCompass","TFAR_microdagr","TRYK_ESS_wh_NV"]]';
};
#include "faction_krampus_vehicles.hpp"
