params [["_time", 0, [0]]];

if (!isServer) exitWith {false};

private _headlessClients = entities "HeadlessClient_F";
private _humanPlayers = allPlayers - _headlessClients;
private _increase = (count _humanPlayers) * 1000;


APM_Budget = ceil (APM_Budget + _increase);
publicVariable "APM_Budget";

[apm_missions_fnc_paycheck, [_time], _time * 60] call CBA_fnc_waitAndExecute;

private _budget = APM_Budget call apm_missions_fnc_displayPrettyNumber;

private _hint = format ["Paycheck received. Value: $%1. New Total: $%2", _increase, _budget];
_hint remoteExec ["systemChat", 0];
