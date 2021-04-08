params ["_markerArray"];

private _count = {"_USER_DEFINED #2" in _x} count allMapMarkers;

{
  _x params ["_text", "_pos", "_icon", "_dir", "_color"];
  if (_color == "Default") then {continue};
  private _name = format ["_USER_DEFINED #2/%1/2", _count];
  _marker = createMarkerLocal [_name, _pos];
  _marker setMarkerShapeLocal "ICON";
  _marker setMarkerTextLocal _text;
  _marker setMarkerTypeLocal _icon;
  _marker setMarkerDirLocal _dir;
  _marker setMarkerColor _color;
  ["APM_iconMarkerCreated", [_marker, _text, _pos, _icon, _dir, _color]] call CBA_fnc_serverEvent;
  _count = _count + 1;
} forEach _markerArray;

diag_log format ["APM: Loaded %1 icon markers from save.", count _markerArray];

_count
