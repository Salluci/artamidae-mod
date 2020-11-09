/*
 * Author: Crowmedic, LinkIsParking
 * Opens the Ressupply Arsenal
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * None.
 *
 * Public: Yes
*/

_items = localNamespace getVariable ["resupply_arsenal_items",[]];

[player, true, false] call ace_arsenal_fnc_removeVirtualItems;
[player, _items, false] call ace_arsenal_fnc_addVirtualItems;
[player, player] call ace_arsenal_fnc_openBox;
