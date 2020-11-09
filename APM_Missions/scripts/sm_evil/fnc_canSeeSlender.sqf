if (isNull slender_man) exitWith {false};

if (player distance slender_man > 50) exitWith {false};

if (isObjectHidden slender_man) exitWith {false};

_slender_screenPos = worldToScreen (slender_man modelToWorldVisual [0,0,2]);

if (count _slender_screenPos == 0) exitWith {false};


_slender_screenPos params ["_xpos", "_ypos"];

if ((_xpos > 1.8) or (_xpos < -0.85)) exitWith {false};
if ((_ypos > 2.1) or (_ypos < -0.5)) exitWith {false};

//confirm object/terrain interception
_ins = lineIntersectsSurfaces [
	eyePos player,
	eyePos slender_man,
	player,
	slender_man,
	true,
	3
];

if (count _ins > 0) exitWith {false};

true