params ["_object"];

_object call apm_missions_fnc_fobTruck;

private _action = ["apm_loadContainer", "Load FOB Container", "", {
  private _truck = nearestObjects [getPosATL _target, ["Truck_01_flatbed_base_F"], 20, true] select {_x canVehicleCargo _target isEqualTo [true, true]};
  if (_truck isEqualTo []) exitWith {systemChat "No compatible vehicle nearby!"};
  _truck = _truck select 0;
  _truck setVehicleCargo _target;
}, {isNull (isVehicleCargo _target)}] call ace_interact_menu_fnc_createAction;
[_object, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["apm_unloadedContainer", "Unload FOB Container", "", {
  objNull setVehicleCargo _target;
}, {!isNull (isVehicleCargo _target)}] call ace_interact_menu_fnc_createAction;
[_object, 0, ["ACE_MainActions"], _action] call ace_interact_menu_fnc_addActionToObject;
