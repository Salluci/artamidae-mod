params ["_unit", "_uid"];

if (_uid isEqualTo "") then {
  _uid = getPlayerUID _unit;
};

if (!isServer) exitWith {};

private _loadout = getUnitLoadout _unit;

private _saveDataQuery = dbPrepareQueryConfig ["updatePlayerLoadout", [_loadout, _uid]];
APM_db dbExecuteAsync _saveDataQuery;

true
