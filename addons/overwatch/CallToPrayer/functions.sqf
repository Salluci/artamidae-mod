/*
Author:

	Sacha

Last modified:

	7/23/2015
	Modified function originally written by Sacha, extracted from ALiVE Insurgency redux

Description:

	Finds type Village, City and capitals and adds a bunch of info into the array.
______________________________________________________*/
CalltoPrayer_fnc_getCities = {
	private ["_locations","_cityTypes","_randomLoc","_x","_cities"];
	_cities = [];

	_locations = configfile >> "CfgWorlds" >> worldName >> "Names";
	_cityTypes = ["NameVillage","NameCity","NameCityCapital","NameLocal"];

	for "_x" from 0 to (count _locations - 1) do {
		_randomLoc = _locations select _x;

		private["_cityPos","_cityType"];
		_cityPos = getArray(_randomLoc >> "position");
		_cityType = getText(_randomLoc >> "type");
		if (_cityType in _cityTypes) then {
			_cities pushBack [ _cityPos];
		};
	};
	_cities;
};

/////////////////////////////////////////////////////////////////////

/*
Author:

	Hazey

Last modified:

	2/12/2015
	Modified function originally written by Sacha, extracted from ALiVE Insurgency redux

Description:

	Main loop for the prayer.

______________________________________________________*/
CalltoPrayer_fnc_prayerLoop = {
	[] spawn {
		private ["_fnc_between","_fnc_prayer"];
		_fnc_between = {
			private ["_a","_b"];
			_a = _this select 0;
			_b = _this select 1;

			(daytime >= _a AND daytime < _b)
		};

		_fnc_prayer = {
			{
				[_x, "prayer"] call CBA_fnc_globalSay3d;
			} foreach CalltoPrayerLoudspeakers;
		};

		waitUntil {
			{
				if (_x call _fnc_between) exitwith {
					_x call _fnc_prayer;
				};
			} foreach [[4.25,4.5],[5.25,5.75],[11.75,12],[15.25,15.5],[17.75,18.25],[19,19.25]];

			sleep 160;
			false;

		};

	};
};