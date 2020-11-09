/*
 * Author: Crowmedic, LinkIsParking
 * Opens the Full Arsenal
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * None.
 *
 * Example:
 * call apm_arsenal_fnc_openFullArsenal
 *
 * Public: Yes
*/

_blacklist = missionNamespace getVariable ["APM_Gear_shop_blacklist", false];

[player, true, false] call ace_arsenal_fnc_addVirtualItems;
[player, _blacklist, false] call ace_arsenal_fnc_removeVirtualItems;
[player, player] call ace_arsenal_fnc_openBox;

//Hook Arsenal on Open
[] spawn
{
	waitUntil {!isNull (findDisplay 1127001)};

	_display = findDisplay 1127001;
	_left_lb = _display displayCtrl 13;
	_right_lb = _display displayCtrl 14;
	_right_lnb = _display displayCtrl 15;

	//Create Left Button
	_left_button = _display ctrlCreate ["RscButton", 123123];

	_x_pos = -5 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 0 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
	_y_pos = arsenal_additional_buttons * safeZoneH;
	_w_pos = (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
	_h_pos = 7 * (pixelH * pixelGridNoUIScale * 0.25);

	_left_button ctrlSetPosition [_x_pos, _y_pos, _w_pos, _h_pos];
	_left_button ctrlSetText "< Add to Favorites";
	_left_button ctrlCommit 0;

	//Create Right Button
	_right_button = _display ctrlCreate ["RscButton", 123124];

	_x_pos = 65 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 0 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
	_right_button ctrlSetPosition [_x_pos, _y_pos, _w_pos, _h_pos];
	_right_button ctrlSetText "Add to Favorites >";

	_right_button ctrlCommit 0;

	//Create loadout button
	_loadout_button = _display ctrlCreate ["RscButton", 1234556];
	_x_pos = 30 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 0 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
	_w_pos = 1.5 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
	_loadout_button ctrlSetPosition [_x_pos, _y_pos, _w_pos, _h_pos];
	_loadout_button ctrlSetText "Add all items from current loadout";
	_loadout_button ctrlCommit 0;

	//Add button events
	_left_button ctrlAddEventHandler ["ButtonClick", {
		_this call apm_arsenal_fnc_addToFavorites;
	}];
	_right_button ctrlAddEventHandler ["ButtonClick", {
		_this call apm_arsenal_fnc_addToFavorites;
	}];
	_loadout_button ctrlAddEventHandler ["ButtonClick", {
	 	player call apm_arsenal_fnc_addLoadoutItems;
	}];

	//Exit code to save Profilenamespace
	_display displayAddEventHandler ["Unload", {
		saveProfileNamespace;
	}];
};
