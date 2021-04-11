params [["_truck", objNull]];

if (isNull _truck) exitWith {false};

if (isNil {_truck getVariable "APM_fobSupply"}) then {
	_truck setVariable ["APM_fobSupply", 5000, true];
};

private _cond = {
	alive _target && {(_target call apm_missions_fnc_currentFOB) select 1 == -1} && {!(call APM_ACE_base_condition)}
};

private _action = ["APM_createFOB", "Create FOB Here", "", {
	["APM_createFOB", [getPosATL _target, APM_fobRange, "", (_target getVariable ["APM_fobSupply", 0]), 0, false]] call CBA_fnc_serverEvent;
	_target setVariable ["APM_fobSupply", 0, true];
}, _cond] call ace_interact_menu_fnc_createAction;
[_truck, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_cond = {
	alive _target && {(_target call apm_missions_fnc_currentFOB) select 1 >= 0}
};

_action = ["APM_deleteFOB", "Package this FOB", "", {
	[_target] spawn {
		private _result = ["This will remove all upgrades. Any remaining supplies will be added back to this object.", "Package FOB", "Confirm", "Cancel"] call BIS_fnc_guiMessage;
		if (_result) then {
			["APM_deleteFOB", [(_this select 0 call apm_missions_fnc_currentFOB) select 2, _this select 0]] call CBA_fnc_serverEvent;
		};
	};
}, _cond] call ace_interact_menu_fnc_createAction;
[_truck, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

private _build_action = ["APM_fobBuild", "Open Build Menu", "", {
	call apm_missions_fnc_menuFOB;
}, _cond] call ace_interact_menu_fnc_createAction;
[_this, 0, ["ACE_MainActions"], _build_action] call ace_interact_menu_fnc_addActionToObject;

private _upgradeCond = {
	_target call apm_missions_fnc_currentFOB params ["", "_level", "", "_supply"];
	if (_level == -1 || {!alive _target} || _level >= 3) exitWith {false};
	private _cost = [5000, 7500, 10000] select _level;

	_supply >= _cost
};
private _upgradeAction = ["APM_upgradeFOB", "Upgrade FOB", "", {
	_target call apm_missions_fnc_currentFOB params ["_center", "_level", "", "_supply"];
	private _cost = [5000, 7500, 10000] select _level;
	private _hint = "Upgrade FOB to Level " + str (_level + 1) + "? This will cost " + str _cost + " supplies. New total: " + str (_supply - _cost) + " supplies.";
	[_hint, _target, _center, _level, _cost] spawn {
		private _result = [_this select 0, "Upgrade FOB", "Confirm", "Cancel"] call BIS_fnc_guiMessage;
		if (_result) then {
			_this select 1 call apm_missions_fnc_currentFOB params ["_center", "_level", "", "_supply"];
			["APM_upgradeFOB", [_this select 1, _this select 2, (_this select 3) + 1]] call CBA_fnc_serverEvent;
			["APM_fobUpdateSupply", [_this select 2, (_this select 4) * -1]] call CBA_fnc_serverEvent;
		};
	};
}, _upgradeCond] call ace_interact_menu_fnc_createAction;
[_truck, 0, ["ACE_MainActions"], _upgradeAction] call ace_interact_menu_fnc_addActionToObject;

private _repeat_cond = {
	private _last_item = missionNamespace getVariable ["FOB_last_classname", ""];
	(_target call apm_missions_fnc_currentFOB) select 1 >= 0 && {_last_item != ""} && {alive _target}
};

private _repeat_mod = {
	params ["_target", "_player", "_params", "_actionData"];
	private _displayname = getText (configFile >> "CfgVehicles" >> FOB_last_classname >> "displayname");
	private _new_title = format ["Repeat Build: %1", _displayname];
	_actionData set [1, _new_title];
};

private _repeat_action = ["fob_repeat_build", "Repeat Build: ", "", {
	//Check price first
	private _budget = (_target call apm_missions_fnc_currentFob) select 3;
	if (FOB_last_price > _budget) exitWith {systemChat "Budget will not allow rebuild!"};
	["APM_fobUpdateSupply", [_center, FOB_last_price * -1]] call CBA_fnc_serverEvent;

	private _object = [FOB_last_classname, "", FOB_last_price, 0, FOB_last_code] call APM_missions_fnc_spawnVehicle;
	_object setVariable ["APM_FOB_Price", FOB_last_price, true];

}, _repeat_cond, nil, nil, nil, nil, nil, _repeat_mod] call ace_interact_menu_fnc_createAction;

[_this, 0, ["ACE_MainActions"], _repeat_action] call ace_interact_menu_fnc_addActionToObject;

//FOB Save/Load options
private _save_load_menu = ["fob_save_load", "Save/Load FOB Templates", "", {}, _cond, nil, nil, nil, nil, [nil, nil, nil, {true}, nil]] call ace_interact_menu_fnc_createAction;
[_this, 0, ["ACE_MainActions"], _save_load_menu] call ace_interact_menu_fnc_addActionToObject;

private _save_action = ["FOB_save", "Save Current FOB", "", {
	[apm_missions_fnc_saveFOB, _this, 0.1] call CBA_fnc_waitAndExecute;
}, {true}] call ace_interact_menu_fnc_createAction;
[_this, 0, ["ACE_MainActions", "fob_save_load"], _save_action] call ace_interact_menu_fnc_addActionToObject;

private _load_action = ["FOB_load", "Load FOB Template", "", {
	[apm_missions_fnc_loadFOB, _this, 0.1] call CBA_fnc_waitAndExecute;
}, {true}] call ace_interact_menu_fnc_createAction;
[_this, 0, ["ACE_MainActions", "fob_save_load"], _load_action] call ace_interact_menu_fnc_addActionToObject;
