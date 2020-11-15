//Cache ressuply arsenal items on load
_configs = uiNamespace getVariable "ace_arsenal_configItems";
_mags = _configs select 2;
_thrown = _configs select 15;
_put = _configs select 16;
_misc_items = _configs select 17;
_all = _mags + _thrown + _put + _misc_items;
localNamespace setVariable ["resupply_arsenal_items", _all];

//Loadout tab events to hide/show custom buttons
["ace_arsenal_loadoutsDisplayOpened", {
  _display = findDisplay 1127001;
  _left_button = _display displayCtrl 123123;
  _right_button = _display displayCtrl 123124;
  _loadout_button = _display displayCtrl 1234556;

  {
    _x ctrlShow false;
  } forEach [_left_button, _right_button, _loadout_button];
  [{
    _display = _this select 0;
    _grp = (allControls _display select {ctrlClassName _x == "buttonBar"}) select 0;
    _ctrl = _grp controlsGroupCtrl 402;
    [ctrlParent _ctrl, _ctrl] call ace_arsenal_fnc_loadoutsChangeTab;
    ctrlSetFocus _ctrl;
  }, _this, 0.1] call CBA_fnc_waitAndExecute;
}] call CBA_fnc_addEventHandler;

["ace_arsenal_loadoutsDisplayClosed", {
  _display = findDisplay 1127001;
  _left_button = _display displayCtrl 123123;
  _right_button = _display displayCtrl 123124;
  _loadout_button = _display displayCtrl 1234556;

  {
    _x ctrlShow true;
  } forEach [_left_button, _right_button, _loadout_button];
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
