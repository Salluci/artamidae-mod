params ["_admin", "_target"];

_target_uid = getPlayerUID _target;

//Set Database data

//_result = "extDB3" callExtension format ["0:apm:banPlayer:&1", _target_uid];
_text = format ["0:SQL:UPDATE users SET Banned = 1 WHERE uid = %1", _target_uid];
_result = "extDB3" callExtension _text;
//Kick the target player
_name = name _target;
_result2 = APM_Serverpass serverCommand format ["#kick %1",_name];

if (_result2) then [{
	_hint = format ["%1 was banned by %2", _name, name _admin];
	_hint remoteExec ["systemChat", 0];
}, {
	_hint = format ["ERROR: %1 was NOT banned by %2", _name, name _admin];
	_hint remoteExec ["systemChat", 0];
}];