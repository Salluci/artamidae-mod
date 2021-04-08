params ["_object", ["_center", objNull], ["_level", -1]];

if (!isServer) exitWith {false};

if (isNull _center) then {
  _center = (getPosATL _object) nearestObject "Land_HelipadEmpty_F";
  if (isNull _center) exitWith {false};
  if (_object distance2D _center > APM_fobRange) exitWith {false};
};

if (_level == -1) then {
  _level = (_center getVariable ["APM_fobLevel", -1]) + 1;
  if (_level == 0) exitWith {false};
};

_center setVariable ["APM_fobLevel", _level, true];

private _name = _center getVariable ["APM_fobName", ""];
private _type = APM_fobTypes select _level;
_name = _type + " " + _name;
_center setVariable ["APM_fobDisplayName", _name, true];

private _marker = _center getVariable ["APM_fobMarker", ""];
_marker setMarkerText _name;

private _hasRespawn = [false, true] select (_level > 2);
if (_hasRespawn && {!(_center getVariable ["apm_fobHasRespawn", false])}) then {
  private _point = "Land_ClutterCutter_small_F" createVehicle getPosATL _center;
  _point setVariable ["Name", _name, true];
  [west, _point, _name] call BIS_fnc_addRespawnPosition;
  _center setVariable ["apm_fobHasRespawn", true, true];
};

private _index = _center getVariable ["APM_fobIndex", -1];
(APM_fobList select _index) set [4, _level];
(APM_fobList select _index) set [5, _hasRespawn];
