_veh = _this;

//condition
_cond_menu = {
	_eng = player getVariable ["ACE_isEngineer", 0];
	_item = _target getVariable ["APM_forklift_object", objNull];
	(((getPos player) call get_fob_level) >= 0) and (_eng > 0) and (alive _target) and (isNull _item)
};

_child_menu = {
	private _pos = _target modelToWorld [0,4,0];
	private _objects = (nearestObjects [_pos, [], 6, true]) select {_x getVariable ["APM_save_object", false]};
	_objects = _objects - [_target];
	private _action_array = [];
	private _mod_fnc = {
		
	};
	private _code = {
		(_this select 0) call forklift_onHover;
	};
	private _single_child = [(format ["true_pickup_%1", _this select 0]), "Pickup", ["", "#0000FF"], {
		(_this select 0) spawn forklift_pickup;
		},{true}] call ace_interact_menu_fnc_createAction;
	private _delete_child = [(format ["true_delete_%1", _this select 0]), "Delete", ["", "#FF0000"], {
		_item = _this select 0 select 1;
		deleteVehicle _item;
		},{true}] call ace_interact_menu_fnc_createAction;
	{
		private _class = typeOf _x;
		private _name = getText (configFile >> "CfgVehicles" >> _class >> "displayName");
		private _action = [(format ["pickup_%1", _x]), _name, "", _code,{true}, nil, nil, nil, nil, [nil, nil, nil, true, nil], _mod_fnc
		] call ace_interact_menu_fnc_createAction;
		_action_array pushBack [_action, [[_single_child, [], [_target,_x]], [_delete_child, [], [_target,_x]]], [_target, _x]];
		if (_forEachIndex > 4) exitWith {};
	} forEach _objects;
	_action_array
};

_action_menu = ["forkliftMenu", "Forklift Pickup/Delete", "", {
	_arrow = missionNamespace getVariable ["forklift_arrow", objNull];
	if (isNull _arrow) then {
		_pos = _target modelToWorld [0,4,0];
		forklift_arrow = "VR_3DSelector_01_exit_F" createVehicleLocal _pos;
		forklift_arrow enableSimulation false;
		forklift_arrow setPos _pos;
		forklift_arrow attachTo [_target];
	} else {
		_pos = _target modelToWorld [0,4,0];
		_arrow enableSimulation false;
		_arrow setPos _pos;
		_arrow attachTo [_target];
	};
}, _cond_menu, _child_menu, nil, nil, nil, [false, false, false, true, false]] call ace_interact_menu_fnc_createAction;

[_veh, 1, ["ACE_SelfActions"], _action_menu] call ace_interact_menu_fnc_addActiontoObject;

_drop_action = ["Forklift_drop", "Drop Object", "", {
	_this call forklift_drop;
}, {
	_item = _target getVariable ["APM_forklift_object", objNull];
	!isNull _item
}] call ace_interact_menu_fnc_createAction;

[_veh, 1, ["ACE_SelfActions"], _drop_action] call ace_interact_menu_fnc_addActiontoObject;