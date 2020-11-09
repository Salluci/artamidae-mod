params ["_rope", "_tgt"];
while {!isNull _rope} do {
	_length = ropeLength _rope;
	_dist = _tgt distance2D slender_man;
	if (_dist > _length) then {
		_dir = _tgt getRelDir slender_man;
		_pos = _tgt getRelPos [(_dist - _length)/4, _dir];
		_tgt setPos _pos;		
		sleep 0.1;
	};
};