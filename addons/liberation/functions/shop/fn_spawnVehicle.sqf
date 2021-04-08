params ["_class", "", "_price", "_cat", "_code"];

private _pos = [position player, getDir player];

private _vehicle = _class createVehicle (_pos select 0);
_vehicle setDir (_pos select 1);

private _config = configOf _vehicle;

//code check

if (_code isEqualType "") then {
	_code = compile _code;
};

_vehicle setVariable ["object_init", _code, true];

//Add flag to save vehicle
_vehicle setVariable ["APM_save_object", true, true];
_vehicle setVariable ["ALiVE_SYS_LOGISTICS_DISABLE", true, true];

if (getNumber (_config >> "ace_dragging_canCarry") == 1) then {
	[player, _vehicle] call ace_dragging_fnc_carryObject;
} else {
	[_vehicle, true, [0,5,0], 90, true] call ace_dragging_fnc_setCarryable;

	[player, _vehicle] call ace_dragging_fnc_carryObject;

	[_vehicle, false] call ace_dragging_fnc_setCarryable;
};

private _condition = {!(ACE_Player getVariable "ace_dragging_isCarrying")};

if (_cat == 3) then {
	clearMagazineCargoGlobal _vehicle;
	clearItemCargoGlobal _vehicle;
	clearWeaponCargoGlobal _vehicle;
	clearBackpackCargoGlobal _vehicle;
};


[_condition, {_vehicle setDamage 0}] call CBA_fnc_waitUntilAndExecute;

_vehicle
