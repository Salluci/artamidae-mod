params ["_vehicle"];


_vehicle setVariable ["ALiVE_SYS_LOGISTICS_DISABLE", true, true];
private _class = typeOf _vehicle;
private _pos = getPosATL  _vehicle;
private _dir = getDir _vehicle;
private _vec = vectorUp _vehicle;
private _code = _vehicle getVariable ["object_init", {}];
private _price = _vehicle getVariable ["APM_FOB_Price", 0];
private _damage = [damage _vehicle, getAllHitPointsDamage _vehicle];
private _fuel = fuel _vehicle;
private _customs = str ([_vehicle, _class] call BIS_fnc_getVehicleCustomization);
private _supply = _vehicle getVariable ["APM_fobSupply", 0];
private _medicalVehicle = _vehicle call ace_medical_treatment_fnc_isMedicalVehicle;
private _aceFuel = _vehicle call ace_refuel_fnc_getFuel;

[_class, _pos, _dir, _vec, _code, _price, _damage, _fuel, _customs, _supply, _medicalVehicle, _aceFuel]
