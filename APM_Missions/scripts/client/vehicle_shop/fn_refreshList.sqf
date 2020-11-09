params ["_ctrl", "_id"];

_display = ctrlParent _ctrl;
_lb_vehicles = _display displayCtrl 63914;

lbClear _lb_vehicles;

{
	_x params ["_classname", "_displayName", "_price", "_cat", "_code"];
	if (isClass (configFile >> "CfgVehicles" >> _classname)) then {
		if (_cat == _id) then {
			if (_displayName == "") then {
				_displayName = getText (configFile >> "CfgVehicles" >> _classname >> "displayName");
			};
			_index = _lb_vehicles lbAdd _displayName;
			_lb_vehicles lbSetData [_index, str _x];
			_lb_vehicles lbSetTextRight [_index, ("$" + (_price toFixed 0))];
		};
	};
} forEach APM_vehicle_shop;
lbSort _lb_vehicles;

shop_cam_multiplyer = switch _id do {
	case 0 : {3};
	case 1;
	case 2 : {5};
	case 3;
	case 4;
	case 5 : {7};
};