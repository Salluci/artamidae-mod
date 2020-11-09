/*
 * Author: Crowmedic
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

_loadout = getUnitLoadout _unit;
_favorites = profileNamespace getVariable ["APM_arsenal_favorites", []];

_loadout_flat = (_loadout call apm_fnc_flattenArray) select {typeName _x == "STRING"};

//Add TFAR Radios as Prototype Radios
{
	if (_x != "") then {
		_classname = _x;
		if (["TFAR_", _classname] call BIS_fnc_inString) then {
			_classname = _classname splitString "_";
			_classname deleteAt ((count _classname) - 1);
			_classname = _classname joinString "_";
		};
		_index = _favorites pushBackUnique _classname;
		if (_index != -1) then {
			systemChat format ["%1 added to favorites.", _classname];
		};
	};
} forEach _loadout_flat;

systemChat "Done adding all new items from loadout.";
