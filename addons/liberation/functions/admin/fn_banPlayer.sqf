params ["_admin", "_target"];

private _uid = getPlayerUID _target;
private _name = name _target;
private _result = APM_Serverpass serverCommand format ["#kick %1", _name];

if (_result) then {
	_hint = format ["%1 was banned by %2", _name, name _admin];
	_hint remoteExec ["systemChat", 0];
};

private _banQuery = dbPrepareQueryConfig ["banPlayer", [_uid]];
APM_db dbExecuteAsync _banQuery;
