/*
 * Author: LinkIsParking
 * Handles showing/hiding favorites buttons on the favorites screen.
 *
 * Arguments:
 * 0: Show/Hide <BOOL>
 *
 *
 * Return Value:
 * None
 *
 * Example:
 * _display call apm_arsenal_fnc_loadoutsDisplay
 *
 * Public: No
 */
params ["_show"];

private _display = findDisplay 1127001;
private _leftButton = _display displayCtrl 123123;
private _rightButton = _display displayCtrl 123124;
private _loadoutButton = _display displayCtrl 1234556;
{
  _x ctrlShow _show;
} forEach [_leftButton, _rightButton, _loadoutButton];
