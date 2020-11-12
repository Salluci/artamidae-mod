/*
  Author: Dorbedo
    returns the TFAR radio items of a unit
  Arguments:
    0: the unit <OBJECT>
    1: without duplicates <BOOL> (default: false)
  Return Value:
    the radioitems of a unit <ARRAY>
  Example:
    _itemlist = [_player] call apm_debug_fnc_getRadioItems;
  Public: Yes
*/

params [
    ["_unit", objNull, [objNull]],
    ["_withOutDuplicates", false, [false]]
];

private _allItems = (assignedItems _unit);
_allItems append ((getItemCargo (uniformContainer _unit)) select 0);
_allItems append ((getItemCargo (vestContainer _unit)) select 0);
_allItems append ((getItemCargo (backpackContainer _unit)) select 0);


If (_withOutDuplicates) then {
    _allItems = _allItems arrayIntersect _allItems;
};

_allItems select {((_x call TFAR_fnc_isRadio)||{_x call TFAR_fnc_isPrototypeRadio})}
