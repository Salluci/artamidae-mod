params ["_tester", "_unit"];

_tester spawn
{
  _vitals_box = (findDisplay 46) ctrlCreate ["RscTextMulti", 1234];
  _vitals_box ctrlSetPosition [-0.25,0,0.45,0.4];
  _vitals_box ctrlSetBackgroundColor [0,0,0,0.5];
  _vitals_box ctrlCommit 0;
  while {alive _unit} do
  {
    _bp = (_unit getVariable "ace_medical_bloodpressure") apply {round _x};
    reverse _bp;
    _bv = _unit getVariable "ace_medical_bloodvolume";
    _pr = _unit getVariable "ace_medical_peripheralresistance";
    _hr = _unit getVariable "ace_medical_heartrate";
    _co = [_unit] call ace_medical_status_fnc_getCardiacOutput;
    _bleeding = _unit getVariable ["ace_medical_woundBleeding", 0];
    _arrest = _unit getVariable ["ace_medical_inCardiacArrest", false];
    _uncon = _unit getVariable ["ace_isunconscious", false];
    _pain = _unit getVariable "ace_medical_pain";
    _pain_suppress = _unit getVariable "ace_medical_painsuppress";
    _pain_perceived = 0 max (_pain - _pain_suppress) min 1;
    _hem = _unit getVariable ["ace_medical_hemorrhage", 0];
    _meds = _unit getVariable ["ace_medical_medications", []];
    _text = format ["Watching: %1\n", name _unit];
    _text = _text + format ["Blood Pressure: %1\nBlood Volume: %2\nPeripheral Resistance: %3\nHeart Rate: %4\nCardiac Output: %5\nBleeding: %6\nCardiac Arrest: %7\nUnconcious: %8\nPain Level: %9\nPain Suppression: %10\nPerceived Pain: %11\nHemmorage?: %12\nMedications:\n", _bp, _bv, _pr, _hr, _co, _bleeding, _arrest, _uncon, _pain, _pain_suppress, _pain_perceived, _hem];
    {
      _text = _text + str _x + "\n";
    } forEach _meds;
    _vitals_box ctrlSetText _text;
    _vitals_box ctrlSetPositionH (ctrlTextHeight _vitals_box);
    _vitals_box ctrlCommit 0;
  };
  sleep 5;
  ctrlDelete _vitals_box;
};
