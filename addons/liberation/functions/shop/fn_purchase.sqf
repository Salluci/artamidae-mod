private _display = findDisplay 6391;
private _vehicles = _display displayCtrl 63914;
private _data = call compile (_vehicles lbData (lbCurSel _vehicles));
_data params ["_classname", "_displayname", "_price", "_cat", "_code"];

private _budget = missionNamespace getVariable "APM_Budget";
_budget = _budget - _price;
_data call APM_missions_fnc_spawnVehicle;
_display closeDisplay 1;
missionNamespace setVariable ["APM_Budget", _budget, true];
