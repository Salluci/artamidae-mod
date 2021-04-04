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
private _idc = ctrlIDC _ctrl;
private _display = findDisplay 1127001;
private _leftTab = _display displayCtrl 13;
private _rightTabWeapon = _display displayCtrl 14;
private _rightTabInventory = _display displayCtrl 15;

//Get Favorites Array
private _favorites = profileNamespace getVariable ["APM_arsenal_favorites", []];

//Left button code

if (_idc == 123123) exitWith {
	private _selection = lbCurSel _leftTab;
	private _classname =  _leftTab lbData _selection;
	private _displayName = _leftTab lbText _selection;

	if (_classname == "") exitWith {
		systemChat "No Item Selected!"
	};

	//Catch for TFAR instanced radios
	if ("TFAR_" in _classname) then {
		_classname = _classname splitString "_";
		private _count = count _classname;
		switch (_count) do {
		  case 2: {
			_classname = _classname joinString "_";
			};
			default {
				_classname deleteAt ((count _classname) - 1);
				_classname = _classname joinString "_";
			};
		};
	};

	if (_classname in _favorites) exitWith {
		_favorites = _favorites - [_classname];
		systemChat format ["%1 removed from favorites.",_displayName];
		profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
		[APM_favoritesBox, [_classname], false] call ace_arsenal_fnc_removeVirtualItems;
	};

	_favorites pushBack _classname;
	systemChat format ["%1 added to favorites.", _displayName];
	profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
	[APM_favoritesBox, [_classname], false] call ace_arsenal_fnc_addVirtualItems;
};

//Right button code

//Inventory control needs to be checked first because ACE doesn't disable the weapon control (Why?)
if (ctrlEnabled _rightTabInventory) exitWith {
	private _selection = lnbCurSelRow _rightTabInventory;
	private _classname = _rightTabInventory lnbData [_selection, 0];
	private _displayName = _rightTabInventory lnbText [_selection, 1];

	if (_classname == "") exitWith {systemChat "No Item Selected!"};

	if (_classname in _favorites) exitWith {
		_favorites = _favorites - [_classname];
		systemChat format ["%1 removed from favorites.", _displayName];
		profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
		[APM_favoritesBox, [_classname], false] call ace_arsenal_fnc_removeVirtualItems;
	};

	_favorites pushBack _classname;

	systemChat format ["%1 added to favorites.", _displayName];
	profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
	[APM_favoritesBox, [_classname], false] call ace_arsenal_fnc_addVirtualItems;
};

//Weapons control
private _selection = lbCurSel _rightTabWeapon;
private _classname = _rightTabWeapon lbData _selection;
private _displayName = _rightTabWeapon lbText _selection;

if (_classname == "") exitWith {systemChat "No Item Selected!"};

private _currentWeaponItems = switch ace_arsenal_currentLeftPanel do {
	case 2002: {primaryWeaponItems ace_arsenal_center};
	case 2004: {handgunItems ace_arsenal_center};
	case 2006: {secondaryWeaponItems ace_arsenal_center};
};

if !(_classname isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) then {
	_classname = {
		if (_x == _classname) then {breakWith _x}
	} forEach _currentWeaponItems;
};

if (_classname in _favorites) exitWith {
	_favorites = _favorites - [_classname];
	systemChat format ["%1 removed from favorites.", _displayName];
	profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
	[APM_favoritesBox, [_classname], false] call ace_arsenal_fnc_removeVirtualItems;
};

_favorites pushBack _classname;

systemChat format ["%1 added to favorites.", _displayName];
profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
[APM_favoritesBox, [_classname], false] call ace_arsenal_fnc_addVirtualItems;
