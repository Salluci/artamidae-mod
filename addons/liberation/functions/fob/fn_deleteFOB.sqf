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

true
