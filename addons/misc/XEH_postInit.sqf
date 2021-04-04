["ace_medical_FatalInjury", {
  params ["_unit"];
  if !(isPlayer _unit || ace_medical_preventInstantDeath) exitWith {};

  if (_unit getVariable ["APM_secondChance", false]) exitWith {
    [{
      ["ace_medical_bleedout", _this] call CBA_fnc_localEvent;
    }, _unit] call CBA_fnc_execNextFrame;
  };
  if (_unit getVariable "ace_medical_bloodVolume" > 5.1) exitWith {
    [{
      ["ace_medical_CPRSucceeded", _this] call CBA_fnc_localEvent;
    }, _unit] call CBA_fnc_execNextFrame;
    _unit setVariable ["APM_secondChance", true, true];
  };
}] call CBA_fnc_addEventHandler;

["ace_medical_wakeUp", {
  if !(ace_medical_preventInstantDeath) exitWith {};
  [{player setVariable ["APM_secondChance", false, true]}] call CBA_fnc_execNextFrame;
}] call CBA_fnc_addEventHandler;

if (isServer) then {
  missionNamespace setVariable ["server_addons", cba_common_addons, true];
};

if (hasInterface) then {
//ACE Actions
private _menu = ["SettingsMenu", "Save/Load Settings", ["x\APM\addons\misc\Data\UI\interact_root.paa", "#33FF33"], {}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio"], _menu] call ace_interact_menu_fnc_addActionToObject;

private _action = ["APM_saveSR", "Save SW Radio", ["x\APM\addons\misc\Data\UI\save.paa", "#FFABAB"],{call apm_radio_fnc_saveSettingsSR},{!isNil {call TFAR_fnc_activeSwRadio}}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio", "SettingsMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_saveLR", "Save LR Radio", ["x\APM\addons\misc\Data\UI\save.paa", "#FFFFAB"],{call apm_radio_fnc_saveSettingsLR},{!isNil {call TFAR_fnc_activeLrRadio}}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio", "SettingsMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_loadSR", "Load SW Radio", ["x\APM\addons\misc\Data\UI\sr.paa", "#FFABAB"],{call apm_radio_fnc_loadSettingsSR},{!isNil {call TFAR_fnc_activeSwRadio}}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio", "SettingsMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_loadLR", "Load LR Radio", ["x\APM\addons\misc\Data\UI\lr.paa", "#FFFFAB"],{call apm_radio_fnc_loadSettingsLR},{!isNil {call TFAR_fnc_activeLrRadio}}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "TFAR_Radio", "SettingsMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_MedicalVehicle", "Make Medical Vehicle", "\z\ace\addons\medical_gui\ui\cross.paa", {_target setVariable ["ace_medical_isMedicalVehicle", true, true]}, {
(_target getVariable ["ace_medical_isMedicalVehicle", false] isEqualTo false) && {ACE_Player getVariable ["Ace_medical_medicClass", 0] isEqualTo 2 || APM_ACE_base_condition || {if (!isNil "apm_missions_fnc_fobLevel") then {(_target call apm_missions_fnc_currentFob) select 1 > 0}}}}] call ace_interact_menu_fnc_createAction;

["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["Helicopter", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["Ship", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

private _statement = {
  {
    _x setVariable ["acex_headless_blacklist", false, true];
  } forEach (curatorSelected select 0);
};

private _condition = {
  {
    (_x getVariable ["acex_headless_blacklist", false]) isEqualTo true
  } forEach ((curatorSelected select 0) select {_x isEqualTo leader _x});
};

_action = ["zeus_HC_enable", "Enable Headless Client Transfer", "", _statement, _condition] call ace_interact_menu_fnc_createAction;
[["ACE_ZeusActions", "ZeusUnits"], _action] call ace_interact_menu_fnc_addActionToZeus;

_statement = {
  {
    ["APM_requestOwnership", [_x, clientOwner]] call CBA_fnc_serverEvent;
  } forEach (curatorSelected select 0) select {_x isEqualTo leader _x};
  {
    _x setVariable ["acex_headless_blacklist", true, true];
  } forEach (curatorSelected select 0);
};

_condition = {
  {
    (_x getVariable ["acex_headless_blacklist", false]) isEqualTo false
  } forEach ((curatorSelected select 0) select {_x isEqualTo leader _x});
};

_action = ["zeus_HC_disable", "Disable Headless Client Transfer", "", _statement, _condition] call ace_interact_menu_fnc_createAction;
[["ACE_ZeusActions", "ZeusUnits"], _action] call ace_interact_menu_fnc_addActionToZeus;

//Punching
["CBA_loadingScreenDone", {
  private _cond = {!isNil {player getVariable "APM_Rank"}};
  private _action = {
    private _rank = player getVariable "APM_Rank";

    APM_canPunch_Player = (_rank >= 5);

    APM_canPunch_AI = (_rank >= 3);
  };
  private _timeout = {
    APM_canPunch_AI = true;
    APM_canPunch_Player = true;
  };
  [_cond, _action, nil, 60, _timeout] call CBA_fnc_waitUntilAndExecute;
}] call CBA_fnc_addEventHandler;
};
