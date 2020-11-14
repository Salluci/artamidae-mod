//Vehicles
class B_APM_DAGOR: B_LSV_01_unarmed_F
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman3";
	textureList[]={"tacs_black",1};
};
class B_APM_DAGOR_XM312: B_LSV_01_armed_F
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_TL2";
	textureList[]={"tacs_black",1};
	class Turrets: Turrets
	{
		class TopTurret: TopTurret
		{
			gunnerType = "B_Contractor_APM_AR1";
		};
		class CodRiverTurret: CodRiverTurret
		{
			gunnerType = "B_Contractor_APM_Grenadier1";
		};
		class CargoTurret_02: CargoTurret_02 {};
		class CargoTurret_03: CargoTurret_03 {};
	};
};
class B_APM_DAGOR_Light: B_CTRG_LSV_01_light_F
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman1";
	textureList[]={"tacs_black",1};
};
class B_APM_DAGOR_Titan: B_LSV_01_AT_F
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_TL1";
	textureList[]={"tacs_black",1};
	class Turrets: Turrets
	{
		class TopTurret: TopTurret
		{
			gunnerType = "B_Contractor_APM_Marksman1";
		};
		class CodRiverTurret: CodRiverTurret
		{
			gunnerType = "B_Contractor_APM_Rifleman2";
		};
		class CargoTurret_02: CargoTurret_02 {};
		class CargoTurret_03: CargoTurret_03 {};
	};
};
class B_APM_HMMWV: rhsusf_m1025_w
{
	author = "Crowmedic";
	scope = 2;
	displayName = "HMMWV (Unarmed)";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Grenadier1";
};
class B_APM_HMMWV_M2: rhsusf_m1025_w_m2
{
	author = "Crowmedic";
	scope = 2;
	displayName = "HMMWV (M2)";
	side = 1;
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman1";
	textureList[] = {"Black",1};
};
class B_APM_HMMWV_MK19: rhsusf_m1025_w_mk19
{
	author = "Crowmedic";
	scope = 2;
	scopeCurator = 2;
	displayName = "HMMWV (Mk 19)";
	side = 1;
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman1";
};
class B_APM_HEMTT_FOB: B_Truck_01_box_F
{
	author = "Crowmedic";
	displayName = "FOB Truck";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman1";
	editorSubcategory = "apm_generic_fob";
	vehicleClass = "apm_class_generic_FOB";
	class EventHandlers: DefaultEventHandlers
	{
		init = "_this call fob_truck_init; [_this select 0] call apm_arsenal_fnc_initBoxResupply;";
	};
};
class B_APM_BadgerIFV: B_APC_Wheeled_01_cannon_F
{
	author = "Crowmedic";
	crew = "B_Contractor_APM_Rifleman2";
	faction = "B_faction_APM";
	textureList[] = {"Charcoal",1};
};
class B_APM_Rooikat: B_AFV_Wheeled_01_Cannon_F
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman1";
	textureList[] = {"Charcoal",1};
};
class B_APM_Rooikat_up: B_AFV_Wheeled_01_up_cannon_F
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman1";
	textureList[] = {"Charcoal",1};
};
class B_APM_MH6M: RHS_MELB_MH6M
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	scope = 2;
	crew = "B_Contractor_APM_Rifleman1";
	textureList[] = {"APM",1};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret
		{
			gunnerType = "B_Contractor_APM_Rifleman1";
		};
		class CargoTurret_03: CargoTurret_03 {};
		class CargoTurret_04: CargoTurret_04 {};
		class CargoTurret_05: CargoTurret_05 {};
		class CargoTurret_06: CargoTurret_06 {};
		class CargoTurret_07: CargoTurret_07 {};
		class CargoTurret_08: CargoTurret_08 {};
	};
};
class B_APM_AH6M: RHS_MELB_AH6M
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	scope = 2;
	crew = "B_Contractor_APM_Rifleman1";
	textureList[] = {"APM",1};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret
		{
			gunnerType = "B_Contractor_APM_Rifleman1";
		};
	};
};
class B_APM_UH60M: RHS_UH60M
{
	author = "Crowmedic";
	faction = "B_faction_APM";
	crew = "B_Contractor_APM_Rifleman2";
	vehicleClass = "Air";
	textureList[] = {"APM",1};
	class Turrets: Turrets
	{
		class CopilotTurret: CopilotTurret
		{
			gunnerType = "B_Contractor_APM_Rifleman1";
		};
		class MainTurret: MainTurret
		{
			gunnerType = "B_Contractor_APM_TL1";
		};
		class RightDoorGun: RightDoorGun
		{
			gunnerType = "B_Contractor_APM_Medic1";
		};
		class CargoTurret_01: CargoTurret_01 {};
		class CargoTurret_02: CargoTurret_02 {};
		class CargoTurret_03: CargoTurret_03 {};
		class CargoTurret_04: CargoTurret_04 {};
	};
};
class B_APM_CH47F: RHS_CH_47F
{
	crew = "B_Contractor_APM_Rifleman2";
	faction = "B_faction_APM";
	vehicleClass = "Air";
	textureList[] = {"APM",1};
};
class B_APM_CH53E: rhsusf_CH53E_USMC
{
	crew = "B_Contractor_APM_Rifleman2";
	faction = "B_faction_APM";
	vehicleClass = "Air";
	textureList[] = {"APM",1};
};
class B_APM_CH53E_GAU21: rhsusf_CH53E_USMC_GAU21
{
	crew = "B_Contractor_APM_Rifleman2";
	faction = "B_faction_APM";
	vehicleClass = "Air";
	textureList[] = {"APM",1};
	class Turrets: Turrets
	{
		class GAU21: GAU21
		{
			gunnerType = "B_Contractor_APM_AR1";
		};
	};
};
class B_APM_Leopard2: I_MBT_03_cannon_F
{
  side = 1;
  crew = "B_Contractor_APM_Rifleman2";
  faction = "B_faction_APM";
	textureList[] = {"Charcoal",1};
};
class B_APM_Blackfish_infantry: B_T_VTOL_01_infantry_F
{
  author = "Crowmedic";
  faction = "B_faction_APM";
  crew = "B_Contractor_APM_Rifleman1";
  textureList[] = {"Black", 1};
};
class B_APM_Blackfish_Vehicle: B_T_VTOL_01_vehicle_F
{
  author = "Crowmedic";
  faction = "B_faction_APM";
  crew = "B_Contractor_APM_Rifleman2";
	textureList[] = {"Black", 1};
};
class B_APM_Blackfish_Armed: B_T_VTOL_01_armed_F
  {
  author = "Crowmedic";
  faction = "B_faction_APM";
  crew = "B_Contractor_APM_Rifleman1";
	textureList[] = {"Black", 1};
};
