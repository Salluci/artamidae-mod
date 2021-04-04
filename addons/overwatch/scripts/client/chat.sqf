Roll_dice =
{
  _this params [["_string", "1d20", [""]]];
  systemChat _string;
  private _each_die_set = _string splitString " ";
  private _result = 0;
  private _result_array = [];
  private _face_string = "";
  {
    private _die_results = _x splitString "dD";
    _die_results params [["_number", "1", [""]], ["_faces", "20", [""]]];
    _number = (parseNumber _number) max 1;
    _faces = (parseNumber _faces) max 1;
    for "_i" from 1 to _number do
    {
        private _x_result = ceil (random _faces);
        _result = _result + _x_result;
        _result_array pushBack _x_result;
    };
  _face_string = _face_string + format ["%1d%2 ", _number, _faces];
  } forEach _each_die_set;
  private _text = format ["%1 rolled %2 for result: %3 %4", name player, _face_string, _result, _result_array];
  [{
    _this remoteExec ["systemChat", -2, false];
  }, _text, 0.25] call CBA_fnc_waitAndExecute;
};

["roll", {
    _this call Roll_dice;
}, "all"] call CBA_fnc_registerChatCommand;

//Zeus killself command
["killMySelf", {
	player setDamage 1;
}, "all"] call CBA_fnc_registerChatCommand;

//Get latitude command
["latitude", {
	private _latitude = [worldName] call ace_common_fnc_getMapData select 0;
	systemChat format ["Map Latitude: %1", _latitude];
}, "all"] call CBA_fnc_registerChatCommand;

//Set budget command
["budget", {
  if (isNull (getAssignedCuratorLogic player)) exitWith {
    systemChat "You don't seem to be a recognized Zeus.";
  };
  missionNamespace setVariable ["APM_Budget", parseNumber (_this select 0), true];
  systemChat format ["New Budget: $%1", APM_Budget];
}, "all"] call CBA_fnc_registerChatCommand;
