if !(isServer) then {
  waitUntil {alive player}
};

private _name = "";
private _pos = -1;

switch true do {
  case (isDedicated) : {
    _name = "Server";
    _pos = 0;
  };
  case (local HC1) : {
    _name = "HC1";
    _pos = 1;
  };
  case (local HC2) : {
    _name = "HC2";
    _pos = 2;
  };
  case (local HC3) : {
    _name = "HC3";
    _pos = 3;
  };
  default {};
};

if (_pos isEqualTo -1) exitWith {
  diag_log "FPS Marker assignment failed.";
};

private _marker = createMarkerLocal [format ["fpsmarker%1", _name], [0, 0 + (75 * _pos)]];
_marker setMarkerTypeLocal "mil_start";
_marker setMarkerSize [0.8, 0.8];

[{
  params ["_args"];
  _args params ["_marker", "_name"];

  private _fps = ceil diag_fps;
  private _groups = {local _x} count allGroups;
  private _units = {local _x} count allUnits;

  _marker setMarkerColorLocal "ColorGREEN";
  if (_fps < 20) then {_marker setMarkerColorLocal "ColorRED"};

  _marker setMarkerText (format ["%1: %2 fps, %3 groups, %4 units", _name, _fps, _groups, _units]);
}, 2, [_marker, _name]] call CBA_fnc_addPerFrameHandler;
