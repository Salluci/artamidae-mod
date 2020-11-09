//Declare scriptName
scriptName "Client_Init";

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

//Banned check
if ([false, true] select _isBanned) exitWith {
	endMission "banned";
};

//Admin
if ([false, true] select _isAdmin) then {
	player setVariable ["APM_Admin", true, true];
	apm_fnc_open_admin_panel = compile preprocessFileLineNumbers "scripts\client\fn_open_admin.sqf";
	apm_fnc_open_admin_player = compile preprocessFileLineNumbers "scripts\client\fn_open_admin_player.sqf";

	_action = ["APM_admin", "Admin Menu", "res\APM_CA.paa", {
		[] call apm_fnc_open_admin_panel;
	}, {true}] call ace_interact_menu_fnc_createAction;
	[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;
};

//Zeus
if (player getVariable ["Zeus_slot", false]) then
{
	if !([false, true] select _isZeus) exitWith
	{
		endMission "Zeus";
	};
};

_action = ["Zeus_Budget", "Set Budget", "",
{
	//Create Textbox
	_display = findDisplay 312;
	_edit = _display ctrlCreate ["RscEdit", 123444];
	_edit ctrlSetPosition [0.5,0.5,0.2, 0.06];
	_edit ctrlCommit 0;

	//Create Button
	_button = _display ctrlCreate ["RscButton", 1235555];
	_button ctrlSetPosition [0.55,0.6,0.1,0.06];
	_button ctrlSetText "Set Budget";
	_button ctrlCommit 0;

	//Add Button Event
	_button ctrlAddEventHandler ["ButtonClick",
	{
		params ["_btn"];
		_display = ctrlParent _btn;
		_edit = _display displayCtrl 123444;
		_amount = parseNumber (ctrlText _edit);
		missionNamespace setVariable ["APM_Budget", _amount max 0, true];

		//Delete CTRLs
		ctrlDelete _edit;
		ctrlDelete _btn;
	}];
}, {true}] call ace_interact_menu_fnc_createAction;

[["ACE_ZeusActions"], _action] call ace_interact_menu_fnc_addActionToZeus;

_action = ["addLoadout", "Add Unit Loadout to Default Loadouts", "",
{
  //Create Textbox
  _display = findDisplay 312;
  _edit = _display ctrlCreate ["RscEdit", 123444];
  _edit ctrlSetPosition [0.5,0.5,0.5, 0.06];
  _edit ctrlCommit 0;

  //Create Button
  _button = _display ctrlCreate ["RscButton", 1235555];
  _button ctrlSetPosition [0.55,0.6,0.3,0.06];
  _button ctrlSetText "Loadout Name";
  _button ctrlCommit 0;

  //Add Button Event
  _button ctrlAddEventHandler ["ButtonClick",
  {
    params ["_btn"];
    _display = ctrlParent _btn;
    _edit = _display displayCtrl 123444;
    _name = ctrlText _edit;
    [_name, getUnitLoadout ((curatorSelected select 0) select 0)] call ace_arsenal_fnc_addDefaultLoadout;

    //Delete CTRLs
    ctrlDelete _edit;
    ctrlDelete _btn;
  }];
}, {count (curatorSelected select 0) == 1;}] call ace_interact_menu_fnc_createAction;

[["ACE_ZeusActions"], _action] call ace_interact_menu_fnc_addActionToZeus;

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

{
	if (["base_marker", _x] call bis_fnc_instring) then {
		base_marker_array pushBack _x;
	};
} foreach allMapMarkers;

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

_APM_ACE_Arsenal_menu = ["APMArsenalMenu", "APM Arsenal", ["APM_Misc\Data\UI\ui_arsenal.paa"], {
	//hintSilent "Contains options to:\n - View Full Arsenal\n - View Favorite Items Arsenal\nPort BIS to ACE arsenal";
}, APM_ACE_base_condition, {}, nil, nil, nil, [nil, nil, nil, true, nil]] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _APM_ACE_Arsenal_menu] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_Arsenal", "Open Full Arsenal", ["APM_Misc\Data\UI\ui_arsenal.paa","#FFABAB"], {
	call apm_arsenal_fnc_openFullArsenal;
}, APM_ACE_base_condition] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "APMArsenalMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_Arsenal", "Open Favorite Arsenal", ["APM_Misc\Data\UI\ui_arsenal.paa","#ABABFF"], {
	call apm_arsenal_fnc_openFavoritesArsenal;
}, APM_ACE_base_condition] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "APMArsenalMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_Arsenal", "Open Resupply Arsenal", ["\A3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa","#FFFFAB"], {
	call apm_arsenal_fnc_openResupplyArsenal;
}, APM_ACE_base_condition] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "APMArsenalMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

/*_action = ["APM_Port_arsenal", "Port BIS Loadouts to ACE", ["APM_Misc\Data\UI\ui_arsenal.paa", "#ABFFAB"], {
	call apm_arsenal_fnc_portLoadouts;
}, APM_ACE_base_condition] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "APMArsenalMenu"], _action] call ace_interact_menu_fnc_addActionToObject;*/

//Configs to player variable
_all_configs = ("true" configClasses (configFile >> "CfgPatches")) apply {configName _x};
_all_configs sort true;
player setVariable ["all_configs", _all_configs, true];

//Ready player for disconnect EH
player setVariable ["APM_Ready", true, true];

//Additional INITs
[] execVM "scripts\client\vehicle_shop\shop_init.sqf";
[] execVM "scripts\client\ace_tfar_save_load.sqf";
[] execVM "scripts\client\teleports_init.sqf";
[] execVM "scripts\client\zeus_tfar_fix.sqf";
[] execVM "scripts\client\fob_system\fob_system_init.sqf";
[] execVM "scripts\client\dice_roller.sqf";

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

//View Distance Event handlers
player addEventHandler ["GetInMan", {
	params ["_unit", "_seat", "_veh", "_turret"];
	if (_veh isKindOf "LandVehicle") then {
		setViewDistance APM_ground_vd;
	};
	if (_veh isKindOf "Air") then {
		setViewDistance APM_air_vd;
	};
	if !(APM_TFAR_LR_Settings isEqualTo []) then {
		[call TFAR_fnc_activeLrRadio, APM_TFAR_LR_Settings select 4] call TFAR_fnc_setLrRadioCode;
	} else {
		[call TFAR_fnc_activeLrRadio, "APM"] call TFAR_fnc_setLrRadioCode;
	};
}];

player addEventHandler ["GetOutMan", {
	setViewDistance APM_foot_vd;
}];

//Zeus killself command
["killMySelf", {
	player setDamage 1;
}, "all"] call CBA_fnc_registerChatCommand;
