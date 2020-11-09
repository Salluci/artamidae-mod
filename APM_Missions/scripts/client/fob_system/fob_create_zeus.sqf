//Get current marker

_marker = player getVariable ["Current_fob", ""];

[player, _marker] remoteExec ["fnc_create_eng_zeus", 2];

waitUntil {
	_zeus = player getVariable ["APM_Eng_Zeus", objNull];
	!(isNull _zeus)
};
sleep 0.2;

//Incase no zeus available
_zeus = player getVariable ["APM_Eng_Zeus", player];
if (_zeus == player) exitWith {
	systemChat "No Engineer Zeus available. Try again once someone releases one";
	player setVariable ["APM_Eng_Zeus", nil, true];
};

openCuratorInterface;

waitUntil {
	sleep 0.25;
	!isNull (findDisplay 312)
};
setViewDistance 200;

_pos = player modelToWorld [0, 25, 25];
curatorCamera setPos _pos;
_dir = getDir player;
curatorCamera setDir _dir;

waitUntil {
	_display = findDisplay 312;
	isNull _display
};

_zeus = player getVariable ["APM_Eng_Zeus", objNull];
_zeus remoteExec ["unassignCurator", 0];
setViewDistance APM_foot_vd;
player setVariable ["APM_Eng_Zeus", nil, true];