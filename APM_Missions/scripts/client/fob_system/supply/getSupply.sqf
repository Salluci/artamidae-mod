params ["_fob_marker"];

if (toUpper _fob_marker == "NONE") exitWith {0};

_var = format ["supply_%1", _fob_marker];

_result = missionNamespace getVariable [_var, 5000];

_result 