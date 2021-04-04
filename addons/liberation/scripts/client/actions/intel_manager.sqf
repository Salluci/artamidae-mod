{
  [_x,"init",
  {
    (_this select 0) addAction ["<t color='#FFFF00'>" + localize "STR_INTEL" + "</t>",{[_this select 0] remoteExecCall ["intel_remote_call", 2];},"",-849,true,true,"","(vehicle player == player)",5];;
  },false,[],true] call CBA_fnc_addClassEventHandler;
} forEach KPLIB_intelObjectClasses;
