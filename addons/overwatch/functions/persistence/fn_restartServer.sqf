params [["_admin", objNull]];

private _name = [name _admin, "Server"] select (isNull _admin);

private _hint = format ["Server restart started by %1.", _name];
_hint remoteExec ["systemChat", 0];

//Save world/
private _result = call apm_missions_fnc_saveWorld;

if (_result && {!isNil "GRLIB_save_key"}) then {
	_result = call KPLIB_fnc_doSave;
};

saveProfileNamespace;

if (!_result) exitWith {
	"World save failed. Restart aborted." remoteExec ["systemChat", 0];
};

"World saved. Saving player data." remoteExec ["systemChat", 0];

//Save all player data
{
	[_x] call apm_missions_fnc_savePlayer;
	private _hint = format ["%1: Data Saved.", name _x];
	_hint remoteExec ["systemChat", 0];
} forEach allPlayers - [HC1, HC2, HC3];

//Restart server
"Server Restarting" remoteExec ["systemChat", 0];
[{
	APM_Serverpass serverCommand (["#restartserver", "#reassign"] select ("Dev" in missionName));
}, nil, 5] call CBA_fnc_waitAndExecute;
