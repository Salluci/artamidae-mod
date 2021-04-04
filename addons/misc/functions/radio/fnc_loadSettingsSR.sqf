private _settingsSR = profileNamespace getVariable ["APM_TFAR_SR_Settings", nil];
if (count _settingsSR == 0) exitWith {systemChat "Save a Radio first!";};
private _radioList = player call TFAR_fnc_getRadioItems;
{
	[_x, _settingsSR] call TFAR_fnc_setSwSettings;
} forEach _radioList;

systemChat "Radio settings applied.";
