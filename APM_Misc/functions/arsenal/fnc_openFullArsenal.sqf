/*
 * Author: Crowmedic, LinkIsParking
 * Opens the Full Arsenal
 *
 * Arguments:
 * 0: Target <<OBJECT>>
 * 1: Blacklist <<ARRAY of STRINGS or BOOL>>
 *
 * Return Value:
 * None.
 *
 * Example:
 * call apm_arsenal_fnc_openFullArsenal
 *
 * Public: Yes
*/

params [["_target",player,[player]],["_blacklist",false,[false,[""]]]];

private _blacklistMission = missionNamespace getVariable ["APM_GearShop_Blacklist",[]];

[_target, true, false] call ace_arsenal_fnc_addVirtualItems;
[_target, _blacklist, false] call ace_arsenal_fnc_removeVirtualItems;
[_target, _blacklistMission, false] call ace_arsenal_fnc_removeVirtualItems;
[_target, _target] call ace_arsenal_fnc_openBox;

//Hook Arsenal on Open
[] spawn
{
	waitUntil {!isNull (findDisplay 1127001)};

	private _display = findDisplay 1127001;

	//Create Left Button
	private _leftButton = _display ctrlCreate ["RscButton", 123123];

	private _x_pos = -5 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 0 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
	private _y_pos = arsenal_additional_buttons * safeZoneH;
	private _w_pos = (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
	private _h_pos = 7 * (pixelH * pixelGridNoUIScale * 0.25);

	_leftButton ctrlSetPosition [_x_pos, _y_pos, _w_pos, _h_pos];
	_leftButton ctrlSetText "< Add to Favorites";
	_leftButton ctrlCommit 0;

	//Create Right Button
	private _rightButton = _display ctrlCreate ["RscButton", 123124];

	_x_pos = 65 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 0 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
	_rightButton ctrlSetPosition [_x_pos, _y_pos, _w_pos, _h_pos];
	_rightButton ctrlSetText "Add to Favorites >";

	_rightButton ctrlCommit 0;

	//Create loadout button
	private _loadoutButton = _display ctrlCreate ["RscButton", 1234556];
	_x_pos = 30 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)+ 0 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
	_w_pos = 1.5 * (((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))- 6 * ((safezoneW - 2 * (93 * (pixelW * pixelGridNoUIScale * 0.25)))/ 100)) / 5);
	_loadoutButton ctrlSetPosition [_x_pos, _y_pos, _w_pos, _h_pos];
	_loadoutButton ctrlSetText "Add all items from current loadout";
	_loadoutButton ctrlCommit 0;

	//Add button events
	_leftButton ctrlAddEventHandler ["ButtonClick", {
		_this call apm_arsenal_fnc_addToFavorites;
	}];
	_rightButton ctrlAddEventHandler ["ButtonClick", {
		_this call apm_arsenal_fnc_addToFavorites;
	}];
	_loadoutButton ctrlAddEventHandler ["ButtonClick", {
	 	player call apm_arsenal_fnc_addLoadoutItems;
	}];

	//Exit code to save Profilenamespace
	_display displayAddEventHandler ["Unload", {
		saveProfileNamespace;
	}];
};
