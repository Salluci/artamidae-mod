_helipads = [0,0] nearObjects ["Helipad_base_F", worldSize];
_helipads_in_marker = [];
{
	_results = _helipads inAreaArray _x;
	_helipads_in_marker = _helipads_in_marker + _results;
} forEach base_marker_array;

if (count _helipads_in_marker == 0) exitWith {[[[position player, 7, 7, 0, false], true] call CBA_fnc_randPosArea, getDir player]};

_result = for "_i" from 0 to 1000 do {
	_pad = selectRandom _helipads_in_marker;
	_helicopters = (position _pad) nearObjects ["Air", 3];
	if (count _helicopters == 0) exitWith {[position _pad, getDir _pad]};
	"error"
};

if (_result isEqualType "") then {
	_result = [[[position player, 7, 7, 0, false], true] call CBA_fnc_randPosArea, getDir player];
};

_result