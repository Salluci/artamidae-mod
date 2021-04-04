["CAManBase", "Killed", {
	params ["_unit", "_killer", "_instigator"];

	if (side (group _unit) isNotEqualTo side (group _instigator) && {side (group _unit) isNotEqualTo civilian}) then {
		APM_Budget = ceil (APM_Budget + (random [150, 175, 200]));
		publicVariable "APM_Budget";
	};
}] call CBA_fnc_addClassEventHandler;

["Car_F", "Killed", {
	params ["_unit", "_killer", "_instigator"];

	if (side (group _unit) isNotEqualTo side (group _instigator) && {side (group _unit) isNotEqualTo civilian}) then {
		APM_Budget = ceil (APM_Budget + (random [250, 300, 500]));
		publicVariable "APM_Budget";
	};
}] call CBA_fnc_addClassEventHandler;

["Tank_F", "Killed", {
	params ["_unit", "_killer", "_instigator"];

	if (side (group _unit) isNotEqualTo side (group _instigator) && {side (group _unit) isNotEqualTo civilian}) then {
		APM_Budget = ceil (APM_Budget + (random [500, 800, 2000]));
		publicVariable "APM_Budget";
	};
}] call CBA_fnc_addClassEventHandler;

["Helicopter", "Killed", {
	params ["_unit", "_killer", "_instigator"];

	if (side (group _unit) isNotEqualTo side (group _instigator) && {side (group _unit) isNotEqualTo civilian}) then {
		APM_Budget = ceil (APM_Budget + (random [800, 1000, 2000]));
		publicVariable "APM_Budget";
	};
}] call CBA_fnc_addClassEventHandler;

["Plane", "Killed", {
	params ["_unit", "_killer", "_instigator"];

	if (side (group _unit) isNotEqualTo side (group _instigator) && {side (group _unit) isNotEqualTo civilian}) then {
		APM_Budget = ceil (APM_Budget + (random [1200, 1500, 3000]));
		publicVariable "APM_Budget";
	};
}] call CBA_fnc_addClassEventHandler;
