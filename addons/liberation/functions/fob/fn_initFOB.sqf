if (hasInterface) then {
	//Map marker events
	addMissionEventHandler ["Map", {
		params ["_opened"];

		if (_opened) then [{
			//Opened code
			private _markers = allMapMarkers select {"APM_FOB" in _x};
			{
				private _pos = getMarkerPos _x;
				private _center = _pos nearestObject "Land_HelipadEmpty_F";
				private _supply = _center getVariable ["APM_fobSupply", -1];
				private _name = format ["Supplies: %1", _supply];
				private _marker = createMarkerLocal [format ["APM_dataMarker_%1", _x], [(_pos select 0) + 10, (_pos select 1) - 25]];
				_marker setMarkerShapeLocal "ICON";
				_marker setMarkerTypeLocal "mil_dot_noShadow";
				_marker setMarkerTextLocal (format ["Supply: %1", _supply]);
			} forEach _markers;
		}, {
			//Closed code
			private _markers = allMapMarkers select {"APM_dataMarker" in _x};
			{
				deleteMarkerLocal _x;
			} forEach _markers;
		}];
	}];

	//Vehicle shop at FOB
	private _action = ["apm_openShopFOB", "Open Vehicle Shop (FOB)", "res\ace_icons\vic_shop_ca.paa", {
		[] call APM_missions_fnc_openShop;
	}, {(ACE_Player call apm_missions_fnc_currentFOB) select 1 >= 3}] call ace_interact_menu_fnc_createAction;

	[{alive player && {local player}}, {[player, 1, ["ACE_SelfActions"], _this] call ace_interact_menu_fnc_addActionToObject;}, _action] call CBA_fnc_waitUntilAndExecute;
};

if (isServer) then {

	APM_fobList = [];
	APM_fobObjects = [];
	publicVariable "APM_fobObjects";
	APM_fobNames = ["Arbiter", "Spartan", "Arrowhead", "Titan", "Requiem", "Amsterdam", "Berlin", "Sentinel", "Bucca", "Eden", "Dragon", "Grizzly", "Sabre", "Falcon", "Sherman", "Magpie", "Steel", "Fate", "Cuba", "Havana", "New York", "Washington", "Bear", "Carbon", "Menace", "Phantom", "Hope", "Empire", "Beskar", "Sykes", "Thor", "Hellsing", "Lincoln", "Sierra", "Apache", "Hyrule", "Thunder", "Vanguard"];
	APM_fobUsedNames = [];
	APM_fobRange = 150;
	publicVariable "APM_fobRange";
	APM_fobLargestSize = 150;
	publicVariable "APM_fobLargestSize";
	APM_fobMarkers = [];
	publicVariable "APM_fobMarkers";

 	["APM_createFOB", {
		params ["_pos", ["_size", APM_fobRange], ["_name", ""], ["_supplies", 0], ["_level", 0], ["_hasRespawn", false]];

		[_pos, _size, _name, _supplies, _level, _hasRespawn] call apm_missions_fnc_createFOB;
 	}] call CBA_fnc_addEventHandler;

	["APM_upgradeFOB", {
		params ["_object", ["_center", objNull], ["_level", -1]];

		[_object, _center, _level] call apm_missions_fnc_upgradeFOB;
	}] call CBA_fnc_addEventHandler;

	["APM_deleteFOB", {
		params ["_name"];

		_name call apm_missions_fnc_deleteFOB;
	}] call CBA_fnc_addEventHandler;

	["APM_fobUpdateSupply", {
		params ["_center", "_amount"];

		private _index = _center getVariable ["APM_fobIndex", -1];
		private _supply = (_center getVariable ["APM_fobSupply", 0]) + _amount;
		_center setVariable ["APM_fobSupply", _supply, true];

		(APM_fobList select _index) set [3, _supply];

	}] call CBA_fnc_addEventHandler;
};
