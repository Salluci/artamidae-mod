/*
 * Author: Crowmedic, LinkIsParking
 * Initialize a box / object for resupply arsenal.
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Clear Inventory <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_box] call apm_arsenal_fnc_initBoxRessupply
 * [_box, true] call apm_arsenal_fnc_initBoxRessupply
 *
 * Public: Yes
*/

params [["_box", objNull, [objNull]], ["_clearInventory",false,[false]],["_blacklist",false,[false,[]]]];

if (_clearInventory) then {
  clearBackpackCargoGlobal _box;
  clearItemCargoGlobal _box;
  clearMagazineCargoGlobal _box;
  clearWeaponCargoGlobal _box;
};

private _action = ["APM_Arsenal", "Open Resupply Arsenal", ["\A3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa","#FFFFAB"], {
 [_player, _blacklist] call apm_arsenal_fnc_openResupplyArsenal;
}, {true}] call ace_interact_menu_fnc_createAction;

[_box, 0, ["ACE_MainActions"], _action] remoteExec ["ace_interact_menu_fnc_addActionToObject", -2, true];
