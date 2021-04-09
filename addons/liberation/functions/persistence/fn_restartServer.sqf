params [["_admin", objNull]];

if (!isServer) exitWith {false};

private _name = [name _admin, "Server"] select (isNull _admin);

private _hint = format ["Server restart started by %1.", _name];
_hint remoteExec ["systemChat", 0];

//Save world/
private _result = call apm_missions_fnc_saveWorld;

if (_result && {APM_isLiberation}) then {
	_result = call KPLIB_fnc_doSave;
};

saveProfileNamespace;

if (!_result) exitWith {
	"World save failed. Restart aborted." remoteExec ["systemChat", 0];
};

"World saved. Saving player data." remoteExec ["systemChat", 0];
APM_restartDone = false;
private _count = count (allPlayers - [HC1, HC2, HC3]);
//Save all player data
{
	[_x, getPlayerUID _x] call apm_missions_fnc_savePlayer;
	private _hint = format ["%1: Data Saved.", name _x];
	_hint remoteExec ["systemChat", 0];
	if (_forEachIndex == (_count -1)) then {breakWith APM_restartDone = true};
} forEach allPlayers - [HC1, HC2, HC3];

//Restart server
"Server Restarting..." remoteExec ["systemChat", 0];
[{APM_restartDone}, {
	APM_Serverpass serverCommand (["#reassign", "#restartServer"] select (APM_isLiberation || APM_isALiVE || APM_isDev));
}] call CBA_fnc_waitUntilAndExecute;
