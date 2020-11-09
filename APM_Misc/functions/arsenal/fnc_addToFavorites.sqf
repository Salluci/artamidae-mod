/*
 * Author: Crowmedic
 *
 * Add highlighted item to Favorites.
 *
 * Arguments:
 * 0: Control Display
 *
 * Return Value:
 * None
 *
 * Example:
 * [_leftButton] call apm_arsenal_fnc_addToFavorites
 *
 * Public: No
 */

params ["_ctrl"];

//Display hooks
_idc = ctrlIDC _ctrl;
_display = findDisplay 1127001;
_left_lb = _display displayCtrl 13;
_right_lb = _display displayCtrl 14;
_right_lnb = _display displayCtrl 15;

//Get Favorites Array
_favorites = profileNamespace getVariable ["APM_arsenal_favorites", []];

//Left button code

if (_idc == 123123) exitWith {
	_selection = lbCurSel _left_lb;
	_classname = _left_lb lbData _selection;

	//Catch for TFAR instanced radios
	if (["TFAR_", _classname] call bis_fnc_inString) then {
		_classname = _classname splitString "_";
		_classname deleteAt ((count _classname) - 1);
		_classname = _classname joinString "_";
	};

	_result = _favorites pushBackUnique _classname;
	if (_result == -1) then [{
		systemChat format ["ERROR: %1 is already in favorites.", _classname];
	}, {
		systemChat format ["%1 added to favorites.", _classname];
		profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
	}];
};

//Right button code

//Determin that LB vs LNB open
_lb_open = ctrlEnabled _right_lb;
_lnb_open = ctrlEnabled _right_lnb;
if (_lb_open) exitWith {
	_selection = lbCurSel _right_lb;
	_classname = _right_lb lbData _selection;
	if (_classname == "") exitWith {systemChat "No Item Selected!"};
	_result = _favorites pushBackUnique _classname;
	if (_result == -1) then [{
		systemChat format ["ERROR: %1 is already in favorites.", _classname];
	}, {
		systemChat format ["%1 added to favorites.", _classname];
		profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
	}];
};

if (_lnb_open) exitWith {
	_selection = lbCurSel _right_lnb;
	_classname = _right_lnb lbData _selection;
	if (_classname == "") exitWith {systemChat "No Item Selected!"};
	_result = _favorites pushBackUnique _classname;
	if (_result == -1) then [{
		systemChat format ["ERROR: %1 is already in favorites.", _classname];
	}, {
		systemChat format ["%1 added to favorites.", _classname];
		profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
	}];
};
