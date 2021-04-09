params [
  ["_class", "", [""]],
  ["_pos", [0, 0, 0], [[0]]],
  ["_dir", 0, [0]],
  ["_vec", [0, 0, 0], [0]],
  ["_code", {}, [{}, ""]],
  ["_price", 0, [0]],
  ["_damage", [0,[]],[[]]],
  ["_fuel",1,[1]],
  ["_customs","[[],[]]",[""]],
  ["_supply",0,[0]],
  ["_medicalVehicle", false, [false]],
  ["_aceFuel", -1, [0]],
  ["_ammo", [], [[]]],
  ["_inventory", [], [[]]]
];
_damage params ["_overall", "_hitpoints"];
_hitpoints params ["_hitpoints", "", "_amount"];

private _object = createVehicle [_class, _pos, [], 0, "CAN_COLLIDE"];
_object enableSimulationGlobal false;
_object allowDamage false;
_object setPosATL _pos;
_object setDir _dir;
_object setVectorUp _vec;
_object enableSimulationGlobal true;
_object allowDamage true;

if (_code isEqualType "" && {_code isNotEqualTo ""}) then {
  _code = compile _code;
};
_object setVariable ["object_init", _code, true];

_object setVariable ["APM_save_object", true, true];
_object setVariable ["APM_FOB_Price", _price, true];
_object setVariable ["ALiVE_SYS_LOGISTICS_DISABLE", true, true];

_object setDamage _overall;
{
  [_object, _x, _amount select _forEachIndex, true] call BIS_fnc_setHitPointDamage
} forEach _hitpoints;

_object setFuel _fuel;

if (_customs isNotEqualTo "[[],[]]") then {
  _customs = parseSimpleArray _customs;
  [_object, _customs select 0, _customs select 1] call BIS_fnc_initVehicle;
};

if (_supply > 0) then {
  _object setVariable ["APM_fobSupply", _supply, true];
};
if (_medicalVehicle) then {
  _object setVariable ["ace_medical_isMedicalVehicle", true, true];
};
if (_aceFuel != -1) then {
  [_object, _aceFuel] call call ace_refuel_fnc_setFuel;
};
if (_ammo isNotEqualTo []) then {
  _object setVehicleAmmo 0;
  {
  	_object addMagazineTurret _x;
  } foreach _ammo;
};

clearMagazineCargoGlobal _object;
clearItemCargoGlobal _object;
clearWeaponCargoGlobal _object;
clearBackpackCargoGlobal _object;

if (_inventory isNotEqualTo []) then {
  _inventory params ["_weapons", "_magazines", "_items", "_backpacks"];
  {
    _object addWeaponWithAttachmentsCargoGlobal [_x, 1];
  } forEach _weapons;
  {
    _x params ["_type", "_ammo"];
    _object addMagazineAmmoCargo [_type, 1, _ammo];
  } forEach _magazines;
  {
    _object addItemCargoGlobal [_x, 1];
  } forEach _items;
  {
    _object addBackpackCargoGlobal [_x, 1];
  } forEach _backpacks;
};

_object
