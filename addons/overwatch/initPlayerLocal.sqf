APM_isLiberation = "Liberation" in serverName;
APM_isDev = "Dev" in missionName;
APM_isAliVE = !isNil "ALIVE_sys_logistics";

//Headless Client
if !(hasInterface) exitWith
{
  if (["budget_reward", 1] call bis_fnc_getParamValue isEqualTo 1) then {
    call apm_missions_fnc_budgetHandler;
  };
  if (["fps_marker", 1] call bis_fnc_getParamValue isEqualTo 1) then {
    [{alive player && {local player}}, {
      call apm_missions_fnc_fpsmarker;
    }] call CBA_fnc_waitUntilAndExecute;
  };
};

if (isNil "CBA_clientID" || !isClass (configFile >> "CfgWorlds" >> worldName)) exitWith {
  endMission "launcher";
};

//Configs to player variable + knock uncon check
if ("BRIDGE_punchMOD" in cba_common_addons) exitWith {
	endMission "knock";
};

[{!isNil "server_addons"}, {
  private _allConfigs = cba_common_addons - server_addons;
  _allConfigs sort true;
  player setVariable ["all_configs", _allConfigs, true];
}] call CBA_fnc_waitUntilAndExecute;

APM_idCallBack = ["APM_PlayerCallBack", {
  params ["_isAdmin", "_isZeus", "_isBanned", "_isMedic", "_isENG", "_isFixed", "_isRotor", "_isCrew", "_isEOD", "_rank", "_loadout"];

  //Banned check
  if (_isBanned) exitWith {
    endMission "banned";
  };

  if (_rank > 0 && {"RemoveStamina_ACE3" in cba_common_addons || {"RemoveStamina" in cba_common_addons}}) exitWith {
    endMission "stamina";
  };

  if (_rank > 0 && {"ArmaZeusCache" in cba_common_addons}) exitWith {
    endMission "ZeusCache";
  };

  if (_rank > 0 && {"achilles_functions_f_achilles" in cba_common_addons}) exitWith {
    endMission "Achilles";
  };

  if (_rank > 0 && {"dzn_ZeusSearchPatch" in cba_common_addons}) exitWith {
    endMission "ZeusSearch";
  };

  //Zeus Kick
  if ((player in [Zeus_Slot_1, Zeus_Slot_2, Zeus_Slot_3]) && (!_isZeus)) exitWith {
    endMission "Zeus";
  };

  //Admin
  if (_isAdmin) then {
    private _action = ["APM_admin", "Admin Menu", "res\APM_CA.paa", {call apm_missions_fnc_adminMenu}, {true}] call ace_interact_menu_fnc_createAction;
    [player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;
  };

  //Apply rank patch & ingame rank
  private _insignia = switch _rank do {
    case 0;
    case 1 :  {""};
    case 2 :  {"APM_patch_C10"};
    case 3 :  {"APM_patch_C20"};
    case 4 :  {"APM_patch_C30"};
    case 5 :  {"APM_patch_SRC0"};
    case 6;
    case 7 :  {"APM_patch_CC0"};
    case 8 :  {"APM_patch_SBCO0"};
    case 9 :  {"APM_patch_FCO0"};
    case 10 : {"APM_patch_ACO0"};
    case 11 : {"APM_patch_SCO0"};
    case 12 : {"APM_patch_CMDR0"};
    default {""};
  };
  [player, _insignia] call apm_fnc_setUnitInsignia;

  private _rank = switch _rank do {
    case 4 : {"CORPORAL"};
    case 5 : {"SERGEANT"};
    case 6 : {"SERGEANT"};
    case 7 : {"SERGEANT"};
    case 8 : {"LIEUTENANT"};
    case 9 : {"LIEUTENANT"};
    case 10 : {"CAPTAIN"};
    case 11 : {"CAPTAIN"};
    case 12 : {"MAJOR"};
    default {"PRIVATE"};
  };
  player setUnitRank _rank;

  if (!APM_isLiberation && {player getVariable ["APM_Rank", 0] < 3}) then {
    private _ts = parseText "<a href='ts3server://74.91.115.227'>Teamspeak IP: 74.91.115.227</a>";
    private _discord = parseText "Be sure to join our <a href='https://discord.gg/fxeATZR'>Discord (Click Me!)</a> if you are interested in learning more about our unit.";
    private _arsenal = parseText "The Arsenal can be accessed by ACE Self Interaction > APM Arsenal.";
    "Welcome to APM!" hintC [_ts, _discord, _arsenal];
  };
  [{(getUnitLoadout player) isNotEqualTo (_this select 0)}, {if (isNil "ace_arsenal_center") then {player setUnitLoadout (_this select 0)}}, [_loadout], 10] call CBA_fnc_waitUntilAndExecute;
  ["APM_PlayerCallBack", APM_idCallBack] call CBA_fnc_removeEventHandler;
}] call CBA_fnc_addEventHandler;

[{
	!isNil {player getVariable "APM_Data"} && {local player}
}, {}, nil, 15, {
  ["APM_PlayerJoined", [player, didJIP]] call CBA_fnc_serverEvent;
	systemChat "DB variable failure. Attempting again. If this continues, contact a Server Admin on Discord.";
}] call CBA_fnc_waitUntilAndExecute;

//Additional INITs, call to server for player join
[{alive player && {local player}}, {
  call compileScript ["scripts\client\ace_actions.sqf"];
  call compileScript ["scripts\client\zeus_tfar_fix.sqf"];
  call compileScript ["scripts\client\chat.sqf"];
  call compileScript ["scripts\client\cert_restrictions.sqf"];
  call compileScript ["scripts\client\alive_zeusEH.sqf"];
  if (isNil "APM_MarkerSystemInit") then {
    call apm_missions_fnc_initMarkerSystem;
  };
  ["APM_FunctionsLoaded"] call CBA_fnc_localEvent;
  [{missionNamespace getVariable ["APM_serverInit", false]}, {["APM_PlayerJoined", [player, didJIP]] call CBA_fnc_serverEvent}] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_waitUntilAndExecute;

systemChat "Player loading done.";
