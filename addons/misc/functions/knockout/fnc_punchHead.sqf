/*
 * Author: Bridge, Crowmedic, LinkIsParking
 * Knock target out via interaction.
 *
 * Arguments:
 * 0: Player <OBJECT>
 * 1: Target <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_player, _target] call apm_knockout_fnc_punchHead
 *
 * Public: Yes
*/

params [["_player", player, [player]], ["_target", objNull, [objNull]]];

private _result = ["Are you sure you wish to knock this person out?", "Knock out?", "Yes", "No"] call BIS_fnc_guiMessage;
if (!_result) exitWith
{};
_player playActionNow "PutDown";
[_target, "BRIDGE_PunchSound"] remoteExec ["say3D", -2, false];
private _time = [apm_knockout_time_AI, apm_knockout_time_player] select (isPlayer _target);
[_target, true, _time, true] call ace_medical_fnc_setUnconscious;
