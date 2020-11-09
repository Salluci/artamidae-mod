APM_TFAR_SR_Settings = profileNamespace getVariable ["APM_TFAR_SR_Settings", []];
APM_TFAR_LR_Settings = profileNamespace getVariable ["APM_TFAR_LR_Settings", []];
APM_TFAR_SR = profileNamespace getVariable ["APM_TFAR_SR", ""];
APM_TFAR_fnc_LoadSR = {
	player linkItem APM_TFAR_SR;
	[] spawn {
		//Confirm radio present
		systemChat "Getting new radio...";
		_time = 0;
		waitUntil {
			systemChat "Waiting...";
			sleep 1;
			_time = _time + 1;
			if (_time > 9) exitWith {_time = 999; true};
			_result = call TFAR_fnc_activeSwRadio;
			!isNil "_result"
		};
		if (_time == 999) exitWith {systemChat "ERROR: Unable to receive radio from server. Please try again."};
		//Confirm unique ID radio
		systemChat "New radio received. Confirming unique instance...";
		_time = 0;
		waitUntil {
			systemChat "Waiting...";
			sleep 1;
			_time = _time + 1;
			if (_time > 9) exitWith {_time = 999; true};
			_result = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_isPrototypeRadio;
			!_result
		};
		if (_time == 999) exitWith {systemChat "ERROR: Unable to confirm unique radio ID. Please try again."};
		//Assign radio settings
		systemChat "Unique radio received";
		[(call TFAR_fnc_activeSwRadio), APM_TFAR_SR_Settings] call TFAR_fnc_setSwSettings;
		systemChat "Check for new radio with correct settings.";
	};
};

//Establish load radio menu
_TFAR_Menu = ["TFAR_Menu_2", "Save/Load Radios", ["res\ACE_Radio_icon.paa", "#33FF33"], {

}, {true}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _TFAR_Menu] call ace_interact_menu_fnc_addActionToObject;

//Save SR radio
_TFAR_SR_Save_Cond = {!isNil {call TFAR_fnc_activeSwRadio}};
_TFAR_SR_Save_act = ["TFAR_SR_Save", "Save SR Radio", "", {
	_radio = call TFAR_fnc_activeSwRadio;
	APM_TFAR_SR_Settings = _radio call TFAR_fnc_getSwSettings;
	APM_TFAR_SR = configName inheritsFrom (configFile >> "CfgWeapons" >> _radio);
	profileNamespace setVariable ["APM_TFAR_SR_Settings", APM_TFAR_SR_Settings];
	profileNamespace setVariable ["APM_TFAR_SR", APM_TFAR_SR];
	saveProfileNamespace;
}, _TFAR_SR_Save_Cond] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "TFAR_Menu_2"], _TFAR_SR_Save_act] call ace_interact_menu_fnc_addActionToObject;

//Save LR radio
_TFAR_LR_Save_Cond = {!isNil {call TFAR_fnc_activeLrRadio}};
_TFAR_LR_Save_act = ["TFAR_LR_Save", "Save LR Settings", "", {
	APM_TFAR_LR_Settings = (call TFAR_fnc_activeLrRadio) call TFAR_fnc_getLrSettings;
	profileNamespace setVariable ["APM_TFAR_LR_Settings", APM_TFAR_LR_Settings];
	saveProfileNamespace;
}, _TFAR_LR_Save_Cond] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "TFAR_Menu_2"], _TFAR_LR_Save_act] call ace_interact_menu_fnc_addActionToObject;

//Load SR radio
_TFAR_SR_Load_Cond = {count APM_TFAR_SR_Settings != 0};
_TFAR_SR_Load_act = ["TFAR_SR_Load", "Load SR Radio", "", {[] call APM_TFAR_fnc_LoadSR}, _TFAR_SR_Load_Cond] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "TFAR_Menu_2"], _TFAR_SR_Load_act] call ace_interact_menu_fnc_addActionToObject;

//Load LR radio
_TFAR_LR_Load_Cond = {(count APM_TFAR_LR_Settings != 0) and (!isNil {call TFAR_fnc_activeLrRadio})};
_TFAR_LR_Load_act = ["TFAR_LR_Save", "Load LR Settings to Current Radio", "", {
	[call TFAR_fnc_activeLrRadio, APM_TFAR_LR_Settings] call TFAR_fnc_setLrSettings;
}, _TFAR_LR_Load_Cond] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "TFAR_Menu_2"], _TFAR_LR_Load_act] call ace_interact_menu_fnc_addActionToObject;

_action4 = ["TFAR_Set_encryption", "Set Radio Encryption Code", "", {
	[] spawn {
		sleep 0.1;
		disableSerialization;
		_code = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwRadioCode;
		_display = findDisplay 46 createDisplay "RscDisplayEmpty";
		uiNamespace setvariable ["TFAR_encrypt_display", _display];
		
		_edit = _display ctrlCreate ["RscEdit", 9889];
		_edit ctrlSetPosition [0,0,1,0.08];
		_edit ctrlSetBackgroundColor [1,1,1,1];
		_edit ctrlSetTextColor [0.1,0.1,0.1,1];
		_edit ctrlSetFont "RobotoCondensedBold";
		_edit ctrlSetText _code;
		_edit ctrlCommit 0;
		
		_button = _display ctrlCreate ["RscButton", 9890];
		_button ctrlSetPosition [0.2, 0.2, 0.25, 0.1];
		_button ctrlSetBackgroundColor [0,0,0,1];
		_button ctrlSetText "Change Encryption Code";
		_button ctrlCommit 0;
		
		_button ctrlAddEventHandler ["ButtonClick", {
			_display = uiNamespace getvariable "TFAR_encrypt_display";
			_edit = _display displayCtrl 9889;
			_text = toUpper ctrlText _edit;
			if (_text == "") exitWith {
				Hint "Box cannot be empty!";
			};
			_special_chars = "!@#$%^&*()-_=+[]{};'\:|,./<>?`~ ";
			_edit2 = _text splitString _special_chars;
			if (count _edit2 == 1) then {
				[call TFAR_fnc_activeSwRadio, _edit2 select 0] call TFAR_fnc_setSwRadioCode;
				[(call TFAR_fnc_activeLrRadio) select 0, (call TFAR_fnc_activeLrRadio) select 1, _edit2 select 0] call TFAR_fnc_setLrRadioCode;
				_new_code = toUpper ((call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSWRadioCode);
				if (_new_code == _edit2 select 0) then {
					Hint format ["Radio code set to: %1", _edit2 select 0];
					ctrlDelete _edit;
					ctrlDelete _button;
					_display closeDisplay 2;
				} else {
					Hint "Error! Please try again. Make sure you atleast have a SR radio equipped.";
				};
			} else {
				Hint "Cannot contain spaces or any special characters: " + _special_chars;
			};
		}];
	};
}, {true}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "TFAR_Menu_2"], _action4] call ace_interact_menu_fnc_addActionToObject;
