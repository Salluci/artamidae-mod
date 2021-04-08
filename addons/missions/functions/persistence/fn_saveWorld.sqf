params [["_minutes", 15, [0]]];

//FOB Stuff
private _fob = format ["%1_APM_worldSave_fob", APM_Key];
profileNamespace setVariable [_fob, APM_fobList];

//Save markers even when not enabled to reset.
private _markers = call apm_missions_fnc_saveMarkers;
profileNamespace setVariable [format ["%1_APM_worldSave_markers", APM_Key], _markers];

//All entities to save
private _savedObjects = [];
private _objects = (entities [[], ["Man", "Logic", "WeaponHolder"], false, true]) select {_x getVariable ["APM_save_object", false]};
{
	private _result = _x call apm_missions_fnc_saveVehicle;
	_savedObjects pushBackUnique _result;
} forEach _objects;

profileNamespace setVariable [format ["%1_APM_worldSave_objects", APM_Key], _savedObjects];
profileNamespace setVariable [format ["APM_budget_%1", APM_Key], APM_budget];
profileNameSpace setVariable [format ["Hidden_Terrain_%1", APM_Key], APM_Hidden_Terrain];

//Save ALiVE stuff
if (!isNil "ALiVE_sys_data") then {
	call apm_missions_fnc_saveWorldALiVE;
};
//Save Lib stuff
if (APM_isLiberation) then {
	call KPLIB_fnc_doSave;
};

saveProfileNamespace;

//Save all player data
{
	[_x] call apm_missions_fnc_savePlayer;
} forEach allPlayers - [HC1, HC2, HC3];

[apm_missions_fnc_saveWorld, [_minutes], _minutes * 60] call CBA_fnc_waitAndExecute;

true
