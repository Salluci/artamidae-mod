/*
 * Author: Crowmedic, LinkIsParking
 *
 * Add items in current loadout to Favorites.
 *
 * Arguments:
 * 0: Target <OBJECT>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

params [["_unit", player, [player]]];

private _loadout = getUnitLoadout _unit;
private _favorites = profileNamespace getVariable ["APM_arsenal_favorites", []];

_loadout = flatten _loadout;
_loadout = (_loadout - [""]) select {typeName _x isEqualTo "STRING"};

{
	private _classname = _x;
	//Catch for TFAR instanced radios
	if ("TFAR_" in _classname) then {
		_classname = _classname splitString "_";
		private _count = count _classname;
		switch (_count) do {
		  case 2: {
			_classname = _classname joinString "_";
			};
			default {
				_classname deleteAt ((count _classname) - 1);
				_classname = _classname joinString "_";
			};
		};
	};
	private _index = _favorites pushBackUnique _classname;
	if (_index != -1) then {
		private _displayname = _classname;
		switch (true) do {
			case (_classname isKindOf ["CA_Magazine", configFile >> "CfgMagazines"]) : {_displayname = getText (configFile >> "CfgMagazines" >> _classname >> "displayName");};
			case (_classname isKindOf ["None", configFile >> "CfgGlasses"]) : {_displayname = getText (configFile >> "CfgGlasses" >> _classname >> "displayName");};
			case (_classname isKindof ["Bag_Base", configFile >> "CfgVehicles"]) : {_displayName = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");};
			default {_displayname = getText (configFile >> "CfgWeapons" >> _classname >> "displayName");};
		};
		systemChat format ["%1 added to favorites.", _displayname];
		[APM_favoritesBox, [_classname], false] call ace_arsenal_fnc_addVirtualItems;
	};
} forEach _loadout;

profileNamespace setVariable ["APM_arsenal_favorites", _favorites];

systemChat "Done adding all new items from loadout.";
