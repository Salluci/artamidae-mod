/*
 * Author: Crowmedic, LinkIsParking
 * Opens the ACE Medical Debug Display.
 *
 * Arguments:
 * 0: Target <OBJECT>
 *
 * Return Value:
 * None.
 *
 * Example:
 * call apm_medical_fnc_medicalDebug
 *
 * Public: Yes
*/
params [["_duck", player, [player]]];

[_duck] spawn
{
  _duck = _this select 0;
  if (isNull _duck || vehicle _duck != _duck) exitWith {systemChat "Error, must be executed on a unit."};
  _vitalsDisplay = (findDisplay 46) ctrlCreate ["RscTextMulti", 1234];
  _vitalsDisplay ctrlSetPosition [-0.25,0,0.45,0.4];
  _vitalsDisplay ctrlSetBackgroundColor [0,0,0,0.5];
  _vitalsDisplay ctrlCommit 0;
  while {alive _duck} do
  {
      _bp = (_duck getVariable "ace_medical_bloodpressure") apply {round _x};
      reverse _bp;
      _bv = _duck getVariable "ace_medical_bloodvolume";
      _pr = _duck getVariable "ace_medical_peripheralresistance";
      _hr = _duck getVariable "ace_medical_heartrate";
      _co = [_duck] call ace_medical_status_fnc_getCardiacOutput;
      _bleeding = _duck getVariable ["ace_medical_woundBleeding", 0];
      _arrest = _duck getVariable ["ace_medical_inCardiacArrest", false];
      _uncon = _duck getVariable ["ace_isunconscious", false];
      _pain = _duck getVariable "ace_medical_pain";
      _painSuppress = _duck getVariable "ace_medical_painsuppress";
      _painPerceived = 0 max (_pain - _painSuppress) min 1;
      _hem = _duck getVariable ["ace_medical_hemorrhage", 0];
      _meds = _duck getVariable ["ace_medical_medications", []];
      _text = format ["Watching: %1\n", name _duck];
      _text = _text + format ["Blood Pressure: %1\nBlood Volume: %2\nPeripheral Resistance: %3\nHeart Rate: %4\nCardiac Output: %5\nBleeding: %6\nCardiac Arrest: %7\nUnconcious: %8\nPain Level: %9\nPain Suppression: %10\nPerceived Pain: %11\nHemmorhage Class: %12\nMedications:\n", _bp, _bv, _pr, _hr, _co, _bleeding, _arrest, _uncon, _pain, _painSuppress, _painPerceived, _hem];
      {
          _text = _text + str _x + "\n";
      } forEach _meds;
      _vitalsDisplay ctrlSetText _text;
      _vitalsDisplay ctrlSetPositionH (ctrlTextHeight _vitalsDisplay);
      _vitalsDisplay ctrlCommit 0;
  };
  sleep 5;
  ctrlDelete _vitalsDisplay;
};
