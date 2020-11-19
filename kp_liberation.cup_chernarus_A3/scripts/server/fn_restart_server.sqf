params ["_admin"];
private _name = name _admin;

//Save world/FOBS
_param = ["save_interval", 15] call bis_fnc_getParamValue;
if (_param > 0) then {
	_handle = [600] spawn fnc_save_world;
	waitUntil {
		sleep 1;
		scriptDone _handle
	};
};


"World saved. Saving player data." remoteExec ["systemChat", 0];

//Save all player data
{
	_uid = getPlayerUID _x;
	_loadout = getUnitLoadout _x;
	_result = "extDB3" callExtension format ["0:SQL:UPDATE users SET loadout = %1 WHERE uid = %2",str str _loadout, str _uid];
	_hint = format ["%1: data saved", name _x];
	_hint remoteExec ["systemChat", 0];
} forEach allPlayers;

call KPLIB_fnc_doSave;

//Restart server
"Server Restarting" remoteExec ["systemChat", 0];

APM_Serverpass serverCommand "#reassign";
