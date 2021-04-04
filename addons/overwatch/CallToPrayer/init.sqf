if (!isServer) exitWith {};

_CalltoPrayerDebug = false;
_functions = execVM "CallToPrayer\functions.sqf";
waitUntil {scriptDone _functions};

//-- Get cities
_cities = [] call CalltoPrayer_fnc_getCities;

CalltoPrayerLoudspeakers = [];
{
	_spawnPos = [_x select 0, 20,50,3,0,0,0] call BIS_fnc_findSafePos;
	_pole = "Land_Loudspeakers_F" createVehicle _spawnPos;
	CalltoPrayerLoudspeakers pushBack _pole;
	if (_CalltoPrayerDebug) then {
		_n = format["%1", floor (random 1000)];
		_marker = createMarker [_n, _spawnPos];
		_marker setMarkerShape "ICON";
		_marker setMarkerType "mil_dot";
		_marker setMarkerText "Spawn Pos";
	};
} forEach _cities;

[] call CalltoPrayer_fnc_prayerLoop;