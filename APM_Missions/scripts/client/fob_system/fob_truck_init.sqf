_cond = {
	_eng = player getVariable ["ACE_isEngineer", 0];
	(((getPos player) call get_fob_level) == -1) and !(call APM_ACE_base_condition) and (_eng > 0) and (alive _target)
};

_action = ["createFOB", "Create FOB Here", "", {
	_this call fn_create_FOB;
}, _cond] call ace_interact_menu_fnc_createAction;

[_this, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_cond2 = {
	_eng = player getVariable ["ACE_isEngineer", 0];
	(((getPos player) call get_fob_level) != -1) and !(call APM_ACE_base_condition) and (_eng > 0) and (alive _target)
};

_action2 = ["deleteFOB", "Delete This FOB", "", {
	_this spawn fn_delete_fob;
}, _cond2] call ace_interact_menu_fnc_createAction;

[_this, 0, ["ACE_MainActions"], _action2] call ace_interact_menu_fnc_addActionToObject;

//[[_this, 0, ["ACE_MainActions"], _action2], ace_interact_menu_fnc_addActionToObject] remoteExec ["call", 0, true];
_build_cond = {
	_eng = player getVariable ["ACE_isEngineer", 0];
	(((getPos player) call get_fob_level) >= 0) and (_eng > 0) and (alive _target)
};

_build_action = ["fob_build", "Open FOB Menu", "", {
	_this call fob_menu;
}, _build_cond] call ace_interact_menu_fnc_createAction;


//[[_this, 0, ["ACE_MainActions"], _build_action], ace_interact_menu_fnc_addActionToObject] remoteExec ["call", 0, true];
[_this, 0, ["ACE_MainActions"], _build_action] call ace_interact_menu_fnc_addActionToObject;
_repeat_cond = {
	_last_item = missionNamespace getVariable ["FOB_last_classname", ""];
	(((getPos player) call get_fob_level) > -1) and (_last_item != "") and (alive _target)
};

_repeat_mod = {
	params ["_target", "_player", "_params", "_actionData"];
	_displayname = getText (configFile >> "CfgVehicles" >> FOB_last_classname >> "displayname");
	_new_title = format ["Repeat Build: %1", _displayname];
	_actionData set [1, _new_title];
};

_repeat_action = ["fob_repeat_build", "Repeat Build: ", "", {
	//Check price first
	_budget = [(player getVariable ["Current_fob", "NONE"])] call fob_fnc_getSupply;
	if (FOB_last_price > _budget) exitWith {systemChat "Budget will not allow rebuild!"};
	_budget = _budget - FOB_last_price;
	[(player getVariable ["Current_fob", "NONE"]), _budget] call fob_fnc_setSupply;
	//Create Object behind vehicle
	_object = FOB_last_classname createVehicle [0,0,0];
	_dist = abs ((boundingBox _object) select 1 select 1);
	_dist2 = abs ((boundingBox previous_fob_truck) select 0 select 1);
	_dist = _dist + _dist2;
	_pos = previous_fob_truck modelToWorld [0, - _dist - 1, 0];
	_object setDir (getDir previous_fob_truck);
	_object setPos _pos;
	//Give R3F to object hopefully
	[_object] execVM "R3F_LOG\heliporteur\heliporteur_init.sqf";

	//Apply code to object
	[_object, FOB_last_code] spawn {
		sleep 2;
		_this remoteExec ["call", 0];
	};
	_object setVariable ["object_init", FOB_last_code, true];
	_object setVariable ["APM_save_object", true, true];
	_object setVariable ["APM_FOB_Price", FOB_last_price, true];

}, _repeat_cond, nil, nil, nil, nil, nil, _repeat_mod] call ace_interact_menu_fnc_createAction;

//[[_this, 0, ["ACE_MainActions"], _repeat_action], ace_interact_menu_fnc_addActionToObject] remoteExec ["call", 0, true];
[_this, 0, ["ACE_MainActions"], _repeat_action] call ace_interact_menu_fnc_addActionToObject;

//FOB Save/Load options
_save_load_menu = ["fob_save_load", "Save/Load FOB Templates", "", {hintSilent "Contains options to save/load FOB templates"}, _cond2, nil, nil, nil, nil, [nil, nil, nil, {true}, nil]] call ace_interact_menu_fnc_createAction;
[_this, 0, ["ACE_MainActions"], _save_load_menu] call ace_interact_menu_fnc_addActionToObject;

_save_action = ["FOB_save", "Save Current FOB", "", {
	[fob_saveFOB, _this, 0.1] call CBA_fnc_waitAndExecute;
}, {true}] call ace_interact_menu_fnc_createAction;
[_this, 0, ["ACE_MainActions", "fob_save_load"], _save_action] call ace_interact_menu_fnc_addActionToObject;

_load_action = ["FOB_load", "Load FOB Template", "", {
	[fob_loadFOB, _this, 0.1] call CBA_fnc_waitAndExecute;
}, {true}] call ace_interact_menu_fnc_createAction;
[_this, 0, ["ACE_MainActions", "fob_save_load"], _load_action] call ace_interact_menu_fnc_addActionToObject;
