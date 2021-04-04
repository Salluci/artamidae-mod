//Declare scriptName
scriptName "Client_Init";

//Request data from server
waitUntil {alive player};

systemChat "Loading in progress...";
systemChat "Please do not move until you see the deployment screen.";

call compileScript ["scripts\client\misc\init_markers.sqf"];

// This causes the script error with not defined variable _display in File A3\functions_f_bootcamp\Inventory\fn_arsenal.sqf [BIS_fnc_arsenal], line 2122
// ["Preload"] call BIS_fnc_arsenal;
spawn_camera = compileScript ["scripts\client\spawn\spawn_camera.sqf"];
cinematic_camera = compileScript ["scripts\client\ui\cinematic_camera.sqf"];
write_credit_line = compileScript ["scripts\client\ui\write_credit_line.sqf"];
do_load_box = compileScript ["scripts\client\ammoboxes\do_load_box.sqf"];
kp_fuel_consumption = compileScript ["scripts\client\misc\kp_fuel_consumption.sqf"];
kp_vehicle_permissions = compileScript ["scripts\client\misc\vehicle_permissions.sqf"];

[] spawn compileScript ["scripts\client\markers\sector_manager.sqf"];
[] spawn compileScript ["scripts\client\markers\fob_markers.sqf"];
[] spawn compileScript ["scripts\client\misc\synchronise_vars.sqf"];
[] spawn compileScript ["scripts\client\misc\synchronise_eco.sqf"];
[] spawn compileScript ["scripts\client\misc\playerNamespace.sqf"];
[] spawn compileScript ["scripts\client\spawn\redeploy_manager.sqf"];
[] spawn compileScript ["scripts\client\ui\ui_manager.sqf"];
[] spawn compileScript ["scripts\client\actions\intel_manager.sqf"];
[] spawn compileScript ["scripts\client\actions\recycle_manager.sqf"];
[] spawn compileScript ["scripts\client\actions\unflip_manager.sqf"];
[] spawn compileScript ["scripts\client\ammoboxes\ammobox_action_manager.sqf"];
[] spawn compileScript ["scripts\client\build\build_overlay.sqf"];
[] spawn compileScript ["scripts\client\build\do_build.sqf"];
if (KP_liberation_mapmarkers) then {[] spawn compileScript ["scripts\client\markers\empty_vehicles_marker.sqf"]};
[] spawn compileScript ["scripts\client\markers\hostile_groups.sqf"];
[] spawn compileScript ["scripts\client\markers\huron_marker.sqf"];
[] spawn compileScript ["scripts\client\markers\spot_timer.sqf"];
[] spawn compileScript ["scripts\client\misc\broadcast_squad_colors.sqf"];
[] spawn compileScript ["scripts\client\misc\secondary_jip.sqf"];
[] spawn compileScript ["scripts\client\markers\update_production_sites.sqf"];

player addMPEventHandler ["MPKilled", {_this spawn kill_manager;}];
player addEventHandler ["GetInMan", {[_this select 2] spawn kp_fuel_consumption;}];
player addEventHandler ["GetInMan", {[_this select 2] call KPLIB_fnc_setVehiclesSeized;}];
player addEventHandler ["GetInMan", {[_this select 2] call KPLIB_fnc_setVehicleCaptured;}];
