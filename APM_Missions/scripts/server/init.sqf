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

//Detect if ALIVE present and initialize
if !(isNil "ALIVE_Required") then {
	_ready = [] execVM "scripts\server\ALIVE\init.sqf";
	waitUntil {
		scriptDone _ready;
	};
};
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

//FPS marker
FPS_Marker_loop = [] spawn {
	FPS_marker = createMarker ["FPS_Marker", [100, 100]];
	FPS_Marker setMarkerType "hd_destroy";
	while {true} do {
		_FPS = round (diag_fps * 10) / 10;
		_text = format ["Server FPS: %1", _FPS];
		FPS_Marker setMarkerText _text;
		if (_FPS < 10) then {FPS_Marker setMarkerColor "ColorRed"};
		if ((_FPS >= 10) and (_FPS <30)) then {FPS_Marker setMarkerColor "ColorYellow"};
		if (_FPS >= 30) then {FPS_Marker setMarkerColor "ColorGreen"};

		//Delete missing HC markers incase they are DCed
		if (isNil "HC1") then {deleteMarker "HC1 FPS: %1"};
		if (isNil "HC2") then {deleteMarker "HC2 FPS: %1"};
		if (isNil "HC3") then {deleteMarker "HC3 FPS: %1"};
		sleep 0.5;
	};
};
