//FOB functions and defines

fob_truck_init = compile preprocessFileLineNumbers "scripts\client\fob_system\fob_truck_init.sqf";
get_fob_level = compile preprocessFileLineNumbers "scripts\client\fob_system\fob_level.sqf";
fn_create_FOB = compile preprocessFileLineNumbers "scripts\client\fob_system\fn_create_FOB.sqf";
fn_delete_FOB = compile preprocessFileLineNumbers "scripts\client\fob_system\fn_delete_FOB.sqf";
fob_menu = compile preprocessFileLineNumbers "scripts\client\fob_system\fob_menu.sqf";
fob_veh_shop = compile preprocessFileLineNumbers  "scripts\client\fob_system\fn_openShop.sqf";
fob_create_zeus = compile preprocessFileLineNumbers "scripts\client\fob_system\fob_create_zeus.sqf";
fob_refresh_list = compile preprocessFileLineNumbers "scripts\client\fob_system\fob_refresh_list.sqf";
fob_loadFOB = compile preprocessFileLineNumbers "scripts\client\fob_system\fn_load_fob.sqf";
fob_saveFOB = compile preprocessFileLineNumbers "scripts\client\fob_system\fn_save_fob.sqf";
[] execVM "scripts\client\fob_system\fob_templates.sqf";
[] call compile preprocessFileLineNumbers "scripts\client\fob_system\forklift\init.sqf";
[] call compile preprocessFileLineNumbers "scripts\client\fob_system\supply\init.sqf";
//Map marker events

addMissionEventHandler ["Map", {
	params ["_opened"];

	if (_opened) then [{
		//Opened code
		_Fob_markers = allMapMarkers select {["APM_fob", _x] call BIS_fnc_inString};
		{
			_fob_level = (getMarkerPos _x) call get_fob_level;
			_fob_supply = _x call fob_fnc_getSupply;
			_new_marker_name = format ["Fob Level: %1", _fob_level];
			_new_marker = createMarkerLocal [format ["FOB_Name_marker_%1", _x], getMarkerPos _x];
			_new_marker setMarkerShapeLocal "ICON";
			_new_marker setMarkerTypeLocal "b_hq";
			_new_marker setMarkerTextLocal _new_marker_name;
			_pos2 = getMarkerPos _x;
			_pos2 set [1, (_pos2#1 - 25)];
			_supply_marker = createMarkerLocal [format ["FOB_Supply_marker_%1", _x], _pos2];
			_supply_marker setMarkerShapeLocal "ICON";
			_supply_marker setMarkerTypeLocal "hd_dot";
			_supply_marker setMarkerTextLocal format ["Supply: %1", _fob_supply];
		} forEach _Fob_markers;
	}, {
		//Closed code
		_Fob_markers = allMapMarkers select {(["FOB_Name_marker", _x] call BIS_fnc_inString) or (["FOB_Supply_marker", _x] call BIS_fnc_inString)};
		{
			deleteMarkerLocal _x;
		} forEach _Fob_markers;
	}];
}];

//Vehicle shop at fob
_cond = {
	((getPos player) call get_fob_level) >= 3
};
_action = ["apm_openShopFOB", "Open Vehicle Shop (FOB)", "res\ace_icons\vic_shop_ca.paa", {
	[] call fob_veh_shop;
}, _cond] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

//Post-init confirm all objects inits

waitUntil {
	alive player
};

_objects = (allMissionObjects "All") select {_x getVariable ["APM_save_object", false]};
{
	_code = _x getVariable ["object_init", {}];
	_x call _code;
} foreach _objects;
