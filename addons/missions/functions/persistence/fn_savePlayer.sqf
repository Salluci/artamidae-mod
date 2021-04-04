params [["_unit", objNull],["_uid", ""]];

if (_uid isEqualTo "") then {
  _uid = getPlayerUID _unit;
};

private _playerVar = format ["PD_%1", _uid];

private _loadout = getUnitLoadout _unit;

if (APM_PersistentPosition) then {
  private _position = getPosATL _unit;
  private _positions = (missionNamespace getVariable _playerVar) select 11;
  if (_positions isEqualTo "") then {
    _positions = [];
  };
  _positions = createHashMapFromArray _positions;
  _positions set [APM_Key, _position];
  "extDB3" callExtension format ["0:SQL:UPDATE users SET position = %1 WHERE uid = %2", _positions call CBA_fnc_encodeJSON, str _uid];
};

private _result = "extDB3" callExtension format ["0:SQL:UPDATE users SET loadout = %1 WHERE uid = %2", str str _loadout, str _uid];

_result
