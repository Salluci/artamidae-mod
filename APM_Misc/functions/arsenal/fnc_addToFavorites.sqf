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

if (_idc == 123123) exitWith
{
	private _selection = lbCurSel _leftTab;
	private _classname = _leftTab lbData _selection;

	//Catch for TFAR instanced radios
	if (["TFAR_", _classname] call bis_fnc_inString) then
	{
		_classname = _classname splitString "_";
		if (count _classname == 2) exitwith
		{
			_classname = _classname joinString "_";
			_classname
		};
		if (count _classname != 2) exitWith
		{
			_classname deleteAt ((count _classname) - 1);
			_classname = _classname joinString "_";
			_classname
		};
	};

	private _result = _favorites pushBackUnique _classname;
	if (_result == -1) then [{
		systemChat format ["ERROR: %1 is already in favorites.", _classname];
	}, {
		systemChat format ["%1 added to favorites.", _classname];
		profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
	}];
};

//Right button code

//Determine that LB vs LNB open
private _weaponOpen = ctrlEnabled _rightTabWeapon;
private _inventoryOpen = ctrlEnabled _rightTabInventory;

if (_inventoryOpen) exitWith //Needs to be checked first because ACE doesn't disable the weapon control (Why?)
{
	private _selection = lnbCurSelRow _rightTabInventory;
	private _classname = _rightTabInventory lnbData [(_selection),0];

	if (_classname == "") exitWith {systemChat "No Item Selected!"};

	private _result = _favorites pushBackUnique _classname;

	if (_result == -1) then
	[{
		systemChat format ["ERROR: %1 is already in favorites.", _classname];
	}, {
		systemChat format ["%1 added to favorites.", _classname];
		profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
	}];
};

if (_weaponOpen) exitWith
{
	private _selection = lbCurSel _rightTabWeapon;
	private _classname = _rightTabWeapon lbData _selection;

	if (_classname == "") exitWith {systemChat "No Item Selected!"};

	private _result = _favorites pushBackUnique _classname;

	if (_result == -1) then
	[{
		systemChat format ["ERROR: %1 is already in favorites.", _classname];
	},
	{
		systemChat format ["%1 added to favorites.", _classname];
		profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
	}];
};
