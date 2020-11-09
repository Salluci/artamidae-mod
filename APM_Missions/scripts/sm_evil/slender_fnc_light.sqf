_light = missionNamespace getVariable ["slenderman_light", objNull];
if (isNull _light) then {
	_light = "#lightpoint" createVehicleLocal getPos player;
	_light setLightAmbient [1,1,1];
	_light setLightColor [1,1,1];
	_light setLightBrightness 5;
	_light lightAttachObject [player, [0,0,10]];
	missionNamespace setVariable ["slenderman_light", _light];
} else {
	deleteVehicle slenderman_light;
};