params ["_pos", ["_size", APM_fobRange], ["_name", ""], ["_supplies", 0], ["_level", 0], ["_hasRespawn", false]];

if (count APM_fobUsedNames > count APM_fobNames || {_name in APM_fobUsedNames}) exitWith {false};
if (!isServer) exitWith {false};

private _tooClose = {
  private _range = (_x getVariable ["APM_fobSize", 150]) + _size;
  if (_pos distance2D _x < _range) then {breakWith true};
  false
} forEach APM_fobObjects;

if (_tooClose) exitWith {false};

if (_name isEqualTo "") then {
  private _possibleNames = APM_fobNames select {!(_x in APM_fobUsedNames)};
  _name = selectRandom _possibleNames;
  APM_fobUsedNames pushBack _name;
};
private _markerName = format ["APM_FOB_%1", _name];
private _markerArea = format ["APM_areaFOB_%1", _name];

private _center = createVehicle ["Land_HelipadEmpty_F", _pos, [], 0, "CAN_COLLIDE"];

_center setVariable ["APM_fobLevel", _level, true];
_center setVariable ["APM_fobName", _name, true];
_center setVariable ["APM_fobSize", _size, true];
_center setVariable ["APM_fobSupply", _supplies, true];
_center setVariable ["APM_fobPos", _pos, true];
_center setVariable ["APM_fobMarker", _markerName, true];
APM_fobObjects pushBack _center;
publicVariable "APM_fobObjects";

if (_size > APM_fobLargestSize) then {
  APM_fobLargestSize = _size;
  publicVariable "APM_fobLargestSize";
};

if (!_hasRespawn) then {
  _hasRespawn = [false, true] select (_level > 2);
};

_center hideObjectGlobal true;
_center enableSimulationGlobal false;
_center setVariable ["ALiVE_SYS_LOGISTICS_DISABLE", true, true];

private _data = [_pos, _size, _name, _supplies, _level, _hasRespawn];
private _index = APM_fobList pushBack _data;
_center setVariable ["APM_fobIndex", _index, true];

createMarkerLocal [_markerName, _pos];
private _type = ["Patrol Base", "Camp", "Outpost", "FOB"] select _level;
_name = _type + " " + _name;
if (_hasRespawn) then {
  [west, "Land_ClutterCutter_small_F" createVehicle getPosATL (_center), _name] call BIS_fnc_addRespawnPosition;
  _center setVariable ["apm_fobHasRespawn", true, true];
};
_markerName setMarkerShapeLocal "ICON";
_markerName setMarkerTypeLocal "b_hq";
_markerName setMarkerColorLocal "ColorWEST";
_markerName setMarkerText _name;

createMarkerLocal [_markerArea, _pos];
_markerArea setMarkerShapeLocal "ELLIPSE";
_markerArea setMarkerColorLocal "ColorWEST";
_markerArea setMarkerSizeLocal [_size, _size];
_markerArea setMarkerBrushLocal "SolidBorder";
_markerArea setMarkerAlpha 0.25;

APM_fobMarkers pushBack _markerArea;
publicVariable "APM_fobMarkers";
