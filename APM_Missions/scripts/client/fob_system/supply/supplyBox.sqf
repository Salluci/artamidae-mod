params ["_box", "_supply"];

clearItemCargo _box;
clearMagazineCargo _box;
clearWeaponCargo _box;
_cond = {
	_current_fob = player getVariable ["current_fob", "NONE"];
	_current_fob != "NONE"
};

_action = ["box_unpack", "Unpack Supplies", "res\ace_icons\unpack_box.paa", {
	params ["_box", "_caller", "_data"];
	_data params ["_box_supply"];
	_current_fob = player getVariable ["current_fob", "NONE"];
	_fob_supply = _current_fob call fob_fnc_getSupply;
	_fob_supply = _fob_supply + _box_supply;
	[_current_fob, _fob_supply] call fob_fnc_setSupply;
	deleteVehicle _box;
}, _cond, nil, [_supply]] call ace_interact_menu_fnc_createAction;

[_box, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActiontoObject;