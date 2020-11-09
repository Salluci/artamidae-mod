_marker = [player, allMapMarkers, 150, {["FOB", _x] call BIS_fnc_inString}] call CBA_fnc_getNearest;

if ((count _marker) == 0) exitWith {
	systemChat "You are not close enough to a marker. Please move closer to marker center.";
};

_confirm = ["Delete this FOB?", "Delete FOB and Fortifications?", "Confirm Delete", "Cancel"] call BIS_fnc_guiMessage;

if !(_confirm) exitWith {};

_marker = _marker select 0;

_objects = (allMissionObjects "All") select {_x getVariable ["APM_save_object", false]};

{
	if !(_x isKindOf "AllVehicles") then {
		deleteVehicle _x;
	};
} forEach _objects;
_pos = getMarkerPos _marker;

deleteMarker _marker;
["APM_FOB_Delete", _pos] call CBA_fnc_serverEvent;


hint "FOB deleted with all its contents.";
