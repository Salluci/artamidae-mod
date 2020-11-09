params ["_displayorcontrol", "_key", "_shift", "_ctrl", "_alt"];

if !(_ctrl) exitWith {false};

//Establish vehicle and item
_forklift = vehicle player;
_item = _forklift getVariable ["APM_forklift_object", objNull];
_reldir = getDir _item;
/*
X = 45
C = 46
F = 33
R = 19
Q = 16
E = 18
*/
switch _key do {
	case 45 : {
		//Rotate Left/counterclock
		_veh_dir = getDir _forklift - 1;
		_new_dir = _reldir - _veh_dir;
		_item setDir _new_dir;
	};
	case 46 : {
		//Rotate Right/clock
		_veh_dir = getDir _forklift + 1;
		_new_dir = _reldir - _veh_dir;
		_item setDir _new_dir;
	};
	case 33 : {
		//Lower
		detach _item;
		_item setVectorUp [0,0,1];
		_pos = getPosATL _item;
		_height = -2 max ((_pos select 2) - 0.1) min 15;
		_pos set [2, _height];
		_item setPosATL _pos;
		_item attachTo [_forklift];
		_veh_dir = getDir _forklift;
		_new_dir = _reldir - _veh_dir;
		_item setDir _new_dir;
	};
	case 19 : {
		//Raise
		detach _item;
		_item setVectorUp [0,0,1];
		_pos = getPosATL _item;
		_height = -2 max ((_pos select 2) + 0.1) min 15;
		_pos set [2, _height];
		_item setPosATL _pos;
		_item attachTo [_forklift];
		_veh_dir = getDir _forklift;
		_new_dir = _reldir - _veh_dir;
		_item setDir _new_dir;
	};
	case 16 : {
		//Reset Pos/Vec
		detach _item;
		_bounding = boundingBox _item;
		_bounding params ["_xp", "_yp"];
		_xp params ["_x1", "_y1"];
		_yp params ["_x2", "_y2"];

		_item_size = ((abs _x1 + abs _x2)/2) max ((abs _y1 + abs _y2)/2);

		//Move and attach item
		_lift_pos = [0,(_item_size + 2),0];

		_item attachTo [_forklift, _lift_pos];
	};
};
true 