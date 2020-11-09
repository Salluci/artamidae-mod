/*
 * Author: Crowmedic, LinkIsParking
 * Opens the Favorites Arsenal
 *
 * Arguments:
 * None.
 *
 * Return Value:
 * None.
 *
 * Example:
 * call apm_arsenal_fnc_openFavoritesArsenal
 *
 * Public: Yes
*/

_favorites = profileNamespace getVariable ["APM_arsenal_favorites", []];
_blacklist = missionNamespace getVariable ["APM_Gear_shop_blacklist", false];

[player, true, false] call ace_arsenal_fnc_removeVirtualItems;
[player, _favorites, false] call ace_arsenal_fnc_addVirtualItems;
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
	_left_button ctrlSetText "< Remove from Favorites";
	_left_button ctrlCommit 0;

	//Create Right Button
	_right_button = _display ctrlCreate ["RscButton", 123124];

	_x_pos = 65 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 0 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
	_right_button ctrlSetPosition [_x_pos, _y_pos, _w_pos, _h_pos];
	_right_button ctrlSetText "Remove from Favorites >";

	_right_button ctrlCommit 0;

	//Add button events
	_left_button ctrlAddEventHandler ["ButtonClick", {
		_this call apm_arsenal_fnc_removeFromFavorites;
	}];
	_right_button ctrlAddEventHandler ["ButtonClick", {
		_this call apm_arsenal_fnc_removeFromFavorites;
	}];

	//Exit code to save Profilenamespace
	_display displayAddEventHandler ["Unload", {
		saveProfileNamespace;
	}];
};
