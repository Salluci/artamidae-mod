#define ghostpoint_pos [100,100,1000]

disableSerialization;
createDialog "laptop_vehicle_shop";

waitUntil {!isNull (findDisplay 6391)};

//Declare Controls
_display = findDisplay 6391;
_name_box = _display displayCtrl 34;
_time_box = _display displayCtrl 35;
_bn_purchase = _display displayCtrl 63912;
_bn_cancel = _display displayCtrl 63913;
_lb_vehicles = _display displayCtrl 63914;
_img_preview = _display displayCtrl 63915;
_tb_category = _display displayCtrl 1800;

//Create Preview Cam
shop_cam = "camera" camCreate ghostpoint_pos;
shop_cam cameraEffect ["INTERNAL", "BACK", "shoprender0"];
shop_cam camSetTarget ghostpoint_pos;
shop_cam camSetRelPos shop_cam_relpos;
shop_cam camSetFov 1;
shop_cam camSetFocus [50, 0];
shop_cam camCommit 0;
nvg_state = 0;

//Setup header bar
[_display, _time_box, _name_box] spawn {
	params ["_dialog", "_time_box", "_name_box"];
	while {!isNull _dialog} do {
		_credits = missionNamespace getVariable ["APM_Budget", 0];
		_credits = _credits toFixed 0;
		_credits = _credits splitString "";
		reverse _credits;
		_cnt = 0;
		_new_numb = [];
		{
		_cnt = _cnt + 1;
		_new_numb pushBack _x;
		if ((_cnt == 3) and (_forEachIndex != (count _credits -1))) then {
		_new_numb pushBack ",";
		_cnt = 0;
		};
		} forEach _credits;
		reverse _new_numb;
		_new_numb = _new_numb joinString "";
		_name = name player;
		date params ["_year", "_month", "_day", "_hour", "_minute"];
		switch _month do {
			case 1 : {_month = "Jan"};
			case 2 : {_month = "Feb"};
			case 3 : {_month = "Mar"};
			case 4 : {_month = "Apr"};
			case 5 : {_month = "May"};
			case 6 : {_month = "Jun"};
			case 7 : {_month = "Jul"};
			case 8 : {_month = "Aug"};
			case 9 : {_month = "Sep"};
			case 10 : {_month = "Oct"};
			case 11 : {_month = "Nov"};
			case 12 : {_month = "Dec"};
			default {};
		};
		switch _day do {
			case 1 : {_day = "1st"};
			case 2 : {_day = "2nd"};
			case 3 : {_day = "3rd"};
			case 4 : {_day = "4th"};
			case 5 : {_day = "5th"};
			case 6 : {_day = "6th"};
			case 7 : {_day = "7th"};
			case 8 : {_day = "8th"};
			case 9 : {_day = "9th"};
			case 10 : {_day = "10th"};
			case 11 : {_day = "11th"};
			case 12 : {_day = "12th"};
			case 13 : {_day = "13th"};
			case 14 : {_day = "14th"};
			case 15 : {_day = "15th"};
			case 16 : {_day = "16th"};
			case 17 : {_day = "17th"};
			case 18 : {_day = "18th"};
			case 19 : {_day = "19th"};
			case 20 : {_day = "20th"};
			case 21 : {_day = "21st"};
			case 22 : {_day = "22nd"};
			case 23 : {_day = "23rd"};
			case 24 : {_day = "24th"};
			case 25 : {_day = "25th"};
			case 26 : {_day = "26th"};
			case 27 : {_day = "27th"};
			case 28 : {_day = "28th"};
			case 29 : {_day = "29th"};
			case 30 : {_day = "30th"};
			case 31 : {_day = "31st"};
			default {};
		};

		_current_date = format ["%1 %2, %3", _month, _day, _year];
		_name_box ctrlSetText format ["%1 : $%2            %3", _name, _new_numb, _current_date];
		_hour = date select 3;
		_minute = date select 4;
		if (_minute < 10) then { _minute = "0" + (str _minute)};
		_time_box ctrlSetText format ["%1 %2", _hour, _minute];
		sleep 1;
		_hour = date select 3;
		_minute = date select 4;
		if (_minute < 10) then { _minute = "0" + (str _minute)};
		_time_box ctrlSetText format ["%1:%2", _hour, _minute];
		sleep 1;
		
	};
};

_display displayAddEventHandler ["Unload", {
	deleteVehicle preview_vehicle;
	shop_cam cameraEffect ["terminate","back"];
	if !(isNull camera_light_source) then {
		deleteVehicle camera_light_source;
	};
    camDestroy shop_cam;
}];

[APM_fnc_refreshList, [_tb_category, 0]] call CBA_fnc_execNextFrame;
/*
_display displayAddEventHandler ["MouseButtonDown", {
	_button = _this select 1;
	if (_button == 1) then {
		_preview_image = (findDisplay 6391) displayCtrl 63915;
		mouse_drag = (findDisplay 6391) displayAddEventHandler ["MouseMoving", {
			_mousex = (getMousePosition select 0) * 270 + 90;
			_mousey = (getMousePosition select 1) * 10;
			_camz = 1000 + _mousey;
			_new_camz = _mousey + _camz;
			if (_camz > 1010) then {_camz = 1010};
			if (_camz < 998) then {_camz = 998};
			_relpos = preview_vehicle getRelPos [shop_cam_multiplyer, _mousex];
			_relpos set [2, _camz];
			shop_cam camSetPos _relpos;
			shop_cam camCommit 0;
		}];
	};
}];
_display displayAddEventHandler ["MouseButtonUp", {
	_button = _this select 1;
	if (_button == 1) then {
		(findDisplay 6391) displayRemoveEventHandler ["MouseMoving", mouse_drag];
	};
}];
*/
_tb_category ctrlAddEventHandler ["ToolBoxSelChanged", {
	_this call APM_fnc_refreshList;
}];

_lb_vehicles ctrlAddEventHandler ["LBSelChanged", {
	params ["_ctrl", "_selection"];
	_data = call compile (_ctrl lbData _selection);
	if !(isNull preview_vehicle) then {
		deleteVehicle preview_vehicle;
	};
	_data params ["_classname", "_displayname", "_cost", "_cat", "_code"];
	preview_vehicle = _classname createVehicleLocal ghostpoint_pos;
	preview_vehicle enableSimulation false;
	preview_vehicle setPos ghostpoint_pos;
	shop_cam camSetTarget preview_vehicle;
	_bounding = boundingBox preview_vehicle;
	_relpos = [
		(abs (_bounding # 0 # 0)) + 2,
		(abs (_bounding # 0 # 1)) + 2,
		(abs (_bounding # 0 # 2)) + 2
	];
	shop_cam camSetRelPos _relpos;
	shop_cam camCommit 0;
}];

_display displayAddEventHandler ["KeyUp", {
	params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"];
	if ((_key == 49) and (_ctrl)) then {
		switch nvg_state do {
			case 0 : {nvg_state = 1; "shoprender0" setPiPEffect [1];};
			case 1 : {nvg_state = 2; "shoprender0" setPiPEffect [2];};
			case 2 : {nvg_state = 0; "shoprender0" setPiPEffect [0];};
		};
	};
	if (_ctrl) then {
		if (_key == 38) then {
			if (isNull camera_light_source) then {
				camera_light_source = "#lightpoint" createVehicleLocal (getpos shop_cam);
				camera_light_source setLightBrightness 1;
				camera_light_source setLightAmbient [1,1,1];
				camera_light_source setLightDayLight true;
				camera_light_source setLightColor [1,1,1];
				camera_light_source lightAttachObject [shop_cam, [0,-0.2,0]];
			} else {
				deleteVehicle camera_light_source;
			};
		};
	};
}];

_bn_purchase ctrlAddEventHandler ["ButtonClick", {
	_display = findDisplay 6391;
	_lb_vehicles = _display displayCtrl 63914;
	_data = call compile (_lb_vehicles lbData (lbCurSel _lb_vehicles));
	_data params ["_classname", "_displayname", "_price", "_cat", "_code"];
	
	//Price check
	_budget = missionNamespace getVariable ["APM_Budget", 0];
	if (_price > _budget) exitWith {
		systemChat "Budget doesn't allow this purchase!";
	};
	
	//Cert Checks
	_cert_pass = true;
	
	if (_cat == 1) then {//Crewman check
		_cert = player getVariable ["APM_crewman", false];
		if !(_cert) then {
			_cert_pass = false;
		};
	};
	if (_cat == 4) then {//Helo Check
		_cert = player getVariable ["APM_rotor", false];
		if !(_cert) then {
			_cert_pass = false;
		};
	};
	if (_cat == 5) then {//Fixedwing Check
		_cert = player getVariable ["APM_fixed", false];
		if !(_cert) then {
			_cert_pass = false;
		};
	};
	if (_cert_pass) then [{
		APM_Budget = _budget - _price;
		publicVariable "APM_Budget";
		_display closeDisplay 1;
		
		_pos = getPos player;
		_vehicle = createVehicle [_classname, _pos, [], 15];
		[_code, _vehicle] call CBA_fnc_execNextFrame;
	},{
		systemChat "You are not certified for this type of vehicle!";
	}];
}];