{
  [_x,"init",
  {
    (_this select 0) addAction ["<t color='#FFFF00'>" + localize "STR_ACTION_UNLOAD_BOX" + "</t>","scripts\client\ammoboxes\do_unload_truck.sqf","",-500,false,true,"","build_confirmed == 0 && (vehicle player == player) && (_target getVariable 'GRLIB_ammo_truck_load' > 0)",8];
  },false,[],true] call CBA_fnc_addClassEventHandler
} forEach KPLIB_transport_classes;

{
  [_x,"init",
  {
    (_this select 0) addAction ["<t color='#FFFF00'>" + localize "STR_ACTION_LOAD_BOX" + "</t>",{[_this select 0] call do_load_box;},"",-501,false,false,"","(isNull attachedTo _target || {toLower (typeOf (attachedTo _target)) in KPLIB_storageBuildings}) && (_target getVariable 'KP_liberation_crate_value' > 0) && (!isNull (((getpos player) nearEntities [KPLIB_transport_classes, 15]) select 0)) && (build_confirmed == 0) && (vehicle player == player)",15];

    (_this select 0) addAction ["<t color='#FFFF00'>" + localize "STR_ACTION_STORE_CRATE" + "</t>",{[(_this select 0), (nearestObjects [player,KPLIB_storageBuildings,20]) select 0,true] call KPLIB_fnc_crateToStorage;},"",-502,false,false,"","(isNull attachedTo _target) && (_target getVariable 'KP_liberation_crate_value' > 0) && (!isNull (nearestObjects [player,KPLIB_storageBuildings,20] select 0)) && (build_confirmed == 0) && (vehicle player == player)",15];

    (_this select 0) addAction ["<t color='#FFFF00'>" + localize "STR_ACTION_CRATE_VALUE" + "</t>",{[_this select 0] call KPLIB_fnc_checkCrateValue;uiSleep 3; hint "";},"",-503,false,false,"","(_target getVariable 'KP_liberation_crate_value' > 0) && (build_confirmed == 0) && (vehicle player == player)",8];

  },false,[],true] call CBA_fnc_addClassEventHandler
} forEach KPLIB_crates;
