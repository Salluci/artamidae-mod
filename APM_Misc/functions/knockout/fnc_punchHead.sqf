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

[_player, _target] spawn
{
	_player = _this select 0;
	_target = _this select 1;
	_result = ["Are you sure you wish to knock this person out?", "Knock out?", "Yes", "No"] call BIS_fnc_guiMessage;
	if (_result) then
	{
		_player playActionNow "PutDown";
		[_target, "BRIDGE_PunchSound"] remoteExec ["say3D", 0, false];
		[_target, "head", 0, objNull, "punch", 0, 0.1] call ace_medical_fnc_handleDamage_advanced;
		if (isPlayer _target) then
		{
			[_target, true, apm_knockout_time_player, true] call ace_medical_fnc_setUnconscious;
		}
		else
		{
			[_target, true, apm_knockout_time_AI, true] call ace_medical_fnc_setUnconscious;
		};
	};
};
