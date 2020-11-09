_this params ["_forklift", "_item"];

//Change locality of _item
_code = {
	params ["_item", "_player"];
	_item setOwner (owner _player);
};
[[_item, player], _code] remoteExec ["call", 2];
waitUntil {
	local _item
};

//determin distance
_bounding = boundingBox _item;
_bounding params ["_xp", "_yp"];
_xp params ["_x1", "_y1"];
_yp params ["_x2", "_y2"];

_item_size = ((abs _x1 + abs _x2)/2) max ((abs _y1 + abs _y2)/2);

//Move and attach item
_lift_pos = [0,(_item_size + 2),0];

_item attachTo [_forklift, _lift_pos];
[_item, false] remoteExec ["enableSimulationGlobal", 2];

//Item in vehicle local Var
_forklift setVariable ["APM_forklift_object", _item];

//Add key Event Handler

forklift_keyDown_Eh = (findDisplay 46) displayAddEventHandler ["KeyDown", {
	_this call forklift_modify;
}];

forklift_leveling = true;

forklift_keyUp_Eh = (findDisplay 46) displayAddEventHandler ["KeyUp", {
	params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"];
	if ((_ctrl) and (_key == 18)) then {
		forklift_leveling = !forklift_leveling;
	};
}];

forklift_getOut_Eh = _forklift addEventHandler ["GetOut", {
	params ["_vehicle", "_role", "_unit", "_turret"];
	if (_unit == player) then {
		[_vehicle, _unit] call forklift_drop;
		_vehicle removeEventHandler ["GetOut", _thisEventHandler];
	};
}];

forklift_Deleted_Eh = _forklift addEventHandler ["Deleted", {
	params ["_vehicle"];
		[_vehicle, _unit] call forklift_drop;
		_vehicle removeEventHandler ["Deleted", _thisEventHandler];
}];

forklift_Dammaged_Eh = _forklift addEventHandler ["Dammaged", {
	params ["_vehicle"];
	if !(alive _vehicle) then {
		[_vehicle, player] call forklift_drop;
		_vehicle removeEventHandler ["Dammaged", _thisEventHandler];
	};
}];

_forklift spawn {
	sleep 1;
	waitUntil {
		//change velocity based on speed
		_speed = speed _this;
		if (_speed > 10) then {
			_this setVelocity ((velocity _this) vectorMultiply ((10 / _speed) - 0.00001));
		};
		if (_speed < -10) then {
			_this setVelocity ((velocity _this) vectorMultiply ((-10 / _speed) + 0.00001));
		};
		
		//if outside FOB circle, immediately kick backwards
		_fob = _this call get_fob_level;
		_vel = velocityModelSpace _this;
		if (_fob == -1) then {
			_timer = CBA_missionTime + 10;
			waitUntil {
				_this setVelocityModelSpace (_vel vectorMultiply -1);
				if (CBA_missionTime > _timer) exitWith {
					[_this, player] call forklift_drop;
					systemChat "You left the FOB and could not be returned.";
					true
				};
				_fob = _this call get_fob_level;
				_fob > -1				
			};
		};
		//Actual check if limit still needed
		_item = _this getVariable ["APM_forklift_object", objNull];
		if !(isNull _item) then {
			if forklift_leveling then {
				_item setVectorUp [0,0,1];
			} else {
				_item setVectorUp (surfaceNormal getPos _item);
			};
		};
		sleep 0.1;
		isNull _item
	};
};

//Create controls hint
_ctrl = (findDisplay 46) ctrlCreate ["RscStructuredText", 1221];
_ctrl ctrlSetBackgroundColor [0,0,0,0.65];
_ctrl ctrlSetStructuredText composeText [
	"Controls:",
	lineBreak,
	parseText "<t color='#4444ff'>CTRL + R/F:</t> Raise/Lower",
	lineBreak,
	parseText "<t color='#4444ff'>CTRL + X/C:</t> Rotation",
	lineBreak,
	parseText "<t color='#4444ff'>CTRL + E:</t> Change Leveling",
	lineBreak,
	parseText "<t color='#4444ff'>CTRL + Q:</t> Reset Object"
];
_ctrl ctrlCommit 0;
_h = ctrlTextHeight _ctrl;
_ctrl ctrlSetPosition [1, 0.4, 0.27, _h/2];
_ctrl ctrlCommit 0;