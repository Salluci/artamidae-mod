if (isNil "ALIVE_sys_logistics") exitWith {};

{
  _x addEventHandler ["CuratorObjectEdited", {[ALIVE_sys_logistics, "updateObject", [(_this select 1)]] call ALIVE_fnc_logistics;}];
  _x addEventHandler ["CuratorObjectDeleted", {[ALIVE_sys_logistics, "removeObject", [(_this select 1)]] call ALIVE_fnc_logistics;}];
} forEach allCurators;
