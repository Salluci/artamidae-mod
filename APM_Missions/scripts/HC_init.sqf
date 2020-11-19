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
//FPS marker
private _sourcestr = "Server";
private _position = 0;

if (!isServer) then {
    if (!isNil "HC1") then {
        if (!isNull HC1) then {
            if (local HC1) then {
                _sourcestr = "HC1";
                _position = 1;
            };
        };
    };

    if (!isNil "HC2") then {
        if (!isNull HC2) then {
            if (local HC2) then {
                _sourcestr = "HC2";
                _position = 2;
            };
        };
    };

    if (!isNil "HC3") then {
        if (!isNull HC3) then {
            if (local HC3) then {
                _sourcestr = "HC3";
                _position = 3;
            };
        };
    };
};

private _myfpsmarker = createMarker [format ["fpsmarker%1", _sourcestr], [0, -500 - (500 * _position)]];
_myfpsmarker setMarkerType "mil_start";
_myfpsmarker setMarkerSize [0.7, 0.7];

while {true} do {

    private _myfps = diag_fps;
    private _localgroups = {local _x} count allGroups;
    private _localunits = {local _x} count allUnits;

    _myfpsmarker setMarkerColor "ColorGREEN";
    if (_myfps < 30) then {_myfpsmarker setMarkerColor "ColorYELLOW";};
    if (_myfps < 20) then {_myfpsmarker setMarkerColor "ColorORANGE";};
    if (_myfps < 10) then {_myfpsmarker setMarkerColor "ColorRed";};

    _myfpsmarker setMarkerText format ["%1: %2 fps, %3 local groups, %4 local units", _sourcestr, (round (_myfps * 100.0)) / 100.0, _localgroups, _localunits];

    sleep 0.5;
};
