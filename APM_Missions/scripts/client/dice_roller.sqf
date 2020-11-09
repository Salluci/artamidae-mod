Roll_dice = {
    _this params [["_string", "1d20", [""]]];
	systemChat _string;
    _each_die_set = _string splitString " ";
    _result = 0;
    _result_array = [];
	_face_string = "";
    {
        _die_results = _x splitString "dD";
        //_die_results params ["_number", "_faces"];
		_die_results params [["_number", "1", [""]], ["_faces", "20", [""]]];
        _number = (parseNumber _number) max 1;
        _faces = (parseNumber _faces) max 1;
        for "_i" from 1 to _number do {
            _x_result = ceil (random _faces);
            _result = _result + _x_result;
            _result_array pushBack _x_result;
        };
		_face_string = _face_string + format ["%1d%2 ", _number, _faces];
    } forEach _each_die_set;
    _text = format ["%1 rolled %2 for result: %3 %4", name player, _face_string, _result, _result_array];
    _text remoteExec ["systemChat", -2, false];
};

["roll", {
    _this call Roll_dice;
}, "all"] call CBA_fnc_registerChatCommand;