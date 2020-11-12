/*
  Author: Dorbedo, LinkIsParking
    Gets all player radio items and reassigns them.
  Arguments:
    0: the unit <OBJECT>
    1: without duplicates <BOOL> (default: false)
  Return Value:
    the radioitems of a unit <ARRAY>
  Example:
    _itemlist = [_player] call apm_debug_fnc_getRadioItems;
  Public: Yes
*/
params [["_radio","TFAR_anprc152",["TFAR_anprc152"]]];

_radioList = [player] call apm_debug_fnc_getRadioItems;

[_radioList, _radio] spawn
{
  _radioList = _this select 0;
  _radio = _this select 1;

  {player unlinkItem _x} forEach _radioList;

  {player removeItem _x} forEach _radioList;

  _radioList = _radioList arrayIntersect _radioList;

  _radioCount = (count _radioList);

  for "_i" from 1 to _radioCount do {player addItem _radio};

  player assignItem _radio;
};
