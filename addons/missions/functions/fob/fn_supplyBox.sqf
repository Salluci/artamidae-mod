params ["_box", "_supply"];

clearItemCargo _box;
clearMagazineCargo _box;
clearWeaponCargo _box;
_box setVariable ["APM_fobSupply", _supply, true];

_cond = {
	(_target call apm_missions_fnc_currentFOB) select 1 >= 0 &&
	{_target getVariable ["APM_fobSupply", 0] > 0}
};

_action = ["APM_fobUnpackBox", "Unpack Supplies", "res\ace_icons\unpack_box.paa", {
	private _center = (_target call apm_missions_fnc_currentFOB) select 0;
	["APM_fobUpdateSupply", [_center, _target getVariable ["APM_fobSupply", 0]]] call CBA_fnc_serverEvent;
	_target setVariable ["APM_fobSupply", 0, true];
}, _cond] call ace_interact_menu_fnc_createAction;
[_box, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActiontoObject;
