//Prepare database
private _diag = "extDB3" callExtension "9:RESET";
diag_log "extDB3 reset for preprocess";
diag_log _diag;

switch true do {
	case (isDedicated) : {
		est_db = "extDB3" callExtension "9:ADD_DATABASE:DedicatedAPMNew";
		if (parseSimpleArray est_db select 0 == 0) exitWith {endMission "DBfail"};
		est_db_prot = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:DedicatedAPMNew:SQL_CUSTOM:apm:sql_APM_dev.ini";
		est_db_sql = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:DedicatedAPMNew:SQL:SQL:NULL";
	};
	case (hasInterface) : {
		est_db = "extDB3" callExtension "9:ADD_DATABASE:LocalAPMNew";
		if (parseSimpleArray est_db select 0 == 0) exitWith {endMission "DBfail"};
		est_db_prot = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:LocalAPMNew:SQL_CUSTOM:apm:sql_APM_dev.ini";
		est_db_sql = "extDB3" callExtension "9:ADD_DATABASE_PROTOCOL:LocalAPMNew:SQL:SQL:NULL";
	};
};

//Server mods variable for Admin Menu
missionNamespace setVariable ["server_addons", cba_common_addons, true];

//Handle special gamemodes/dev profile
APM_isLiberation = "Liberation" in serverName;
APM_isDev = "Dev" in missionName;
APM_isAliVE = !isNil "ALIVE_sys_logistics";

//Persistence key (Change manually for campaigns)
//Ex: APM_Key = "Ghost_OpRoot"
//By default, key is map's classname _ server profile name
APM_Key = format ["%1_%2", worldName, profileName];
publicVariable "APM_Key";

//Enable/Disable FOB System
APM_useFobSystem = true;
publicVariable "APM_useFobSystem";

//Handle Parameters
APM_Debug_level = ["apm_debugger", 0] call bis_fnc_getParamValue;
publicVariable "APM_Debug_level";

APM_Hidden_Terrain = [];

APM_PersistentPosition = false;
if (["persistent_position", 0] call bis_fnc_getParamValue isEqualTo 1) then {
	APM_PersistentPosition = true;
};
publicVariable "APM_PersistentPosition";

if (["load_world", 1] call bis_fnc_getParamValue isEqualTo 1) then {
	call apm_missions_fnc_loadWorld;
};
if (["real_time", 0] call bis_fnc_getParamValue isEqualTo 1) then {
	setDate systemTime;
};
if (["fps_marker", 0] call bis_fnc_getParamValue isEqualTo 1) then {
	call apm_missions_fnc_fpsmarker;
};
if (["budget_reward", 1] call bis_fnc_getParamValue isEqualTo 1) then {
	call apm_missions_fnc_budgetHandler;
};
private _param = ["save_interval", 15] call bis_fnc_getParamValue;
if (_param isNotEqualTo 0) then {
	[apm_missions_fnc_saveWorld, [_param], _param * 60] call CBA_fnc_waitAndExecute;
};
private _param = ["paycheck_timer", 15] call bis_fnc_getParamValue;
if (_param isNotEqualTo 0) then {
	[apm_missions_fnc_paycheck, [_param], _param * 60] call CBA_fnc_waitAndExecute;
};

//Handle player disconnect
addMissionEventHandler ["HandleDisconnect", {
	params ["_unit", "_id", "_uid", "_name"];
  if (_unit in [HC1, HC2, HC3]) exitWith
	{
		private _marker = format ["fpsmarker%1", vehicleVarName _unit];
		deleteMarker _marker;
		false
	};
	private _ready = _unit getVariable ["APM_Ready", false];
	if !(_ready) exitWith {
		diag_log format ["%1 left before data returned.", _name];
		false
	};
	private _result = [_unit, _uid] call apm_missions_fnc_savePlayer;
	_unit setVariable ["APM_Data", nil, true];

	diag_log format ["%1 just disconnected. Result: %2", _name, _result];
	false
}];

//Start Vehicle Shop
[] spawn apm_missions_fnc_updateShop;

//Scripting password
APM_Serverpass = "peterbuilt12";

//Force cTab side alignment
missionNamespace setVariable ["cTab_encryptionKey_guer", "i", true];

//Start Zeus Chat
call apm_missions_fnc_zeusChat;

//EventHandlers

["APM_RestartServer", {
  params [["_admin", objNull]];

  [_admin] call apm_missions_fnc_restartServer;
}] call CBA_fnc_addEventHandler;

["APM_banPlayer", {
  params ["_admin", "_player"];

  [_admin, _player] call apm_missions_fnc_banPlayer;
}] call CBA_fnc_addEventHandler;

["APM_PlayerJoined", {
	params ["_player", "_jip"];

	[{!local (_this select 0)}, {[_this select 0, _this select 1] call apm_missions_fnc_loadPlayer}, [_player, _jip], 10, {[_this select 0, _this select 1] call apm_missions_fnc_loadPlayer}] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_addEventHandler;
