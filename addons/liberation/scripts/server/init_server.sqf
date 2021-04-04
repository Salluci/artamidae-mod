// AI
add_civ_waypoints = compileScript ["scripts\server\ai\add_civ_waypoints.sqf"];
add_defense_waypoints = compileScript ["scripts\server\ai\add_defense_waypoints.sqf"];
battlegroup_ai = compileScript ["scripts\server\ai\battlegroup_ai.sqf"];
building_defence_ai = compileScript ["scripts\server\ai\building_defence_ai.sqf"];
patrol_ai = compileScript ["scripts\server\ai\patrol_ai.sqf"];
prisonner_ai = compileScript ["scripts\server\ai\prisonner_ai.sqf"];
troup_transport = compileScript ["scripts\server\ai\troup_transport.sqf"];

// Battlegroup
spawn_air = compileScript ["scripts\server\battlegroup\spawn_air.sqf"];
spawn_battlegroup = compileScript ["scripts\server\battlegroup\spawn_battlegroup.sqf"];

// Game
check_victory_conditions = compileScript ["scripts\server\game\check_victory_conditions.sqf"];

// Patrol
manage_one_civilian_patrol = compileScript ["scripts\server\patrols\manage_one_civilian_patrol.sqf"];
manage_one_patrol = compileScript ["scripts\server\patrols\manage_one_patrol.sqf"];
reinforcements_manager = compileScript ["scripts\server\patrols\reinforcements_manager.sqf"];
send_paratroopers = compileScript ["scripts\server\patrols\send_paratroopers.sqf"];

// Secondary objectives
fob_hunting = compileScript ["scripts\server\secondary\fob_hunting.sqf"];
convoy_hijack = compileScript ["scripts\server\secondary\convoy_hijack.sqf"];
search_and_rescue = compileScript ["scripts\server\secondary\search_and_rescue.sqf"];

// Sector
attack_in_progress_fob = compileScript ["scripts\server\sector\attack_in_progress_fob.sqf"];
attack_in_progress_sector = compileScript ["scripts\server\sector\attack_in_progress_sector.sqf"];
ied_manager = compileScript ["scripts\server\sector\ied_manager.sqf"];
manage_one_sector = compileScript ["scripts\server\sector\manage_one_sector.sqf"];
wait_to_spawn_sector = compileScript ["scripts\server\sector\wait_to_spawn_sector.sqf"];

// Globals
active_sectors = []; publicVariable "active_sectors";

[] spawn compileScript ["scripts\server\base\startgame.sqf"];
[] spawn compileScript ["scripts\server\base\huron_manager.sqf"];
[] spawn compileScript ["scripts\server\base\startvehicle_spawn.sqf"];
[] spawn compileScript ["scripts\server\battlegroup\counter_battlegroup.sqf"];
[] spawn compileScript ["scripts\server\battlegroup\random_battlegroups.sqf"];
[] spawn compileScript ["scripts\server\battlegroup\readiness_increase.sqf"];
[] spawn compileScript ["scripts\server\game\apply_default_permissions.sqf"];
[] spawn compileScript ["scripts\server\game\cleanup_vehicles.sqf"];
if (!KP_liberation_fog_param) then {[] spawn compileScript ["scripts\server\game\fucking_set_fog.sqf"];};
[] spawn compileScript ["scripts\server\game\manage_time.sqf"];
[] spawn compileScript ["scripts\server\game\manage_weather.sqf"];
[] spawn compileScript ["scripts\server\game\playtime.sqf"];
[] spawn compileScript ["scripts\server\game\save_manager.sqf"];
[] spawn compileScript ["scripts\server\game\spawn_radio_towers.sqf"];
[] spawn compileScript ["scripts\server\game\synchronise_vars.sqf"];
[] spawn compileScript ["scripts\server\game\synchronise_eco.sqf"];
[] spawn compileScript ["scripts\server\game\zeus_synchro.sqf"];
[] spawn compileScript ["scripts\server\offloading\show_fps.sqf"];
[] spawn compileScript ["scripts\server\patrols\civilian_patrols.sqf"];
[] spawn compileScript ["scripts\server\patrols\manage_patrols.sqf"];
[] spawn compileScript ["scripts\server\patrols\reinforcements_resetter.sqf"];
if (KP_liberation_ailogistics) then {[] spawn compileScript ["scripts\server\resources\manage_logistics.sqf"];};
[] spawn compileScript ["scripts\server\resources\manage_resources.sqf"];
[] spawn compileScript ["scripts\server\resources\recalculate_resources.sqf"];
[] spawn compileScript ["scripts\server\resources\recalculate_timer.sqf"];
[] spawn compileScript ["scripts\server\resources\recalculate_timer_sector.sqf"];
[] spawn compileScript ["scripts\server\resources\unit_cap.sqf"];
[] spawn compileScript ["scripts\server\sector\lose_sectors.sqf"];

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
[] spawn compileScript ["scripts\server\civrep\init_module.sqf"];

// Civil Informant
[] spawn compileScript ["scripts\server\civinformant\init_module.sqf"];

// Asymmetric Threats
[] spawn compileScript ["scripts\server\asymmetric\init_module.sqf"];

// Groupcheck for deletion when empty
[] spawn compileScript ["scripts\server\offloading\group_diag.sqf"];
