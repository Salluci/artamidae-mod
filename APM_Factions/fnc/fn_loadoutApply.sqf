params ["_unit"];
private ["_loadout", "_insignia"];

if !(local _unit) exitWith {};

_loadout = getText(configFile >> "CfgVehicles" >> typeOf _unit >> "apm_loadout");

if (_loadout == "") exitWith {};

_loadout = call compile (call compile _loadout);

_unit setUnitLoadout _loadout;

_insignia = getText(configFile >> "CfgVehicles" >> typeOf _unit >> "apm_insignia");

[_unit, _insignia] call BIS_fnc_setUnitInsignia;
