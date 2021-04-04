//Units
	class O_Contractor_Skua_Base: O_V_Soldier_base_F//<-- Create one of these for each faction, making sure to change the parent class (B_Soldier_base_F) to the appropriate one for the desired Side and setting the child class (B_parentClass_changeme) to something like B_apm_baseclass_f
	{
		author = "LinkIsParking";
    displayName = "Skua Contractor";
		faction = "O_faction_SkuaIntl"; //<-- Faction classname you created in CfgFactionClasses.hpp
		CBA_facewearList[] = {}; //<-- allows facewear randomization. Leave as {} to ignore, otherwise use this website as a guide: https://github.com/CBATeam/CBA_A3/wiki/Facewear-Randomization
		headgearList[] = {}; //<-- Works the same as CBA_facewearList. Leave as {} to ignore.
  	genericNames="NATOMen"
		scope = 0;
		identityTypes[] =  {"LanguageENG_F","Head_NATO"};
		editorSubcategory = "apm_generic_civ"; //defined in CfgEditorSubcategories
		apm_loadout = '';
		cost = 120000;// How likely the enemies attack this character among some others.
    camouflage = 1;// How likely this character is spotted (smaller number = more stealthy).
    sensitivity = 2.5;// How likely this character spots enemies when controlled by AI.
    threat[] = {1, 0.7, 0.5};// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
	};
	class O_Contractor_Skua_TL1: O_Contractor_Skua_Base
	{
		displayName = "Team Leader (ACR)";
		apm_loadout = '[["hlc_rifle_ACR_GL_Carb_tan","hlc_muzzle_556NATO_KAC","ACE_acc_pointer_green","SMA_eotech552_3XDOWN",["rhs_mag_30Rnd_556x45_M855_PMAG",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_LS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier2_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["rhs_mag_30Rnd_556x45_M855_PMAG",5,30],["1Rnd_HE_Grenade_shell",3,1]]],["tfw_ilbe_dd_gr",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["1Rnd_HE_Grenade_shell",4,1],["rhs_mag_30Rnd_556x45_M855_PMAG",2,30],["ACE_40mm_Flare_white",2,1],["UGL_FlareRed_F",2,1],["UGL_FlareGreen_F",2,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["1Rnd_SmokeGreen_Grenade_shell",2,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["rhs_mag_an_m14_th3",2,1]]],"VSM_Beanie_Black","WAINO_SMG_BK",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","Face_Bandana_Skull"]]'; //<-- Export ACE arsenal loadout, then place inside of ''
		scope = 2;
		role = "Grenadier";
	};
	class O_Contractor_Skua_AR1: O_Contractor_Skua_Base
	{
		displayName = "Autorifleman (SPW)";
		apm_loadout = '[["LMG_03_F","muzzle_snds_M","ACE_acc_pointer_green","SMA_ELCAN_SPECTER_RDS_4z",["200Rnd_556x45_Box_Tracer_Red_F",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_LS_BS_TP_BB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["milgp_v_marciras_hgunner_belt_rgr",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["200Rnd_556x45_Box_Tracer_Red_F",3,200],["rhsusf_mag_17Rnd_9x19_JHP",2,17]]],["milgp_bp_Pointman_rgr",[["ACE_bloodIV_250",2],["200Rnd_556x45_Box_Tracer_Red_F",2,200]]],"H_HelmetSpecB_blk","VSM_Shemagh_Balaclava2_OD",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_ESS_BLKBLK_NV"]]'; //<-- Export ACE arsenal loadout, then place inside of ''
		scope = 2;
		role = "MachineGunner";
	};
	class O_Contractor_Skua_Medic1: O_Contractor_Skua_Base
	{
		displayName = "Medic (ACR)";
		apm_loadout = '[["hlc_rifle_ACR_SBR_black","hlc_muzzle_556NATO_KAC","","SMA_BARSKA",["rhs_mag_30Rnd_556x45_M855_PMAG",30],[],"rhsusf_acc_grip2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Garment_RS_OS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_CarrierRig_Operator_OGA_OD",[["ACE_bloodIV_250",2],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_mag_30Rnd_556x45_M855_PMAG",5,30]]],["VSM_OGA_OD_Backpack_Kitbag",[["ACE_packingBandage",20],["ACE_elasticBandage",20],["ACE_morphine",6],["ACE_adenosine",6],["ACE_epinephrine",6],["ACE_plasmaIV",6],["ACE_plasmaIV_500",6],["ACE_plasmaIV_250",6],["ACE_surgicalKit",1],["ACE_personalAidKit",1],["ACE_bodyBag",2],["ACE_CableTie",2],["ACE_quikclot",15],["ACE_fieldDressing",10]]],"VSM_OPS","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","WAINO_GGL_GR_NV"]]'; //<-- Export ACE arsenal loadout, then place inside of ''
		scope = 2;
		role="CombatLifeSaver";
		attendant=1;
	};
	class O_Contractor_Skua_Marksman1: O_Contractor_Skua_Base
	{
		displayName = "Marksman (ULR)";
		apm_loadout = '[["srifle_DMR_02_camo_F","muzzle_snds_338_black","ACE_acc_pointer_green","optic_AMS",["ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag",20],[],"bipod_01_F_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_RS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier1_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag",7,20]]],["B_AssaultPack_blk",[["ACE_Kestrel4500",1],["ACE_ATragMX",1],["ACE_bodyBag",1],["ACE_bloodIV_250",2],["ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag",2,20]]],"VSM_Bowman_cap_Black","rhs_googles_clear",["Rangefinder","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]'; //<-- Export ACE arsenal loadout, then place inside of ''
		scope = 2;
		role="Marksman";
		sensitivity=3;
	};
	class O_Contractor_Skua_TL2: O_Contractor_Skua_Base
	{
		displayName = "Team Leader (M4A1)";
		apm_loadout = '[["rhs_weap_m4a1_blockII_M203","hlc_muzzle_556NATO_KAC","ACE_acc_pointer_green","rhsusf_acc_su230",["rhs_mag_30Rnd_556x45_M855_PMAG",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_RS_BS_TP_BB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier1_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["1Rnd_HE_Grenade_shell",3,1],["rhs_mag_30Rnd_556x45_M855_PMAG",5,30]]],["tfw_ilbe_blade_gr",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["ACE_40mm_Flare_white",2,1],["1Rnd_SmokeGreen_Grenade_shell",2,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["rhs_mag_an_m14_th3",2,1],["1Rnd_HE_Grenade_shell",2,1],["1Rnd_Smoke_Grenade_shell",2,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["UGL_FlareGreen_F",2,1],["UGL_FlareRed_F",2,1],["UGL_FlareWhite_F",2,1],["rhs_mag_30Rnd_556x45_M855_PMAG",3,30]]],"H_Cap_usblack","VSM_Peltor_OD_glasses",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
		scope = 2;
		role = "Grenadier";
	};
	class O_Contractor_Skua_HAT1: O_Contractor_Skua_Base
	{
		displayName = "AT Rifleman (G36C)";
		apm_loadout = '[["rhs_weap_g36c","hlc_muzzle_556NATO_KAC","","SMA_eotech552",["rhssaf_30rnd_556x45_EPR_G36",30],[],"rhsusf_acc_rvg_blk"],["launch_MRAWS_green_F","","","",["MRAWS_HEAT_F",1],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["Project_BJC_Cargo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_FAPC_Operator_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhssaf_30rnd_556x45_EPR_G36",6,30]]],["VSM_OGA_OD_carryall",[["ToolKit",1],["ACE_bloodIV_250",2],["MRAWS_HEAT_F",3,1],["MRAWS_HE_F",1,1]]],"milgp_h_opscore_01_CB_hexagon","VSM_Shemagh_goggles_od",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","Face_Bandana_Skull"]]';
		scope = 2;
		role="MissileSpecialist";
	};
	class O_Contractor_Skua_Medic2: O_Contractor_Skua_Base
	{
		displayName = "Medic (416)";
		apm_loadout = '[["arifle_SPAR_01_blk_F","hlc_muzzle_556NATO_KAC","","optic_Holosight_smg_blk_F",["rhs_mag_30Rnd_556x45_M855_Stanag_Pull",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Garment_RS_TS_BP_BB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_CarrierRig_Operator_OGA_OD",[["ACE_bloodIV_250",2],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_mag_30Rnd_556x45_M855_PMAG",6,30]]],["VSM_OGA_OD_Backpack_Kitbag",[["ACE_packingBandage",20],["ACE_elasticBandage",20],["ACE_morphine",6],["ACE_adenosine",6],["ACE_epinephrine",6],["ACE_plasmaIV",6],["ACE_plasmaIV_500",6],["ACE_plasmaIV_250",6],["ACE_surgicalKit",1],["ACE_personalAidKit",1],["ACE_bodyBag",2],["ACE_CableTie",2],["ACE_quikclot",15],["ACE_fieldDressing",10]]],"VSM_OPS","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","WAINO_GGL_GR_NV"]]';
		scope = 2;
		role="CombatLifeSaver";
		attendant=1;
	};
	class O_Contractor_Skua_MG1: O_Contractor_Skua_Base
	{
		displayName = "Gunner (Mk. 48)";
		apm_loadout = '[["hlc_lmg_mk48","muzzle_snds_H_MG_blk_F","ACE_acc_pointer_green","SMA_ELCAN_SPECTER_4z",["150Rnd_762x51_Box",150],[],"rhsusf_acc_rvg_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_RS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["milgp_v_marciras_hgunner_belt_rgr",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["150Rnd_762x51_Box",2,150]]],["milgp_bp_Pointman_rgr",[["ACE_bloodIV_250",2],["150Rnd_762x51_Box",2,150]]],"VSM_BackwardsHat_Peltor_US","rhs_googles_clear",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","Face_Bandana_Raider"]]';
		scope = 2;
		role = "MachineGunner";
	};
	class O_Contractor_Skua_TL3: O_Contractor_Skua_Base
	{
		displayName = "Team Leader (MX)";
		apm_loadout = '[["tacs_MX_GL_BlackCamo","muzzle_snds_65_TI_blk_F","ACE_acc_pointer_green","optic_Hamr",["ACE_30Rnd_65_Creedmor_mag",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_LS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier2_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["1Rnd_HE_Grenade_shell",4,1],["ACE_30Rnd_65_Creedmor_mag",4,30]]],["tfw_ilbe_dd_gr",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["1Rnd_HE_Grenade_shell",4,1],["ACE_40mm_Flare_white",2,1],["UGL_FlareRed_F",2,1],["UGL_FlareGreen_F",2,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["1Rnd_SmokeGreen_Grenade_shell",2,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["rhs_mag_an_m14_th3",2,1],["ACE_30Rnd_65_Creedmor_mag",3,30]]],"milgp_h_airframe_06_goggles_CB_hexagon","rhsusf_shemagh2_tan",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","TAC_SG"]]';
		scope = 2;
		role = "Grenadier";
	};
	class O_Contractor_Skua_AR2: O_Contractor_Skua_Base
	{
		displayName = "Autorifleman (SPW)";
		apm_loadout = '[["LMG_03_F","muzzle_snds_M","ACE_acc_pointer_green","SMA_ELCAN_SPECTER_RDS_4z",["200Rnd_556x45_Box_Tracer_Red_F",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["Project_BJC_PCU_Cargo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["milgp_v_marciras_hgunner_belt_rgr",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["200Rnd_556x45_Box_Tracer_Red_F",3,200],["rhsusf_mag_17Rnd_9x19_JHP",2,17]]],["milgp_bp_Pointman_rgr",[["ACE_bloodIV_250",2],["200Rnd_556x45_Box_Tracer_Red_F",2,200]]],"H_HelmetSpecB_blk","VSM_Shemagh_Balaclava2_OD",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_ESS_BLKBLK_NV"]]';
		scope = 2;
		role = "MachineGunner";
	};
	class O_Contractor_Skua_HAT2: O_Contractor_Skua_Base
	{
		displayName = "AT Rifleman (AK-12)";
		apm_loadout = '[["hlc_rifle_aku12","hlc_muzzle_545SUP_AK","ACE_acc_pointer_green","SMA_eotech552",["rhs_30Rnd_545x39_7N22_plum_AK",30],[],"rhs_acc_grip_ffg2"],["launch_MRAWS_green_F","","","",["MRAWS_HEAT_F",1],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_RS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["AK_LBT_beltrg",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_30Rnd_545x39_7N22_plum_AK",8,30]]],["milgp_b_patrol_01_khk",[["ToolKit",1],["MRAWS_HEAT_F",4,1]]],"milgp_h_opscore_05_CB_hexagon","VSM_Shemagh_Facemask_OD",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_US_ESS_Glasses_NV"]]';
		scope = 2;
		role="MissileSpecialist";
		engineer=true;
	};
	class O_Contractor_Skua_R1: O_Contractor_Skua_Base
	{
		displayName = "Rifleman (AK-74)";
		apm_loadout = '[["rhs_weap_ak74mr","hlc_muzzle_545SUP_AK","ACE_acc_pointer_green","SMA_eotech552_3XDOWN",["rhs_30Rnd_545x39_7N22_AK",30],[],"rhsusf_acc_rvg_blk"],["rhs_weap_M136_hp","","","",[],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_RS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["AK_LBT_beltcoy",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_30Rnd_545x39_7N22_AK",9,30]]],[],"milgp_h_opscore_05_CB_hexagon","VSM_Shemagh_Balaclava2_OD",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_US_ESS_Glasses_NV"]]';
		scope = 2;
		role = "Rifleman";
	};
	class O_Contractor_Skua_Medic3: O_Contractor_Skua_Base
	{
		displayName = "Medic (Mk14 EBR)";
		apm_loadout = '[["srifle_EBR_F","muzzle_snds_B","ACE_acc_pointer_green","SMA_eotech552",["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",20],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_LS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_CarrierRig_Operator_OGA_OD",[["ACE_bloodIV_250",2],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",8,20]]],["VSM_OGA_OD_Backpack_Kitbag",[["ACE_packingBandage",20],["ACE_elasticBandage",20],["ACE_morphine",6],["ACE_adenosine",6],["ACE_epinephrine",6],["ACE_plasmaIV",6],["ACE_plasmaIV_500",6],["ACE_plasmaIV_250",6],["ACE_surgicalKit",1],["ACE_personalAidKit",1],["ACE_bodyBag",2],["ACE_CableTie",2],["ACE_quikclot",15],["ACE_fieldDressing",10]]],"VSM_OPS","rhs_googles_clear",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
		scope = 2;
		role="CombatLifeSaver";
		attendant=1;
	};
	class O_Contractor_Skua_TL4: O_Contractor_Skua_Base
	{
		displayName = "Team Leader (MSBS)";
		apm_loadout = '[["arifle_MSBS65_GL_black_F","muzzle_snds_65_TI_blk_F","ACE_acc_pointer_green","optic_ico_01_black_f",["30Rnd_65x39_caseless_msbs_mag",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_LS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier2_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["1Rnd_HE_Grenade_shell",3,1],["30Rnd_65x39_caseless_msbs_mag",4,30]]],["tfw_ilbe_blade_gr",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["1Rnd_HE_Grenade_shell",4,1],["ACE_40mm_Flare_white",2,1],["UGL_FlareRed_F",2,1],["UGL_FlareGreen_F",2,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["1Rnd_SmokeGreen_Grenade_shell",2,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["rhs_mag_an_m14_th3",2,1],["30Rnd_65x39_caseless_msbs_mag",4,30]]],"milgp_h_airframe_04_CB_hexagon","rhsusf_shemagh2_gogg_tan",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","TAC_SG"]]';
		scope = 2;
		role = "Grenadier";
	};
	class O_Contractor_Skua_AR3: O_Contractor_Skua_Base
	{
		displayName = "Autorifleman (Stoner LMG)";
		apm_loadout = '[["LMG_Mk200_black_F","muzzle_snds_H_MG_blk_F","ACE_acc_pointer_green","optic_Hamr",["200Rnd_65x39_cased_Box_Tracer_Red",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_RS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["milgp_v_mmac_hgunner_belt_rgr",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["200Rnd_65x39_cased_Box_Tracer_Red",2,200]]],["milgp_bp_Pointman_rgr",[["ACE_bloodIV_250",2],["200Rnd_65x39_cased_Box_Tracer_Red",2,200]]],"VSM_Beanie_Black","TRYK_US_ESS_Glasses",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter",""]]';
		scope = 2;
		role = "MachineGunner";
	};
	class O_Contractor_Skua_Medic4: O_Contractor_Skua_Base
	{
		displayName = "Medic (Mk 18)";
		apm_loadout = '[["rhs_weap_mk18","hlc_muzzle_556NATO_KAC","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_compm4",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],"rhs_acc_grip_ffg2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_LS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_CarrierRig_Operator_OGA_OD",[["ACE_bloodIV_250",2],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",8,20]]],["VSM_OGA_OD_Backpack_Kitbag",[["ACE_packingBandage",20],["ACE_elasticBandage",20],["ACE_morphine",6],["ACE_adenosine",6],["ACE_epinephrine",6],["ACE_plasmaIV",6],["ACE_plasmaIV_500",6],["ACE_plasmaIV_250",6],["ACE_surgicalKit",1],["ACE_personalAidKit",1],["ACE_bodyBag",2],["ACE_CableTie",2],["ACE_quikclot",15],["ACE_fieldDressing",10]]],"VSM_OPS","rhs_googles_clear",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
		scope = 2;
		role="CombatLifeSaver";
		attendant=1;
	};
	class O_Contractor_Skua_Marksman2: O_Contractor_Skua_Base
	{
		displayName = "Marksman (M21)";
		apm_loadout = '[["hlc_rifle_M21","rhsusf_acc_aac_762sdn6_silencer","","hlc_optic_artel_m14",["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",20],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_RS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier1_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",7,20]]],["B_AssaultPack_blk",[["ACE_Kestrel4500",1],["ACE_ATragMX",1],["ACE_bodyBag",1],["ACE_bloodIV_250",2],["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",2,20]]],"milgp_h_opscore_03_goggles_CB_hexagon","VSM_Shemagh_OD",["Rangefinder","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_Headphone_NV"]]';
		scope = 2;
		role="Marksman";
		sensitivity=3;
	};
	class O_Contractor_Skua_SL1: O_Contractor_Skua_Base
	{
		displayName = "Squad Leader (ACR)";
		apm_loadout = '[["hlc_rifle_ACR_GL_Carb_tan","hlc_muzzle_556NATO_KAC","ACE_acc_pointer_green","SMA_eotech552_3XDOWN",["rhs_mag_30Rnd_556x45_M855_PMAG",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["milgp_u_fleece_grey_g3_field_pants_rgr",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier1_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["rhs_mag_30Rnd_556x45_M855_PMAG",5,30],["1Rnd_HE_Grenade_shell",3,1]]],["tfw_ilbe_dd_gr",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["1Rnd_HE_Grenade_shell",4,1],["rhs_mag_30Rnd_556x45_M855_PMAG",2,30],["ACE_40mm_Flare_white",2,1],["UGL_FlareRed_F",2,1],["UGL_FlareGreen_F",2,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["1Rnd_SmokeGreen_Grenade_shell",2,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["rhs_mag_an_m14_th3",2,1]]],"VSM_Bowman_cap_Black","milgp_f_face_shield_tactical_shemagh_BLK",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","TAC_SGS"]]';
		scope = 2;
		role = "Grenadier";
	};
	class O_Contractor_Skua_Medic5: O_Contractor_Skua_Base
	{
		displayName = "Squad Medic (G36C)";
		apm_loadout = '[["rhs_weap_g36c","rhsusf_acc_nt4_black","","optic_Holosight_smg_blk_F",["rhssaf_30rnd_556x45_EPR_G36",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["milgp_u_fleece_grey_g3_field_pants_rgr",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrierSpec_blk",[["ACE_bloodIV_250",2],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhssaf_30rnd_556x45_EPR_G36",6,30]]],["tacs_Backpack_Kitbag_DarkBlack",[["ACE_packingBandage",20],["ACE_elasticBandage",20],["ACE_morphine",6],["ACE_adenosine",6],["ACE_epinephrine",6],["ACE_plasmaIV",6],["ACE_plasmaIV_500",6],["ACE_plasmaIV_250",6],["ACE_surgicalKit",1],["ACE_personalAidKit",1],["ACE_bodyBag",2],["ACE_CableTie",2],["ACE_quikclot",15],["ACE_fieldDressing",10]]],"VSM_OPS","VSM_Balaclava2_OD_Peltor_Goggles",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","WAINO_GGL_GR_NV"]]';
		scope = 2;
	};
	class O_Contractor_Skua_RTO1: O_Contractor_Skua_Base
	{
		displayName = "Squad RTO (ACR)";
		apm_loadout = '[["hlc_rifleACR_SBR_cliffhanger","hlc_muzzle_556NATO_KAC","ACE_acc_pointer_green","SMA_eotech552_3XDOWN",["rhs_mag_30Rnd_556x45_M855_PMAG",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["milgp_u_fleece_grey_g3_field_pants_rgr",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier1_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["rhs_mag_30Rnd_556x45_M855_PMAG",4,30]]],["tfw_ilbe_whip_gr",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["tfw_rf3080Item",1],["ACE_microDAGR",1],["ACE_IR_Strobe_Item",2],["ACE_UAVBattery",1],["rhs_mag_30Rnd_556x45_M855_PMAG",2,30],["rhs_mag_an_m14_th3",2,1],["SmokeShellYellow",2,1],["SmokeShellPurple",2,1],["O_R_IR_Grenade",2,1]]],"VSM_Beanie_Black","TRYK_TAC_EARMUFF_Gs",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","O_UavTerminal","TFAR_fadak","ItemCompass","ACE_Altimeter","TAC_SGS"]]';
		scope = 2;
		role = "SpecialOperative";
	};
	class O_Contractor_Skua_Engi1: O_Contractor_Skua_Base
	{
		displayName = "Squad Engineer (M4A1)";
		apm_loadout = '[["rhs_weap_m4a1_blockII_KAC","hlc_muzzle_556NATO_KAC","ACE_acc_pointer_green","optic_Hamr",["rhs_mag_30Rnd_556x45_M855_PMAG",30],[],"rhsusf_acc_grip2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["milgp_u_fleece_grey_g3_field_pants_rgr",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["dr_BLKfacp_br",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["rhs_mag_30Rnd_556x45_M855_PMAG",4,30],["DemoCharge_Remote_Mag",3,1]]],["Black_Backpack_kitbag",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["ToolKit",1],["MineDetector",1],["ACE_DefusalKit",1],["rhs_mag_30Rnd_556x45_M855_PMAG",2,30],["rhs_mag_an_m14_th3",2,1],["SmokeShellYellow",2,1],["SmokeShellPurple",2,1],["O_R_IR_Grenade",2,1],["SatchelCharge_Remote_Mag",1,1]]],"VSM_Black_OPS","rhs_googles_black",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","Face_Bandana_RGR"]]';
		scope = 2;
		engineer=true;
		canDeactivateMines=true;
		role="Sapper";
	};
	class O_Contractor_Skua_TL5: O_Contractor_Skua_Base
	{
		displayName = "Team Leader (FAL)";
		apm_loadout = '[["hlc_rifle_falosw","rhsusf_acc_aac_762sdn6_silencer","ACE_acc_pointer_green","SMA_eotech552_3XDOWN",["hlc_20Rnd_762x51_mk316_fal",20],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_LS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier2_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["hlc_20Rnd_762x51_mk316_fal",5,20]]],["tfw_ilbe_dd_gr",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["rhs_mag_an_m14_th3",2,1],["hlc_20Rnd_762x51_mk316_fal",3,20]]],"VSM_Beanie_Black","WAINO_SMG_VM",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","Face_Bandana_Skull"]]';
		scope = 2;
		role = "Rifleman";
	};
	class O_Contractor_Skua_Spotter1: O_Contractor_Skua_Base
	{
		displayName = "Spotter (ULR)";
		apm_loadout = '[["srifle_DMR_02_camo_F","muzzle_snds_338_black","ACE_acc_pointer_green","optic_AMS",["ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag",20],[],"bipod_01_F_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_RS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier1_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag",7,20]]],["B_AssaultPack_blk",[["ACE_Kestrel4500",1],["ACE_ATragMX",1],["ACE_bodyBag",1],["ACE_bloodIV_250",2],["ACE_20Rnd_762x67_Berger_Hybrid_OTM_Mag",2,20]]],"VSM_Bowman_cap_balaclava_Black","rhs_googles_clear",["Rangefinder","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
		scope = 2;
		role="Marksman";
		sensitivity=3;
	};
	class O_Contractor_Skua_Sniper1: O_Contractor_Skua_Base
	{
		displayName = "Sniper (GM6)";
		apm_loadout = '[["srifle_GM6_F","","","optic_LRPS",["apm_5rnd_50bmg_heapi",5],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_RS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier1_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["apm_5rnd_50bmg_heapi",4,5]]],["B_TacticalPack_blk",[["ACE_Kestrel4500",1],["ACE_ATragMX",1],["ACE_bloodIV_250",2],["apm_5rnd_50bmg_heapi",10,5]]],"VSM_BackwardsHat_Peltor_US","rhs_googles_clear",["Rangefinder","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
		scope = 2;
		role="Marksman";
		sensitivy=3;
	};
	class O_Contractor_Skua_TL6: O_Contractor_Skua_Base
	{
		displayName = "Team Leader (SPW)";
		apm_loadout = '[["LMG_03_F","muzzle_snds_M","ACE_acc_pointer_green","SMA_eotech552_3XDOWN",["200Rnd_556x45_Box_Tracer_Red_F",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_LS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier2_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["200Rnd_556x45_Box_Tracer_Red_F",4,200]]],["tfw_ilbe_dd_gr",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["rhs_mag_an_m14_th3",2,1],["200Rnd_556x45_Box_Tracer_Red_F",3,200]]],"milgp_h_opscore_02_goggles_CB","WAINO_SMG_BK",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","Face_Bandana_Skull"]]';
		scope = 2;
		role = "MachineGunner";
	};
	class O_Contractor_Skua_MG2: O_Contractor_Skua_Base
	{
		displayName = "Gunner (LWMMG)";
		apm_loadout = '[["MMG_02_black_F","muzzle_snds_338_black","ACE_acc_pointer_green","optic_Hamr",["130Rnd_338_Mag",130],[],"rhsusf_acc_harris_bipod"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_RS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["milgp_v_marciras_hgunner_belt_rgr",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["130Rnd_338_Mag",2,130]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_bloodIV_250",2],["130Rnd_338_Mag",2,130]]],"milgp_h_opscore_03_CB_hexagon","rhs_googles_clear",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","Face_Bandana_Raider"]]';
		scope = 2;
		role = "MachineGunner";
	};
	class O_Contractor_Skua_MG3: O_Contractor_Skua_Base
	{
		displayName = "Asst. Gunner (LWMMG)";
		apm_loadout = '[["MMG_02_black_F","muzzle_snds_338_black","ACE_acc_pointer_green","optic_MRCO",["130Rnd_338_Mag",130],[],"rhsusf_acc_harris_bipod"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_RS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["milgp_v_marciras_hgunner_belt_rgr",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["130Rnd_338_Mag",2,130]]],["VSM_OGA_OD_Backpack_Kitbag",[["130Rnd_338_Mag",3,130],["ACE_SpareBarrel",1,1]]],"milgp_h_opscore_03_CB_hexagon","rhs_googles_clear",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","Face_Bandana_Raider"]]';
		scope = 2;
		role = "MachineGunner";
	};
	class O_Contractor_Skua_R2: O_Contractor_Skua_R1
	{
		displayName = "Rifleman (HK416)";
		apm_loadout = '[["hlc_rifle_416D145","muzzle_snds_M","ACE_acc_pointer_green","SMA_ELCAN_SPECTER",["rhs_mag_30Rnd_556x45_M855_PMAG",30],[],"rhs_acc_grip_ffg2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_LS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_OGA_OD_Vest_2",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_mag_30Rnd_556x45_M855_PMAG",7,30]]],[],"milgp_h_opscore_06_RGR_hexagon","VSM_Shemagh_Balaclava2_OD",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_ESS_BLKBLK_NV"]]';
	};
	class O_Contractor_Skua_G1: O_Contractor_Skua_R1
	{
		displayName = "Grenadier (M16A4)";
		apm_loadout = '[["rhs_weap_m16a4_imod_M203","rhsusf_acc_nt4_black","ACE_acc_pointer_green","rhsusf_acc_ACOG",["rhs_mag_30Rnd_556x45_M855_PMAG",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_LS_BS_TP_BB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_OGA_OD_IOTV_2",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_mag_30Rnd_556x45_M855_PMAG",7,30]]],["VSM_OGA_OD_Backpack_Compact",[["1Rnd_HE_Grenade_shell",8,1],["1Rnd_Smoke_Grenade_shell",5,1],["1Rnd_SmokeRed_Grenade_shell",3,1],["1Rnd_SmokeGreen_Grenade_shell",3,1],["1Rnd_SmokeBlue_Grenade_shell",3,1],["UGL_FlareGreen_F",3,1],["UGL_FlareWhite_F",3,1],["ACE_40mm_Flare_white",4,1],["ACE_40mm_Flare_ir",4,1]]],"H_Cap_blk","VSM_Peltor_OD_glasses",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
		role = "Grenadier";
	};
	class O_Contractor_Skua_R3: O_Contractor_Skua_R1
	{
		displayName = "Rifleman (G3KA4)";
		apm_loadout = '[["hlc_rifle_g3ka4","rhsusf_acc_aac_762sdn6_silencer","ACE_acc_pointer_green","SMA_eotech552",["hlc_20rnd_762x51_b_G3",20],[],"rhs_acc_grip_ffg2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_LS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier1_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["hlc_20rnd_762x51_b_G3",7,20]]],[],"VSM_Black_OPS_2","rhs_googles_clear",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
	};
	class O_Contractor_Skua_G2: O_Contractor_Skua_G1
	{
		displayName = "Grenadier (MGL)";
		apm_loadout = '[["rhs_weap_m32","","","",["rhsusf_mag_6Rnd_M441_HE",6],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["tacs_Uniform_Combat_RS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrierGL_blk",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhsusf_mag_6Rnd_M441_HE",2,6]]],["B_AssaultPack_blk",[["rhsusf_mag_6Rnd_M441_HE",5,6]]],"VSM_Bowman_cap_Black","rhs_googles_clear",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
	};
	class O_Contractor_Skua_Pilot: O_Contractor_Skua_R1
	{
		displayName = "Pilot (Combat)";
		apm_loadout =
		'[["hlc_smg_mp510","","","SMA_eotech552",["hlc_30Rnd_10mm_JHP_MP5",30],[],""],[],[],["tacs_Uniform_Combat_RS_BS_TP_TB",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ACE_EarPlugs",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["tacs_Vest_Tactical_DarkBlack",[["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["SmokeShell",2,1],["hlc_30Rnd_10mm_JHP_MP5",4,30]]],[],"H_Cap_blk","",[],["ItemMap","ItemAndroid","TFAR_fadak","ItemCompass","ACE_Altimeter",""]]';
	};
	class O_Operator_Skua_Base: O_V_Soldier_base_F
	{

		author = "LinkIsParking";
        displayName = "Skua Operator";
		faction = "O_faction_SkuaIntl";
		CBA_facewearList[] = {};
		headgearList[] = {};
        genericNames="NATOMen"
		scope = 0;
		identityTypes[] =  {"LanguageENG_F","Head_NATO"};
		editorSubcategory = "apm_generic_spec";
		apm_loadout = '';
		cost = 160000;
        camouflage = .7;
        sensitivity = 3;
        threat[] = {1.2, 0.9, 0.7};
		role="SpecialOperative";
	};
	class O_Operator_Skua_TL1: O_Operator_Skua_Base
	{
		displayName = "Element Leader (ACR-E)";
		apm_loadout = '[["hlc_rifle_ACR68_SBR_black_grip3","muzzle_snds_65_TI_blk_F","ACE_acc_pointer_green","optic_MRCO",["hlc_30rnd_68x43_OTM",26],[],"rhsusf_acc_rvg_blk"],[],["RH_fn57","RH_sfn57","","",["RH_20Rnd_57x28_FN",20],[],""],["tacs_Uniform_Garment_LS_TS_BP_BB",[["ACE_packingBandage",8],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["dr_BLKpar_op",[["ACE_M26_Clacker",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["hlc_30rnd_68x43_OTM",7,26],["RH_20Rnd_57x28_FN",2,20]]],["Black_Backpack_Compact",[["ACE_bodyBag",4],["ACE_bloodIV_250",2],["rhs_mag_an_m14_th3",2,1],["DemoCharge_Remote_Mag",2,1],["hlc_30rnd_68x43_OTM",4,26]]],"BLK2_opscore","VSM_Balaclava2_black_Goggles",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","NVGogglesB_blk_F"]]';
		scope = 2;
	};
	class O_Operator_Skua_TL2: O_Operator_Skua_TL1
	{
		displayName = "Element Leader (MSBS)";
		apm_loadout = '[["arifle_MSBS65_sand_F","muzzle_snds_65_TI_blk_F","ACE_acc_pointer_green","optic_Hamr",["30Rnd_65x39_caseless_msbs_mag",30],[],""],[],["RH_fn57","RH_sfn57","","",["RH_20Rnd_57x28_FN",20],[],""],["tacs_Uniform_Garment_LS_TS_GP_BB",[["ACE_packingBandage",8],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["BLK_MBSS_PACA",[["ACE_M26_Clacker",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["RH_20Rnd_57x28_FN",2,20],["30Rnd_65x39_caseless_msbs_mag",8,30]]],["Black_Backpack_Compact",[["ACE_bodyBag",4],["ACE_bloodIV_250",2],["tfw_rf3080Item",1],["rhs_mag_an_m14_th3",2,1],["DemoCharge_Remote_Mag",2,1]]],"BLK_opscore_2","VSM_Balaclava_black_Goggles",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","NVGogglesB_gry_F"]]';
		scope = 2;
	};
	class O_Operator_Skua_Medic1: O_Operator_Skua_Base
	{
		displayName = "Element Doctor (AUGA3)";
		apm_loadout = '[["hlc_rifle_auga3_b","hlc_muzzle_556NATO_KAC","ACE_acc_pointer_green","optic_Holosight_blk_F",["hlc_40Rnd_556x45_B_AUG",42],[],"rhsusf_acc_rvg_blk"],[],["RH_fn57","RH_sfn57","","",["RH_20Rnd_57x28_FN",20],[],""],["tacs_Uniform_Garment_RS_ES_BP_BB",[["ACE_packingBandage",8],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["dr_BLKfacp_op",[["ACE_M26_Clacker",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["RH_20Rnd_57x28_FN",2,20],["hlc_40Rnd_556x45_B_AUG",6,42]]],["Black_Backpack_kitbag",[["ACE_bodyBag",3],["ACE_bloodIV_250",4],["ACE_personalAidKit",1],["ACE_surgicalKit",1],["ACE_bloodIV",8],["ACE_bloodIV_500",4],["ACE_morphine",8],["ACE_adenosine",8],["ACE_epinephrine",8],["ACE_CableTie",4],["ACE_tourniquet",4],["ACE_splint",6],["rhs_mag_an_m14_th3",2,1],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["ACE_M84",2,1]]],"VSM_OPS_2","VSM_Shemagh_Facemask_OD_Goggles",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","NVGogglesB_blk_F"]]';
		scope = 2;
		role = "CombatLifeSaver";
		attendant = 1;
	};
	class O_Operator_Skua_Medic2: O_Operator_Skua_Medic1
	{
		displayName = "Element Doctor (AUGA3)";
		apm_loadout = '[["hlc_rifle_G36CV","hlc_muzzle_556NATO_rotexiiic_grey","ACE_acc_pointer_green","rhsusf_acc_eotech_xps3",["rhssaf_30rnd_556x45_EPR_G36",30],[],""],[],["RH_fn57","RH_sfn57","","",["RH_20Rnd_57x28_FN",20],[],""],["tacs_Uniform_Garment_RS_ES_EP_TB",[["ACE_packingBandage",8],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["dr_BLKlbt_br",[["ACE_M26_Clacker",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["RH_20Rnd_57x28_FN",2,20],["rhssaf_30rnd_556x45_EPR_G36",8,30]]],["tacs_Backpack_Kitbag_DarkBlack",[["ACE_bodyBag",3],["ACE_bloodIV_250",4],["ACE_personalAidKit",1],["ACE_surgicalKit",1],["ACE_bloodIV",8],["ACE_bloodIV_500",4],["ACE_morphine",8],["ACE_adenosine",8],["ACE_epinephrine",8],["ACE_CableTie",4],["ACE_tourniquet",4],["ACE_splint",6],["rhs_mag_an_m14_th3",2,1],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["ACE_M84",2,1]]],"VSM_OPS","VSM_Shemagh_Balaclava2_OD_Goggles",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","NVGogglesB_gry_F"]]';
	};
	class O_Operator_Skua_AR1: O_Operator_Skua_Base
	{
		displayName = "Element Autorifleman (Stoner LMG)";
		apm_loadout = '[["LMG_Mk200_black_F","muzzle_snds_H_MG_blk_F","ACE_acc_pointer_green","rhsusf_acc_su230",["200Rnd_65x39_cased_Box_Tracer_Red",200],[],"rhsusf_acc_harris_bipod"],[],["RH_fn57","RH_sfn57","","",["RH_20Rnd_57x28_FN",20],[],""],["tacs_Uniform_Garment_RS_TS_BP_BB",[["ACE_packingBandage",8],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["dr_BLKpar_mg",[["ACE_M26_Clacker",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["RH_20Rnd_57x28_FN",4,20],["200Rnd_65x39_cased_Box_Tracer_Red",4,200]]],["tacs_Backpack_Kitbag_DarkBlack",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["rhs_mag_an_m14_th3",2,1],["200Rnd_65x39_cased_Box_Tracer_Red",1,200]]],"VSM_Bowman_cap_Black","rhsusf_shemagh2_gogg_od",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","NVGogglesB_blk_F"]]';
		scope = 2;
		role = "MachineGunner";
	};
	class O_Operator_Skua_AT1: O_Operator_Skua_Base
	{
		displayName = "Element AT Specialist (Titan)";
		apm_loadout = '[["hlc_rifle_mk18mod0","hlc_muzzle_556NATO_KAC","ACE_acc_pointer_green","SMA_eotech552",["rhs_mag_30Rnd_556x45_M855_PMAG",30],[],"rhsusf_acc_grip2"],["launch_O_Titan_short_F","","","",["Titan_AT",1],[],""],[],["tacs_Uniform_Garment_RS_TS_BP_BB",[["ACE_packingBandage",8],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["dr_BLKfacp_op",[["ACE_M26_Clacker",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["rhs_mag_30Rnd_556x45_M855_PMAG",5,30]]],["tacs_Backpack_Kitbag_DarkBlack",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["rhs_mag_an_m14_th3",2,1],["Titan_AT",2,1]]],"VSM_Peltor_OD","VSM_Shemagh_Balaclava2_OD_Goggles",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","NVGogglesB_blk_F"]]';
		scope = 2;
		role = "MissileSpecialist";
		engineer = true;
	};
	class O_Operator_Skua_Marksman1: O_Operator_Skua_Base
	{
		displayName = "Element Marksman (QBU-88)";
		apm_loadout = '[["srifle_DMR_07_blk_F","muzzle_snds_65_TI_blk_F","ACE_acc_pointer_green","optic_KHS_blk",["ACE_20Rnd_65_Creedmor_mag",20],[],""],[],["RH_fn57","RH_sfn57","","",["RH_20Rnd_57x28_FN",20],[],""],["tacs_Uniform_Garment_RS_TS_BP_BB",[["ACE_packingBandage",8],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["tacs_Vest_Tactical_DarkBlack",[["ACE_M26_Clacker",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["RH_20Rnd_57x28_FN",2,20],["ACE_20Rnd_65_Creedmor_mag",6,20]]],["Black_Backpack_Compact",[["ACE_bodyBag",4],["ACE_bloodIV_250",2],["ACE_ATragMX",1],["ACE_Kestrel4500",1],["ACE_RangeCard",1],["rhs_mag_an_m14_th3",2,1],["ACE_20Rnd_65_Creedmor_mag",6,20]]],"VSM_Bowman_cap_Black","milgp_f_face_shield_tactical_shemagh_BLK",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","NVGogglesB_blk_F"]]';
		scope = 2;
		role = "Marksman";
		sensitivity = 3.2;
	};
	class O_Operator_Skua_Sniper1: O_Operator_Skua_Marksman1
	{
		displayName = "Element Sniper (M2010)";
		apm_loadout = '[["rhs_weap_XM2010_wd","rhsusf_acc_M2010S_wd","ACE_acc_pointer_green","rhsusf_acc_LEUPOLDMK4_2_mrds",["rhsusf_5Rnd_300winmag_xm2010",5],[],"rhsusf_acc_harris_bipod"],[],["RH_fn57","RH_sfn57","","",["RH_20Rnd_57x28_FN",20],[],""],["tacs_Uniform_Garment_RS_TS_BP_BB",[["ACE_packingBandage",8],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["V_PlateCarrier1_blk",[["ACE_M26_Clacker",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["RH_20Rnd_57x28_FN",4,20],["rhsusf_5Rnd_300winmag_xm2010",12,5]]],["B_TacticalPack_blk",[["ACE_bodyBag",4],["ACE_bloodIV_250",2],["ACE_ATragMX",1],["ACE_Kestrel4500",1],["ACE_RangeCard",1],["rhs_mag_an_m14_th3",2,1]]],"VSM_Beanie_Black","rhsusf_shemagh2_gogg_tan",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_fadak","ItemCompass","ACE_Altimeter","NVGogglesB_blk_F"]]';
		sensitivity = 3.5;
	};
//Vehicles
#include "faction_skua_vehicles.hpp"
