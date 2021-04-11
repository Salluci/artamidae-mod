params [["_object", cursorTarget], ["_price", 0], ["_category", 3], ["_code", ""], ["_displayName", ""]];

if (!isServer) exitWith {
  [_object, _displayName, _price, _category, _code] remoteExecCall ["apm_missions_fnc_addToVehicleShop", 2];
  "Executed on Server"
};

private _class = typeOf _object;

_query = dbPrepareQuery ["INSERT INTO veh_shop (Classname, Displayname, Price, Category, Code) VALUES (?,?,?,?,?)", [str _class, str _displayName, _price, _category, str _code]];
APM_db dbExecuteAsync _query
