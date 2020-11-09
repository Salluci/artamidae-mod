_map_name = format ["%1_APM_worldSave_markers", worldName];
_marker_array = profileNamespace getVariable [_map_name, []];
if ((count _marker_array) == 0) exitWith {};
_supply_name = format ["%1_supplies", worldName];
_supply_array = profileNamespace getVariable [_supply_name, []];

//incase of old save file w/o supply array in profileNameSpace
if (count _marker_array != count _supply_array) then {
	for "_i" from 0 to count _marker_array do {
		_supply_array set [_i, 5000];
	};
};

//Create all markers again
{
	_x params ["_name", "_pos", "_size"];
	_new = createMarker [_name, _pos];
	_new setMarkerShape "ELLIPSE";
	_new setMarkerSize [_size, _size];
	_new setMarkerBrush "Border";
	_new setMarkerColor "ColorBlue";
	["APM_FOB_Create", _pos] call CBA_fnc_serverEvent;
	_supply = _supply_array # _foreachindex;
	[_name, _supply] call fob_fnc_setSupply;
} forEach _marker_array;

//Get and Hide terrain objects
APM_Hidden_Terrain = profileNamespace getVariable [format ["Hidden_Terrain_%1", worldName], []];
publicVariable "APM_Hidden_Terrain";
if ((count APM_Hidden_Terrain) > 0) then {
	{
		private _objects = nearestTerrainObjects [_x, [], 1, false, true];
		_objects = _objects + (_x nearObjects ["House", 1]);
		_object = _objects select 0;
		_object hideObjectGlobal true;
	} forEach APM_Hidden_Terrain;
};

//Get Objects to spawn
_objects_name = format ["%1_APM_worldSave_objects", worldName];
_objects_array = profileNamespace getVariable [_objects_name, []];
if ((count _objects_array) == 0) exitWith {};

//Create All objects
{
	_x params ["_class", "_pos", "_dir", "_vec", ["_code", {}, [{}, ""]], ["_price", 0, [0]]];
	_object = _class createVehicle _pos;
	_object setPosATL _pos;
	_object setDir _dir;
	_object setVectorUp _vec;
	if ((typeName _code) == "STRING") then {
		_code = call compile _code;
	};
	_object call _code;
	_object setVariable ["object_init", _code, true];
	_object setVariable ["APM_save_object", true, true];
	_object setVariable ["APM_FOB_Price", _price, true];
} forEach _objects_array;

APM_budget = profileNamespace getVariable [format ["APM_budget_%1", worldName], 1500000];
publicVariable "APM_budget";

"Server loading done." remoteExec ["systemChat", 0];