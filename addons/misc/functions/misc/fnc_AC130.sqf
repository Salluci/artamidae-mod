/*
 * Author: Crowmedic
 * Gives selected vehicle same turrets as an AC-130.
 *
 * Arguments:
 * 0: Target <OBJECT>
 *
 * Return Value:
 * None.
 *
 * Example:
 * [_this select 0] call apm_misc_fnc_ac130
 *
 * Public: Yes
*/

params [["_uav",objNull,[objNull]]];

private _mags = getArray (configfile >> "CfgVehicles" >> "B_T_VTOL_01_armed_F" >> "Turrets" >> "GunnerTurret_02" >> "magazines");
_mags = _mags + getArray(configfile >> "CfgVehicles" >> "B_T_VTOL_01_armed_F" >> "Turrets" >> "GunnerTurret_01" >> "magazines");
{
  _uav addMagazineTurret [_x, [0]];
} forEach _mags;

private _weapons = getArray (configfile >> "CfgVehicles" >> "B_T_VTOL_01_armed_F" >> "Turrets" >> "GunnerTurret_01" >> "weapons");
_weapons = _weapons + getArray (configfile >> "CfgVehicles" >> "B_T_VTOL_01_armed_F" >> "Turrets" >> "GunnerTurret_02" >> "weapons");
{
  _uav addWeaponTurret [_x, [0]];
} forEach _weapons;
