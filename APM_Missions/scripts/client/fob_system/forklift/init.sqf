//functions
#define pathMacro(theScript) compile preprocessFileLineNumbers ('scripts\client\fob_system\forklift\'+ #theScript + '.sqf')
forklift_init = pathMacro(forklift);
forklift_drop = pathMacro(drop);
forklift_modify = pathMacro(modify);
forklift_onHover = pathMacro(onHover);
forklift_pickup = pathMacro(pickup);
forklift_bulldozer = pathMacro(bulldozer);
forklift_onHoverBulldozer = pathMacro(onHoverBulldozer);
bulldozer_init = pathMacro(bulldozer_init);

//Remove Arrow EH
["ace_interactMenuClosed", {
	_arrow = missionNamespace getVariable ["forklift_arrow", objNull];
	if !(isNull _arrow) then {deleteVehicle _arrow};
}] call CBA_fnc_addEventHandler;