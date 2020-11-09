//Declare which INIT to run

if (isServer) then {
	_diag = "extDB3" callExtension "9:RESET";
	diag_log "extDB3 reset for preprocess";
	diag_log _diag;
	[] call compile preprocessFileLineNumbers "scripts\server\init.sqf";
};

if (hasInterface) then {
	[] spawn compile preprocessFileLineNumbers "scripts\client\init.sqf";

};

if ((!hasInterface) and (!isServer)) then {
	[] spawn compile preprocessFileLineNumbers "scripts\HC_init.sqf";
};

//init R3F
[] execVM "R3F_LOG\init.sqf";

//APM default loadouts
[] execVM "scripts\default_loadouts.sqf";