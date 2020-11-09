_this params ["_FOBtruck", "_caller"];

_pos = getPos _FOBtruck;

_markerName = format ["APM_fob_%1", _pos];
_marker = createMarker [_markerName, _pos];
_marker setMarkerShape "ELLIPSE";
_marker setMarkerSize [150, 150];
_marker setMarkerBrush "Border";
_marker setMarkerColor "ColorBlue";

["APM_FOB_Create", _pos] call CBA_fnc_serverEvent;