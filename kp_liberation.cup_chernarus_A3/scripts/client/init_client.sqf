//Request data from server
waitUntil {alive player};

//Wait til data var is set
_data = [];
while {true} do {
	_time = 0;
	[getPlayerUID player, name player] remoteExec ["db_getPlayerData", 2];
	waitUntil {
		_data = missionNamespace getVariable [format ["PD_%1", getPlayerUID player], []];
		if !(_data isEqualTo []) exitWith {true};
		_time = _time + 1;
		if (_time == 10) exitWith {true};
		sleep 1;
		false
	};
	if !(_data isEqualTo []) exitWith {true};
	systemChat "DB variable failure. Attempting again. If this continues, contact a Server Admin on Discord.";
};


_data params ["_isAdmin", "_isZeus", "_isBanned", "_isMedic", "_isENG", "_isFixed", "_isRotor", "_isCrew", "_isEOD", "_rank", "_loadout"];

player setUnitLoadout _loadout;

//Setup Certs
player setVariable ["Ace_medical_medicClass", _isMedic, true];
player setVariable ["Ace_isEngineer", _isENG, true];
player setVariable ["ACE_isEOD", [false, true] select _isEOD, true];
player setVariable ["APM_rotor", [false, true] select _isRotor, true];
player setVariable ["APM_fixed", [false, true] select _isFixed, true];
player setVariable ["APM_crewman", [false, true] select _isCrew, true];
player setVariable ["APM_rank", _rank, true];

//Apply rank patch
_insignia = switch _rank do {
	case 0;
	case 1 : {""};
	case 2 : {"APM_patch_C10"};
	case 3;
	case 4 : {"APM_patch_C20"};
	case 5;
	case 6 : {"APM_patch_C30"};
	case 7;
	case 8 : {"APM_patch_SRC0"};
	case 9 : {"APM_patch_CC0"};
	case 10 : {"APM_patch_SBCO0"};
	case 11 : {"APM_patch_FCO0"};
	case 12 : {"APM_patch_ACO0"};
	case 13 : {"APM_patch_SCO0"};
	case 14 : {"APM_patch_CMDR0"};
	default {""};
};
_time = 0;
waitUntil {
	sleep 0.1;
	_time = _time + 1;
	if (_time == 10) exitWith {systemChat "Could not apply rank patch. Uniform not supported."; true};
	_result = [player, _insignia] call BIS_fnc_setUnitInsignia;
	_result or (_insignia == "")
};

//Pilot EH to prevent player from entering pilot
player addEventHandler ["GetInMan", {
	_veh = _this select 2;
	_player_pilot = player getVariable ["APM_rotor", false];

	if !(_player_pilot) then {
	if (_veh isKindOf "Helicopter") then {
		if (_veh isKindOf "ParachuteBase") exitwith {};
		_driver = driver _veh;
		if (_driver == player) exitWith {
			moveOut player;
			hintC "You are not a certified helicopter pilot.";
		};
		_gunner = gunner _veh;
		if (_gunner == player) then {
			_driver = driver _veh;
			_isPilot = _driver getVariable ["APM_rotor", false];
			if (_isPilot) then {
				_veh enableCopilot true;
			} else {
				_veh enableCopilot false;
			};
		};
	};
};

_plane_pilot = player getVariable ["APM_fixed", false];

	if !(_plane_pilot) then {

	if (_veh isKindOf "Plane") then {
		_driver = driver _veh;
		if (_driver == player) exitwith {
			moveOut player;
			hintC "You are not a certified pilot.";
		};
		_gunner = gunner _veh;
		if (_gunner == player) then {
			_driver = driver _veh;
			_isPilot = _driver getVariable ["APM_fixed", false];
			if (_isPilot) then {
				_veh enableCopilot true;
			} else {
				_veh enableCopilot false;
			};
		};
	};
};
}];

//Setup Base markers array and ACE condition
base_marker_array = [];

APM_ACE_base_condition = {
	_result = false;
	{
		if (player inArea _x) exitWith {_result = true};
	} foreach base_marker_array;
	_result
};

//Setup self ACE arsenal on base

APM_Gear_shop_blacklist =
[
	"HLC_wp_M134Painless",
	"NWTS_Deer",
	"NWTS_Deer_bloody",
	"NWTS_Deer_Mossy",
	"NWTS_Deer_glow",
	"NWTS_Human_bloody",
	"NWTS_Human_simple",
	"NWTS_goggle_base",
	"NWTS_goggle_deer",
	"NWTS_goggle_deer_glow",
	"NWTS_goggle_deer_mossy",
	"NWTS_goggle_deer_bloody",
	"NWTS_goggle_human_bloody",
	"NWTS_goggle_human_simple"
];

_APM_ACE_Arsenal_menu = ["APMArsenalMenu", "APM Arsenal", ["x\APM\addons\Misc\Data\UI\ui_arsenal.paa"], {
	//hintSilent "Contains options to:\n - View Full Arsenal\n - View Favorite Items Arsenal\nPort BIS to ACE arsenal";
}, APM_ACE_base_condition, {}, nil, nil, nil, [nil, nil, nil, true, nil]] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _APM_ACE_Arsenal_menu] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_Arsenal", "Open Full Arsenal", ["x\APM\addons\Misc\Data\UI\ui_arsenal.paa","#FFABAB"], {
	[player, false] call apm_arsenal_fnc_openFullArsenal;
}, APM_ACE_base_condition] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "APMArsenalMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_Arsenal", "Open Favorite Arsenal", ["x\APM\addons\Misc\Data\UI\ui_arsenal.paa","#ABABFF"], {
	[player, false] call apm_arsenal_fnc_openFavoritesArsenal;
}, APM_ACE_base_condition] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "APMArsenalMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_Arsenal", "Open Resupply Arsenal", ["\A3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa","#FFFFAB"], {
	call apm_arsenal_fnc_openResupplyArsenal;
}, APM_ACE_base_condition] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "APMArsenalMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_Port_arsenal", "Port BIS Loadouts to ACE", ["x\APM\addons\Misc\Data\UI\ui_arsenal.paa", "#ABFFAB"], {
	call apm_arsenal_fnc_portLoadouts;
}, APM_ACE_base_condition] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "APMArsenalMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

//Configs to player variable
_all_configs = ("true" configClasses (configFile >> "CfgPatches")) apply {configName _x};
_all_configs sort true;
player setVariable ["all_configs", _all_configs, true];

//Ready player for disconnect EH
player setVariable ["APM_Ready", true, true];

//Opening Hint to server
_ts = parseText "Teamspeak IP: 74.91.115.227";
_dis = parseText "Be sure to join our <a href='https://discord.gg/fxeATZR'>Discord (Click Me!)</a> if you are interested in learning more about our unit.";
_arsenal = parseText "The Arsenal can be accessed by ACE Self Interaction > APM Arsenal.";
"Welcome to APM!" hintC [_ts, _dis, _arsenal];
hintC_arr_EH = findDisplay 72 displayAddEventHandler ["unload", {
	0 = _this spawn {
		_this select 0 displayRemoveEventHandler ["unload", hintC_arr_EH];
		hintSilent "";
	};
}];

//Clear PD variable to ensure no issues on rejoin
[{missionNamespace setVariable [format ["PD_%1", getPlayerUID player], nil, true]}, []] call cba_fnc_execNextFrame;

//ACE interact on GroundHolder to cleanup trash around base
_action = ["DeleteGroundHolder", "Delete Trash", "", {
	deleteVehicle _target;
}, {true}] call ace_interact_menu_fnc_createAction;

["GroundWeaponHolder", 0, ["ACE_MainActions"], _action, false] call ace_interact_menu_fnc_addActionToClass;
["Default", 0, ["ACE_MainActions"], _action, false] call ace_interact_menu_fnc_addActionToClass;
["WeaponHolderSimulated", 0, ["ACE_MainActions"], _action, false] call ace_interact_menu_fnc_addActionToClass;

//Zeus killself command
["killMySelf", {
	player setDamage 1;
}, "all"] call CBA_fnc_registerChatCommand;

[] call compileFinal preprocessFileLineNumbers "scripts\client\misc\init_markers.sqf";
switch (KP_liberation_arsenal) do {
    case  1: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\custom.sqf";};
    case  2: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\rhsusaf.sqf";};
    case  3: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\3cbBAF.sqf";};
    case  4: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\gm_west.sqf";};
    case  5: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\gm_east.sqf";};
    case  6: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\csat.sqf";};
    case  7: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\unsung.sqf";};
    case  8: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\sfp.sqf";};
    case  9: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\bwmod.sqf";};
    case  10: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\vanilla_nato_mtp.sqf";};
    case  11: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\vanilla_nato_tropic.sqf";};
    case  12: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\vanilla_nato_wdl.sqf";};
    case  13: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\vanilla_csat_hex.sqf";};
    case  14: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\vanilla_csat_ghex.sqf";};
    case  15: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\vanilla_aaf.sqf";};
    case  16: {[] call compileFinal preprocessFileLineNumbers "arsenal_presets\vanilla_ldf.sqf";};
    default  {GRLIB_arsenal_weapons = [];GRLIB_arsenal_magazines = [];GRLIB_arsenal_items = [];GRLIB_arsenal_backpacks = [];};
};

if (typeOf player == "VirtualSpectator_F") exitWith {
    execVM "scripts\client\markers\empty_vehicles_marker.sqf";
    execVM "scripts\client\markers\fob_markers.sqf";
    execVM "scripts\client\markers\group_icons.sqf";
    execVM "scripts\client\markers\hostile_groups.sqf";
    execVM "scripts\client\markers\sector_manager.sqf";
    execVM "scripts\client\markers\spot_timer.sqf";
    execVM "scripts\client\misc\synchronise_vars.sqf";
    execVM "scripts\client\ui\ui_manager.sqf";
};

// This causes the script error with not defined variable _display in File A3\functions_f_bootcamp\Inventory\fn_arsenal.sqf [BIS_fnc_arsenal], line 2122
// ["Preload"] call BIS_fnc_arsenal;
spawn_camera = compileFinal preprocessFileLineNumbers "scripts\client\spawn\spawn_camera.sqf";
cinematic_camera = compileFinal preprocessFileLineNumbers "scripts\client\ui\cinematic_camera.sqf";
write_credit_line = compileFinal preprocessFileLineNumbers "scripts\client\ui\write_credit_line.sqf";
do_load_box = compileFinal preprocessFileLineNumbers "scripts\client\ammoboxes\do_load_box.sqf";
kp_fuel_consumption = compileFinal preprocessFileLineNumbers "scripts\client\misc\kp_fuel_consumption.sqf";
kp_vehicle_permissions = compileFinal preprocessFileLineNumbers "scripts\client\misc\vehicle_permissions.sqf";

execVM "scripts\client\actions\intel_manager.sqf";
execVM "scripts\client\actions\recycle_manager.sqf";
execVM "scripts\client\actions\unflip_manager.sqf";
execVM "scripts\client\ammoboxes\ammobox_action_manager.sqf";
execVM "scripts\client\build\build_overlay.sqf";
execVM "scripts\client\build\do_build.sqf";
execVM "scripts\client\commander\enforce_whitelist.sqf";
if (KP_liberation_mapmarkers) then {execVM "scripts\client\markers\empty_vehicles_marker.sqf";};
execVM "scripts\client\markers\fob_markers.sqf";
if (!KP_liberation_high_command && KP_liberation_mapmarkers) then {execVM "scripts\client\markers\group_icons.sqf";};
execVM "scripts\client\markers\hostile_groups.sqf";
if (KP_liberation_mapmarkers) then {execVM "scripts\client\markers\huron_marker.sqf";} else {deleteMarkerLocal "huronmarker"};
execVM "scripts\client\markers\sector_manager.sqf";
execVM "scripts\client\markers\spot_timer.sqf";
execVM "scripts\client\misc\broadcast_squad_colors.sqf";
execVM "scripts\client\misc\init_arsenal.sqf";
execVM "scripts\client\misc\permissions_warning.sqf";
if (!KP_liberation_ace) then {execVM "scripts\client\misc\resupply_manager.sqf";};
execVM "scripts\client\misc\secondary_jip.sqf";
execVM "scripts\client\misc\synchronise_vars.sqf";
execVM "scripts\client\misc\synchronise_eco.sqf";
execVM "scripts\client\misc\playerNamespace.sqf";
execVM "scripts\client\spawn\redeploy_manager.sqf";
execVM "scripts\client\ui\ui_manager.sqf";
execVM "scripts\client\ui\tutorial_manager.sqf";
execVM "scripts\client\markers\update_production_sites.sqf";

player addMPEventHandler ["MPKilled", {_this spawn kill_manager;}];
player addEventHandler ["GetInMan", {[_this select 2] spawn kp_fuel_consumption;}];
player addEventHandler ["GetInMan", {[_this select 2] call KPLIB_fnc_setVehiclesSeized;}];
player addEventHandler ["GetInMan", {[_this select 2] call KPLIB_fnc_setVehicleCaptured;}];
player addEventHandler ["GetInMan", {[_this select 2] call kp_vehicle_permissions;}];
player addEventHandler ["SeatSwitchedMan", {[_this select 2] call kp_vehicle_permissions;}];
player addEventHandler ["HandleRating", {if ((_this select 1) < 0) then {0};}];

// Disable stamina, if selected in parameter
if (!GRLIB_fatigue) then {
    player enableStamina false;
    player addEventHandler ["Respawn", {player enableStamina false;}];
};

// Reduce aim precision coefficient, if selected in parameter
if (!KPLIB_sway) then {
    player setCustomAimCoef 0.1;
    player addEventHandler ["Respawn", {player setCustomAimCoef 0.1;}];
};

execVM "scripts\client\ui\intro.sqf";

[player] joinSilent (createGroup [GRLIB_side_friendly, true]);

// Commander init
if (player isEqualTo ([] call KPLIB_fnc_getCommander)) then {
    // Start tutorial
    if (KP_liberation_tutorial) then {
        [] call KPLIB_fnc_tutorial;
    };
    // Request Zeus if enabled
    if (KP_liberation_commander_zeus) then {
        [] spawn {
            sleep 5;
            [] call KPLIB_fnc_requestZeus;
        };
    };
};
