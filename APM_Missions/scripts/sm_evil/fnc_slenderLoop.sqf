if (!hasInterface) exitWith {};
if (slender_man == player) exitWith {};

params [["_time", 0, [0]]]; 

waitUntil {
	call fnc_canSeeSlender
};

//Establish PP Effects
_priority = 2500;
_colorINV = objNull;
while {
	_colorINV = ppEffectCreate ["ColorInversion", _priority];
	_colorINV < 0
} do {
	_priority = _priority + 1;
};

_filmGrain = objNull;
while {
	_filmGrain = ppEffectCreate ["FilmGrain", _priority];
	_filmGrain < 0
} do {
	_priority = _priority + 1;
};
//return to previous settings if need be
_colorINV ppEffectEnable true;
_colorINV ppEffectAdjust [
	_time/60, //1, full value
	_time/120, //0.5, full value
	_time/120 //0.5 full value
];
_colorINV ppEffectCommit 0;

//edit filmGrain now
_filmGrain ppEffectEnable true;
_filmGrain ppEffectAdjust [
	_time/60,
	1,
	1.25,
	0.75,
	1,
	true
];
_filmGrain ppEffectCommit 0;

//PP Effects established, now increase for every sec of looking at slender.
while {call fnc_canSeeSlender} do {
	//edit colorINV first
	_colorINV ppEffectEnable true;
	_colorINV ppEffectAdjust [
		_time/60, //1, full value
		_time/120, //0.5, full value
		_time/120 //0.5 full value
	];
	_colorINV ppEffectCommit 1;

	//edit filmGrain now
	_filmGrain ppEffectEnable true;
	_filmGrain ppEffectAdjust [
		_time/60,
		1,
		1.25,
		0.75,
		1,
		true
	];
	_filmGrain ppEffectCommit 1;
	
	//Wait for colorINV to commit
	waitUntil {
		ppEffectCommitted _colorINV
	};

	//Fun part, determining if player is still looking or is uncon now. Also affect ACE heartrate
	if (_time >= 50) then {
		player setVariable ["ace_medical_heartrate", 180, true];
	};
	if (_time >= 60) exitWith {
		[player, true, 60, true] call ace_medical_fnc_setUnconscious;
	};
	_time = _time + 1;
};

//Begin reducing PP effects and destroy

for "_i" from _time to 0 step -1 do {
	if (call fnc_canSeeSlender) exitWith {};
	_time = _i;
	_colorINV ppEffectEnable true;
	_colorINV ppEffectAdjust [
		_time/60, //1, full value
		_time/120, //0.5, full value
		_time/120 //0.5 full value
	];
	_colorINV ppEffectCommit 1;

	//edit filmGrain now
	_filmGrain ppEffectEnable true;
	_filmGrain ppEffectAdjust [
		_time/60,
		1,
		1.25,
		0.75,
		1,
		true
	];
	_filmGrain ppEffectCommit 1;
	
	//Wait for colorINV to commit
	waitUntil {
		ppEffectCommitted _colorINV
	};
};

//destroy all effects, will be created when function is called to restart whole loop
_filmGrain ppEffectEnable false;
_colorINV ppEffectEnable false;
ppEffectDestroy _filmGrain;
ppEffectDestroy _colorINV;

//Recall loop to restart all content, regardless of if slender is seen or not.
[_time] spawn fnc_slenderLoop;