params ["_forklift", "_player"];
_item = _forklift getVariable ["APM_forklift_object", objNull];

if (isNull _item) exitWith {systemChat "Possible error, no item attached"};

detach _item;
[_item, true] remoteExec ["enableSimulationGlobal", 2];

_typeName = getText (configFile >> "CfgVehicles" >> typeOf _item >> "displayName");
hint format ["%1 Dropped", _typeName];

_forklift setVariable ["APM_forklift_object", objNull];

[] spawn {
	sleep 2;
	hint "";
};

//Remove EHs

(findDisplay 46) displayRemoveEventHandler ["KeyDown", forklift_keyDown_Eh];
(findDisplay 46) displayRemoveEventHandler ["KeyUp", forklift_keyUp_Eh];
_forklift removeEventHandler ["Deleted", forklift_Deleted_Eh];
_forklift removeEventHandler ["Dammaged", forklift_Dammaged_Eh];
forklift_Dammaged_Eh = nil;
forklift_Deleted_Eh = nil;
forklift_keyDown_Eh = nil;
forklift_keyUp_Eh = nil;
forklift_leveling = nil;

//Delete Hint box
_ctrl = (findDisplay 46) displayCtrl 1221;
ctrlDelete _ctrl;