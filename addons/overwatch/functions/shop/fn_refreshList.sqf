params ["_ctrl", "_id"];

private _display = ctrlParent _ctrl;
private _lb_vehicles = _display displayCtrl 63914;
private _budget = missionNamespace getVariable ["APM_Budget",0];

lbClear _lb_vehicles;

{
	_x params ["_classname", "_displayName", "_price", "_cat", "_code"];
	private _priceDisplay = _price toFixed 0;
	_priceDisplay = _priceDisplay splitString "";
	reverse _priceDisplay;
	private _cnt = 0;
	private _displayNumber = [];
	{
		_cnt = _cnt + 1;
		_displayNumber pushBack _x;
		if ((_cnt == 3) and (_forEachIndex != (count _priceDisplay -1))) then
		{
			_displayNumber pushBack ",";
			_cnt = 0;
		};
	} forEach _priceDisplay;
	reverse _displayNumber;
	_displayNumber = _displayNumber joinString "";
	if (isClass (configFile >> "CfgVehicles" >> _classname)) then {
		if (_cat == _id) then {
			if (_displayName == "") then
			{
				_displayName = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
			};
			private _index = _lb_vehicles lbAdd _displayName;
			_lb_vehicles lbSetData [_index, str _x];
			_lb_vehicles lbSetValue [_index, _price];
			if (_price == 0) exitWith
			{
				_lb_vehicles lbSetTextRight [_index, "Free"];
			};
			_lb_vehicles lbSetTextRight [_index, ("$" + _displayNumber)];
		};
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
