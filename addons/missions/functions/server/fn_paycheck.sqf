params [["_time", 0, [0]]];

private _headlessClients = entities "HeadlessClient_F";
private _humanPlayers = allPlayers - _headlessClients;
private _increase = (count _humanPlayers) * 2500;


APM_Budget = ceil (APM_Budget + _increase);
publicVariable "APM_Budget";

[apm_missions_fnc_paycheck, [_time], _time * 60] call CBA_fnc_waitAndExecute;

private _hint = format ["Paycheck received. Value: $%1. New Total: $%2", _increase, APM_Budget];
_hint remoteExec ["systemChat",0];
