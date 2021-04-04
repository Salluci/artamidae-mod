if !(hasInterface) exitWith {};

//Remove Arrow EH
["ace_interactMenuClosed", {
	private _arrow = missionNamespace getVariable ["forklift_arrow", objNull];
	if !(isNull _arrow) then {deleteVehicle _arrow};
}] call CBA_fnc_addEventHandler;
