params ["_class", "", "_price", "_cat", "_code"];

_pos = switch _cat do {
	case 0 : {[[] call APM_fnc_findRoadSpawn, getDir player]};
	case 1 : {[[] call APM_fnc_findRoadSpawn, getDir player]};
	case 2 : {[[] call APM_fnc_findWaterSpawn, getDir player]};
	case 3 : {[[[position player, 2, 2, 0, false], true] call CBA_fnc_randPosArea, getDir player]};
	case 4 : {[] call APM_fnc_findHelipadSpawn};
	case 5 : {[] call APM_fnc_findHangarSpawn};
	default {[[[position player, 5, 5, 0, false], true] call CBA_fnc_randPosArea, getDir player]};
};

_vehicle = _class createVehicle (_pos select 0);
_vehicle setDir (_pos select 1);

//code check

if (_code isEqualType {}) then {
	_vehicle setVariable ["object_init", _code, true];
	[_vehicle, _code] remoteExec ["call", 0];
	//systemChat "Code was CODE";
};

if (_code isEqualType "") then {
	_vehicle setVariable ["object_init", compile _code, true];
	//systemChat "Code was STRING";
	[_vehicle, compile _code] remoteExec ["call", 0];
};

[_vehicle, _cat] spawn {
	params ["_vehicle", "_cat"];
	
	//Black screen open
	"TP" cuttext ["Moving to Vehicle", "BLACK", 1, true, true];
	
	//Move in/to vehicle
	switch _cat do {
		case 0;
		case 1;
		case 4;
		case 5 : {
			_pos = [[position _vehicle, 5, 5, 0, false], true] call CBA_fnc_randPosArea;
			player setPos _pos;
		};
		case 2 : {player moveInDriver _vehicle};
		case 3 : {"TP" cutFadeOut 0};
	};
	
	//Fade blackscreen
	"TP" cutFadeOut 2;
};

//Aircraft Hangar reverse fix
if (_cat == 5) then {
	_action = ["reverse_vic", "Rotate 180", "", {
		_target setDir (getDir _target + 180)
	},{
		speed _target <= 0
	}] call ace_interact_menu_fnc_createAction;
	[_vehicle, 0,["ACE_MainActions"], _action] remoteExec ["ace_interact_menu_fnc_addActionToObject", 0, true];
};

//Add flag to save vehicle
_vehicle setVariable ["APM_save_object", true, true];