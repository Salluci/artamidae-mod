/*
 * Author: alganthe
 * Port VA loadouts to ACE Arsenal.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Public: Yes
*/
hint "";
[] spawn
{
	_test_unit = "B_Soldier_F" createVehicle [0,0, 1000];
	_test_unit enableSimulationGlobal false;

	 _VALoadouts = +(profilenamespace getvariable ["bis_fnc_saveInventory_data",[]]);
	 _aceLoadouts = +(profileNamespace getVariable ["ace_arsenal_saved_loadouts",[]]);

	if (isNull _test_unit) exitWith {
	};

	if (_VALoadouts isEqualTo []) exitWith {
	};
	
	"Progress_layer" cutRsc ["APM_Progress", "PLAIN", -1, false];
	waitUntil {!isNull (uiNamespace getVariable "APM_Progress")};
	_bar = (uiNamespace getVariable 'APM_Progress') displayCtrl (1256);
	_textbar = (uiNamespace getVariable 'APM_Progress') displayCtrl (1257);
	_t1 = "Porting loadouts, please wait.";
	_t2 = "Porting loadouts, please wait..";
	_t3 = "Porting loadouts, please wait...";
	_text_prog = 1;
	for "_i" from 0 to (count _VALoadouts - 1) step 2 do {
		sleep 0.25;
	    _name = _VALoadouts select _i;
		_text_prog = _text_prog +1;
		if (_text_prog == 4) then {_text_prog = 1};
		switch _text_prog do {
			case 1 : {_textbar ctrlSetText _t1; _textbar ctrlCommit 0};
			case 2 : {_textbar ctrlSetText _t2; _textbar ctrlCommit 0};
			case 3 : {_textbar ctrlSetText _t3; _textbar ctrlCommit 0};
		};
	    _inventory = _VALoadouts select (_i + 1);
		_prog_total = (count _VALoadouts - 1);
		_progress = _i / _prog_total;
		if (_progress < 0.33) then {
			_bar ctrlSetTextColor [1, 0, 0, 1];
			_bar ctrlCommit 0.1;
		};
		if ((_progress >= 0.33) and (_progress < 0.66)) then {
			_bar ctrlSetTextColor [1, 1, 0, 1];
			_bar ctrlCommit 0.1;
		};
		if (_progress >= 0.66) then {
			_bar ctrlSetTextColor [0, 1, 0, 1];
			_bar ctrlCommit 0.1;
		};
		_bar progressSetPosition _progress;
	    private _sameNameLoadoutsList = _aceLoadouts select {_x select 0 == _name};
	    [_test_unit, [profilenamespace, _name]] call bis_fnc_loadinventory;

	    private _loadout = getUnitLoadout _test_unit;

	    if (count _sameNameLoadoutsList > 0) then {
	        _aceLoadouts set [_aceLoadouts find (_sameNameLoadoutsList select 0), [_name, _loadout]];

	    } else {
	        _aceLoadouts pushBack [_name, _loadout];
	    };
	};
	_Bar progressSetPosition 1;
	profileNamespace setVariable ["ace_arsenal_saved_loadouts", _aceLoadouts];
	sleep 1;
	"Progress_layer" cutRsc ["Default", "PLAIN", -1, false];
	hintC "Process Complete. Check your arsenal to confirm.";
};
