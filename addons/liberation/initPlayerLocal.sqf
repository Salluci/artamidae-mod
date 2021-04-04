//Headless Client
if !(hasInterface) exitWith
{
  if (["budget_reward", 1] call bis_fnc_getParamValue isEqualTo 1) then {
    call apm_missions_fnc_budgetHandler;
  };
  if (["fps_marker", 0] call bis_fnc_getParamValue isEqualTo 1) then {
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

[{
	!isNil {player getVariable "APM_Data"} && {local player}
}, {
  [{
    private _data = player getVariable "APM_Data";
  	_data params ["_isAdmin", ["_isZeus", 0], "_isBanned", "_isMedic", "_isENG", "_isFixed", "_isRotor", "_isCrew", "_isEOD", "_rank", "_loadout", "_positions"];

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

    [{(getUnitLoadout player) isNotEqualTo (_this select 0)}, {player setUnitLoadout (_this select 0)}, [_loadout], 60] call CBA_fnc_waitUntilAndExecute;
  }] call CBA_fnc_execNextFrame;
}, nil, 15, {
	systemChat "DB variable failure. Please reconnect from lobby. If this continues, contact a Server Admin on Discord.";
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
