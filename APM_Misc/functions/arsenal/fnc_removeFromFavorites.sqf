/*
 * Author: Crowmedic
 *
 * Remove highlighted item from Favorites.
 *
 * Arguments:
 * 0: Control Display
 *
 * Return Value:
 * None
 *
 * Example:
 * [_leftButton] call apm_arsenal_fnc_removeFromFavorites
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
	if (_selection <= 0) exitWith {systemChat "No Item Selected!"};
	_classname = _left_lb lbData _selection;
	_favorites = _favorites - [_classname];
	systemChat "Item removed, will be corrected on re-opening of arsenal.";
	profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
};

//Right button code

//Determin that LB vs LNB open
_lb_open = ctrlShown _right_lb;
_lnb_open = ctrlShown _right_lnb;
if (_lb_open) exitWith {
	_selection = lbCurSel _right_lb;
	if (_selection <= 0) exitWith {systemChat "No Item Selected!"};
	_classname = _right_lb lbData _selection;
	_favorites = _favorites - [_classname];
	systemChat "Item removed, will be corrected on re-opening of arsenal.";
	profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
};

if (_lnb_open) exitWith {
	_selection = lbCurSel _right_lnb;
	if (_selection <= 0) exitWith {systemChat "No Item Selected!"};
	_classname = _right_lnb lbData _selection;
	_favorites = _favorites - [_classname];
	systemChat "Item removed, will be corrected on re-opening of arsenal.";
	profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
};
