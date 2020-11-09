if !(isNull tentacle_anchor) exitWith {};
tentacle_anchor = "B_static_AA_F" createVehicle (player modelToWorld [0,0,1]);
[tentacle_anchor, true] remoteExec ["hideObjectGlobal", 2];
tentacle_anchor setPos (player modelToWorld [0,0,1]);
tentacle_arm ="Land_Can_V2_F" createVehicle (player modelToWorld [0, 1, 1]);
tentacle_arm setObjectTextureGlobal [0, "#(RGBA,8,8,3)color(0,0,0,0)"];
tentacle_arm setPos (player modelToWorld [0,1,1]);
tentacle_arm setVectorDirAndUp [(vectorDir player), (vectorUp player)];
_rope = ropeCreate [tentacle_anchor, [0,0,0], 10];
_rope addEventHandler ["RopeBreak", {
	{
		deleteVehicle _x;
	} forEach _this;
}];
[{
	tentacle_anchor attachTo [player, [0,0,1]];
	[tentacle_arm, [0,0,0]] ropeAttachTo _this;
	tentacle_arm setVelocityModelSpace [0, 50, 1];
	tentacle_arm setObjectTexture [0, "#(rgb,8,8,3)color(0,0,0,1)"];
	_this setObjectTexture [0, "#(rgb,8,8,3)color(0,0,0,1)"];
}, _rope] call CBA_fnc_execNextFrame;
_time = time;
waitUntil {
	if (_time >= time + 3) exitWith {true};
	(player distance tentacle_arm) > 9.9
};

_pos1 = player modelToWorldWorld [0,0.5,1.1];
_pos2 = tentacle_arm modelToWorldWorld [0,0,0.1];
_ins = lineIntersectsSurfaces [
	_pos1,
	_pos2,
	player,
	tentacle_arm,
	true,
	3
];	
if (count _ins == 0) then {
	//No contact made
	ropeDestroy (ropes tentacle_anchor # 0);
	deleteVehicle tentacle_anchor;
	deleteVehicle tentacle_arm;
} else {
	//Contact made with unit
	_tgt = _ins call {
		_result = objNull;
		{
			_unit = _x # 2;
			if (_unit isKindOf "Man") exitWith {
				_result = _unit;
			};
		} forEach _this;
		_result
	};
	if !(isNull _tgt) then {
		tentacle_arm attachTo [_tgt, [0,0,1]];
		[_rope, _tgt] remoteExec ["fnc_beenCaptured", _tgt];
	} else {
		ropeDestroy (ropes tentacle_anchor # 0);
		deleteVehicle tentacle_anchor;
		deleteVehicle tentacle_arm;
	};
};