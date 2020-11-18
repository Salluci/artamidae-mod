//Call Database

_call = if (["optre", missionName] call BIS_fnc_inString) then [
	{"0:SQL:SELECT * FROM veh_shop_optre"},
	{"0:SQL:SELECT * FROM veh_shop"}
];

_results = "extDB3" callExtension _call;

_results = call compile _results;

if (_results select 0 == 1) then {
	APM_vehicle_shop = _results select 1;
	publicVariable "APM_vehicle_shop";
};

if (_results select 0 == 2) then {
	_msg = _results select 1;
	_new_results = "";
	while {true} do {
		_new_data = "extDB3" callExtension format ["5:%1", _msg];
		if (_new_data == "") exitWith {};
		_new_results = _new_results + _new_data;
		
	};
	_new_results = call compile _new_results;
	if (_new_results select 0 == 1) then {
		APM_vehicle_shop = _new_results select 1;
		publicVariable "APM_vehicle_shop";
	};
};

_call = if (["optre", missionName] call BIS_fnc_inString) then [
	{"0:SQL:SELECT * FROM fob_shop_optre"},
	{"0:SQL:SELECT * FROM fob_shop"}
];

_results = "extDB3" callExtension _call;

_results = call compile _results;

if (_results select 0 == 1) exitWith {
	APM_fob_shop = _results select 1;
	publicVariable "APM_fob_shop";
};

if (_results select 0 == 2) then {
	_msg = _results select 1;
	_new_results = "";
	while {true} do {
		_new_data = "extDB3" callExtension format ["5:%1", _msg];
		if (_new_data == "") exitWith {};
		_new_results = _new_results + _new_data;
		
	};
	_new_results = call compile _new_results;
	if (_new_results select 0 == 1) then {
		APM_fob_shop = _new_results select 1;
		publicVariable "APM_fob_shop";
	};
};