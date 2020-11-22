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
	if (_selection <= 0) exitWith {systemChat "No Item Selected!"};
	private _classname = _leftTab lbData _selection;
	_favorites = _favorites - [_classname];
	systemChat "Item removed, will be corrected on re-opening of arsenal.";
	profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
};

//Right button code

//Determin that LB vs LNB open
private _weaponOpen = ctrlEnabled _rightTabWeapon;
private _inventoryOpen = ctrlEnabled _rightTabInventory;

if (_inventoryOpen) exitWith //Needs to be checked first because ACE doesn't disable the weapon control (Why?)
{
	private _selection = lnbCurSelRow _rightTabInventory;
	private _classname = _rightTabInventory lnbData [(_selection),0];

	if (_classname == "") exitWith {systemChat "No Item Selected!"};

	_favorites = _favorites - [_classname];
	systemChat "Item removed, will be corrected on re-opening of arsenal.";
	profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
};

if (_weaponOpen) exitWith
{
	private _selection = lbCurSel _rightTabWeapon;
	private _classname = _rightTabWeapon lbData _selection;

	if (_classname == "") exitWith {systemChat "No Item Selected!"};
	
	_favorites = _favorites - [_classname];
	systemChat "Item removed, will be corrected on re-opening of arsenal.";
	profileNamespace setVariable ["APM_arsenal_favorites", _favorites];
};
