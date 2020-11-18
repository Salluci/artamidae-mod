params [["_minutes", 15, [0]]];

//FOB markers
_markers = allMapMarkers select {["APM_fob", _x] call BIS_fnc_inString};

_marker_saves = [];
_supply_array = [];
{
	_marker_pos = getMarkerPos _x;
	_marker_size = (getMarkerSize _x) select 0;
	_var = _marker_saves pushBackUnique [_x, _marker_pos, _marker_size];
	if (_var != -1) then {
		_supply = _x call fob_fnc_getSupply;
		_supply_array pushBack _supply;
	};
} forEach _markers;

_map_name = format ["%1_APM_worldSave_markers", worldName];
profileNamespace setVariable [_map_name, _marker_saves];
_supply_name = format ["%1_supplies", worldName];
profileNameSpace setVariable [_supply_name, _supply_array];

//All entities to save
_objects_array = [];
_objects = (allMissionObjects "All") select {_x getVariable ["APM_save_object", false]};
{
	_class = typeOf _x;
	_pos = position _x;
	_dir = getDir _x;
	_vec = vectorUp _x;
	_code = _x getVariable ["object_init", {}];
	if ((typeName _code) == "CODE") then {_code = str _code};
	_price = _x getVariable ["APM_FOB_Price", 0];
	_objects_array pushBackUnique [_class, _pos, _dir, _vec, _code, _price];
} forEach _objects;

_objects_name = format ["%1_APM_worldSave_objects", worldName];
profileNamespace setVariable [_objects_name, _objects_array];

profileNamespace setVariable [format ["APM_budget_%1", worldName], APM_budget];

//Save hidden terrain objects
_hidden_terrain = missionNamespace getVariable ["APM_Hidden_Terrain", []];
profileNameSpace setVariable [format ["Hidden_Terrain_%1", worldName], _hidden_terrain];

saveProfileNamespace;

[fnc_save_world, [_minutes], _minutes * 60] call CBA_fnc_waitAndExecute;