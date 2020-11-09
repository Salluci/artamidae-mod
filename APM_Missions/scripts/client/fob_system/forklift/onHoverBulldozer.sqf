params ["_forklift", "_object"];

_bounding_z = (boundingBox _object) select 0 select 2;
_pos = _object modelToWorld [0,0,_bounding_z + 3];

if (APM_Debug_level >=2) then {
	_textures = getObjectTextures _object;
	for "_i" from 0 to 50 do {
		_object setObjectTexture [_i, "#(rgb,8,8,3)color(0,1,0,1)"];
	};
};
if (APM_Debug_level >=1) then {
	systemChat str _object;
};

detach forklift_arrow;
forklift_arrow setPos _pos;