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

_target = cursorTarget;
_dist = _player distance _target;

if ((isPlayer _target) and !(call APM_Punch_cond)) exitWith {Hint "Not ranked high enough to knock players out!"};
if (!(isPlayer _target) and !(call APM_Punch_condAI)) exitWith {Hint "Not ranked high enough to knock AI out!"};

if (_dist <= 4.5) then
{
  if (_target isKindOf "Man") then
  {
    if (alive _target) then
    {
      _player playActionNow "PutDown";
      [_target, "BRIDGE_PunchSound"] remoteExec ["say3D", 0, false];
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
};
