//Units
	class I_Contractor_Mayhem_Base: B_Soldier_base_F
	{
		author = "LinkIsParking";
    displayName = "Mayhem Mercenary";
		side=2;
		faction = "I_faction_MayhemPMC";
		CBA_facewearList[] = {};
		headgearList[] = {};
    genericNames="NATOMen"
		scope = 0;
		identityTypes[] =  {"LanguageENG_F","Head_NATO"};
		editorSubcategory = "apm_generic_merc";
		apm_loadout = '';
		apm_insignia = "EAF_5thRegiment";
		cost = 210000;
    camouflage = 1.3;
    sensitivity = 2;
    threat[] = {1, 0.7, 0.5};
	};
	class I_Militia_Mayhem_Light: I_Contractor_Mayhem_Base
	{
		displayName = "Mayhem Lightweight"
		editorSubcategory = "apm_generic_civ";
		camouflage = 1;
		sensitivity = 1.8;
		cost = 180000;
	};
	class I_Contractor_Mayhem_TL1: I_Contractor_Mayhem_Base
	{
		displayName = "Team Leader (416)";
		apm_loadout = '[["hlc_rifle_416D145_gl","","","SMA_eotech552_3XDOWN",["rhs_mag_30Rnd_556x45_M855_PMAG",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_SS_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["rhs_mag_30Rnd_556x45_M855_PMAG",6,30],["1Rnd_HE_Grenade_shell",3,1]]],["tfw_ilbe_dd_gr",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["1Rnd_HE_Grenade_shell",4,1],["rhs_mag_30Rnd_556x45_M855_PMAG",2,30],["ACE_40mm_Flare_white",2,1],["UGL_FlareRed_F",2,1],["UGL_FlareGreen_F",2,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["1Rnd_SmokeGreen_Grenade_shell",2,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["rhs_mag_an_m14_th3",2,1]]],"VSM_Black_OPS","VSM_Shemagh_Balaclava2_OD_Goggles",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
		scope = 2;
		role = "Grenadier";
	};
	class I_Contractor_Mayhem_TL2: I_Contractor_Mayhem_Base
	{
		displayName = "Team Leader (G36C)";
		apm_loadout = '[["hlc_rifle_G36C","","","rhsusf_acc_compm4",["rhssaf_30rnd_556x45_EPR_G36",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_SS_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["rhssaf_30rnd_556x45_EPR_G36",8,30]]],["tfw_ilbe_blade_gr",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["rhs_mag_an_m14_th3",2,1]]],"VSM_Black_OPS","VSM_Shemagh_Balaclava2_OD_Goggles",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
		scope = 2;
		role = "Grenadier";
	};
	class I_Contractor_Mayhem_TL3: I_Contractor_Mayhem_Base
	{
		displayName = "Team Leader (416-SD)";
		apm_loadout = '[["hlc_rifle_416D145_gl","hlc_muzzle_556NATO_KAC","","SMA_eotech552_3XDOWN",["rhs_mag_30Rnd_556x45_M855_PMAG",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_SS_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["rhs_mag_30Rnd_556x45_M855_PMAG",6,30],["1Rnd_HE_Grenade_shell",3,1]]],["tfw_ilbe_dd_gr",[["ACE_bodyBag",2],["ACE_bloodIV_250",2],["1Rnd_HE_Grenade_shell",4,1],["rhs_mag_30Rnd_556x45_M855_PMAG",2,30],["ACE_40mm_Flare_white",2,1],["UGL_FlareRed_F",2,1],["UGL_FlareGreen_F",2,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["1Rnd_SmokeGreen_Grenade_shell",2,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["rhs_mag_an_m14_th3",2,1]]],"VSM_Black_OPS","VSM_Shemagh_Balaclava2_OD_Goggles",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
		scope = 2;
		role = "Grenadier";
	};
	class I_Contractor_Mayhem_AT1: I_Contractor_Mayhem_Base
	{
		displayName = "AT Rifleman (416)";
		apm_loadout = '[["hlc_rifle_416D10","","","SMA_eotech552",["rhs_mag_30Rnd_556x45_M855A1_PMAG",30],[],"rhsusf_acc_rvg_blk"],["launch_RPG32_green_F","","","",["RPG32_F",1],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_SS_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_FAPC_Operator_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_mag_30Rnd_556x45_M855A1_PMAG",6,30]]],["VSM_OGA_OD_carryall",[["ToolKit",1],["RPG32_F",4,1]]],"VSM_Black_OPS","VSM_Shemagh_Balaclava2_OD_Goggles",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
		scope = 2;
		role = "MissileSpecialist";
		engineer = true;
	};
	class I_Contractor_Mayhem_AT2: I_Contractor_Mayhem_AT1
	{
		displayName = "AT Rifleman (Titan)";
		apm_loadout = '[["hlc_rifle_416C","","","SMA_eotech552",["rhs_mag_30Rnd_556x45_M855A1_PMAG",30],[],"rhsusf_acc_rvg_blk"],["launch_I_Titan_short_F","","","",["Titan_AT",1],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_SS_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_FAPC_Operator_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_mag_30Rnd_556x45_M855A1_PMAG",6,30]]],["VSM_OGA_OD_carryall",[["Titan_AT",3,1]]],"VSM_Black_OPS","VSM_Shemagh_Balaclava2_OD_Goggles",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
	};
	class I_Contractor_Mayhem_AA1: I_Contractor_Mayhem_AT1
	{
		displayName = "AA Rifleman (Titan)";
		apm_loadout = '[["hlc_rifle_416C","","","SMA_eotech552",["rhs_mag_30Rnd_556x45_M855A1_PMAG",30],[],"rhsusf_acc_rvg_blk"],["launch_B_Titan_olive_F","","","",["Titan_AA",1],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_SS_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_FAPC_Operator_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_mag_30Rnd_556x45_M855A1_PMAG",6,30]]],["VSM_OGA_OD_carryall",[["Titan_AA",3,1]]],"VSM_Black_OPS","VSM_Shemagh_Balaclava2_OD_Goggles",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
	};
	class I_Contractor_Mayhem_Ammo_AT: I_Contractor_Mayhem_Base
	{
		displayName = "Ammo Bearer (AT)";
		apm_loadout = '[["hlc_rifle_416D145","","","SMA_ELCAN_SPECTER_4z",["rhs_mag_30Rnd_556x45_M855A1_PMAG",30],[],"rhsusf_acc_rvg_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_SS_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_FAPC_Operator_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_mag_30Rnd_556x45_M855A1_PMAG",5,30]]],["VSM_OGA_OD_carryall",[["Titan_AT",3,1]]],"VSM_Black_OPS","VSM_Shemagh_Balaclava2_OD_Goggles",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
		scope = 2;
		role = "Assistant";
	};
	class I_Contractor_Mayhem_Ammo_MG: I_Contractor_Mayhem_Ammo_AT
	{
		displayName = "Ammo Bearer (MG)";
		apm_loadout = '[["hlc_rifle_416D145","","ACE_acc_pointer_green","SMA_BARSKA",["rhs_mag_30Rnd_556x45_M855_PMAG",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT6094_MG_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["ACE_SpareBarrel",1,1],["rhs_mag_30Rnd_556x45_M855_PMAG",7,30]]],["VSM_OGA_OD_Backpack_Kitbag",[]],"VSM_Black_OPS_2","VSM_Shemagh_Balaclava2_OD",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
	};
	class I_Contractor_Mayhem_Medic1: I_Contractor_Mayhem_Base
	{
		displayName = "Medic (416)";
		apm_loadout = '[["hlc_rifle_416D145","","","rhsusf_acc_ACOG",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],"rhsusf_acc_rvg_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT6094_breacher_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30]]],["VSM_OGA_OD_carryall",[["ACE_plasmaIV",10],["ACE_plasmaIV_500",8],["ACE_plasmaIV_250",4],["ACE_elasticBandage",30],["ACE_packingBandage",50],["ACE_quikclot",20],["ACE_morphine",8],["ACE_epinephrine",8],["ACE_adenosine",8],["ACE_surgicalKit",1],["ACE_personalAidKit",1],["ACE_splint",8],["ACE_tourniquet",4]]],"VSM_Black_OPS","VSM_Shemagh_Balaclava2_OD",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
		scope = 2;
		role = "CombatLifeSaver";
		attendant = 1;
	};
	class I_Contractor_Mayhem_Marksman1: I_Contractor_Mayhem_Base
	{
		displayName = "Marksman (417)";
		apm_loadout = '[["arifle_SPAR_03_khk_F","","ACE_acc_pointer_green","optic_AMS",["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",20],[],"bipod_01_F_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_SS_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",9,20]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_Kestrel4500",1],["ACE_ATragMX",1],["ACE_bodyBag",1],["ACE_bloodIV_250",2],["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",2,20]]],"VSM_Bowman_cap_Black","VSM_Shemagh_OD",["Rangefinder","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
		scope = 2;
		role = "Marksman";
		sensitivity = 2.5;
	};
	class I_Contractor_Mayhem_Sharpshooter1: I_Contractor_Mayhem_Marksman1
	{
		displayName = "Sharpshooter (Cyrus)";
		apm_loadout = '[["srifle_DMR_05_tan_f","","ACE_acc_pointer_green","optic_KHS_blk",["apm_10rnd_93x64_Tracer_Mag",10],[],"bipod_01_F_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_SS_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_CarrierRig_Breacher_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["apm_10rnd_93x64_Tracer_Mag",12,10]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_Kestrel4500",1],["ACE_ATragMX",1],["ACE_bodyBag",1],["ACE_bloodIV_250",2],["apm_10rnd_93x64_Tracer_Mag",3,10]]],"VSM_Beanie_Black","VSM_Shemagh_OD",["Rangefinder","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","Face_Bandana_Skull"]]';
	};
	class I_Contractor_Mayhem_Marksman2: I_Contractor_Mayhem_Marksman1
	{
		displayName = "Marksman (417-SD)";
		apm_loadout = '[["arifle_SPAR_03_khk_F","rhsusf_acc_aac_762sdn6_silencer","ACE_acc_pointer_green","optic_AMS",["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",20],[],"bipod_01_F_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_SS_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",9,20]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_Kestrel4500",1],["ACE_ATragMX",1],["ACE_bodyBag",1],["ACE_bloodIV_250",2],["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",2,20]]],"VSM_Bowman_cap_Black","VSM_Shemagh_OD",["Rangefinder","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
	};
	class I_Contractor_Mayhem_Sniper1: I_Contractor_Mayhem_Marksman1
	{
		displayName = "Sniper (M2010-SD)";
		apm_loadout = '[["rhs_weap_XM2010_wd","rhsusf_acc_M2010S_wd","ACE_acc_pointer_green","rhsusf_acc_premier",["rhsusf_5Rnd_300winmag_xm2010",5],[],"rhsusf_acc_harris_bipod"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_SS_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",9,20],["rhsusf_5Rnd_300winmag_xm2010",24,5]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_Kestrel4500",1],["ACE_ATragMX",1],["ACE_bodyBag",1],["ACE_bloodIV_250",2],["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",2,20]]],"H_Booniehat_khk_hs","VSM_Shemagh_OD",["Rangefinder","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
		sensitivity = 3;
	};
	class I_Contractor_Mayhem_AR1: I_Contractor_Mayhem_Base
	{
		displayName = "Autorifleman (M249)";
		apm_loadout = '[["hlc_m249_pip2","","","SMA_ELCAN_SPECTER_4z",["200Rnd_556x45_Box_Tracer_Red_F",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT6094_MG_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["200Rnd_556x45_Box_Tracer_Red_F",4,200],["ACE_SpareBarrel",1,1]]],[],"VSM_Black_OPS_2","VSM_Shemagh_Balaclava2_OD",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
		scope = 2;
		role = "MachineGunner";
	};
	class I_Contractor_Mayhem_AR2: I_Contractor_Mayhem_AR1
	{
		displayName = "Autorifleman (Negev)";
		apm_loadout = '[["LMG_Zafir_F","","","optic_MRCO",["150Rnd_762x54_Box_Tracer",150],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT6094_MG_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["ACE_SpareBarrel",1,1],["150Rnd_762x54_Box_Tracer",3,150]]],["VSM_OGA_OD_Backpack_Compact",[["150Rnd_762x54_Box_Tracer",2,150]]],"VSM_Black_OPS_2","VSM_Shemagh_Balaclava2_OD",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
		scope = 2;
	};
	class I_Contractor_Mayhem_Rifleman1: I_Contractor_Mayhem_Base
	{
		displayName = "Rifleman (416)";
		apm_loadout = '[["hlc_rifle_416D145","","","rhsusf_acc_ACOG",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],"rhsusf_acc_rvg_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT6094_breacher_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_mag_30Rnd_556x45_M855A1_Stanag",5,30]]],[],"VSM_Black_OPS","VSM_Shemagh_Balaclava2_OD",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
		scope = 2;
		role = "Rifleman";
	};
	class I_Contractor_Mayhem_Rifleman2: I_Contractor_Mayhem_Rifleman1
	{
		displayName = "Rifleman (AK-74)";
		apm_loadout = '[["rhs_weap_ak74mr","","ACE_acc_pointer_green","SMA_eotech552_3XDOWN",["rhs_30Rnd_545x39_7N22_AK",30],[],"rhsusf_acc_rvg_blk"],["rhs_weap_M136_hp","","","",[],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_SS_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["CPC_belt_LBTrgr",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_30Rnd_545x39_7N22_AK",9,30]]],[],"VSM_Black_OPS_2","VSM_Shemagh_Balaclava2_OD_Goggles",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
	};
	class I_Contractor_Mayhem_Rifleman3: I_Contractor_Mayhem_Rifleman1
	{
		displayName = "Rifleman (AK-74-SD)";
		apm_loadout = '[["rhs_weap_ak74mr","hlc_muzzle_545SUP_AK","ACE_acc_pointer_green","SMA_eotech552_3XDOWN",["rhs_30Rnd_545x39_7N22_AK",30],[],"rhsusf_acc_rvg_blk"],["rhs_weap_M136_hp","","","",[],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_SS_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["CPC_belt_LBTrgr",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",1],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_30Rnd_545x39_7N22_AK",9,30]]],[],"VSM_Black_OPS_2","VSM_Shemagh_Balaclava2_OD_Goggles",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
	};
	class I_Contractor_Mayhem_Grenadier1: I_Contractor_Mayhem_Base
	{
		displayName = "Grenadier (ACR-E)";
		apm_loadout = '[["hlc_rifle_ACR_GL_Carb_black","","","optic_Hamr",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_mag_30Rnd_556x45_M855A1_Stanag",8,30],["1Rnd_HE_Grenade_shell",6,1],["1Rnd_Smoke_Grenade_shell",3,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["ACE_40mm_Flare_ir",2,1],["ACE_40mm_Flare_white",2,1]]],[],"VSM_Black_OPS_2","VSM_Shemagh_Balaclava2_OD_Glasses",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
		scope = 2;
		role = "Grenadier";
	};
	class I_Contractor_Mayhem_Grenadier2: I_Contractor_Mayhem_Grenadier1
	{
		displayName = "Grenadier (MX 3GL)";
		apm_loadout = '[["arifle_MX_GL_Black_F","","","optic_Hamr",["30Rnd_65x39_caseless_black_mag",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_OGA_OD_Crye_OD_Black_Shirt_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["1Rnd_HE_Grenade_shell",6,1],["1Rnd_Smoke_Grenade_shell",3,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["ACE_40mm_Flare_ir",2,1],["ACE_40mm_Flare_white",2,1],["30Rnd_65x39_caseless_black_mag",6,30]]],[],"VSM_Black_OPS","VSM_Facemask_black_glasses",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Wide"]]';
	};
	class I_Militia_Mayhem_Rifleman1: I_Militia_Mayhem_Light
	{
		displayName = "Rifleman (M4)";
		scope = 2;
		apm_loadout = '[["rhs_weap_m4a1","","","rhsusf_acc_eotech_552",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],[],"rhsusf_acc_grip3"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_Black_OD_Pants_ACU_SS_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_OGA_OD_IOTV_1",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30]]],[],"H_Cap_usblack","VSM_SMG_Coyote",[],["ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ACE_Altimeter",""]]';
	};
	class I_Militia_Mayhem_LAT1: I_Militia_Mayhem_Rifleman1
	{
		displayName = "Rifleman (LAT)";
		apm_loadout = '[["arifle_AKS_F","","","",["rhs_30Rnd_545x39_7N22_AK",30],[],""],["rhs_weap_M136_hp","","","",[],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_Black_OD_Pants_ACU_SS_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_LBT1961_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["rhs_30Rnd_545x39_7N22_AK",8,30]]],[],"rhsusf_bowman_cap","rhs_googles_clear",[],["ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ACE_Altimeter",""]]';
	};
	class I_Militia_Mayhem_Marksman1: I_Militia_Mayhem_Rifleman1
	{
		displayName = "Marksman (G3KA4)";
		apm_loadout = '[["hlc_rifle_g3ka4","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_anpeq15side_bk","SMA_ELCAN_SPECTER_RDS_4z",["hlc_20rnd_762x51_Mk316_G3",20],[],"rhsusf_acc_harris_bipod"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_Black_OD_Pants_ACU_SS_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["BLK_MBSS_PACA",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["hlc_20rnd_762x51_Mk316_G3",5,20]]],[],"H_Booniehat_khk","milgp_f_face_shield_tactical_shemagh_RGR",[],["ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ACE_Altimeter",""]]';
		role = "Marksman";
	};
	class I_Militia_Mayhem_AR1: I_Militia_Mayhem_Rifleman1
	{
		displayName = "Autorifleman (M249)";
		apm_loadout = '[["rhs_weap_m249_pip_S_para","","","SMA_eotech552",["hlc_200rnd_556x45_M_SAW",200],[],"rhsusf_acc_saw_bipod"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_Black_OD_Pants_ACU_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_CarrierRig_Gunner_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["hlc_200rnd_556x45_M_SAW",2,200]]],["VSM_OGA_OD_Backpack_Compact",[["hlc_200rnd_556x45_M_SAW",2,200]]],"H_HelmetSpecB_blk","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",[],["ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ACE_Altimeter",""]]';
		role = "MachineGunner";
	};
	class I_Militia_Mayhem_TL1: I_Militia_Mayhem_Rifleman1
	{
		displayName = "Team Leader (M4)";
		apm_loadout = '[["rhs_weap_m4a1_carryhandle_m203S","","","SMA_eotech552",["rhs_mag_30Rnd_556x45_M855A1_Stanag",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_Black_OD_Pants_ACU_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["VSM_CarrierRig_Breacher_OGA_OD",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["1Rnd_HE_Grenade_shell",8,1],["rhs_mag_30Rnd_556x45_M855A1_Stanag",6,30]]],[],"H_HelmetSpecB_blk","VSM_SMG_Bl",[],["ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ACE_Altimeter",""]]';
		role = "Grenadier";
	};
	class I_Militia_Mayhem_Medic1: I_Militia_Mayhem_Rifleman1
	{
		displayName = "Medic (EVO)";
		apm_loadout = '[["SMG_02_F","","","",["30Rnd_9x21_Mag_SMG_02",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_Black_OD_Pants_ACU_SS_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ItemcTabHCam",1],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["tacs_Vest_Tactical_DarkBlack",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["30Rnd_9x21_Mag_SMG_02",7,30]]],["B_AssaultPackSpec_OD",[["ACE_elasticBandage",15],["ACE_fieldDressing",15],["ACE_packingBandage",15],["ACE_bloodIV_250",4],["ACE_bloodIV_500",6],["ACE_morphine",4],["ACE_epinephrine",4],["ACE_tourniquet",2],["ACE_surgicalKit",1],["ACE_IR_Strobe_Item",2],["ACE_bloodIV",3]]],"milgp_h_cap_backwards_02_RGR","VSM_SMG_Bl",[],["ItemMap","ItemGPS","TFAR_anprc154","ItemCompass","ACE_Altimeter",""]]';
		role = "CombatLifeSaver";
		attendant = 1;
	};
	class I_Contractor_Mayhem_Pilot: I_Contractor_Mayhem_Base
	{
		displayName = "Pilot";
		apm_loadout = '[["SMG_01_F","","","",["30Rnd_45ACP_Mag_SMG_01_Tracer_Red",25],[],""],[],[],["U_B_HeliPilotCoveralls",[["ACE_tourniquet",4],["ACE_MapTools",1],["ACE_EarPlugs",2],["ACE_packingBandage",8],["ACE_epinephrine",2],["ACE_morphine",2],["ACE_splint",2],["ACE_bloodIV_250",2],["ACE_IR_Strobe_Item",1],["ACE_adenosine",1],["ACE_CableTie",1],["SmokeShellBlue",1,1],["SmokeShellGreen",1,1]]],["V_TacVest_oli",[["ACE_CableTie",2],["30Rnd_45ACP_Mag_SMG_01_Tracer_Red",3,25]]],[],"H_CrewHelmetHeli_O","rhs_googles_clear",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter","ACE_NVG_Gen4"]]';
		scope = 2;
		role = "Pilot";
		engineer = true;
	};
	class I_Mayhem_Officer: I_Contractor_Mayhem_Base
	{
		displayName = "Officer";
		scope = 2;
		apm_loadout = '[["SMG_02_F","","","optic_Holosight_smg_blk_F",["30Rnd_9x21_Mag_SMG_02",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["MLO_Black_OD_Pants_ACU_SS_Camo",[["ACE_packingBandage",9],["ACE_morphine",1],["ACE_epinephrine",1],["ACE_adenosine",1],["ACE_splint",2],["ACE_tourniquet",4],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_CableTie",2],["ACE_elasticBandage",3]]],["tacs_Vest_Tactical_DarkBlack",[["ACE_M26_Clacker",1],["ACE_bloodIV_250",3],["ACE_IR_Strobe_Item",1],["ACE_MapTools",1],["HandGrenade",2,1],["SmokeShell",2,1],["ACE_M84",2,1],["rhsusf_mag_17Rnd_9x19_JHP",2,17],["30Rnd_9x21_Mag_SMG_02_Tracer_Green",3,30]]],[],"H_Beret_blk","G_Aviator",[],["ItemMap","ItemAndroid","TFAR_anprc148jem","ItemCompass","ACE_Altimeter",""]]';
	};
//Vehicles
#include "faction_mayhem_vehicles.hpp"
