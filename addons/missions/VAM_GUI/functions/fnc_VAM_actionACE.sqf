private _action = ["APM_vcGUI", "Vehicle Customization", "", {
  ["APM_requestOwnership", [_target, CBA_ClientID]] call CBA_fnc_serverEvent;
  VAM_targetvehicle = _target;
  _target setVariable ["apm_customs_notInUse", false, true];
  createDialog "VAM_GUI";
}, {
  _target getVariable ["apm_customs_notInUse", true] &&
  {isNull (driver _target) || {unitIsUAV _target && !(isUAVConnected _target)}} &&
  {(ACE_Player call apm_missions_fnc_currentFob) select 1 > 0 || APM_ACE_base_condition}
}] call ace_interact_menu_fnc_createAction;

["LandVehicle", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["Helicopter", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["Plane", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
["Ship", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
