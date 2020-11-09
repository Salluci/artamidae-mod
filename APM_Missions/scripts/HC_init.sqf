APM_Debug_level = ["apm_debugger", 0] call bis_fnc_getParamValue;

//ALIVE HC inits
if !(isNil "ALIVE_Required") then {

	//Men
	["CAManBase", "killed", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		if ((side group _unit == civilian) or (side group _unit == west)) exitWith {
			if (APM_Debug_level > 0) exitWith {
				_hint = format ["DEBUGGER: %1:%2 killed a friendly/civ", name _killer, name _instigator];
				_hint remoteExec ["systemChat", 0];
			};
		};
		
		_reward = round (200 max (random 1400) min 1000);
		APM_Budget = APM_Budget + _reward;
		publicVariable "APM_Budget";
		if (APM_Debug_level == 1) then {
			_hint = format ["DEBUGGER: Budget increased by $%1", _reward];
			_hint remoteExec ["systemChat", 0];
		};
		if (APM_Debug_level == 2) then {
			_hint = format ["DEBUGGER: Budget: $%1 Class: %2", _reward, typeOf _unit];
			_hint remoteExec ["systemChat", 0];
		};
	}] call CBA_fnc_addClassEventHandler;
	//Cars
	["Car", "killed", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		if ((side group _unit == civilian) or (side group _unit == west)) exitWith {
			if (APM_Debug_level > 0) exitWith {
				_hint = format ["DEBUGGER: %1:%2 killed a friendly/civ", name _killer, name _instigator];
				_hint remoteExec ["systemChat", 0];
			};
		};
		
		_reward = round (1000 max (random 2000) min 1600);
		APM_Budget = APM_Budget + _reward;
		publicVariable "APM_Budget";
		if (APM_Debug_level == 1) then {
			_hint = format ["DEBUGGER: Budget increased by $%1", _reward];
			_hint remoteExec ["systemChat", 0];
		};
		if (APM_Debug_level == 2) then {
			_hint = format ["DEBUGGER: Budget: $%1 Class: %2", _reward, typeOf _unit];
			_hint remoteExec ["systemChat", 0];
		};
	}] call CBA_fnc_addClassEventHandler;
	//Tanks
	["Tank", "killed", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		if ((side group _unit == civilian) or (side group _unit == west)) exitWith {
			if (APM_Debug_level > 0) exitWith {
				_hint = format ["DEBUGGER: %1:%2 killed a friendly/civ", name _killer, name _instigator];
				_hint remoteExec ["systemChat", 0];
			};
		};
		
		_reward = round (1500 max (random 4000) min 3000);
		APM_Budget = APM_Budget + _reward;
		publicVariable "APM_Budget";
		if (APM_Debug_level == 1) then {
			_hint = format ["DEBUGGER: Budget increased by $%1", _reward];
			_hint remoteExec ["systemChat", 0];
		};
		if (APM_Debug_level == 2) then {
			_hint = format ["DEBUGGER: Budget: $%1 Class: %2", _reward, typeOf _unit];
			_hint remoteExec ["systemChat", 0];
		};
	}] call CBA_fnc_addClassEventHandler;
	//Helicopter
	["Helicopter", "killed", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		if ((side group _unit == civilian) or (side group _unit == west)) exitWith {
			if (APM_Debug_level > 0) exitWith {
				_hint = format ["DEBUGGER: %1:%2 killed a friendly/civ", name _killer, name _instigator];
				_hint remoteExec ["systemChat", 0];
			};
		};
		
		_reward = round (2000 max (random 4500) min 4000);
		APM_Budget = APM_Budget + _reward;
		publicVariable "APM_Budget";
		if (APM_Debug_level == 1) then {
			_hint = format ["DEBUGGER: Budget increased by $%1", _reward];
			_hint remoteExec ["systemChat", 0];
		};
		if (APM_Debug_level == 2) then {
			_hint = format ["DEBUGGER: Budget: $%1 Class: %2", _reward, typeOf _unit];
			_hint remoteExec ["systemChat", 0];
		};
	}] call CBA_fnc_addClassEventHandler;
	//Plane
	["Plane", "killed", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
		if ((side group _unit == civilian) or (side group _unit == west)) exitWith {
			if (APM_Debug_level > 0) exitWith {
				_hint = format ["DEBUGGER: %1:%2 killed a friendly/civ", name _killer, name _instigator];
				_hint remoteExec ["systemChat", 0];
			};
		};
		
		_reward = round (3000 max (random 8000) min 6000);
		APM_Budget = APM_Budget + _reward;
		publicVariable "APM_Budget";
		if (APM_Debug_level == 1) then {
			_hint = format ["DEBUGGER: Budget increased by $%1", _reward];
			_hint remoteExec ["systemChat", 0];
		};
		if (APM_Debug_level == 2) then {
			_hint = format ["DEBUGGER: Budget: $%1 Class: %2", _reward, typeOf _unit];
			_hint remoteExec ["systemChat", 0];
		};
	}] call CBA_fnc_addClassEventHandler;
};

sleep 120; //Wait till HC's are assigned

//Marker Name
_name = switch true do {
	case (local HC1) : {"HC1 FPS: %1"};
	case (local HC2) : {"HC2 FPS: %1"};
	case (local HC3) : {"HC3 FPS: %1"};
};

//Marker Pos
_pos = switch true do {
	case (local HC1) : {[100, 200]};
	case (local HC2) : {[100, 300]};
	case (local HC3) : {[100, 400]};
};

//Create Marker
FPS_marker = createMarker [_name, _pos];
FPS_Marker setMarkerType "hd_destroy";
while {true} do {
	_FPS = round (diag_fps * 10) / 10;
	_text = format [_name, _FPS];
	FPS_Marker setMarkerText _text;
	if (_FPS < 10) then {FPS_Marker setMarkerColor "ColorRed"};
	if ((_FPS >= 10) and (_FPS <30)) then {FPS_Marker setMarkerColor "ColorYellow"};
	if (_FPS >= 30) then {FPS_Marker setMarkerColor "ColorGreen"};
	sleep 0.5;
};