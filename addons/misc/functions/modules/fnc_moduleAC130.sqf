/*
 * Author: alganthe, LinkIsParking
 * Add AC130 turrets to an object
 *
 * Arguments:
 * 0: The module logic <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params ["_logic"];
if (!local _logic) exitWith {};

private _object = attachedTo _logic;

switch (true) do {
    case (isNull _object): {
        ["STR_ACE_Zeus_NothingSelected"] call ace_zeus_fnc_showMessage;
    };
    case (!alive _object): {
        ["STR_ACE_Zeus_OnlyAlive"] call ace_zeus_fnc_showMessage;
    };
    default {
        [_object] call apm_misc_fnc_AC130;
    };
};

deleteVehicle _logic;
