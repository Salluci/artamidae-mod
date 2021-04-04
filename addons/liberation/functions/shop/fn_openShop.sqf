ghostpoint_pos = [100,100,1000];

disableSerialization;
createDialog "laptop_vehicle_shop";

waitUntil {!isNull (findDisplay 6391)};

//Declare Controls
private _display = findDisplay 6391;
private _name_box = _display displayCtrl 34;
private _lbCategory = _display displayCtrl 1800;
private _lbVehicles = _display displayCtrl 63914;

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
[_display, _name_box] spawn {
	params ["_dialog", "_name_box"];
	while {!isNull _dialog} do
	{
		private _credits = missionNamespace getVariable ["APM_Budget", 0];
		_credits = _credits toFixed 0;
		_credits = _credits splitString "";
		reverse _credits;
		private _cnt = 0;
		private _new_numb = [];
		{
			_cnt = _cnt + 1;
			_new_numb pushBack _x;
			if ((_cnt == 3) and (_forEachIndex != (count _credits -1))) then
			{
				_new_numb pushBack ",";
				_cnt = 0;
			};
		} forEach _credits;
		reverse _new_numb;
		_new_numb = _new_numb joinString "";
		_name_box ctrlSetText format ["Budget: %1 Credits", _new_numb];
		sleep 1;
	};
};
private _lastCategory = missionNamespace getVariable ["APM_vehShopLastCategory", 0];
private _lastSelection = missionNamespace getVariable ["APM_vehShopLastSelection", 0];
_lbCategory lbSetCurSel _lastCategory;
_lbVehicles lbSetCurSel _lastSelection;

_display displayAddEventHandler ["Unload", {
	deleteVehicle preview_vehicle;
	shop_cam cameraEffect ["terminate","back"];
	if !(isNull camera_light_source) then {
		deleteVehicle camera_light_source;
	};
    camDestroy shop_cam;
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
