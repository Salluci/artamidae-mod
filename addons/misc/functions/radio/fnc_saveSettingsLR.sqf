private _settings = (call TFAR_fnc_activeLrRadio) call TFAR_fnc_getLrSettings;

profileNamespace setVariable ["APM_TFAR_LR_Settings", _settings];
saveProfileNamespace; 

systemChat "Radio settings saved.";
