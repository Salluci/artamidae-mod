_pos = for "_k" from 0 to 1000 do {
	_result = ["base_marker"] call CBA_fnc_randPosArea;
	if (surfaceIsWater _result) exitWith {_result};
	"error"
};

if (_pos isEqualType "") then {
	systemChat "No available spawn found in base marker, searching whole map";
	_pos = for "_k" from 0 to 1000 do {
		_result = [[0,0], worldSize/2, worldSize/2, 0, true] call CBA_fnc_randPosArea;
		if (surfaceIsWater _result) exitWith {_result};
		[0,0,0]
	};
};

_pos