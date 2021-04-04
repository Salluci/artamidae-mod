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

private _target = cursorTarget;
private _dist = _player distance _target;

if (!APM_canPunch_AI) exitWith
{
  systemChat "Not ranked high enough to knock out!";
};

if ((_dist > 4.5) || !(alive _target) || !(_target isKindOf "CAManBase")) exitWith
{
  systemChat "No valid target!";
};
if ((isPlayer _target) && !(APM_canPunch_Player)) exitWith
{
  systemChat "Not ranked high enough to knock players out!";
};

_player playActionNow "PutDown";
[_target, "BRIDGE_PunchSound"] remoteExec ["say3D", -2, false];
private _time = [apm_knockout_time_AI, apm_knockout_time_player] select (isPlayer _target);
[_target, true, _time, true] call ace_medical_fnc_setUnconscious;
