class I_Mayhem_Offroad: I_G_Offroad_01_F
{
	faction="I_faction_MayhemPMC";
	textureList[] = {"Green",1};
	crew="I_Contractor_Mayhem_Rifleman1";
	animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideBumper1",1,"HideBumper2",0,"HideBackpacks",0,"HideConstruction",0,"HideDoor3",0};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
		"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa"
	};
};
class I_Mayhem_Offroad_M2: I_G_Offroad_01_armed_F
{
	faction="I_faction_MayhemPMC";
	textureList[] = {"Green",1};
	crew="I_Contractor_Mayhem_AR1";
	animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideBumper1",1,"HideBumper2",0,"HideBackpacks",0,"HideConstruction",0,"HideDoor3",0,"Hide_Shield",0,"Hide_Rail",0};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
		"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa"
	};
};
class I_Mayhem_Offroad_AT: I_G_Offroad_01_AT_F
{
	faction="I_faction_MayhemPMC";
	textureList[] = {"Green",1};
	crew="I_Contractor_Mayhem_AT1";
	animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideBumper1",1,"HideBumper2",0,"HideBackpacks",0,"HideConstruction",0,"HideDoor3",0};
	hiddenSelectionsTextures[] =
	{
		"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa",
		"\a3\Soft_F_Enoch\Offroad_01\Data\offroad_01_ext_grn_CO.paa"
	};
};
class I_Mayhem_TIGR: rhs_tigr_m_vdv
{
	faction="I_faction_MayhemPMC";
	side = 2;
	crew="I_Contractor_Mayhem_AR2";
	displayName = "GAZ Tigr (Unarmed)";
	rhs_decalParameters[] = {};
	editorSubcategory = "EdSubcat_Cars";
	vehicleClass = "Car";
	class Turrets: Turrets
	{
		class CargoTurret_01: CargoTurret_01
		{
			dontCreateAi=1;
			gunnerType = "I_Contractor_Mayhem_AR1";
		};
	};
};
class I_Mayhem_TIGR_Armed: rhs_tigr_sts_vdv
{
	faction="I_faction_MayhemPMC";
	side = 2;
	crew="I_Contractor_Mayhem_TL2";
	rhs_decalParameters[] = {};
	displayName = "GAZ Tigr (STS)";
	editorSubcategory = "EdSubcat_Cars";
	vehicleClass = "Car";
	class Turrets: Turrets
	{
		class MainTurret: MainTurret
		{
			gunnerType = "I_Contractor_Mayhem_AT1";
		};
		class AGS_Turret: AGS_Turret
		{
			gunnerType = "I_Contractor_Mayhem_AT1";
		};
	};
};
class I_Mayhem_HEMMT: B_Truck_01_transport_F
{
	faction="I_faction_MayhemPMC";
	side = 2;
	crew="I_Contractor_Mayhem_Rifleman1";
};
class I_Mayhem_HEMMT_Covered: B_Truck_01_covered_F
{
	faction="I_faction_MayhemPMC";
	side = 2;
	crew="I_Contractor_Mayhem_Rifleman1";
};
class I_Mayhem_HEMMT_Ammo: B_Truck_01_ammo_F
{
	faction="I_faction_MayhemPMC";
	side = 2;
	crew="I_Contractor_Mayhem_Rifleman1";
};
class I_Mayhem_HEMMT_Fuel: B_Truck_01_fuel_F
{
	faction="I_faction_MayhemPMC";
	side = 2;
	crew="I_Contractor_Mayhem_Rifleman1";
};
class I_Mayhem_HEMMT_Box: B_Truck_01_box_F
{
	faction="I_faction_MayhemPMC";
	side = 2;
	crew="I_Contractor_Mayhem_Rifleman1";
};
class I_Mayhem_FV510: I_APC_tracked_03_cannon_F
{
	faction="I_faction_MayhemPMC";
	crew="I_Contractor_Mayhem_Rifleman2";
	textureList[] = {"OliveGreen",1};
	animationList[] = {"ShowSLATHull",1,"ShowTools",1};
	hiddenSelectionsTextures[] =
	{
		"x\APM\addons\Vehicles\data\APC_Tracked_03\APC_Tracked_03_Ext_olive_CO.paa",
		"x\APM\addons\Vehicles\data\APC_Tracked_03\APC_Tracked_03_Ext2_olive_CO.paa",
		"a3\Armor_F\Data\camonet_NATO_Green_CO.paa",
		"\A3\Armor_F\Data\cage_olive_CO.paa"
	};
};
class I_Mayhem_Merkava: B_MBT_01_TUSK_F
{
	faction="I_faction_MayhemPMC";
	crew = "I_Contractor_Mayhem_Rifleman1";
	side = 2;
	textureList[] = {"Olive",1};
	hiddenSelectionsTextures[] =
	{
		"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa",
		"A3\Armor_F_Exp\MBT_01\data\MBT_01_tow_olive_CO.paa",
		"A3\Armor_F_Exp\MBT_01\data\mbt_addons_olive_CO.paa",
		"a3\Armor_F\Data\camonet_NATO_Green_CO.paa"
	};
};
class I_Mayhem_M2A3: RHS_M2A3_BUSKIII_wd
{
	faction="I_faction_MayhemPMC";
	crew = "I_Contractor_Mayhem_Rifleman1";
	side = 2;
	textureList[] = {"Olive",1};
	editorSubcategory = "EdSubcat_APCs";
	vehicleClass = "Armored";
	hiddenSelectionsTextures[] =
	 {
		 "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_base_co.paa",
		 "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\m6_a3_co.paa",
		 "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\ultralp_co.paa",
		 "\rhsusf\addons\rhsusf_a2port_armor\m2a2_bradley\data\woodland\BUSKIII_co.paa",
		 "\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_wd_co.paa"
	 };
};
class I_Mayhem_M6A2: RHS_M6_wd
{
	faction="I_faction_MayhemPMC";
	crew = "I_Contractor_Mayhem_Rifleman1";
	side = 2;
	editorSubcategory = "EdSubcat_APCs";
	vehicleClass = "Armored";
};
class I_Mayhem_MH6M: RHS_MELB_MH6M
{
	faction="I_faction_MayhemPMC";
	crew = "I_Contractor_Mayhem_Pilot";
	side = 2;
	editorSubcategory = "EdSubcat_Helicopters";
	vehicleClass = "Air";
};
class I_Mayhem_AH6M: RHS_MELB_AH6M
{
	faction="I_faction_MayhemPMC";
	crew = "I_Contractor_Mayhem_Pilot";
	side = 2;
	editorSubcategory = "EdSubcat_Helicopters";
	vehicleClass = "Air";
};
class I_Mayhem_AH64D: RHS_AH64D
{
	author = "Crowmedic";
	side = 2;
	faction = "I_faction_MayhemPMC";
	crew = "I_Contractor_Mayhem_Pilot";
	vehicleClass = "Air";
	editorSubcategory = "EdSubcat_Helicopters";
};
class I_Mayhem_CH47F: RHS_CH_47F
{
	author = "Crowmedic";
	side = 2;
	faction = "I_faction_MayhemPMC";
	crew = "I_Contractor_Mayhem_Pilot";
	vehicleClass = "Air";
	editorSubcategory = "EdSubcat_Helicopters";
};
class I_Mayhem_UH60M: RHS_UH60M
{
	author = "Crowmedic";
	side = 2;
	faction = "I_faction_MayhemPMC";
	crew = "I_Contractor_Mayhem_Pilot";
	vehicleClass = "Air";
	editorSubcategory = "EdSubcat_Helicopters";
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret
		{
			gunnerType = "I_Contractor_Mayhem_Pilot";
		};
		class MainTurret: MainTurret
		{
			gunnerType = "I_Contractor_Mayhem_Pilot";
		};
		class RightDoorGun: RightDoorGun
		{
			gunnerType = "I_Contractor_Mayhem_Pilot";
		};
	};
};
class I_Mayhem_A10D: B_Plane_CAS_01_dynamicLoadout_F
{
  side = 2;
  faction = "I_faction_MayhemPMC";
  crew = "I_Contractor_Mayhem_Pilot";
};
class I_Mayhem_FA181: B_Plane_Fighter_01_F
{
	side = 2;
	faction = "I_faction_MayhemPMC";
	crew = "I_Contractor_Mayhem_Pilot";
};
