params [["_minutes", 15, [0]]];

_markers = allMapMarkers select {["APM_fob", _x] call BIS_fnc_inString};
_base_markers = allMapMarkers select {["base_marker", _x] call BIS_fnc_inString};

_marker_saves = [];
_objects_array = [];
{
	_marker_pos = getMarkerPos _x;
	_marker_size = (getMarkerSize _x) select 0;
	_marker_saves pushBackUnique [_x, _marker_pos, _marker_size];
	_objects = (_marker_pos nearEntities _marker_size) select {!(_x isKindOf "Man")};
	_objects = _objects + (_marker_pos nearObjects ["Static", _marker_size]);
	{
		_class = typeOf _x;
		_pos = position _x;
		_dir = getDir _x;
		_vec = vectorUp _x;
		_code = _x getVariable ["object_init", {}];
		if ((typeName _code) == "CODE") then {_code = str _code};
		_objects_array pushBackUnique [_class, _pos, _dir, _vec, _code];
	} forEach _objects;
} forEach _markers;

{
	_objects = vehicles inAreaArray _x;
	{
		_class = typeOf _x;
		_pos = position _x;
		_dir = getDir _x;
		_vec = vectorUp _x;
		_code = _x getVariable ["object_init", {}];
		if ((typeName _code) == "CODE") then {_code = str _code};
		_objects_array pushBackUnique [_class, _pos, _dir, _vec, _code];
	} forEach _objects;
} forEach _base_markers;

_map_name = format ["%1_APM_worldSave_markers", worldName];
profileNamespace setVariable [_map_name, _marker_saves];

_objects_name = format ["%1_APM_worldSave_objects", worldName];
profileNamespace setVariable [_objects_name, _objects_array];

profileNamespace setVariable [format ["APM_budget_%1", worldName], APM_budget];

saveProfileNamespace;

//Save all player data
{
	_uid = getPlayerUID _x;
	_loadout = getUnitLoadout _x;
	_result = "extDB3" callExtension format ["0:SQL:UPDATE users SET loadout = %1 WHERE uid = %2",str str _loadout, str _uid];
} forEach allPlayers;

[fnc_save_world, [_minutes], _minutes * 60] call CBA_fnc_waitAndExecute;