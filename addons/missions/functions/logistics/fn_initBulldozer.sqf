//Bulldozer code
params ["_bulldozer"];
APM_Hidden_Terrain = missionNamespace getVariable ["APM_Hidden_Terrain", []];
APM_bulldozers = [];
private _bulldozerChildren =
{
	private _pos = _target modelToWorld [0,8,0];
	private _objects = (nearestTerrainObjects [_pos, [], 12, false, true]) select {!((getPos _x) in APM_Hidden_Terrain)};
	private _actionArray = [];
	private _code = {
		(_this select 0) call apm_missions_fnc_bulldozerHover;
	};
	{
		private _child_action = [format ["true_bulldoze_%1", _x], "Confirm", "", {
			(_this select 0) spawn apm_missions_fnc_bulldoze;
		}, {true}] call ace_interact_menu_fnc_createAction;
		private _action = [format ["bulldoze_%1", _x], "Bulldoze", "", _code, {true}, nil, nil, nil, nil, [nil, nil, nil, true, nil]] call ace_interact_menu_fnc_createAction;
		_actionArray pushBack [_action, [[_child_action, [], [_target,_x]]], [_target, _x]];
		if (_forEachIndex > 4) exitWith {};
	} forEach _objects;
	_actionArray
};
private _actionMenu = ["BulldozerMenu", "Bulldozer", "", {
	private _arrow = missionNamespace getVariable ["forklift_arrow", objNull];
	private _pos = _target modelToWorld [0,4,0];
	if (isNull _arrow) then {
		forklift_arrow = "VR_3DSelector_01_exit_F" createVehicleLocal _pos;
		forklift_arrow enableSimulation false;
		forklift_arrow setPos _pos;
		forklift_arrow attachTo [_target];
	} else {
		_arrow enableSimulation false;
		_arrow setPos _pos;
		_arrow attachTo [_target];
	};
}, {true}, _bulldozerChildren, nil, nil, nil, [false, false, false, true, false]] call ace_interact_menu_fnc_createAction;

[_bulldozer, 1, ["ACE_SelfActions"], _actionMenu] call ace_interact_menu_fnc_addActiontoObject;

//Vehicle specific inits

switch (true) do
{
	case (_bulldozer isKindOf "B_APC_Tracked_01_CRV_F") : {
		_bulldozer animateSource ["HideTurret", 1];
		_bulldozer animateSource ["showAmmobox", 1];
		_bulldozer animateSource ["showBags", 1];
		_bulldozer animateSource ["showCamonetHull", 1];
		_bulldozer animateSource ["showCamomnetPlates1", 1];
		_bulldozer animateSource ["showCamomnetPlates2", 1];
		_bulldozer lockTurret [[0],true];
		private _weapons = _bulldozer weaponsTurret [0];
		{
			_bulldozer removeWeaponTurret [_x, [0]];
		} forEach _weapons;
	};
	default {};
};
APM_bulldozers pushBack _bulldozer;
