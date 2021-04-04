class cfgVehicles
{
	class CargoNet_01_box_F;
	class APM_large_box: CargoNet_01_box_F
	{
		maximumLoad=999999;
		displayName="Cargo Net (Very Large)";
		ace_cargo_size = 2;
		ace_cargo_space = 6;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines {};
	};
	class Box_EAF_Wps_F;
	class APM_large_crate: Box_EAF_Wps_F
	{
		maximumLoad=999999;
		displayName="[APM] Storage Box";
		ace_cargo_size = 2;
		ace_cargo_space = 6;
		class TransportItems {};
		class TransportWeapons {};
		class TransportMagazines {};
	};
	class Man;
  class CAManBase: Man
	{
		class ACE_Actions
		{
			class APM_knockout
			{
				displayName = "Punch";
				condition = "[APM_canPunch_AI, APM_canPunch_Player] select (isPlayer _target)";
				icon = "x\APM\addons\Misc\Data\UI\knock.paa";
				statement = "[_player, _target] spawn apm_knockout_fnc_punchHead";
				distance = 4.5;
				selection = "head";
			};
			class ACE_MainActions
			{
				class APM_knockoutPassenger
				{
					displayName = "Punch Passenger";
					icon = "x\APM\addons\Misc\Data\UI\knock.paa";
					condition = "(isNull (objectParent _target)) && {[APM_canPunch_AI, APM_canPunch_Player] select (isPlayer _target)}";
					statement = "[_player, _target] spawn apm_knockout_fnc_punchHead";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_TeamManagement
			{
				class fare_GN_RenameGroup
				{
					displayName = "Rename Group";
					condition = "FARE_GN_ENABLED && ((leader group _player) isEqualTo _player)";
					statement = "[_player] call fare_fnc_enterGroupName";
					icon = "\z\ace\addons\interaction\UI\dot_ca.paa";
				};
			};
		};
	};
	class Module_F;
	class APM_moduleBase: Module_F
	{
		author = "LinkIsParking";
		category = "APM_Modules";
		function = "";
		scope = 1;
		scopeCurator = 2;
		class EventHandlers
		{
			init = "_this call zen_modules_fnc_initModule";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class APM_moduleAddAPMArsenal: APM_moduleBase
	{
		curatorCanAttach = 1;
		displayName = "Add APM Arsenal";
		function = "apm_modules_fnc_moduleAddApmArsenal";
		icon = "\a3\ui_f\data\logos\a_64_ca.paa";
	};
	class APM_moduleAddResupplyArsenal: APM_moduleBase
	{
		curatorCanAttach = 1;
		displayName = "Add Resupply Arsenal";
		function = "apm_modules_fnc_moduleAddResupplyArsenal";
		icon = "\a3\ui_f\data\logos\a_64_ca.paa";
	};
	class APM_moduleAC130: APM_moduleBase
	{
		curatorCanAttach = 1;
		displayName = "Make AC130";
		function = "apm_modules_fnc_moduleAC130";
		icon = "\a3\Modules_F_Curator\Data\portraitCASGun_ca.paa";
	};
	class APM_moduleDebugMedical: APM_moduleBase
	{
		curatorCanAttach = 1;
		displayName = "Show Medical Debug Monitor";
		function = "apm_modules_fnc_moduleDebugMedical";
		icon = "\z\ace\addons\medical_gui\ui\cross.paa";
	};
};
