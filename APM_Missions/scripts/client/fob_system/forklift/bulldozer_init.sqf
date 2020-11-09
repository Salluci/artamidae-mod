//Bulldozer code
APM_Hidden_Terrain = missionNamespace getVariable ["APM_Hidden_Terrain", []];
_dozer_children = {
	
	private _pos = _target modelToWorld [0,6,0];
	private _objects = (nearestTerrainObjects [_pos, [], 12, false, true]) select {!((getPos _x) in APM_Hidden_Terrain)};
	_objects = _objects + ((_pos nearObjects ["House", 25]) select {!((getPos _x) in APM_Hidden_Terrain)});
	private _action_array = [];
	private _code = {
		(_this select 0) call forklift_onHoverBulldozer;
	};
	{
		private _child_action = [format ["true_bulldoze_%1", _x], "Confirm", "", {
			(_this select 0) spawn forklift_bulldozer;
		}, {true}] call ace_interact_menu_fnc_createAction;
		private _action = [format ["bulldoze_%1", _x], "Bulldoze", "", _code, {true}, nil, nil, nil, nil, [nil, nil, nil, true, nil]] call ace_interact_menu_fnc_createAction;
		_action_array pushBack [_action, [[_child_action, [], [_target,_x]]], [_target, _x]];
		if (_forEachIndex > 4) exitWith {};
	} forEach _objects;
	_action_array
};
_action_menu = ["BulldozerMenu", "Bulldozer", "", {
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
}, {true}, _dozer_children, nil, nil, nil, [false, false, false, true, false]] call ace_interact_menu_fnc_createAction;

[_this, 1, ["ACE_SelfActions"], _action_menu] call ace_interact_menu_fnc_addActiontoObject;

//Vehicle specific inits
_class = typeOf _this;

switch _class do {
	case "B_APC_Tracked_01_CRV_F" : {
		_this animate ["HideTurret", 1];
		_this animate ["showAmmobox", 1];
		_this animate ["showBags", 1];
		_this animate ["showCamonetHull", 1];
		_this animate ["showCamomnetPlates1", 1];
		_this animate ["showCamomnetPlates2", 1];
		_weapons = _this weaponsTurret [0];
		{
			_this removeWeaponTurret [_x, [0]];
		} forEach _weapons;
	};
	default {};
};