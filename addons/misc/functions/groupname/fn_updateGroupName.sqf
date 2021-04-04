//------------------------------------------------------------------------------------
// fn_updateGroupName.sqf
// Updates the group name of the unit
// params: [_unit, _name]
// _unit: OBJECT (unit)
// _name: STRING (name)
// returns: bool (true if name updated to new name)
// author: thoreaufare
//------------------------------------------------------------------------------------
params ["_unit", "_name"];

_return = false;

if (_name == "") exitWith {_return};

//TODO check if groupId already exists?
(group _unit) setGroupIdGlobal [_name];
_return = true;
_return