if (!isServer) exitWith {};

private _markersArray = [[],[]];
private _lineMarkers = APM_lineMarkers;
private _iconMarkers = APM_iconMarkers;
{
  _y params ["_path","_pos", "_color"];
  (_markersArray select 0) pushBack [_path, _pos, _color];
} forEach _lineMarkers;
{
  _y params ["_text", "_pos", "_icon", "_dir", "_color"];
  (_markersArray select 1) pushBack [_text, _pos, _icon, _dir, _color]
} forEach _iconMarkers;

_markersArray
