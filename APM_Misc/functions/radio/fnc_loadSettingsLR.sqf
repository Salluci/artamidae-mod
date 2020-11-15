private _settingsLR = profileNamespace getVariable ["APM_TFAR_LR_Settings", nil];
if (count _settingsLR == 0) exitWith {systemChat "Save a Radio first!";};
private _radio = call TFAR_fnc_activeLrRadio;

[_radio, _settingsLR] call TFAR_fnc_setLrSettings;

systemChat "Radio settings applied.";
