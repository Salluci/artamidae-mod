params [["_minutes", 15, [0]]];

//FOB Stuff
private _fob = format ["%1_APM_worldSave_fob", APM_Key];
profileNamespace setVariable [_fob, APM_fobList];

//All entities to save
private _savedObjects = [];
private _objects = (allMissionObjects "All") select {_x getVariable ["APM_save_object", false]};
{
	private _class = typeOf _x;
	private _pos = getPosATL  _x;
	private _dir = getDir _x;
	private _vec = vectorUp _x;
	private _code = _x getVariable ["object_init", {}];
	private _price = _x getVariable ["APM_FOB_Price", 0];
	private _damage = [damage _x, getAllHitPointsDamage _x];
	private _fuel = fuel _x;
	private _customs = str ([_x, typeOf _x] call BIS_fnc_getVehicleCustomization);
	private _supply = _x getVariable ["APM_fobSupply", 0];
	_savedObjects pushBackUnique [_class, _pos, _dir, _vec, _code, _price, _damage, _fuel, _customs, _supply];
} forEach _objects;

private _mapObjects = format ["%1_APM_worldSave_objects", APM_Key];
profileNamespace setVariable [_mapObjects, _savedObjects];

profileNamespace setVariable [format ["APM_budget_%1", APM_Key], APM_budget];

//Save hidden terrain objects
profileNameSpace setVariable [format ["Hidden_Terrain_%1", APM_Key], APM_Hidden_Terrain];

//Save ALiVE stuff
if !(isNil "ALiVE_sys_data") then {
	call apm_missions_fnc_saveWorldALiVE;
};
//Save Lib stuff
if (!isNil "GRLIB_save_key") then {
	call KPLIB_fnc_doSave;
};

saveProfileNamespace;

//Save all player data
{
	[_x] call apm_missions_fnc_savePlayer;
} forEach allPlayers - [HC1, HC2, HC3];

[apm_missions_fnc_saveWorld, [_minutes], _minutes * 60] call CBA_fnc_waitAndExecute;

true
