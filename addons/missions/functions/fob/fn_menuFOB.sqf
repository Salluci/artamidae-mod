#define ghostpoint_pos [100,100,1000]

previous_fob_truck = _this select 0;

disableSerialization;
createDialog "laptop_fob_shop";

waitUntil {!isNull (findDisplay 6392)};

//Declare Controls
_display = findDisplay 6392;
_name_box = _display displayCtrl 34;
_time_box = _display displayCtrl 35;
_bn_purchase = _display displayCtrl 63922;
_bn_cancel = _display displayCtrl 63923;
_lb_vehicles = _display displayCtrl 63924;
_img_preview = _display displayCtrl 63925;
_tb_category = _display displayCtrl 1800;

//Create search bar
_edit_search = _display ctrlCreate ["RscEdit", 645];
_edit_search ctrlSetPosition [0.1, 0.75, 0.3, 0.06];
_edit_search ctrlSetBackgroundColor [1,1,1,1];
_edit_search ctrlSetTextColor [0,0,0,1];
_edit_search ctrlSetFont "TahomaB";
_edit_search ctrlCommit 0;

//Disable category boxes
_tb_category ctrlShow false;
_tb_category ctrlEnable false;
_tb_category ctrlCommit 0;

//Delete listbox
_pos = ctrlPosition _lb_vehicles;
_lb_vehicles ctrlShow false;
ctrlDelete _lb_vehicles;
_lb_vehicles ctrlCommit 0;

//Create Tree View
_tv_list = _display ctrlCreate ["RscTreeSearch", 112233];
_tv_list ctrlSetPosition _pos;
_tv_list ctrlCommit 0;

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
		_credits = (ACE_Player call apm_missions_fnc_currentFOB) select 3;
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
		_name_box ctrlSetText format ["%1 : %2 Su            %3", _name, _new_numb, _current_date];
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

//UI Event Handlers
_display displayAddEventHandler ["Unload", {
	deleteVehicle preview_vehicle;
	shop_cam cameraEffect ["terminate","back"];
	if !(isNull camera_light_source) then {
		deleteVehicle camera_light_source;
	};
    camDestroy shop_cam;
}];

/*
_display displayAddEventHandler ["MouseButtonDown", {
	_button = _this select 1;
	if (_button == 1) then {
		_preview_image = (findDisplay 6392) displayCtrl 63925;
		mouse_drag = (findDisplay 6392) displayAddEventHandler ["MouseMoving", {
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
		(findDisplay 6392) displayRemoveEventHandler ["MouseMoving", mouse_drag];
	};
}];
*/

_tv_list ctrlAddEventHandler ["TreeSelChanged", {
	params ["_ctrl", "_selection"];
	_data = call compile (_ctrl tvData _selection);
	if !(isNull preview_vehicle) then {
		deleteVehicle preview_vehicle;
	};
	_data params [["_classname", ""], "_displayname", "_cost", "_required", "_code"];
	if (_classname isEqualTo "") exitWith {};
	preview_vehicle = _classname createVehicleLocal ghostpoint_pos;
	preview_vehicle enableSimulation false;
	preview_vehicle setPos ghostpoint_pos;
	preview_vehicle setVectorDirAndUp [[0,0,1], [0,0,1]];
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
	if (_key == 49) then {
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
	_display = findDisplay 6392;
	_tv_list = _display displayCtrl 112233;
	_data = call compile (_tv_list tvData (tvCurSel _tv_list));
	_data params ["_classname", "_displayname", "_price", "_required", "_code"];

	//Price check
	private _center = (ACE_Player call apm_missions_fnc_currentFob) select 0;
	private _budget = _center getVariable ["APM_fobSupply", 0];
	if (_price > _budget) exitWith {systemChat "Not enough funds!"};
	["APM_fobUpdateSupply", [_center, _price * -1]] call CBA_fnc_serverEvent;

	//Set last classname
	missionNamespace setVariable ["FOB_last_classname", _classname, false];
	missionNamespace setVariable ["FOB_last_price", _price, false];
	missionNamespace setVariable ["FOB_last_code", _code, false];

	[_classname, _displayname, _price, 0, _code] call APM_missions_fnc_spawnVehicle;

	//Close Dialog
	_display closeDisplay 1;
}];

[apm_missions_fnc_refreshListFOB, [_tv_list]] call CBA_fnc_execNextFrame;
