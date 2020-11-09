params ["_fob_marker", "_budget"];

if (toUpper _fob_marker == "NONE") exitWith {
	systemChat "ERROR: No FOB detected.";
};

_var = format ["supply_%1", _fob_marker];

missionNamespace setVariable [_var, _budget, true];