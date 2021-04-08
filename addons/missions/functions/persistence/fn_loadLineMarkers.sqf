params ["_markerArray"];

private _count = {"_USER_DEFINED #2" in _x} count allMapMarkers;

{
  _x params ["_path", "_pos", "_color"];
  private _name = format ["_USER_DEFINED #2/%1/2", _count];
  _marker = createMarkerLocal [_name, _pos];
  _marker setMarkerShapeLocal "POLYLINE";
  _marker setMarkerPolylineLocal _path;
  _marker setMarkerColor _color;
  ["APM_lineMarkerCreated", [_marker, _path, _pos, _color]] call CBA_fnc_serverEvent;
  _count = _count + 1;
} forEach _markerArray;

diag_log format ["APM: Loaded %1 line markers from save.", count _markerArray];

_count
