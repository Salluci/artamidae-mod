params ["_name"];

if (!isServer) exitWith {false};

private _center = (APM_fobObjects select {(_x getVariable "APM_fobName") == _name}) select 0;
private _index = _center getVariable ["APM_fobIndex", -1];

APM_fobList deleteAt _index;
deleteMarker (_center getVariable "APM_fobMarker");
deleteMarker (APM_fobMarkers select _index);
APM_fobMarkers deleteAt _index;
publicVariable "APM_fobMarkers";
APM_fobUsedNames deleteAt _index;
publicVariable "APM_fobUsedNames";
APM_fobObjects deleteAt _index;
publicVariable "APM_fobObjects";

deleteVehicle _center;

{
  private _name = _x getVariable ["APM_fobName", ""];
  private _index = APM_fobList findIf {_x select 2 == _name};
  if (_index == -1 || {_name == ""}) then {continue};
  _x setVariable ["APM_fobIndex", _index, true];
} forEach APM_fobObjects;

true
