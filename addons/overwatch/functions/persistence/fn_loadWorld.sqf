APM_Budget = profileNamespace getVariable [format ["APM_Budget_%1", APM_Key], 0];
missionNamespace setVariable ["APM_Budget", APM_Budget, true];
diag_log format ["APM: Budget loaded, $%1", APM_Budget];

//FOB Stuff
private _mapfobs = format ["%1_APM_worldSave_fob", APM_Key];
private _fobs = profileNamespace getVariable [_mapfobs, []];
if (_fobs isNotEqualTo []) then {
	{
		_x params ["_pos", "_size", "_name", "_supplies", "_level", "_hasRespawn"];
		["APM_createFOB", [_pos, _size, _name, _supplies, _level, _hasRespawn]] call CBA_fnc_serverEvent;
	} forEach _fobs;
};
diag_log format ["APM: Loaded %1 FOBs from save.", count _fobs];

//Get Objects to spawn
private _mapObjects = format ["%1_APM_worldSave_objects", APM_Key];
private _objects = profileNamespace getVariable [_mapObjects, []];

if ((count _objects) > 0) then {
	//Create All objects
	{
		_x params ["_class", "_pos", "_dir", "_vec", ["_code", {}, [{}, ""]], ["_price", 0, [0]], ["_damage", [0,[]],[[]]],["_fuel",1,[1]], ["_customs","[]",[""]], ["_supply",0,[0]]];
		_damage params ["_overall", "_hitpoints"];
		_hitpoints params ["_hitpoints", "", "_amount"];
		private _object = createVehicle [_class, _pos, [], 0, "CAN_COLLIDE"];
		_object enableSimulationGlobal false;
		_object allowDamage false;
		_object setPosATL _pos;
		_object setDir _dir;
		_object setVectorUp _vec;
		_object enableSimulationGlobal true;
		_object allowDamage true;
		if (_code isEqualType "" && {_code isNotEqualTo ""}) then {
			_code = compile _code;
		};
		_object setVariable ["object_init", _code, true];
		_object setVariable ["APM_save_object", true, true];
		_object setVariable ["APM_FOB_Price", _price, true];
		_object setVariable ["ALiVE_SYS_LOGISTICS_DISABLE", true, true];
		_object setDamage _overall;
		{
		  [_object, _x, _amount select _forEachIndex, true] call BIS_fnc_setHitPointDamage
		} forEach _hitpoints;
		_object setFuel _fuel;
		if !(_customs isEqualTo "") then {
			_customs = parseSimpleArray _customs;
			[_object, _customs select 0, _customs select 1] call BIS_fnc_initVehicle;
		};
		if (_supply > 0) then {
			_object setVariable ["APM_fobSupply", _supply, true];
		};
		clearMagazineCargoGlobal _object;
		clearItemCargoGlobal _object;
		clearWeaponCargoGlobal _object;
		clearBackpackCargoGlobal _object;
	} forEach _objects;
};

diag_log format ["APM: Loaded %1 objects from save.", count _objects];

//Get and Hide terrain objects
APM_Hidden_Terrain = profileNamespace getVariable [format ["Hidden_Terrain_%1", APM_Key], []];
if ((count APM_Hidden_Terrain) > 0) then {
	{
		private _objects = nearestTerrainObjects [_x, [], 3, true, true];
		_objects = _objects + (nearestObjects [_x, [], 3, true]);
		private _object = _objects select 0;
		_object hideObjectGlobal true;
	} forEach APM_Hidden_Terrain;
};
diag_log format ["APM: Hid %1 bulldozed objects.", count APM_Hidden_Terrain];
missionNamespace setVariable ["APM_Hidden_Terrain", APM_Hidden_Terrain, true];

"Server loading done." remoteExec ["systemChat", 0];
