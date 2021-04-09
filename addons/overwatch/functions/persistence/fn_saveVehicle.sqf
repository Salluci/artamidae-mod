params ["_vehicle"];

if (!isServer) exitWith {};

_vehicle setVariable ["ALiVE_SYS_LOGISTICS_DISABLE", true, true];
private _class = typeOf _vehicle;
private _pos = getPosATL  _vehicle;
private _dir = getDir _vehicle;
private _vec = vectorUp _vehicle;
private _code = _vehicle getVariable ["object_init", {}];
private _price = _vehicle getVariable ["APM_FOB_Price", 0];
private _supply = _vehicle getVariable ["APM_fobSupply", 0];
private _damage = [damage _vehicle, getAllHitPointsDamage _vehicle];
private _fuel = fuel _vehicle;
private _customs = str ([_vehicle, _class] call BIS_fnc_getVehicleCustomization);
private _medicalVehicle = _vehicle call ace_medical_treatment_fnc_isMedicalVehicle;
private _aceFuel = _vehicle call ace_refuel_fnc_getFuel;
private _ammo = magazinesAllTurrets _vehicle;
_ammo = _ammo apply {_x resize 3; _x};
private _inventory = [weaponsItemsCargo _vehicle, magazinesAmmoCargo _vehicle, itemCargo _vehicle, backpackCargo _vehicle];
private _containers = everyContainer _vehicle;

{
  private _container = _x select 1;
  (_inventory select 0) append (weaponsItemsCargo _container);
  (_inventory select 1) append (magazinesAmmoCargo _container);
  (_inventory select 2) append (itemCargo _container);
  (_inventory select 3) append (backpackCargo _container);
} forEach _containers;

[_class, _pos, _dir, _vec, _code, _price, _damage, _fuel, _customs, _supply, _medicalVehicle, _aceFuel, _ammo, _inventory]
