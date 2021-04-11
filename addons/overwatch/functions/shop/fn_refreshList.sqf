params ["_ctrl", "_id"];

private _display = ctrlParent _ctrl;
private _lb_vehicles = _display displayCtrl 63914;
private _budget = missionNamespace getVariable ["APM_Budget",0];

lbClear _lb_vehicles;
private _isFOB = !isNull (ACE_Player call apm_missions_fnc_currentFob select 0);

{
	_x params ["_classname", "_displayName", "_price", "_cat", "_code"];
	if (_cat != _id) then {continue};
	if (!isClass (configFile >> "CfgVehicles" >> _classname)) then {continue};
	if (_isFOB) then {
		_price = _price * 2;
	};
	private _displayNumber = _price call apm_missions_fnc_displayPrettyNumber;
	if (_displayName == "") then {
		_displayName = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
	};
	private _index = _lb_vehicles lbAdd _displayName;
	_lb_vehicles lbSetData [_index, str _x];
	_lb_vehicles lbSetValue [_index, _price];
	_lb_vehicles lbSetTextRight [_index, ("$" + _displayNumber)];
	if (_price == 0) then {
		_lb_vehicles lbSetTextRight [_index, "Free"];
	};
} forEach APM_vehicle_shop;
lbSortByValue _lb_vehicles;
_lb_vehicles lbSetCurSel 0;

shop_cam_multiplyer = switch _id do {
	case 0 : {3};
	case 1;
	case 3;
	case 2 : {5};
	case 4;
	case 5 : {7};
};
