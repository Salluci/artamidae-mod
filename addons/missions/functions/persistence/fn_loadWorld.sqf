if (!isServer) exitWith {};

APM_Budget = profileNamespace getVariable [format ["APM_Budget_%1", APM_Key], 0];
missionNamespace setVariable ["APM_Budget", APM_Budget, true];
diag_log format ["APM: Budget loaded, $%1", APM_Budget];

//FOB Stuff
private _fobs = profileNamespace getVariable [format ["%1_APM_worldSave_fob", APM_Key], []];
if ((count _fobs) > 0) then {
	{
		_x params ["_pos", "_size", "_name", "_supplies", "_level", "_hasRespawn"];
		["APM_createFOB", [_pos, _size, _name, _supplies, _level, _hasRespawn]] call CBA_fnc_serverEvent;
	} forEach _fobs;
};
diag_log format ["APM: Loaded %1 FOBs from save.", count _fobs];

//Get Objects to spawn
private _objects = profileNamespace getVariable [format ["%1_APM_worldSave_objects", APM_Key], []];
if ((count _objects) > 0) then {
	{
		_x call apm_missions_fnc_loadVehicle
	} forEach _objects;
};
diag_log format ["APM: Loaded %1 objects from save.", count _objects];

//Get Markers to load
if (["persistent_markers", 1] call bis_fnc_getParamValue isEqualTo 1) then {
	if (isNil "APM_MarkerSystemInit") then {call apm_missions_fnc_initMarkerSystem};
	[{missionNamespace getVariable ["APM_MarkerSystemInit", false]}, {
		private _markers = profileNameSpace getVariable [format ["%1_APM_worldSave_markers", APM_Key], [[],[]]];
		[_markers select 0] call apm_missions_fnc_loadLineMarkers;
		[_markers select 1] call apm_missions_fnc_loadIconMarkers;
	}] call CBA_fnc_waitUntilAndExecute;
};

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
