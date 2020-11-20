// AI
add_civ_waypoints = compileFinal preprocessFileLineNumbers "scripts\server\ai\add_civ_waypoints.sqf";
add_defense_waypoints = compileFinal preprocessFileLineNumbers "scripts\server\ai\add_defense_waypoints.sqf";
battlegroup_ai = compileFinal preprocessFileLineNumbers "scripts\server\ai\battlegroup_ai.sqf";
building_defence_ai = compileFinal preprocessFileLineNumbers "scripts\server\ai\building_defence_ai.sqf";
patrol_ai = compileFinal preprocessFileLineNumbers "scripts\server\ai\patrol_ai.sqf";
prisonner_ai = compileFinal preprocessFileLineNumbers "scripts\server\ai\prisonner_ai.sqf";
troup_transport = compileFinal preprocessFileLineNumbers "scripts\server\ai\troup_transport.sqf";

// Battlegroup
spawn_air = compileFinal preprocessFileLineNumbers "scripts\server\battlegroup\spawn_air.sqf";
spawn_battlegroup = compileFinal preprocessFileLineNumbers "scripts\server\battlegroup\spawn_battlegroup.sqf";

// Game
check_victory_conditions = compileFinal preprocessFileLineNumbers "scripts\server\game\check_victory_conditions.sqf";

// Patrol
manage_one_civilian_patrol = compileFinal preprocessFileLineNumbers "scripts\server\patrols\manage_one_civilian_patrol.sqf";
manage_one_patrol = compileFinal preprocessFileLineNumbers "scripts\server\patrols\manage_one_patrol.sqf";
reinforcements_manager = compileFinal preprocessFileLineNumbers "scripts\server\patrols\reinforcements_manager.sqf";
send_paratroopers = compileFinal preprocessFileLineNumbers "scripts\server\patrols\send_paratroopers.sqf";

// Sector
attack_in_progress_fob = compileFinal preprocessFileLineNumbers "scripts\server\sector\attack_in_progress_fob.sqf";
attack_in_progress_sector = compileFinal preprocessFileLineNumbers "scripts\server\sector\attack_in_progress_sector.sqf";
ied_manager = compileFinal preprocessFileLineNumbers "scripts\server\sector\ied_manager.sqf";
manage_one_sector = compileFinal preprocessFileLineNumbers "scripts\server\sector\manage_one_sector.sqf";
wait_to_spawn_sector = compileFinal preprocessFileLineNumbers "scripts\server\sector\wait_to_spawn_sector.sqf";

// Globals
active_sectors = []; publicVariable "active_sectors";

execVM "scripts\server\base\startgame.sqf";
execVM "scripts\server\base\huron_manager.sqf";
execVM "scripts\server\base\startvehicle_spawn.sqf";
[] call KPLIB_fnc_createSuppModules;
execVM "scripts\server\battlegroup\counter_battlegroup.sqf";
execVM "scripts\server\battlegroup\random_battlegroups.sqf";
execVM "scripts\server\battlegroup\readiness_increase.sqf";
execVM "scripts\server\game\apply_default_permissions.sqf";
execVM "scripts\server\game\cleanup_vehicles.sqf";
execVM "scripts\server\game\manage_time.sqf";
execVM "scripts\server\game\manage_weather.sqf";
execVM "scripts\server\game\playtime.sqf";
execVM "scripts\server\game\save_manager.sqf";
execVM "scripts\server\game\spawn_radio_towers.sqf";
execVM "scripts\server\game\synchronise_vars.sqf";
execVM "scripts\server\game\synchronise_eco.sqf";
execVM "scripts\server\game\zeus_synchro.sqf";
execVM "scripts\server\offloading\show_fps.sqf";
execVM "scripts\server\patrols\civilian_patrols.sqf";
execVM "scripts\server\patrols\manage_patrols.sqf";
execVM "scripts\server\patrols\reinforcements_resetter.sqf";
if (KP_liberation_ailogistics) then {execVM "scripts\server\resources\manage_logistics.sqf";};
execVM "scripts\server\resources\manage_resources.sqf";
execVM "scripts\server\resources\recalculate_resources.sqf";
execVM "scripts\server\resources\recalculate_timer.sqf";
execVM "scripts\server\resources\recalculate_timer_sector.sqf";
execVM "scripts\server\resources\unit_cap.sqf";
execVM "scripts\server\sector\lose_sectors.sqf";

KPLIB_fsm_sectorMonitor = [] call KPLIB_fnc_sectorMonitor;
if (KP_liberation_high_command) then {KPLIB_fsm_highcommand = [] call KPLIB_fnc_highcommand;};

// Select FOB templates
switch (KP_liberation_preset_opfor) do {
    case 1: {
        KPLIB_fob_templates = [
            "scripts\fob_templates\apex\template1.sqf",
            "scripts\fob_templates\apex\template2.sqf",
            "scripts\fob_templates\apex\template3.sqf",
            "scripts\fob_templates\apex\template4.sqf",
            "scripts\fob_templates\apex\template5.sqf"
        ];
    };
    case 12: {
        KPLIB_fob_templates = [
            "scripts\fob_templates\unsung\template1.sqf",
            "scripts\fob_templates\unsung\template2.sqf",
            "scripts\fob_templates\unsung\template3.sqf",
            "scripts\fob_templates\unsung\template4.sqf",
            "scripts\fob_templates\unsung\template5.sqf"
        ];
    };
    default {
        KPLIB_fob_templates = [
            "scripts\fob_templates\default\template1.sqf",
            "scripts\fob_templates\default\template2.sqf",
            "scripts\fob_templates\default\template3.sqf",
            "scripts\fob_templates\default\template4.sqf",
            "scripts\fob_templates\default\template5.sqf",
            "scripts\fob_templates\default\template6.sqf",
            "scripts\fob_templates\default\template7.sqf",
            "scripts\fob_templates\default\template8.sqf",
            "scripts\fob_templates\default\template9.sqf",
            "scripts\fob_templates\default\template10.sqf"
        ];
    };
};

// Civil Reputation
execVM "scripts\server\civrep\init_module.sqf";

// Civil Informant
execVM "scripts\server\civinformant\init_module.sqf";

// Asymmetric Threats
execVM "scripts\server\asymmetric\init_module.sqf";

// Groupcheck for deletion when empty
execVM "scripts\server\offloading\group_diag.sqf";

{
    if ((_x != player) && (_x distance (markerPos GRLIB_respawn_marker) < 200 )) then {
        deleteVehicle _x;
    };
} forEach allUnits;

// Server Restart Script from K4s0
if (KP_liberation_restart > 0) then {
    execVM "scripts\server\game\server_restart.sqf";
};

if (isServer && hasInterface) then {
	est_db = "extDB3" callExtension "9:ADD_DATABASE:LocalAPMNew";
	if ((call compile est_db) select 0 == 0) exitWith {endMission "DBfail"};
	est_db_prot = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:LocalAPMNew:SQL_CUSTOM:apm:sql_APM_New.ini";
	est_db_sql = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:LocalAPMNew:SQL:SQL";

};

if (isDedicated && !hasInterface) then {
	est_db = "extDB3" callExtension "9:ADD_DATABASE:DedicatedAPMNew";
	if ((call compile est_db) select 0 == 0) exitWith {endMission "DBfail"};
	est_db_prot = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:DedicatedAPMNew:SQL_CUSTOM:apm:sql_APM_New.ini";
	est_db_sql = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:DedicatedAPMNew:SQL:SQL";

};

APM_Debug_level = ["apm_debugger", 0] call bis_fnc_getParamValue;
publicVariable "APM_Debug_level";
//Establish DB Functions
db_getPlayerData = compile preprocessFileLineNumbers "scripts\server\fn_getPlayerData.sqf";
db_banPlayer = compile preprocessFileLineNumbers "scripts\server\fn_banPlayer.sqf";
db_updateVehShop = compile preprocessFileLineNumbers "scripts\server\fn_updateVehShop.sqf";

//Establish additional functions
fnc_save_all_players = compile preprocessFileLineNumbers "scripts\server\fn_restart_server.sqf";
fnc_save_world = compile preprocessFileLineNumbers "scripts\server\fn_save_world.sqf";
fnc_load_world = compile preprocessFileLineNumbers "scripts\server\fn_load_world.sqf";
fob_truck_init = compile preprocessFileLineNumbers "scripts\client\fob_system\fob_truck_init.sqf";
[] call compile preprocessFileLineNumbers "scripts\client\fob_system\supply\init.sqf";

//Handle player disconnect
addMissionEventHandler ["HandleDisconnect", {
	params ["_unit", "_id", "_uid", "_name"];
	_ready = _unit getVariable ["APM_Ready", false];
	if !(_ready) exitWith {diag_log format ["%1 left before data returned.", _name]};
	_loadout = getUnitLoadout _unit;
	_result = "extDB3" callExtension format ["0:SQL:UPDATE users SET loadout = %1 WHERE uid = %2",str str _loadout, str _uid];

	Diag_log format ["%1 just disconnected. Result: %2", _name, _result];
	diag_log str _this;
	_unit spawn {
		sleep 2;
		deleteVehicle _this;
	};
	true
}];

[] spawn db_updateVehShop;
[] execVM "scripts\server\zeus_chat_init.sqf";

//Get Real time and apply
_time = "real_date" callExtension "EST";
setDate call compile _time;

//SERVER admin password
APM_Serverpass = "peterbuilt12";
publicVariable "APM_Serverpass";

//Save/load world options
APM_Hidden_Terrain = [];
_param = ["load_world", 1] call bis_fnc_getParamValue;
if (_param == 1) then {
	[] spawn fnc_load_world;
};
_param = ["save_interval", 15] call bis_fnc_getParamValue;
if (_param > 0) then {
	[fnc_save_world, [_param], _param * 60] call CBA_fnc_waitAndExecute;
};
addMissionEventHandler ["HandleDisconnect",
{
  params ["_unit", "_id", "_uid", "_name"];
	if (_unit in [HC1, HC2, HC3]) exitWith
	{
		private _marker = format ["fpsmarker%1",vehicleVarName _unit];
		deleteMarker _marker;
	};
}];
