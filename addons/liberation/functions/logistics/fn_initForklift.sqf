params ["_vehicle"];

//condition
private _condition = {
	private _item = _target getVariable ["APM_forklift_object", objNull];
	(alive _target) && {isNull _item};
};

private _childMenu = {
	private _pos = _target modelToWorld [0,4,0];
	private _objects = (nearestObjects [_pos, ["Thing","Static"], 6, true] select {!(_x call CBA_fnc_isTerrainObject)}) - [forklift_arrow];
	_objects = _objects - [_target];
	private _action_array = [];
	private _mod_fnc = {

	};
	private _code = {
		(_this select 0) call apm_missions_fnc_forkliftHover;
	};
	private _single_child = [(format ["true_pickup_%1", _this select 0]), "Pickup", ["", "#0000FF"], {
		(_this select 0) spawn apm_missions_fnc_forkliftPickup;
		},{true}] call ace_interact_menu_fnc_createAction;
	private _delete_child = [(format ["true_delete_%1", _this select 0]), "Delete", ["", "#FF0000"], {
		private _item = _this select 0 select 1;
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

private _actionMenu = ["forkliftMenu", "Forklift Pickup/Delete", "", {
	private _arrow = missionNamespace getVariable ["forklift_arrow", objNull];
	private _pos = _target modelToWorld [0,4,0];
	if (isNull _arrow) then
	{
		forklift_arrow = "VR_3DSelector_01_exit_F" createVehicleLocal _pos;
		forklift_arrow enableSimulation false;
		forklift_arrow setPos _pos;
		forklift_arrow attachTo [_target];
	} else
	{
		_arrow enableSimulation false;
		_arrow setPos _pos;
		_arrow attachTo [_target];
	};
}, _condition, _childMenu, nil, nil, nil, [false, false, false, true, false]] call ace_interact_menu_fnc_createAction;

[_vehicle, 1, ["ACE_SelfActions"], _actionMenu] call ace_interact_menu_fnc_addActiontoObject;

private _dropAction = ["apm_missions_fnc_forkliftDrop", "Drop Object", "", {
	_this call apm_missions_fnc_forkliftDrop;
}, {
	private _item = _target getVariable ["APM_forklift_object", objNull];
	!isNull _item
}] call ace_interact_menu_fnc_createAction;

[_vehicle, 1, ["ACE_SelfActions"], _dropAction] call ace_interact_menu_fnc_addActiontoObject;
