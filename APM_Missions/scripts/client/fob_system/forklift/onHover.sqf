_veh = _this select 0;
_item = _this select 1;
private _bounding_height = (0 boundingBoxReal _item) select 1 select 2;
private _marker_pos = _item modelToWorld [
	0,
	0,
	2
];

_arrow = missionNamespace getVariable ["forklift_arrow", objNull];
detach _arrow;
_arrow setPos _marker_pos;