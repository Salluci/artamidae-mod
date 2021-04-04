//Call Database
private _optre = "optre" in missionName;

private _call = ["0:SQL:SELECT * FROM veh_shop", "0:SQL:SELECT * FROM veh_shop_optre"] select _optre;

private _results = "extDB3" callExtension _call;

_results = parseSimpleArray _results;

if (_results select 0 isEqualTo 1) then {
	APM_vehicle_shop = _results select 1;
	publicVariable "APM_vehicle_shop";
};

if (_results select 0 isEqualTo 2) then {
	private _msg = _results select 1;
	private _new_results = "";

	while {true} do
	{
		private _new_data = "extDB3" callExtension format ["5:%1", _msg];
		if (_new_data == "") exitWith {};
		_new_results = _new_results + _new_data;
	};

	_new_results = parseSimpleArray _new_results;
	if (_new_results select 0 isEqualTo 1) then {
		APM_vehicle_shop = _new_results select 1;
		publicVariable "APM_vehicle_shop";
	};
};

_call = ["0:SQL:SELECT * FROM fob_shop", "0:SQL:SELECT * FROM fob_shop_optre"] select _optre;

_results = "extDB3" callExtension _call;

_results = parseSimpleArray _results;

if (_results select 0 isEqualTo 1) exitWith {
	APM_fob_shop = _results select 1;
	publicVariable "APM_fob_shop";
};

if (_results select 0 isEqualTo 2) then {
	private _new_results = "";
	private _msg = _results select 1;

	while {true} do {
		private _new_data = "extDB3" callExtension format ["5:%1", _msg];
		if (_new_data == "") exitWith {};
		_new_results = _new_results + _new_data;
	};

	_new_results = parseSimpleArray _new_results;
	if (_new_results select 0 isEqualTo 1) then {
		APM_fob_shop = _new_results select 1;
		publicVariable "APM_fob_shop";
	};
};
