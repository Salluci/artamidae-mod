/*
 * Author: LinkIsParking
 * Adds buttons and logic for the favorites arsenal.
 *
 * Arguments:
 * 0: Arsenal Display <DISPLAY>
 *
 * Return Value:
 * None.
 *
 * Example:
 * _display call apm_arsenal_fnc_handleArsenal
 *
 * Public: No
 */

params ["_display"];

private _leftLB = _display displayCtrl 13;
private _rightLB = _display displayCtrl 14;
private _rightLNB = _display displayCtrl 15;
APM_arsenal_favorites = profileNamespace getVariable ["APM_arsenal_favorites",[]];

//Create Left Button
private _leftButton = _display ctrlCreate ["RscButton", 123123];

private _x_pos = -5 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 0 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
private _y_pos = arsenal_additional_buttons * safeZoneH;
private _w_pos = (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
private _h_pos = 7 * (pixelH * pixelGridNoUIScale * 0.25);

_leftButton ctrlSetPosition [_x_pos, _y_pos, _w_pos, _h_pos];
_leftButton ctrlCommit 0;

_leftButton ctrlAddEventHandler ["ButtonClick", {
  params ["_ctrl"];
  _this call apm_arsenal_fnc_addToFavorites;
  APM_arsenal_favorites = profileNamespace getVariable ["APM_arsenal_favorites",[]];
  private _display = ctrlParent _ctrl;
  private _leftLB = _display displayCtrl 13;
  _leftLB lbSetCurSel (lbCurSel _leftLB);
}];

_leftLB ctrlAddEventHandler ["LBSelChanged", {
  params ["_ctrl", "_index"];
  private _display = ctrlParent _ctrl;
  private _leftButton = _display displayCtrl 123123;
  private _class = _ctrl lbData _index;
  if (_class in APM_arsenal_favorites) exitWith {
    _leftButton ctrlSetText "< Remove from Favorites";
    _leftButton ctrlCommit 0;
  };
  _leftButton ctrlSetText "< Add to Favorites";
  _leftButton ctrlCommit 0;
  }];

//Create Right Button
private _rightButton = _display ctrlCreate ["RscButton", 123124];

_x_pos = 65 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 0 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
_rightButton ctrlSetPosition [_x_pos, _y_pos, _w_pos, _h_pos];
_rightButton ctrlCommit 0;

_rightLB ctrlAddEventHandler ["LBSelChanged", {
  params ["_ctrl", "_index"];
  private _display = ctrlParent _ctrl;
  private _rightButton = _display displayCtrl 123124;
  private _class = toLower (_ctrl lbData _index);
  private _favorites = APM_arsenal_favorites apply {toLower _x};
  if (_class in _favorites) exitWith {
    _rightButton ctrlSetText "Remove from Favorites >";
    _rightButton ctrlCommit 0;
  };
  _rightButton ctrlSetText "Add to Favorites >";
  _rightButton ctrlCommit 0;
}];

_rightLNB ctrlAddEventHandler ["LBSelChanged", {
  params ["_ctrl", "_index"];
  private _display = ctrlParent _ctrl;
  private _rightButton = _display displayCtrl 123124;
  private _class = _ctrl lnbData [_index, 0];
  if (_class in APM_arsenal_favorites) exitWith {
    _rightButton ctrlSetText "Remove from Favorites >";
    _rightButton ctrlCommit 0;
  };
  _rightButton ctrlSetText "Add to Favorites >";
  _rightButton ctrlCommit 0;
}];

_rightButton ctrlAddEventHandler ["ButtonClick", {
  params ["_ctrl"];
  _this call apm_arsenal_fnc_addToFavorites;
  APM_arsenal_favorites = profileNamespace getVariable ["APM_arsenal_favorites",[]];
  private _display = ctrlParent _ctrl;
  private _rightLB = _display displayCtrl 14;
  private _rightLNB = _display displayCtrl 15;
  private _inventoryOpen = ctrlEnabled _rightLNB;
  if (_inventoryOpen) exitWith {
    _rightLNB lnbSetCurSelRow (lnbCurSelRow _rightLNB);
  };
  _rightLB lbSetCurSel (lbCurSel _rightLB);
}];

//Create loadout button
private _loadoutButton = _display ctrlCreate ["RscButton", 1234556];
_x_pos = 30 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 0 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
_w_pos = 1.5 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
_loadoutButton ctrlSetPosition [_x_pos, _y_pos, _w_pos, _h_pos];
_loadoutButton ctrlSetText "Add all items from current loadout";
_loadoutButton ctrlCommit 0;

_loadoutButton ctrlAddEventHandler ["ButtonClick", {
  params ["_ctrl"];
  ace_arsenal_center call apm_arsenal_fnc_addLoadoutItems;
  private _display = ctrlParent _ctrl;
  private _rightLB = _display displayCtrl 14;
  private _rightLNB = _display displayCtrl 15;
  private _leftLB = _display displayCtrl 13;
  _leftLB lbSetCurSel (lbCurSel _leftLB);
  private _inventoryOpen = ctrlEnabled _rightLNB;
  if (_inventoryOpen) exitWith {
    _rightLNB lnbSetCurSelRow (lnbCurSelRow _rightLNB);
  };
  _rightLB lbSetCurSel (lbCurSel _rightLB);
}];

//Hide buttons with Backspace.
_display displayAddEventHandler ["KeyDown", {
  params ["_display", "_key"];
  if !(ace_arsenal_rightSearchBarFocus || ace_arsenal_leftSearchBarFocus || !isNil "ace_arsenal_loadoutsPanelFocus") exitWith {
    switch (_key) do {
      case (0x0E) : {
        private _showToggle = !ctrlShown (_display displayCtrl 10);
        {
          private _ctrl = _display displayctrl _x;
          _ctrl ctrlshow _showToggle;
          _ctrl ctrlcommit 0.15;
        } foreach [1234556,123123,123124];
      };
      case (0x41) : {
        last_favorites = APM_arsenal_favorites;
        profileNamespace setVariable ["APM_arsenal_favorites", nil];
        [APM_favoritesBox, true, false] call ace_arsenal_fnc_removeVirtualItems;
        systemChat "APM Arsenal favorites wiped. Press F8 to undo.";
      };
      case (0x42) : {
        if (isNil "last_favorites") exitWith {};
        APM_arsenal_favorites = last_favorites;
        profileNamespace setVariable ["APM_arsenal_favorites", last_favorites];
        [APM_favoritesBox, last_favorites, false] call ace_arsenal_fnc_addVirtualItems;
        systemChat "APM Arsenal favorites restored.";
        last_favorites = nil;
      };
    };
  };
}];
