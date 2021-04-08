if (["persistent_markers", 1] call bis_fnc_getParamValue isEqualTo 0) exitWith {
	if (isServer) then {
		APM_iconMarkers = createHashMap;
	  APM_lineMarkers = createHashMap;
	};
	APM_MarkerSystemInit = true
};
if (APM_MarkerSystemInit) exitWith {false};

addMissionEventHandler ["MarkerCreated", {
	params ["_marker", "_channelNumber", "_owner", ["_local", _owner == ACE_Player]];
	if (isServer) then { //if the server can see it, it's a server marker and should be added.
		_local = true;
	};
  if (_local && {markerColor _marker != "Default"} && {"_USER_DEFINED" in _marker} && {"/2" in _marker}) then {
    private _line = markerShape _marker == "POLYLINE";
    private _icon = markerShape _marker == "ICON";
    if (_line) then {
      ["APM_lineMarkerCreated", [_marker, markerPolyline _marker, markerPos _marker, markerColor _marker]] call CBA_fnc_serverEvent;
    };
    if (_icon) then {
      ["APM_iconMarkerCreated", [_marker, markerText _marker, markerPos _marker, markerType _marker, markerDir _marker, markerColor _marker]] call CBA_fnc_serverEvent;
    };
  };
}];

if (isServer) then {
  APM_iconMarkers = createHashMap;
  APM_lineMarkers = createHashMap;

  ["APM_lineMarkerCreated", {
    params ["_marker", "_path", "_pos", "_color"];
    APM_lineMarkers set [_marker, [_path, _pos, _color]];
  }] call CBA_fnc_addEventHandler;

  ["APM_iconMarkerCreated", {
    params ["_marker", "_text", "_pos", "_icon", "_dir", "_color"];
    APM_iconMarkers set [_marker, [_text, _pos, _icon, _dir, _color]];
  }] call CBA_fnc_addEventHandler;

  ["APM_markerDeleted", {
    params ["_marker"];
		if (_marker in APM_iconMarkers) then {
			APM_iconMarkers deleteAt _marker;
		};
		if (_marker in APM_lineMarkers) then {
			APM_lineMarkers deleteAt _marker;
		};
  }] call CBA_fnc_addEventHandler;

  ["APM_markerUpdated", {
    params ["_marker", "_text", "_pos", "_icon", "_dir", "_color"];
		private _data = APM_iconMarkers get _marker;
		if ([_text, _pos, _icon, _dir, _color] isNotEqualTo _data) then {
			APM_iconMarkers set [_marker, [_text, _pos, _icon, _dir, _color]];
		};
  }] call CBA_fnc_addEventHandler;
};

if (hasInterface) then {
	APM_lastMarkerUpdate = [];
	addMissionEventHandler ["MarkerDeleted", {
		params ["_marker", "_local"];
		if ("_USER_DEFINED" in _marker && {"/2" in _marker}) then {
			["APM_markerDeleted", [_marker]] call CBA_fnc_serverEvent;
		};
	}];

	addMissionEventHandler ["MarkerUpdated", {
		params ["_marker"];
		if (markerColor _marker != "Default" && {"_USER_DEFINED" in _marker} && {markerShape _marker == "ICON"} && {"/2" in _marker}) then {
			private _data = [_marker, markerText _marker, markerPos _marker, markerType _marker, markerDir _marker, markerColor _marker];
			if (_data isNotEqualTo APM_lastMarkerUpdate) then {
				APM_lastMarkerUpdate = _data;
				["APM_markerUpdated", [_marker, markerText _marker, markerPos _marker, markerType _marker, markerDir _marker, markerColor _marker]] call CBA_fnc_serverEvent;
			};
		};
	}];
};

APM_MarkerSystemInit = true;
APM_MarkerSystemInit
