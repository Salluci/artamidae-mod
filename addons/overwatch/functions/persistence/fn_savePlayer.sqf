params [["_unit", objNull],["_uid", getPlayerUID _unit]];

private _loadout = getUnitLoadout _unit;

private _saveDataQuery = dbPrepareQueryConfig ["updatePlayerLoadout", [_loadout, _uid]];
APM_db dbExecuteAsync _saveDataQuery;

true
