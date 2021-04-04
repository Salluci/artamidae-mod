params ["_object"];

if (APM_fobObjects isEqualTo []) exitWith {
  [objNull, -1, "", -1]
};

_result = {
  private _size = _x getVariable ["APM_fobSize", 150];
  if (_object distance2D _x <= _size) then {breakWith [_x, _x getVariable "APM_fobLevel", _x getVariable "APM_fobName", _x getVariable "APM_fobSupply"]};
  [objNull, -1, "", -1]
} forEach APM_fobObjects;

_result
