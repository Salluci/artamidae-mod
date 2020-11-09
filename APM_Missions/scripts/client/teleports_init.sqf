apm_teleport_action = {
	if ((_this isKindOf "ModuleRespawnPositionWest_F") or (_this isKindOf "ModuleRespawnPosition_F") or (_this isKindOf "Land_ClutterCutter_small_F")) exitWith {
		_pos = [_this, 5] call CBA_fnc_randPos;
		player setPos _pos;
	};
	if (_this isKindOf "LandVehicle") exitWith {
		player moveInAny _this;
		[{
			if (vehicle player != _this) then {
				_pos = [_this, 5] call CBA_fnc_randPos;
				player setPos _pos;
			};
		}, _this] call CBA_fnc_execNextFrame;
	};
	if (_this isKindOf "Air") exitWith {
		player moveInAny _this;
		[{
			if (vehicle player != _this) then {
				systemChat "Vehicle is full, please try another vehicle";
			};
		}, _this] call CBA_fnc_execNextFrame;
	};
};

_APM_ACE_Tele_Menu = ["APMTeleMenu", "Teleport To:", "res\ace_icons\portal_blue_ca.paa", {
	//hintSilent "Use this menu to Teleport around base and to FOBs established in the field";
}, APM_ACE_base_condition, {
	//Child Code
	_TP_modules = [] call BIS_fnc_getRespawnPositions;
	_actions = [];
	_action_code = {(_this select 2) call apm_teleport_action};
	{
			private _action_id = format ["ACE_TP_%1", _x];
			private _name = _x getVariable ["name", ""];
			private _location = (nearestLocations [position _x, ["Name", "NameCity", "NameCityCapital", "NameLocal"], 1000, _x]) select 0;
			private _veh_type = getText (configFile >> "CfgVehicles" >> 
			typeOf _x >> "displayName");
			private _action_title = format ["%4 %1 %2 %3", text _location , mapGridPosition _x, _veh_type, _name];
			private _action = [_action_id, _action_title, "res\ace_icons\portal_orange_ca.paa", _action_code, {true}, {}, _x] call ace_interact_menu_fnc_createAction;
			_actions pushBack [_action, [], player];
	} forEach _TP_modules;
	_actions
}, nil, "", 0, [false, false, false, true, false]] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _APM_ACE_Tele_Menu] call ace_interact_menu_fnc_addActionToObject;