/*
* Author: Bridge, Crowmedic, LinkIsParking
* Knock cursor target out.
*
* Arguments:
* 0: Player <OBJECT>
*
* Return Value:
* None.
* Example:
*
* [_player] call apm_knockout_fnc_punchTarget
*
* Public: No
*/

params [["_player", player, [player]]];

if (!APM_canPunch_AI) exitWith {
  systemChat "Not ranked high enough to knock out!";
};

private _target = cursorTarget;
if (isNull _target || {!(_target isKindOf "CAManBase")}) exitWith {false};
private _isPlayer = isPlayer _target;

if (!APM_canPunch_Player && {_isPlayer}) exitWith {
  systemChat "Not ranked high enough to knock players out!";
};

_player playActionNow "PutDown";
[_target, "BRIDGE_PunchSound"] remoteExec ["say3D", -2];
private _time = [apm_knockout_time_AI, apm_knockout_time_player] select _isPlayer;
[_target, true, _time, true] call ace_medical_fnc_setUnconscious;
