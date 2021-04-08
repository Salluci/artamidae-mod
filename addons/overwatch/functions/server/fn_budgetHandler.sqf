["CAManBase", "Killed", {
	params ["_unit", "_killer", "_instigator"];

	if (side (group _unit) isNotEqualTo side (group _instigator) && {side (group _unit) isNotEqualTo civilian}) then {
		private _reward = (ceil (random [15, 17, 30]) * 10);
		APM_Budget = ceil (APM_Budget + _reward);
		publicVariable "APM_Budget";
	};
}] call CBA_fnc_addClassEventHandler;

["Car_F", "Killed", {
	params ["_unit", "_killer", "_instigator"];

	if (side (group _unit) isNotEqualTo side (group _instigator) && {side (group _unit) isNotEqualTo civilian}) then {
		private _reward = (ceil (random [2, 3, 5]) * 100);
		APM_Budget = ceil (APM_Budget + _reward);
		publicVariable "APM_Budget";
	};
}] call CBA_fnc_addClassEventHandler;

["Tank_F", "Killed", {
	params ["_unit", "_killer", "_instigator"];

	if (side (group _unit) isNotEqualTo side (group _instigator) && {side (group _unit) isNotEqualTo civilian}) then {
		private _reward = (ceil (random [5, 8, 12]) * 100);
		APM_Budget = ceil (APM_Budget + _reward);
		publicVariable "APM_Budget";
	};
}] call CBA_fnc_addClassEventHandler;

["Helicopter", "Killed", {
	params ["_unit", "_killer", "_instigator"];

	if (side (group _unit) isNotEqualTo side (group _instigator) && {side (group _unit) isNotEqualTo civilian}) then {
		private _reward = (ceil (random [8, 10, 20]) * 100);
		APM_Budget = ceil (APM_Budget + _reward);
		publicVariable "APM_Budget";
	};
}] call CBA_fnc_addClassEventHandler;

["Plane", "Killed", {
	params ["_unit", "_killer", "_instigator"];

	if (side (group _unit) isNotEqualTo side (group _instigator) && {side (group _unit) isNotEqualTo civilian}) then {
		private _reward = (ceil (random [12, 15, 30]) * 100);
		APM_Budget = ceil (APM_Budget + _reward);
		publicVariable "APM_Budget";
	};
}] call CBA_fnc_addClassEventHandler;

if (isServer && {APM_isALiVE}) then {
	//ALiVE Task Reward
	APM_SAV_fnc_taskSucceeded = {
		private _reward = 2000 + (ceil (random [1, 2, 5]) * 1000);
		APM_Budget = ceil (APM_Budget + _reward);
		publicVariable "APM_Budget";
		private _hint = format ["Task completed. Budget Increase: $%1", _reward];
		_hint remoteExec ["systemChat", 0];
	};
	private _listener = [nil, "create"] call ALIVE_fnc_baseClass;
	_listener setVariable ["class", APM_SAV_fnc_taskSucceeded];

	APM_SAV_taskSucceeded_listenerID = [ALIVE_eventLog, "addListener", [_listener, ["TASK_SUCCEEDED"]]] call ALIVE_fnc_eventLog;
};
