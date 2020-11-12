/*
 * Author: Crowmedic, LinkIsParking
 * Disables/enables chat for selected players.
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * None.
 *
 * Example:
 * call apm_debug_fnc_disableChat
 *
 * Public: Yes
*/
params [["_player",objNull,[objNull]],["_enabled",false,[false]]];

[{
for [{_i = 0}, {_i < 16}, {_i = _i + 1}] do {_i enableChannel _enabled};
}] remoteExec ["call", _player];
