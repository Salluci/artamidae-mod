params ["_object"];

if (APM_fobObjects isEqualTo []) exitWith {
  [objNull, -1, "", -1, ""]
};

_result = {
  private _size = _x getVariable ["APM_fobSize", 150];
  if (_object distance2D _x <= _size) then {
    private _level = _x getVariable "APM_fobLevel";
    private _name = _x getVariable "APM_fobName";
    private _supply = _x getVariable "APM_fobSupply";
    private _displayName = _x getVariable "APM_fobDisplayName";
    breakWith [_x, _level, _name, _supply, _displayName]
  };
  [objNull, -1, "", -1, ""]
} forEach APM_fobObjects;

_result
