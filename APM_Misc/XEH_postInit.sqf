//Cache ressuply arsenal items on load
private _configs = uiNamespace getVariable "ace_arsenal_configItems";
private _mags = _configs select 2;
private _grenades = _configs select 15;
private _explosives = _configs select 16;
private _misc = _configs select 17;
private _all = _mags + _grenades + _explosives + _misc;
profileNamespace setVariable ["resupply_arsenal_items", _all];

//Loadout tab events to hide/show custom buttons
["ace_arsenal_loadoutsDisplayOpened", {
  private _display = findDisplay 1127001;
  private _leftButton = _display displayCtrl 123123;
  private _rightButton = _display displayCtrl 123124;
  private _loadoutButton = _display displayCtrl 1234556;

  {
    _x ctrlShow false;
  } forEach [_leftButton, _rightButton, _loadoutButton];
  [{
    _display = _this select 0;
    private _grp = (allControls _display select {ctrlClassName _x == "buttonBar"}) select 0;
    private _ctrl = _grp controlsGroupCtrl 402;
    [ctrlParent _ctrl, _ctrl] call ace_arsenal_fnc_loadoutsChangeTab;
    ctrlSetFocus _ctrl;
  }, _this, 0.1] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_addEventHandler;

["ace_arsenal_loadoutsDisplayClosed", {
  private _display = findDisplay 1127001;
  private _leftButton = _display displayCtrl 123123;
  private _rightButton = _display displayCtrl 123124;
  private _loadoutButton = _display displayCtrl 1234556;

  {
    _x ctrlShow true;
  } forEach [_leftButton, _rightButton, _loadoutButton];
}] call CBA_fnc_addEventHandler;

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

_action = ["APM_MedicalVehicle", "Make Medical Vehicle", "\z\ace\addons\medical_gui\ui\cross.paa",{_target setVariable ["ace_medical_isMedicalVehicle", true]}, {((call APM_ACE_base_condition) and !(_target call ace_medical_treatment_fnc_isMedicalVehicle) || (_player getVariable ["Ace_medical_medicClass",0]) == 2) and !(_target call ace_medical_treatment_fnc_isMedicalVehicle)}] call ace_interact_menu_fnc_createAction;
["LandVehicle", 0, ["ACE_MainActions"],_action,true] call ace_interact_menu_fnc_addActionToClass;
["Helicopter", 0, ["ACE_MainActions"],_action,true] call ace_interact_menu_fnc_addActionToClass;
["Ship", 0, ["ACE_MainActions"],_action,true] call ace_interact_menu_fnc_addActionToClass;

private _statement = {{_x setvariable ["acex_headless_blacklist",false,true];} forEach (curatorSelected select 0);};
_action = ["zeus_HC_disable","Enable Headless Client Transfer for Selected","",_statement,{true}] call ace_interact_menu_fnc_createAction;
[["ACE_ZeusActions", "ZeusUnits"], _action] call ace_interact_menu_fnc_addActionToZeus;

_statement = {{_x setvariable ["acex_headless_blacklist",true,true];} forEach (curatorSelected select 0);};
_action = ["zeus_HC_disable","Disable Headless Client Transfer for Selected","",_statement,{true}] call ace_interact_menu_fnc_createAction;
[["ACE_ZeusActions", "ZeusUnits"], _action] call ace_interact_menu_fnc_addActionToZeus;
