//Units
	class B_Contractor_APM_Base: B_Soldier_base_F
	{
		author = "LinkIsParking";
    displayName = "Contractor";
		faction = "B_faction_APM";
		CBA_facewearList[] = {};
		headgearList[] = {};
    genericNames="NATOMen"
		scope = 0;
		identityTypes[] =  {"LanguageENG_F","Head_NATO"};
		editorSubcategory = "apm_contractor_combat";
		cost = 120000;
    camouflage = 1.1;
    sensitivity = 2.7;
    threat[] = {1, 0.7, 0.5};
	};
	class B_Contractor_APM_TL1: B_Contractor_APM_Base
	{
		displayName = "Team Leader (M4 Custom)";
		apm_loadout = '[["hlc_rifle_bcmjack_grip2","muzzle_snds_M","ACE_acc_pointer_green","SMA_ELCAN_SPECTER_RDS_4z",["rhs_mag_30Rnd_556x45_Mk262_PMAG",30],[],"rhsusf_acc_grip2"],["rhs_weap_M136_hp","","","",[],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_OGA_OD_Vest_1",[["ACE_EntrenchingTool",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["rhs_mag_30Rnd_556x45_Mk262_PMAG",7,30],["ACE_M84",2,1],["rhs_mag_an_m14_th3",2,1]]],[],"VSM_Bowman_cap_Black","",["Laserdesignator_03","","","",[],[],""],["ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
		role = "Rifleman";
		scope = 2;
		apm_insignia = "APM_RT_GAC";
	};
	class B_Contractor_APM_TL2: B_Contractor_APM_TL1
	{
		displayName = "Team Leader (MSBS UGL)";
		apm_loadout = '[["arifle_MSBS65_GL_F","muzzle_snds_65_TI_blk_F","ACE_acc_pointer_green","optic_Hamr",["30Rnd_65x39_caseless_msbs_mag",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_OGA_OD_Vest_2",[["ACE_EntrenchingTool",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["ACE_M84",2,1],["rhs_mag_an_m14_th3",2,1],["30Rnd_65x39_caseless_msbs_mag",8,30]]],["B_TacticalPack_blk",[["1Rnd_HE_Grenade_shell",6,1],["1Rnd_Smoke_Grenade_shell",4,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["1Rnd_SmokeGreen_Grenade_shell",2,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["ACE_40mm_Flare_white",3,1],["ACE_40mm_Flare_red",2,1],["ACE_40mm_Flare_ir",3,1],["ACE_40mm_Flare_green",2,1]]],"VSM_OD_spray_OPS","TRYK_Shemagh",["Laserdesignator_03","","","",[],[],""],["ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","ACE_Altimeter","TAC_SGS"]]';
		role = "Grenadier";
		apm_insignia = "APM_BT_GAC";
	};
	class B_Contractor_APM_TL3: B_Contractor_APM_TL1
	{
		displayName = "Team Leader (ACR UGL)";
		apm_loadout = '[["hlc_rifle_ACR_GL_Carb_black","hlc_muzzle_556NATO_KAC","ACE_acc_pointer_green","optic_MRCO",["rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_EntrenchingTool",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["ACE_M84",2,1],["rhs_mag_an_m14_th3",2,1],["rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",8,30]]],["B_AssaultPack_rgr",[["1Rnd_Smoke_Grenade_shell",4,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["1Rnd_SmokeGreen_Grenade_shell",2,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["ACE_40mm_Flare_white",3,1],["ACE_40mm_Flare_red",2,1],["ACE_40mm_Flare_ir",3,1],["ACE_40mm_Flare_green",2,1],["1Rnd_HE_Grenade_shell",8,1]]],"VSM_Black_OPS","TRYK_Shemagh",["Laserdesignator_03","","","",[],[],""],["ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","ACE_Altimeter","Face_Bandana_Skull"]]';
		role = "Grenadier";
		apm_insignia = "APM_GT_GAC";
	};
	class B_Contractor_APM_TL4: B_Contractor_APM_TL1
	{
		displayName = "Team Leader (MK18 UGL)";
		apm_loadout = '[["rhs_weap_mk18_m320","rhsusf_acc_nt4_black","ACE_acc_pointer_green","SMA_ELCAN_SPECTER_RDS_4z",["rhs_mag_30Rnd_556x45_Mk262_PMAG",30],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_breacher_OGA_OD",[["ACE_EntrenchingTool",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["rhs_mag_30Rnd_556x45_Mk262_PMAG",8,30],["ACE_M84",2,1],["rhs_mag_an_m14_th3",2,1],["1Rnd_HE_Grenade_shell",7,1]]],["B_LegStrapBag_black_F",[["1Rnd_Smoke_Grenade_shell",4,1],["1Rnd_SmokeRed_Grenade_shell",4,1],["1Rnd_SmokeGreen_Grenade_shell",4,1],["ACE_40mm_Flare_ir",3,1],["ACE_40mm_Flare_white",3,1]]],"VSM_Black_OPS","TRYK_Shemagh",["Laserdesignator_03","","","",[],[],""],["ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_US_ESS_Glasses_NV"]]';
		role = "Grenadier";
		apm_insignia = "APM_YT_GAC";
	};
	class B_Contractor_APM_SL1: B_Contractor_APM_TL1
	{
		displayName = "Squad Leader (Commando)";
		apm_insignia = "APM_YT_GAC";
		apm_loadout = '[["hlc_rifle_CQBR","muzzle_snds_M","ACE_acc_pointer_green","SMA_ELCAN_SPECTER_RDS_4z",["rhs_mag_30Rnd_556x45_Mk262_PMAG",30],[],"rhsusf_acc_grip2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformBlack_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_OGA_OD_Vest_1",[["ACE_EntrenchingTool",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["rhs_mag_30Rnd_556x45_Mk262_PMAG",8,30],["ACE_M84",2,1],["rhs_mag_an_m14_th3",2,1]]],["tfw_ilbe_dd_gr",[]],"VSM_Beanie_Black","",["Laserdesignator_03","","","",[],[],""],["ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
	};
	class B_Contractor_APM_SL2: B_Contractor_APM_TL1
	{
		displayName = "Squad Leader (AR-15)";
		apm_insignia = "APM_YT_GAC";
		apm_loadout = '[["hlc_rifle_RU5562","muzzle_snds_M","ACE_acc_pointer_green","SMA_eotech552_3XDOWN",["rhs_mag_30Rnd_556x45_Mk262_PMAG",30],[],"rhsusf_acc_grip2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformBlack_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_OGA_OD_IOTV_2",[["ACE_EntrenchingTool",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["rhs_mag_30Rnd_556x45_Mk262_PMAG",7,30],["ACE_M84",2,1],["rhs_mag_an_m14_th3",2,1]]],["tfw_ilbe_dd_gr",[]],"H_Cap_usblack","VSM_Peltor_OD_glasses",["Laserdesignator_03","","","",[],[],""],["ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
	};
	class B_Contractor_APM_Medic1: B_Contractor_APM_Base
	{
		displayName = "Medic (MK18)";
		apm_insignia = "APM_RT_GAC";
		apm_loadout = '[["rhs_weap_mk18","hlc_muzzle_556NATO_KAC","rhsusf_acc_anpeq15side_bk","SMA_eotech552",["rhs_mag_30Rnd_556x45_M855A1_PMAG",30],[],"rhs_acc_grip_ffg2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_NVG_Wide",1],["rhs_mag_30Rnd_556x45_M855A1_PMAG",7,30],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17]]],["VSM_OGA_OD_Backpack_Kitbag",[["ACE_bloodIV",6],["ACE_bloodIV_500",8],["ACE_bloodIV_250",4],["ACE_morphine",4],["ACE_tourniquet",4],["ACE_surgicalKit",1],["ACE_personalAidKit",1],["ACE_epinephrine",6],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_adenosine",4],["ACE_packingBandage",30],["ACE_fieldDressing",10],["ACE_elasticBandage",30],["ACE_quikclot",10]]],"VSM_Black_OPS_2","VSM_Balaclava2_black_Peltor_Goggles",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
		scope = 2;
		attendant = 1;
		role = "CombatLifeSaver";
	};
	class B_Contractor_APM_Medic2: B_Contractor_APM_Medic1
	{
		apm_insignia = "APM_BT_GAB";
		displayName = "Medic (MSBS SG)";
		apm_loadout = '[["arifle_MSBS65_UBS_black_F","muzzle_snds_65_TI_blk_F","ACE_acc_pointer_green","optic_Holosight_blk_F",["30Rnd_65x39_caseless_msbs_mag",30],["6Rnd_12Gauge_Slug",6],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_NVG_Wide",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["30Rnd_65x39_caseless_msbs_mag",8,30],["6Rnd_12Gauge_Slug",4,6]]],["VSM_OGA_OD_Backpack_Kitbag",[["ACE_bloodIV",6],["ACE_bloodIV_500",8],["ACE_bloodIV_250",4],["ACE_morphine",4],["ACE_tourniquet",4],["ACE_surgicalKit",1],["ACE_personalAidKit",1],["ACE_epinephrine",6],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_adenosine",4],["ACE_packingBandage",30],["ACE_fieldDressing",10],["ACE_elasticBandage",30],["ACE_quikclot",10]]],"VSM_Black_OPS","VSM_Shemagh_OD",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_US_ESS_Glasses_NV"]]';
	};
	class B_Contractor_APM_Medic3: B_Contractor_APM_Medic1
	{
		apm_insignia = "APM_GT_GAB";
		displayName = "Medic (SCAR-H)";
		apm_loadout = '[["rhs_weap_mk17_CQC","rhsusf_acc_aac_762sdn6_silencer","ACE_acc_pointer_green","SMA_eotech552",["rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk",20],[],"rhsusf_acc_grip2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_NVG_Wide",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk",7,20]]],["VSM_OGA_OD_Backpack_Kitbag",[["ACE_bloodIV",6],["ACE_bloodIV_500",8],["ACE_bloodIV_250",4],["ACE_morphine",4],["ACE_tourniquet",4],["ACE_surgicalKit",1],["ACE_personalAidKit",1],["ACE_epinephrine",6],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_adenosine",4],["ACE_packingBandage",30],["ACE_fieldDressing",10],["ACE_elasticBandage",30],["ACE_quikclot",10]]],"VSM_Bowman_cap_Tan","rhs_googles_clear",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
	};
	class B_Contractor_APM_Medic4: B_Contractor_APM_Medic1
	{
		apm_insignia = "APM_YT_GAC";
		displayName = "Medic (MSBS)";
		apm_loadout = '[["arifle_MSBS65_F","muzzle_snds_65_TI_blk_F","ACE_acc_pointer_green","optic_Hamr",["30Rnd_65x39_caseless_msbs_mag",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_NVG_Wide",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["30Rnd_65x39_caseless_msbs_mag",6,30]]],["VSM_OGA_OD_Backpack_Kitbag",[["ACE_bloodIV",6],["ACE_bloodIV_500",6],["ACE_bloodIV_250",2],["ACE_morphine",4],["ACE_tourniquet",2],["ACE_surgicalKit",1],["ACE_personalAidKit",1],["ACE_epinephrine",6],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_adenosine",4],["ACE_packingBandage",25],["ACE_fieldDressing",10],["ACE_elasticBandage",20],["ACE_quikclot",5]]],"VSM_OPS","VSM_Balaclava2_black_Peltor_Goggles",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
	};
	class B_Contractor_APM_Medic5: B_Contractor_APM_Medic1
	{
		displayName = "Squad Medic (M4 Block II)";
		apm_insignia = "APM_YT_GAB";
		apm_loadout = '[["rhs_weap_mk18","hlc_muzzle_556NATO_KAC","rhsusf_acc_anpeq15side_bk","optic_Hamr",["rhs_mag_30Rnd_556x45_M855A1_PMAG",30],[],"rhs_acc_grip_ffg2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_FAPC_Breacher_OGA_OD",[["ACE_NVG_Wide",1],["rhs_mag_30Rnd_556x45_M855A1_PMAG",7,30],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17]]],["VSM_OGA_OD_Backpack_Kitbag",[["ACE_bloodIV",9],["ACE_bloodIV_500",8],["ACE_bloodIV_250",4],["ACE_morphine",4],["ACE_tourniquet",4],["ACE_surgicalKit",1],["ACE_personalAidKit",1],["ACE_epinephrine",6],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_adenosine",4],["ACE_packingBandage",30],["ACE_fieldDressing",10],["ACE_elasticBandage",30],["ACE_quikclot",10]]],"VSM_Bowman_cap_Black","milgp_f_face_shield_tactical_CB",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
	};
	class B_Contractor_APM_Medic6: B_Contractor_APM_Medic1
	{
		apm_insignia = "APM_YT_GAC";
		displayName = "Squad Medic (AK-74)";
		apm_loadout = '[["rhs_weap_ak74mr","hlc_muzzle_545SUP_AK","rhsusf_acc_anpeq15side_bk","optic_Hamr",["rhs_30Rnd_545x39_7N22_AK",30],[],"rhs_acc_grip_ffg2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["CPC_belt_LBTgprgr",[["ACE_NVG_Wide",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["rhs_30Rnd_545x39_7N22_AK",8,30]]],["VSM_OGA_OD_Backpack_Kitbag",[["ACE_bloodIV",9],["ACE_bloodIV_500",8],["ACE_bloodIV_250",4],["ACE_morphine",4],["ACE_tourniquet",4],["ACE_surgicalKit",1],["ACE_personalAidKit",1],["ACE_epinephrine",6],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_EntrenchingTool",1],["ACE_adenosine",4],["ACE_packingBandage",30],["ACE_fieldDressing",10],["ACE_elasticBandage",30],["ACE_quikclot",10]]],"H_Watchcap_blk","milgp_f_face_shield_tactical_BLK",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_G_NV"]]';
	};
	class B_Contractor_APM_Medic_Shield: B_Contractor_APM_Medic1
	{
		displayName = "Shield Medic";
		apm_loadout = '[["hlc_rifle_CQBR","rhsusf_acc_nt4_black","","SMA_eotech552",["rhs_mag_30Rnd_556x45_Mk262_PMAG",30],[],""],[],["RH_g17","","","",["RH_17Rnd_9x19_g17",17],[],""],["TRYK_U_denim_hood_3c",[["ACE_packingBandage",8],["ACE_bloodIV_250",2],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_DefusalKit",1],["ACE_IR_Strobe_Item",1],["ACE_M26_Clacker",1],["ACE_MapTools",1],["ACE_microDAGR",1],["ACE_morphine",1],["ACE_tourniquet",4],["ACE_splint",2],["ACE_epinephrine",1]]],["V_BandollierB_blk",[["ACE_EntrenchingTool",1],["rhs_mag_30Rnd_556x45_Mk262_PMAG",4,30]]],["B_TacticalPack_blk",[["ACE_packingBandage",18],["ACE_bloodIV",6],["ACE_bloodIV_500",4],["ACE_bloodIV_250",4],["ACE_epinephrine",6],["ACE_morphine",2],["ACE_adenosine",4],["ACE_personalAidKit",1],["ACE_splint",8],["ACE_tourniquet",4],["ACE_surgicalKit",1]]],"H_Cap_blk","VSM_Shemagh_OD",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","ACE_Altimeter","Face_Bandana_Skull"]]';
		editorSubcategory = "apm_contractor_logistics";
	};
	class B_Contractor_APM_Marksman1: B_Contractor_APM_Base
	{
		displayName = "Marksman (HK417)";
		apm_insignia = "APM_RT_GAB";
		apm_loadout = '[["arifle_SPAR_03_khk_F","rhsusf_acc_aac_762sdn6_silencer","ACE_acc_pointer_green","optic_AMS",["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",20],[],"rhsusf_acc_harris_bipod"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_CarrierRig_Operator_OGA_OD",[["ACE_EntrenchingTool",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",12,20]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_Kestrel4500",1],["ACE_RangeCard",1]]],"VSM_Beanie_Black","rhs_googles_clear",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
		scope = 2;
		role = "Marksman";
		sensitivity = 3;
	};
	class B_Contractor_APM_Marksman2: B_Contractor_APM_Marksman1
	{
		displayName = "Marksman (SR-25)";
		apm_insignia = "APM_YT_GAC";
		apm_loadout = '[["rhs_weap_sr25_ec","rhsusf_acc_aac_762sdn6_silencer","ACE_acc_pointer_green","rhsusf_acc_premier_low",["rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",20],[],"rhsusf_acc_harris_bipod"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_CarrierRig_Breacher_OGA_OD",[["ACE_EntrenchingTool",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",9,20]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_Kestrel4500",1],["ACE_RangeCard",1]]],"VSM_Peltor_OD","VSM_Shemagh_Balaclava2_OD_Goggles",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TAC_SGS_SK"]]';
	};
	class B_Contractor_APM_AT1: B_Contractor_APM_Base
	{
		displayName = "AT Specialist (G36C)";
		apm_insignia = "APM_RT_GAB";
		apm_loadout = '[["rhs_weap_g36c","hlc_muzzle_556NATO_KAC","ACE_acc_pointer_green","rhsusf_acc_compm4",["rhssaf_30rnd_556x45_EPR_G36",30],[],""],["launch_MRAWS_green_F","","","",["MRAWS_HEAT_F",1],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_NVG_Wide",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["rhssaf_30rnd_556x45_EPR_G36",9,30]]],["VSM_OGA_OD_Backpack_Kitbag",[["ToolKit",1],["ACE_EntrenchingTool",1],["MRAWS_HEAT_F",3,1]]],"VSM_Black_OPS","rhs_googles_clear",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","Face_Bandana_RGR"]]';
		scope = 2;
		role = "MissileSpecialist";
		engineer = true;
	};
	class B_Contractor_APM_AT2: B_Contractor_APM_AT1
	{
		apm_insignia = "APM_YT_GAC";
		displayName = "AT Specialist (HK416)";
		apm_loadout = '[["rhs_weap_hk416d10","hlc_muzzle_556NATO_KAC","ACE_acc_pointer_green","SMA_eotech552",["rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",30],[],"rhsusf_acc_tdstubby_blk"],["launch_MRAWS_olive_F","","","",["MRAWS_HEAT_F",1],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_NVG_Wide",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["rhs_mag_30Rnd_556x45_M855A1_Stanag_Pull",7,30]]],["VSM_OGA_OD_Backpack_Kitbag",[["ToolKit",1],["ACE_EntrenchingTool",1]]],"VSM_Bowman_cap_Black","rhs_googles_clear",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","Face_Bandana_RGR"]]';
	};
	class B_Contractor_APM_AT3: B_Contractor_APM_AT1
	{
		apm_insignia = "APM_BT_GAC";
		displayName = "AT Specialist (AK-12U)";
		apm_loadout = '[["hlc_rifle_aku12","rhs_acc_dtk4short","","SMA_eotech552",["rhs_30Rnd_545x39_7N22_plum_AK",30],[],"rhs_acc_grip_ffg2"],["launch_MRAWS_green_F","","","",["MRAWS_HEAT_F",1],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_NVG_Wide",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["rhs_30Rnd_545x39_7N22_plum_AK",6,30]]],["VSM_OGA_OD_Backpack_Kitbag",[["ToolKit",1],["ACE_EntrenchingTool",1],["MRAWS_HEAT_F",3,1]]],"VSM_BackwardsHat_Peltor_US","VSM_Peltor_OD_glasses",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
	};
	class B_Contractor_APM_AR1: B_Contractor_APM_Base
	{
		apm_insignia = "APM_BT_GAC";
		displayName = "Autorifleman (SPW)";
		apm_loadout = '[["LMG_03_F","muzzle_snds_M","acc_pointer_IR","SMA_ELCAN_SPECTER_ARDRDS_4z",["200Rnd_556x45_Box_F",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_RAV_MG_OGA_OD",[["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["200Rnd_556x45_Box_Red_F",2,200]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_EntrenchingTool",1],["ACE_SpareBarrel",1,1],["200Rnd_556x45_Box_Tracer_Red_F",2,200]]],"H_HelmetSpecB_blk","VSM_Shemagh_Balaclava2_OD_Peltor_Goggles",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_US_ESS_Glasses_Cover"]]';
		scope = 2;
		role = "MachineGunner";
	};
	class B_Contractor_APM_AR2: B_Contractor_APM_AR1
	{
		apm_insignia = "APM_GT_GAC";
		displayName = "Autorifleman (M249)";
		apm_loadout = '[["rhs_weap_m249_light_S","hlc_muzzle_556NATO_KAC","acc_pointer_IR","SMA_eotech552",["rhsusf_200Rnd_556x45_mixed_soft_pouch",200],[],"rhsusf_acc_saw_lw_bipod"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_RAV_MG_OGA_OD",[["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["ACE_SpareBarrel",1,1],["rhsusf_200Rnd_556x45_mixed_soft_pouch",1,200]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_EntrenchingTool",1],["rhsusf_200Rnd_556x45_mixed_soft_pouch",3,200]]],"H_HelmetSpecB_blk","VSM_Shemagh_Balaclava2_OD",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_ESS_BLKBLK_NV"]]';
	};
	class B_Contractor_APM_AR3: B_Contractor_APM_AR1
	{
		apm_insignia = "APM_YT_GAC";
		displayName = "Autorifleman (Stoner LMG)";
		apm_loadout = '[["LMG_Mk200_black_F","muzzle_snds_H_MG_blk_F","acc_pointer_IR","optic_Hamr",["200Rnd_65x39_cased_Box_Tracer_Red",200],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_RAV_MG_OGA_OD",[["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["ACE_SpareBarrel",1,1],["200Rnd_65x39_cased_Box_Tracer_Red",3,200]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_EntrenchingTool",1],["200Rnd_65x39_cased_Box_Tracer_Red",1,200]]],"H_Cap_usblack","VSM_Peltor_OD_glasses",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
	};
	class B_Contractor_APM_MG1: B_Contractor_APM_AR1
	{
		apm_insignia = "APM_GT_GAB";
		displayName = "Gunner (Mk. 48)";
		apm_loadout = '[["hlc_lmg_mk48mod1","muzzle_snds_H_MG_blk_F","acc_pointer_IR","SMA_ELCAN_SPECTER_ARDRDS_4z",["150Rnd_762x51_Box",150],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_MG_OGA_OD",[["ACE_EntrenchingTool",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["150Rnd_762x51_Box",2,150]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_SpareBarrel",1,1],["150Rnd_762x51_Box",2,150]]],"H_HelmetSpecB_blk","VSM_Shemagh_OD",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","Face_Bandana_RGR"]]';
	};
	class B_Contractor_APM_MG2: B_Contractor_APM_MG1
	{
		apm_insignia = "APM_BT_GAC";
		displayName = "Gunner (LWMMG)";
		apm_loadout = '[["MMG_02_black_F","muzzle_snds_338_black","acc_pointer_IR","optic_Hamr",["130Rnd_338_Mag",130],[],"bipod_01_F_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_MG_OGA_OD",[["ACE_EntrenchingTool",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["130Rnd_338_Mag",1,130]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_SpareBarrel",1,1],["130Rnd_338_Mag",1,130]]],"H_HelmetSpecB_blk","VSM_Shemagh_Balaclava2_OD_Goggles",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_US_ESS_Glasses_Cover"]]';
	};
	class B_Contractor_APM_MG3: B_Contractor_APM_MG1
	{
		apm_insignia = "APM_RT_GAC";
		displayName = "Gunner (HK121)";
		apm_loadout = '[["MMG_01_tan_F","muzzle_snds_93mmg","acc_pointer_IR","optic_MRCO",["150Rnd_93x64_Mag",150],[],"bipod_01_F_blk"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_MG_OGA_OD",[["ACE_EntrenchingTool",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["150Rnd_93x64_Mag",1,150]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_SpareBarrel",1,1],["150Rnd_93x64_Mag",1,150]]],"H_HelmetSpecB_blk","VSM_Shemagh_Balaclava2_OD_Goggles",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_US_ESS_Glasses_Cover"]]';
	};
	class B_Contractor_APM_Grenadier1: B_Contractor_APM_Base
	{
		apm_insignia = "APM_BT_GAB";
		displayName = "Grenadier (HK416)";
		apm_loadout = '[["hlc_rifle_416D10_gl","hlc_muzzle_556NATO_KAC","rhsusf_acc_anpeq15side_bk","rhsusf_acc_su230",["rhs_mag_30Rnd_556x45_M855A1_PMAG",30],["1Rnd_HE_Grenade_shell",1],""],["rhs_weap_M136_hp","","","",[],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_OGA_OD_IOTV_2",[["ACE_NVG_Wide",1],["rhs_mag_30Rnd_556x45_M855A1_PMAG",7,30],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17]]],["VSM_OGA_OD_Backpack_Compact",[["1Rnd_HE_Grenade_shell",8,1],["1Rnd_Smoke_Grenade_shell",4,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["1Rnd_SmokeGreen_Grenade_shell",2,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["ACE_40mm_Flare_white",3,1],["ACE_40mm_Flare_ir",2,1]]],"VSM_Bowman_cap_Tan","milgp_f_face_shield_tactical_khk",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
		scope = 2;
		role = "Grenadier";
	};
	class B_Contractor_APM_Grenadier2: B_Contractor_APM_Grenadier1
	{
		apm_insignia = "APM_BT_GAB";
		displayName = "Grenadier (AK-12)";
		apm_loadout = '[["hlc_rifle_ak12GL","hlc_muzzle_545SUP_AK","ACE_acc_pointer_green","SMA_eotech552",["rhs_30Rnd_545x39_7N22_plum_AK",30],["hlc_VOG25_AK",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["AK_LBT_beltgprg",[["ACE_NVG_Wide",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["rhs_30Rnd_545x39_7N22_plum_AK",6,30],["rhs_GRD40_White",3,1],["rhs_GRD40_Green",4,1],["rhs_GRD40_Red",4,1],["hlc_VOG25_AK",4,1],["rhs_GDM40",3,1]]],["VSM_OGA_OD_Backpack_Compact",[["1Rnd_HE_Grenade_shell",2,1],["1Rnd_Smoke_Grenade_shell",4,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["1Rnd_SmokeGreen_Grenade_shell",2,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["ACE_40mm_Flare_white",3,1],["ACE_40mm_Flare_ir",2,1]]],"VSM_Beanie_Black","milgp_f_face_shield_tactical_BLK",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_EAR_NV"]]';
	};
	class B_Contractor_APM_Grenadier3: B_Contractor_APM_Grenadier1
	{
		apm_insignia = "APM_YT_GAB";
		displayName = "Grenadier (G3KA4)";
		apm_loadout = '[["HLC_Rifle_g3ka4_GL","rhsusf_acc_aac_762sdn6_silencer","","rhsusf_acc_su230a_mrds",["hlc_20rnd_762x51_b_G3",20],["1Rnd_HE_Grenade_shell",1],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_OGA_OD_IOTV_1",[["ACE_NVG_Wide",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["hlc_20rnd_762x51_b_G3",6,20]]],["VSM_OGA_OD_Backpack_Compact",[["1Rnd_HE_Grenade_shell",6,1],["1Rnd_Smoke_Grenade_shell",4,1],["1Rnd_SmokeRed_Grenade_shell",2,1],["1Rnd_SmokeGreen_Grenade_shell",2,1],["1Rnd_SmokeBlue_Grenade_shell",2,1],["ACE_40mm_Flare_white",3,1],["ACE_40mm_Flare_ir",2,1]]],"VSM_OGA_OD_OPS","WAINO_SMG_BK",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TAC_SG_SK"]]';
	};
	class B_Contractor_APM_Rifleman1: B_Contractor_APM_Base
	{
		apm_insignia = "APM_GT_GAB";
		displayName = "Rifleman (M4 Block II)";
		apm_loadout = '[["rhs_weap_m4a1_blockII_KAC","hlc_muzzle_556NATO_KAC","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_su230",["rhs_mag_30Rnd_556x45_M855A1_PMAG",30],[],"rhs_acc_grip_ffg2"],["rhs_weap_M136_hp","","","",[],[],""],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_operator_OGA_OD",[["ACE_NVG_Wide",1],["rhs_mag_30Rnd_556x45_M855A1_PMAG",7,30],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17]]],[],"VSM_Black_OPS","G_Bandanna_beast",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]';
		scope = 2;
		role = "Rifleman";
	};
	class B_Contractor_APM_Rifleman2: B_Contractor_APM_Rifleman1
	{
		apm_insignia = "APM_RT_GAC";
		displayName = "Rifleman (ACR)";
		apm_loadout = '[["hlc_rifle_ACR_SBR_black","hlc_muzzle_556NATO_KAC","rhsusf_acc_anpeq15side_bk","SMA_BARSKA",["rhs_mag_30Rnd_556x45_M855A1_PMAG",30],[],"rhsusf_acc_grip2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_breacher_OGA_OD",[["ACE_NVG_Wide",1],["rhs_mag_30Rnd_556x45_M855A1_PMAG",7,30],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17]]],[],"VSM_OD_spray_OPS","G_Bandanna_beast",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
	};
	class B_Contractor_APM_Rifleman3: B_Contractor_APM_Rifleman1
	{
		apm_insignia = "APM_YT_GAB";
		displayName = "Rifleman (AUGA3)";
		apm_loadout = '[["hlc_rifle_auga3_b","hlc_muzzle_556NATO_KAC","rhsusf_acc_anpeq15side_bk","SMA_AIMPOINT",["hlc_30Rnd_556x45_B_AUG",30],[],"rhsusf_acc_grip2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_breacher_OGA_OD",[["ACE_NVG_Wide",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["hlc_30Rnd_556x45_B_AUG",7,30]]],[],"VSM_Bowman_cap_Black","G_Bandanna_beast",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_EAR_NV"]]';
	};
	class B_Contractor_APM_Rifleman4: B_Contractor_APM_Rifleman1
	{
		apm_insignia = "APM_BT_GAB";
		displayName = "Rifleman (SCAR-H)";
		apm_loadout = '[["rhs_weap_SCARH_CQC","rhsusf_acc_aac_762sdn6_silencer","rhsusf_acc_M952V","rhsusf_acc_ACOG",["rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk",20],[],"rhsusf_acc_kac_grip"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_LBT6094_breacher_OGA_OD",[["ACE_NVG_Wide",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["rhs_mag_20Rnd_SCAR_762x51_mk316_special_bk",5,20]]],[],"VSM_Bowman_cap_Black","G_Bandanna_beast",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_EAR_NV"]]';
	};
	class B_Contractor_APM_RTO1: B_Contractor_APM_Base
	{
		apm_insignia = "APM_YT_GAB";
		displayName = "RTO (Alpha)";
		apm_loadout = '[["hlc_rifle_416D10_ptato","rhsusf_acc_nt4_black","ACE_acc_pointer_green","SMA_eotech552_3XDOWN",["hlc_30rnd_556x45_EPR_PMAG",30],[],""],[],["hlc_pistol_P226R_Combat","hlc_muzzle_Evo9","hlc_acc_DBALPL_FL","",["hlc_15Rnd_9x19_SD_P226",15],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_CableTie",2],["ACE_EarPlugs",1],["ACE_epinephrine",1],["ACE_morphine",3],["ACE_RangeCard",1],["ACE_splint",4],["ACE_tourniquet",4],["ACE_MapTools",1],["ACE_M26_Clacker",1],["ACE_IR_Strobe_Item",1],["ACE_Flashlight_XL50",1]]],["VSM_CarrierRig_Operator_OGA_OD",[["ACE_IR_Strobe_Item",2],["MiniGrenade",2,1],["SmokeShell",2,1],["hlc_15Rnd_9x19_SD_P226",3,15],["ACE_CTS9",2,1],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["SmokeShellOrange",2,1],["B_IR_Grenade",2,1],["hlc_30rnd_556x45_EPR_PMAG",8,30]]],["tfw_ilbe_whip_gr",[["ACE_elasticBandage",3],["ACE_morphine",2],["ACE_epinephrine",3],["ACE_adenosine",2],["ACE_EntrenchingTool",1]]],"VSM_OD_spray_OPS","VSM_Peltor_OD_glasses",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_G_NV"]]';
		scope = 2;
		role = "SpecialOperative";
	};
	class B_Contractor_APM_RTO2: B_Contractor_APM_RTO1
	{
		apm_insignia = "APM_YT_GAC";
		displayName = "RTO (Bravo)";
		apm_loadout = '[["hlc_rifle_416D10_ptato","rhsusf_acc_nt4_black","ACE_acc_pointer_green","SMA_eotech552_3XDOWN",["hlc_30rnd_556x45_EPR_PMAG",30],[],""],[],["hlc_pistol_P226R_Combat","hlc_muzzle_Evo9","hlc_acc_DBALPL_FL","",["hlc_15Rnd_9x19_SD_P226",15],[],""],["APM_CombatUniformTan",[["ACE_packingBandage",10],["ACE_CableTie",2],["ACE_EarPlugs",1],["ACE_epinephrine",1],["ACE_morphine",3],["ACE_RangeCard",1],["ACE_splint",4],["ACE_tourniquet",4],["ACE_MapTools",1],["ACE_M26_Clacker",1],["ACE_IR_Strobe_Item",1],["ACE_Flashlight_XL50",1]]],["VSM_OGA_OD_Vest_2",[["ACE_IR_Strobe_Item",2],["MiniGrenade",2,1],["SmokeShell",2,1],["hlc_15Rnd_9x19_SD_P226",3,15],["ACE_CTS9",2,1],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["SmokeShellOrange",2,1],["B_IR_Grenade",2,1],["hlc_30rnd_556x45_EPR_PMAG",8,30]]],["tfw_ilbe_whip_gr",[["ACE_elasticBandage",3],["ACE_morphine",2],["ACE_epinephrine",3],["ACE_adenosine",2],["ACE_EntrenchingTool",1]]],"milgp_h_cap_02_CB","milgp_f_face_shield_tactical_shemagh_RGR",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TAC_SG_SK"]]';
	};
	class B_Contractor_APM_EOD1: B_Contractor_APM_Base
	{
		apm_insignia = "APM_YT_GAB";
		displayName = "Combat Engineer (Alpha)";
		apm_loadout = '[["rhs_weap_m4a1_blockII_KAC","hlc_muzzle_556NATO_KAC","rhsusf_acc_anpeq15_bk_top","rhsusf_acc_su230",["rhs_mag_30Rnd_556x45_M855A1_PMAG",30],[],"rhs_acc_grip_ffg2"],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["VSM_OGA_OD_IOTV_2",[["ACE_NVG_Wide",1],["rhs_mag_30Rnd_556x45_M855A1_PMAG",7,30],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17]]],["VSM_OGA_OD_Backpack_Compact",[["ACE_DefusalKit",1],["MineDetector",1],["SatchelCharge_Remote_Mag",1,1],["DemoCharge_Remote_Mag",2,1]]],"VSM_Beanie_Black","",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_G_NV"]]';
		role = "Sapper";
		canDeactivateMines = 1;
		engineer = true;
		scope = 2;
	};
	class B_Contractor_APM_EOD2: B_Contractor_APM_EOD1
	{
		apm_insignia = "APM_YT_GAC";
		displayName = "Combat Engineer (Bravo)";
	};
	class B_Contractor_APM_EOD_Shield: B_Contractor_APM_EOD1
	{
		displayName = "EOD Specialist";
		apm_loadout = '[["arifle_MXC_Black_F","muzzle_snds_65_TI_blk_F","","optic_Holosight_blk_F",["30Rnd_65x39_caseless_black_mag",30],[],""],[],["rhsusf_weap_glock17g4","","","",["rhsusf_mag_17Rnd_9x19_JHP",17],[],""],["APM_CombatUniformTan_Rolled",[["ACE_packingBandage",10],["ACE_tourniquet",4],["ACE_morphine",3],["ACE_epinephrine",1],["ACE_MapTools",1],["ACE_CableTie",2],["ACE_EarPlugs",1],["ItemcTabHCam",1],["ACE_M26_Clacker",1],["ACE_splint",2],["ACE_Chemlight_HiGreen",2,1]]],["V_PlateCarrierGL_blk",[["ACE_NVG_Wide",1],["SmokeShell",2,1],["MiniGrenade",2,1],["rhsusf_mag_17Rnd_9x19_JHP",3,17],["30Rnd_65x39_caseless_black_mag",4,30]]],["VSM_OGA_OD_Backpack_Kitbag",[["ACE_DefusalKit",1],["MineDetector",1],["SatchelCharge_Remote_Mag",2,1],["DemoCharge_Remote_Mag",4,1]]],"VSM_Beanie_Black","",["ACE_Vector","","","",[],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]';
		editorSubcategory = "apm_contractor_logistics";
	};
	class B_Contractor_APM_TL_Shield: B_Contractor_APM_TL1
	{
		displayName = "Shield Team Leader";
		apm_loadout = '[["hlc_smg_mp5N_tac","","","",["hlc_30Rnd_9x19_GD_MP5",30],[],""],[],["RH_g17","","","",["RH_17Rnd_9x19_g17",17],[],""],["TRYK_shirts_DENIM_od",[["ACE_packingBandage",8],["ACE_bloodIV_250",2],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_DefusalKit",1],["ACE_IR_Strobe_Item",1],["ACE_M26_Clacker",1],["ACE_MapTools",1],["ACE_microDAGR",1],["ACE_morphine",1],["ACE_tourniquet",4],["ACE_splint",2],["ACE_epinephrine",1]]],["milgp_v_marciras_light_rgr",[["ACE_EntrenchingTool",1],["hlc_30Rnd_9x19_GD_MP5",2,30]]],["B_LegStrapBag_black_F",[["ToolKit",1]]],"milgp_h_cap_02_CB","",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]';
		editorSubcategory = "apm_contractor_logistics";
	};
	class B_Contractor_APM_Rifleman_Shield: B_Contractor_APM_Rifleman1
	{
		displayName = "Shield Operator";
		apm_loadout = '[["hlc_rifle_416D10_ptato","rhsusf_acc_nt4_black","","SMA_eotech552",["rhs_mag_30Rnd_556x45_Mk262_PMAG",30],[],""],[],["RH_g17","","","",["RH_17Rnd_9x19_g17",17],[],""],["TRYK_U_B_PCUGs_gry_R",[["ACE_packingBandage",8],["ACE_bloodIV_250",2],["ACE_CableTie",3],["ACE_EarPlugs",1],["ACE_DefusalKit",1],["ACE_IR_Strobe_Item",1],["ACE_M26_Clacker",1],["ACE_MapTools",1],["ACE_microDAGR",1],["ACE_morphine",1],["ACE_tourniquet",4],["ACE_splint",2],["ACE_epinephrine",1]]],["milgp_v_marciras_assaulter_belt_rgr",[["ACE_EntrenchingTool",1],["rhs_mag_30Rnd_556x45_Mk262_PMAG",6,30]]],["milgp_bp_Pointman_rgr",[]],"H_Cap_usblack","VSM_Peltor_OD_glasses",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemcTab","TFAR_anprc152","ItemCompass","ACE_Altimeter",""]]';
		editorSubcategory = "apm_contractor_logistics";
	};
	class B_Contractor_APM_LB_Base: B_Contractor_APM_Base
	{
		displayName = "Longbarrel Operator";
		cost = 100000;
        camouflage = .7;
        sensitivity = 3;
        threat[] = {.9, 0.65, 0.45};
		editorSubcategory = "apm_contractor_sniper";
	};
	class B_Contractor_APM_LB_TL1: B_Contractor_APM_LB_Base
	{
		displayName = "Element Leader (P90)";
		role = "SpecialOperative";
		attendant = 1;
		apm_loadout = '[["SMG_03C_TR_black","muzzle_snds_570","ACE_acc_pointer_green","optic_Holosight_smg_blk_F",["50Rnd_570x28_SMG_03",50],[],""],[],["hlc_pistol_P226R_Combat","hlc_muzzle_Evo9","hlc_acc_DBALPL_FL","",["hlc_15Rnd_9x19_SD_P226",15],[],""],["Project_BJC_Shirt_Cut_Cargo1",[["ACE_packingBandage",10],["ACE_CableTie",2],["ACE_EarPlugs",1],["ACE_epinephrine",1],["ACE_morphine",3],["ACE_RangeCard",1],["ACE_splint",4],["ACE_tourniquet",4],["ACE_MapTools",1],["ACE_M26_Clacker",1],["ACE_Kestrel4500",1],["ACE_IR_Strobe_Item",1],["ACE_Flashlight_XL50",1],["ACE_DefusalKit",1],["ACE_ATragMX",1],["TFAR_anprc152",1],["ACE_surgicalKit",1]]],["V_PlateCarrier1_blk",[["ACE_personalAidKit",1],["MiniGrenade",2,1],["SmokeShell",2,1],["hlc_15Rnd_9x19_SD_P226",3,15],["ACE_CTS9",2,1],["50Rnd_570x28_SMG_03",4,50]]],["tacs_Backpack_AssaultExpanded_Black",[["ACE_elasticBandage",20],["ACE_packingBandage",20],["ACE_morphine",6],["ACE_epinephrine",8],["ACE_adenosine",8],["ACE_splint",4],["ACE_tourniquet",4],["ACE_bloodIV",6],["ACE_EntrenchingTool",1],["AUR_Rappel_Gear",1],["AUR_Rappel_Rope_20",1]]],"VSM_Beanie_Black","WAINO_SMG_BK",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TAC_SGS"]]';
		scope = 2;
	};
	class B_Contractor_APM_LB_TL2: B_Contractor_APM_LB_TL1
	{
		displayName = "Element Leader (MP7)";
		apm_loadout = '[["rhsusf_weap_MP7A2","rhsusf_acc_rotex_mp7","ACE_acc_pointer_green","SMA_eotech552",["rhsusf_mag_40Rnd_46x30_JHP",40],[],"rhs_acc_grip_ffg2"],[],["hlc_pistol_P226R_Combat","hlc_muzzle_Evo9","hlc_acc_DBALPL_FL","",["hlc_15Rnd_9x19_SD_P226",15],[],""],["Project_BJC_Shirt_Cut_Cargo10",[["ACE_packingBandage",10],["ACE_CableTie",2],["ACE_EarPlugs",1],["ACE_epinephrine",1],["ACE_morphine",3],["ACE_RangeCard",1],["ACE_splint",4],["ACE_tourniquet",4],["ACE_MapTools",1],["ACE_M26_Clacker",1],["ACE_Kestrel4500",1],["ACE_IR_Strobe_Item",1],["ACE_Flashlight_XL50",1],["ACE_DefusalKit",1],["ACE_ATragMX",1],["TFAR_anprc152",1],["ACE_surgicalKit",1]]],["V_PlateCarrier2_blk",[["ACE_personalAidKit",1],["MiniGrenade",2,1],["SmokeShell",2,1],["hlc_15Rnd_9x19_SD_P226",3,15],["ACE_CTS9",2,1],["rhsusf_mag_40Rnd_46x30_JHP",5,40]]],["tacs_Backpack_AssaultExpanded_Black",[["ACE_elasticBandage",20],["ACE_packingBandage",20],["ACE_morphine",6],["ACE_epinephrine",8],["ACE_adenosine",8],["ACE_splint",4],["ACE_tourniquet",4],["ACE_bloodIV",6],["ACE_EntrenchingTool",1],["AUR_Rappel_Gear",1],["AUR_Rappel_Rope_20",1]]],"VSM_BackwardsHat_Peltor_black","WAINO_SMG_BK",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","Face_Bandana_Ghost"]]';
	};
	class B_Contractor_APM_LB_Sniper1: B_Contractor_APM_LB_Base
	{
		displayName = "Element Sniper (AWM)";
		sensitivity = 3.2;
		apm_loadout = '[["hlc_rifle_awmagnum_BL","","","rhsusf_acc_M8541_low",["hlc_5rnd_300WM_mk248_AWM",5],[],""],[],["hlc_pistol_P226R_Combat","hlc_muzzle_Evo9","hlc_acc_DBALPL_FL","",["hlc_15Rnd_9x19_SD_P226",15],[],""],["Project_BJC_PCU_Cargo6",[["ACE_packingBandage",10],["ACE_CableTie",2],["ACE_EarPlugs",1],["ACE_epinephrine",1],["ACE_morphine",3],["ACE_RangeCard",1],["ACE_splint",4],["ACE_tourniquet",4],["ACE_MapTools",1],["ACE_M26_Clacker",1],["ACE_Kestrel4500",1],["ACE_IR_Strobe_Item",1],["ACE_Flashlight_XL50",1],["ACE_DefusalKit",1],["ACE_ATragMX",1],["TFAR_anprc152",1],["ACE_surgicalKit",1]]],["dr_BLKfacp_op",[["ACE_personalAidKit",1],["ACE_EntrenchingTool",1],["MiniGrenade",2,1],["SmokeShell",2,1],["hlc_15Rnd_9x19_SD_P226",3,15],["ACE_CTS9",2,1],["hlc_5rnd_300WM_mk248_AWM",8,5]]],["TAC_BP_Butt_B2",[["ACE_packingBandage",10],["ACE_morphine",2],["ACE_epinephrine",4],["ACE_adenosine",4],["ACE_splint",2],["ACE_tourniquet",2],["AUR_Rappel_Gear",1],["AUR_Rappel_Rope_20",1],["hlc_5rnd_300WM_mk248_AWM",2,5]]],"H_Cap_usblack","rhs_googles_clear",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_TAN_NV"]]';
		editorSubcategory = "apm_contractor_sniper";
		scope = 2;
	};
	class B_Contractor_APM_LB_Sniper2: B_Contractor_APM_LB_Sniper1
	{
		displayName = "Element Sniper (GM6)";
		apm_loadout = '[["srifle_GM6_F","","","ACE_optic_LRPS_2D",["ACE_5Rnd_127x99_AMAX_Mag",5],[],""],[],["hlc_pistol_P226R_Combat","hlc_muzzle_Evo9","hlc_acc_DBALPL_FL","",["hlc_15Rnd_9x19_SD_P226",15],[],""],["Project_BJC_PCU_Cargo14",[["ACE_packingBandage",10],["ACE_CableTie",2],["ACE_EarPlugs",1],["ACE_epinephrine",1],["ACE_morphine",3],["ACE_RangeCard",1],["ACE_splint",4],["ACE_tourniquet",4],["ACE_MapTools",1],["ACE_M26_Clacker",1],["ACE_Kestrel4500",1],["ACE_IR_Strobe_Item",1],["ACE_Flashlight_XL50",1],["ACE_DefusalKit",1],["ACE_ATragMX",1],["TFAR_anprc152",1],["ACE_surgicalKit",1]]],["dr_BLKlbt_op",[["MiniGrenade",2,1],["SmokeShell",2,1],["hlc_15Rnd_9x19_SD_P226",3,15],["ACE_CTS9",2,1],["ACE_5Rnd_127x99_AMAX_Mag",8,5]]],["TAC_BP_Butt_B2",[["ACE_packingBandage",10],["ACE_morphine",2],["ACE_epinephrine",4],["ACE_adenosine",4],["ACE_splint",2],["ACE_tourniquet",2],["ACE_EntrenchingTool",1],["AUR_Rappel_Rope_20",1],["AUR_Rappel_Gear",1],["ACE_5Rnd_127x99_AMAX_Mag",1,5]]],"milgp_h_cap_backwards_01_CB","VSM_Peltor_OD_glasses",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","Face_Bandana_Skull"]]';
	};
	class B_Contractor_APM_LB_Spotter1: B_Contractor_APM_LB_Sniper1
	{
		displayName = "Element Spotter (SR-25)";
		apm_loadout = '[["rhs_weap_sr25","rhsusf_acc_SR25S","ACE_acc_pointer_green","rhsusf_acc_M8541",["rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",20],[],"rhsusf_acc_harris_bipod"],[],["hlc_pistol_P226R_Combat","hlc_muzzle_Evo9","hlc_acc_DBALPL_FL","",["hlc_15Rnd_9x19_SD_P226",15],[],""],["Project_BJC_Shirt_Cut_Cargo6",[["ACE_packingBandage",10],["ACE_CableTie",2],["ACE_EarPlugs",1],["ACE_epinephrine",1],["ACE_morphine",3],["ACE_RangeCard",1],["ACE_splint",4],["ACE_tourniquet",4],["ACE_MapTools",1],["ACE_M26_Clacker",1],["ACE_Kestrel4500",1],["ACE_IR_Strobe_Item",1],["ACE_Flashlight_XL50",1],["ACE_DefusalKit",1],["ACE_ATragMX",1],["TFAR_anprc152",1],["ACE_surgicalKit",1]]],["dr_BLKfacp_op",[["ACE_personalAidKit",1],["MiniGrenade",2,1],["SmokeShell",2,1],["hlc_15Rnd_9x19_SD_P226",3,15],["ACE_CTS9",2,1],["rhsusf_20Rnd_762x51_SR25_mk316_special_Mag",8,20]]],["TAC_BP_Butt_B2",[["ACE_packingBandage",10],["ACE_morphine",2],["ACE_epinephrine",4],["ACE_adenosine",4],["ACE_splint",2],["ACE_tourniquet",2],["ACE_EntrenchingTool",1],["AUR_Rappel_Gear",1],["AUR_Rappel_Rope_20",1]]],"H_Cap_blk","rhs_googles_black",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_G_NV"]]';
	};
	class B_Contractor_APM_LB_Spotter2: B_Contractor_APM_LB_Sniper1
	{
		displayName = "Element Spotter (Mk 14 EBR)";
		apm_loadout = '[["srifle_EBR_F","muzzle_snds_B","ACE_acc_pointer_green","optic_KHS_old",["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",20],[],"rhsusf_acc_harris_bipod"],[],["hlc_pistol_P226R_Combat","hlc_muzzle_Evo9","hlc_acc_DBALPL_FL","",["hlc_15Rnd_9x19_SD_P226",15],[],""],["Project_BJC_Shirt_Cut_Cargo14",[["ACE_packingBandage",10],["ACE_CableTie",2],["ACE_EarPlugs",1],["ACE_epinephrine",1],["ACE_morphine",3],["ACE_RangeCard",1],["ACE_splint",4],["ACE_tourniquet",4],["ACE_MapTools",1],["ACE_M26_Clacker",1],["ACE_Kestrel4500",1],["ACE_IR_Strobe_Item",1],["ACE_Flashlight_XL50",1],["ACE_DefusalKit",1],["ACE_ATragMX",1],["TFAR_anprc152",1],["ACE_surgicalKit",1]]],["BLK_MBSS_PACA",[["ACE_personalAidKit",1],["MiniGrenade",2,1],["SmokeShell",2,1],["hlc_15Rnd_9x19_SD_P226",3,15],["ACE_CTS9",2,1],["ACE_20Rnd_762x51_Mk316_Mod_0_Mag",8,20]]],["Black_Backpack_Compact",[["ACE_packingBandage",10],["ACE_morphine",2],["ACE_epinephrine",4],["ACE_adenosine",4],["ACE_splint",2],["ACE_tourniquet",2],["ACE_EntrenchingTool",1],["AUR_Rappel_Gear",1],["AUR_Rappel_Rope_20",1],["ACE_5Rnd_127x99_AMAX_Mag",2,5]]],"milgp_h_cap_01_CB","rhs_googles_clear",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_G_NV"]]';
	};
	class B_Contractor_APM_LB_RTO1: B_Contractor_APM_RTO1
	{
		displayName = "Element RTO (AK-15K)";
		apm_loadout = '[["arifle_AK12U_F","muzzle_snds_B","ACE_acc_pointer_green","optic_Arco_AK_blk_F",["30Rnd_762x39_AK12_Mag_F",30],[],""],[],["hlc_pistol_P226R_Combat","hlc_muzzle_Evo9","hlc_acc_DBALPL_FL","",["hlc_15Rnd_9x19_SD_P226",15],[],""],["TRYK_U_denim_hood_nc",[["ACE_packingBandage",10],["ACE_CableTie",2],["ACE_EarPlugs",1],["ACE_epinephrine",1],["ACE_morphine",3],["ACE_RangeCard",1],["ACE_splint",4],["ACE_tourniquet",4],["ACE_MapTools",1],["ACE_M26_Clacker",1],["ACE_Kestrel4500",1],["ACE_IR_Strobe_Item",1],["ACE_Flashlight_XL50",1]]],["PK_LBT_beltrg",[["ACE_personalAidKit",1],["ACE_IR_Strobe_Item",2],["MiniGrenade",2,1],["SmokeShell",2,1],["hlc_15Rnd_9x19_SD_P226",3,15],["ACE_CTS9",2,1],["30Rnd_762x39_AK12_Mag_F",8,30],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["SmokeShellOrange",2,1],["B_IR_Grenade",2,1]]],["tfw_ilbe_dd_gr",[["ACE_elasticBandage",20],["ACE_packingBandage",20],["ACE_morphine",6],["ACE_epinephrine",8],["ACE_adenosine",8],["ACE_splint",4],["ACE_tourniquet",4],["ACE_bloodIV",6],["ACE_EntrenchingTool",1],["AUR_Rappel_Gear",1],["AUR_Rappel_Rope_30",1]]],"milgp_h_cap_01_CB","VSM_Peltor_OD_glasses",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_Shemagh_MESH_NV"]]';
		editorSubcategory = "apm_contractor_sniper";
	};
	class B_Contractor_APM_LB_RTO2: B_Contractor_APM_RTO1
	{
		displayName = "Element RTO (Mk 18)";
		apm_loadout = '[["rhs_weap_mk18_KAC_bk","hlc_muzzle_556NATO_KAC","ACE_acc_pointer_green","optic_Hamr",["hlc_30rnd_556x45_SPR_PMAG",30],[],"rhs_acc_grip_ffg2"],[],["hlc_pistol_P226R_Combat","hlc_muzzle_Evo9","hlc_acc_DBALPL_FL","",["hlc_15Rnd_9x19_SD_P226",15],[],""],["Project_BJC_Shirt_Cargo1",[["ACE_packingBandage",10],["ACE_CableTie",2],["ACE_EarPlugs",1],["ACE_epinephrine",1],["ACE_morphine",3],["ACE_RangeCard",1],["ACE_splint",4],["ACE_tourniquet",4],["ACE_MapTools",1],["ACE_M26_Clacker",1],["ACE_Kestrel4500",1],["ACE_IR_Strobe_Item",1],["ACE_Flashlight_XL50",1]]],["dr_BLKfacp_br",[["ACE_personalAidKit",1],["ACE_IR_Strobe_Item",2],["MiniGrenade",2,1],["SmokeShell",2,1],["hlc_15Rnd_9x19_SD_P226",3,15],["ACE_CTS9",2,1],["SmokeShellRed",2,1],["SmokeShellGreen",2,1],["SmokeShellBlue",2,1],["SmokeShellOrange",2,1],["B_IR_Grenade",2,1],["hlc_30rnd_556x45_EPR_PMAG",8,30]]],["tfw_ilbe_dd_gr",[["ACE_elasticBandage",20],["ACE_packingBandage",20],["ACE_morphine",6],["ACE_epinephrine",8],["ACE_adenosine",8],["ACE_splint",4],["ACE_tourniquet",4],["ACE_bloodIV",6],["ACE_EntrenchingTool",1],["AUR_Rappel_Gear",1],["AUR_Rappel_Rope_30",1]]],"VSM_BackwardsHat_Peltor_US","milgp_f_face_shield_tactical_shemagh_BLK",["Laserdesignator_03","","","",["Laserbatteries",1],[],""],["ItemMap","ItemAndroid","TFAR_anprc152","ItemCompass","ACE_Altimeter","TRYK_TAC_EARMUFF"]]';
		editorSubcategory = "apm_contractor_sniper";
	};
#include "faction_apm_vehicles.hpp"
