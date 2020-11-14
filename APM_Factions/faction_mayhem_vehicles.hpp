class I_Mayhem_Offroad: I_G_Offroad_01_F
{
	faction="I_faction_MayhemPMC";
	textureList[] = {"Green",1};
	crew="I_Contractor_Mayhem_Rifleman1";
	animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideBumper1",1,"HideBumper2",0,"HideBackpacks",0,"HideConstruction",0,"HideDoor3",0};
};
class I_Mayhem_Offroad_M2: I_G_Offroad_01_armed_F
{
	faction="I_faction_MayhemPMC";
	textureList[] = {"Green",1};
	crew="I_Contractor_Mayhem_AR1";
	animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideBumper1",1,"HideBumper2",0,"HideBackpacks",0,"HideConstruction",0,"HideDoor3",0,"Hide_Shield",0,"Hide_Rail",0};
};
class I_Mayhem_Offroad_AT: I_G_Offroad_01_AT_F
{
	faction="I_faction_MayhemPMC";
	textureList[] = {"Green",1};
	crew="I_Contractor_Mayhem_AT1";
	animationList[] = {"HideDoor1",0,"HideDoor2",0,"HideBumper1",1,"HideBumper2",0,"HideBackpacks",0,"HideConstruction",0,"HideDoor3",0};
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
class I_Mayhem_AH64D: RHS_AH64D
{
	author = "Crowmedic";
	side = 2;
	faction = "I_faction_MayhemPMC";
	crew = "I_Contractor_Mayhem_Pilot";
	vehicleClass = "Air";
	editorSubcategory = "EdSubcat_Helicopters";
};
class I_Mayhem_FV510: I_APC_tracked_03_cannon_F
{
	faction="I_faction_MayhemPMC";
	crew="I_Contractor_Mayhem_Rifleman2";
	textureList[] = {"OliveGreen",1};
	animationList[] = {"ShowSLATHull",0.5,"ShowTools",1};
};
class I_Mayhem_Merkava: B_MBT_01_TUSK_F
{
	faction="I_faction_MayhemPMC";
	crew = "I_Contractor_Mayhem_AT1";
	side = 2;
	textureList[] = {"Olive",1};
};
class I_Mayhem_M2A3: RHS_M2A3_BUSKIII_wd
{
	faction="I_faction_MayhemPMC";
	crew = "I_Contractor_Mayhem_AT1";
	side = 2;
	textureList[] = {"Olive",1};
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
