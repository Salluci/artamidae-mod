private _settings = (call TFAR_fnc_activeSwRadio) call TFAR_fnc_getSwSettings;

profileNamespace setVariable ["APM_TFAR_SR_Settings", _settings];
saveProfileNamespace;

systemChat "Radio settings saved.";
