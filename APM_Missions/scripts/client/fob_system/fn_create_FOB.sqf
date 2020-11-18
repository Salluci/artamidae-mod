_this params ["_FOBtruck", "_caller",["_size",150,[150]]];

_pos = getPos _FOBtruck;

_markerName = format ["APM_fob_%1", _pos];
_marker = createMarker [_markerName, _pos];
_marker setMarkerShape "ELLIPSE";
_marker setMarkerSize [_size, _size];
_marker setMarkerBrush "Border";
_marker setMarkerColor "ColorBLUFOR";

["APM_FOB_Create", _pos] call CBA_fnc_serverEvent;
