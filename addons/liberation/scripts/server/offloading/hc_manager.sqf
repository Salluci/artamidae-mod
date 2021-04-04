add_civ_waypoints = compileScript ["scripts\server\ai\add_civ_waypoints.sqf"];
add_defense_waypoints = compileScript ["scripts\server\ai\add_defense_waypoints.sqf"];
battlegroup_ai = compileScript ["scripts\server\ai\battlegroup_ai.sqf"];
building_defence_ai = compileScript ["scripts\server\ai\building_defence_ai.sqf"];
patrol_ai = compileScript ["scripts\server\ai\patrol_ai.sqf"];
prisonner_ai = compileScript ["scripts\server\ai\prisonner_ai.sqf"];
troup_transport = compileScript ["scripts\server\ai\troup_transport.sqf"];

ied_manager = compileScript ["scripts\server\sector\ied_manager.sqf"];
manage_one_sector = compileScript ["scripts\server\sector\manage_one_sector.sqf"];
wait_to_spawn_sector = compileScript ["scripts\server\sector\wait_to_spawn_sector.sqf"];
manage_asymIED = compileScript ["scripts\server\asymmetric\ied\manage_asymIED.sqf"];
sector_guerilla = compileScript ["scripts\server\asymmetric\random\sector_guerilla.sqf"];
asym_sector_ambush = compileScript ["scripts\server\asymmetric\random\asym_sector_ambush.sqf"];
civinfo_task = compileScript ["scripts\server\civinformant\tasks\civinfo_task.sqf"];

[] spawn compileScript ["scripts\client\misc\synchronise_vars.sqf"];
[] spawn compileScript ["scripts\client\misc\synchronise_eco.sqf"];
[] spawn compileScript ["scripts\server\offloading\show_fps.sqf"];
