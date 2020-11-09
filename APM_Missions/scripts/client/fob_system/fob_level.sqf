_start_pos = _this;

if (typeName _start_pos == "OBJECT") then {
	_start_pos = getPos _start_pos;
};

_markers = allMapMarkers select {["APM_fob", _x] call BIS_fnc_inString};

if ((count _markers) == 0) exitWith {player setVariable ["Current_fob", "None"]; -1};

_result = -1;
_current_marker = "";
{
	if (_start_pos inArea _x) exitWith {
		_result = 0;
		_current_marker = _x;
	}; 
} forEach _markers;

if (_result == -1) exitWith {-1};

//If in area, check each objects modification
player setVariable ["Current_fob", _current_marker];
_markerPos = getMarkerPos _current_marker;
_objects = nearestObjects [_markerPos, [], 100];

if ((count _objects) == 0) exitWith {0};

{
	_value = _x getVariable ["APM_Fob_modifier", 0];
	_result = _result max _value;
} forEach _objects;

_result