/*
 * Author: alganthe, LinkIsParking
 * Monitors ACE Medical Variables of a unit.
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
    case (vehicle _object != _object): {
        ["STR_ACE_Zeus_NothingSelected"] call ace_zeus_fnc_showMessage;
    };
    case (!isPlayer _object): {
      ["STR_ACE_Zeus_NothingSelected"] call ace_zeus_fnc_showMessage;
    };
    case (!alive _object): {
        ["STR_ACE_Zeus_OnlyAlive"] call ace_zeus_fnc_showMessage;
    };
    default {
        [_object] call apm_medical_fnc_debugMedical;
    };
};

deleteVehicle _logic;
