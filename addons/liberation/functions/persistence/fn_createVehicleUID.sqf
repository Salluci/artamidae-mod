params ["_vehicle"];

private _class = typeOf _vehicle;
private _pos = getPosATL _vehicle;
private _time = systemTimeUTC;

private _uid = format ["%1/%2,%3/%4%5%6", _class, _pos select 0, _pos select 1, _time select 4, _time select 5, _time select 6];

_uid
