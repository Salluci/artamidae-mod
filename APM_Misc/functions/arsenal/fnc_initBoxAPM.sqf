/*
 * Author: Crowmedic, LinkIsParking
 * Initialize a box / object for APM Arsenal.
 *
 * Arguments:
 * 0: Target <OBJECT>
 * 1: Clear Inventory <BOOL>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_box] call apm_arsenal_fnc_initBoxAPM
 * [_box, true] call apm_arsenal_fnc_initBoxAPM
 *
 * Public: Yes
*/

params ["_box", ["_clearInventory",false]];

if (_clearInventory) then {
  clearBackpackCargoGlobal _box;
  clearItemCargoGlobal _box;
  clearMagazineCargoGlobal _box;
  clearWeaponCargoGlobal _box;
};


_action = ["APM_Arsenal", "Open Full Arsenal", ["APM_Misc\Data\UI\ui_arsenal.paa","#FFABAB"], {
   call apm_arsenal_fnc_openFullArsenal;
}, {true}] call ace_interact_menu_fnc_createAction;

[_box, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_Arsenal", "Open Favorite Arsenal", ["APM_Misc\Data\UI\ui_arsenal.paa","#ABABFF"], {
   call apm_arsenal_fnc_openFavoritesArsenal;
}, {true}] call ace_interact_menu_fnc_createAction;

[_box, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
