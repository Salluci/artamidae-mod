//Headless Client
if !(hasInterface) exitWith
{
  if (["budget_reward", 0] call bis_fnc_getParamValue isEqualTo 1) then {
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

  ["APM_PlayerJoined", [player, didJIP]] call CBA_fnc_globalEvent;
}] call CBA_fnc_waitUntilAndExecute;

["APM_PlayerCallBack", {
  params ["_isAdmin", ["_isZeus", 0], "_isBanned", "_isMedic", "_isENG", "_isFixed", "_isRotor", "_isCrew", "_isEOD", "_rank", "_loadout", "_positions"];

  //Banned check
  if ([false, true] select _isBanned) exitWith {
    endMission "banned";
  };

  //Zeus Kick
  if ((player in [Zeus_Slot_1, Zeus_Slot_2, Zeus_Slot_3]) && ([true, false] select _isZeus)) exitWith {
    endMission "Zeus";
  };

  //Admin
  if ([false, true] select _isAdmin) then
  {
    player setVariable ["APM_Admin", true, true];

    private _action = ["APM_admin", "Admin Menu", "res\APM_CA.paa",
    {
      call apm_missions_fnc_adminMenu;
    }, {true}] call ace_interact_menu_fnc_createAction;
    [player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;
  };

  if (isNil "GRLIB_save_key" && {player getVariable ["APM_Rank", 0] < 3}) then {
    private _ts = parseText "<a href='ts3server://74.91.115.227'>Teamspeak IP: 74.91.115.227</a>";
    private _discord = parseText "Be sure to join our <a href='https://discord.gg/fxeATZR'>Discord (Click Me!)</a> if you are interested in learning more about our unit.";
    private _arsenal = parseText "The Arsenal can be accessed by ACE Self Interaction > APM Arsenal.";
    "Welcome to APM!" hintC [_ts, _discord, _arsenal];
  };
  [{(getUnitLoadout player) isNotEqualTo (_this select 0) && {isNil "ace_arsenal_center"}}, {player setUnitLoadout (_this select 0)}, [_loadout], 60] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_addEventHandler;

[{
	!isNil {player getVariable "APM_Data"} && {local player}
}, {}, nil, 15, {
  ["APM_PlayerJoined", [player, didJIP]] call CBA_fnc_globalEvent;
	systemChat "DB variable failure. Attempting again. If this continues, contact a Server Admin on Discord.";
}] call CBA_fnc_waitUntilAndExecute;

//Additional INITs
[{alive player && {local player}}, {
  call compileScript ["scripts\client\ace_actions.sqf"];
  call compileScript ["scripts\client\zeus_tfar_fix.sqf"];
  call compileScript ["scripts\client\chat.sqf"];
  call compileScript ["scripts\client\cert_restrictions.sqf"];
  call compileScript ["scripts\client\alive_zeusEH.sqf"];
  ["APM_FunctionsLoaded"] call CBA_fnc_localEvent;
}] call CBA_fnc_waitUntilAndExecute;

systemChat "Player loading done.";
