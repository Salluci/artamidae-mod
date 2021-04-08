params [["_target", objNull, [objNull, [], ""]]];

if (isNull _target || !alive _target) exitWith {systemChat "Error: Target is destroyed or does not exist."};

switch true do {
  case (_target isKindOf "LandVehicle") : {
    player moveInCargo _this;
    [{
      if (vehicle player != _this) then
      {
        private _pos = [_this, 5] call CBA_fnc_randPos;
        player setPos _pos;
      };
    }, _target] call CBA_fnc_execNextFrame;
  };
  case (_target isKindOf "Air") : {
    player moveInCargo _this;
    [{
      if (vehicle player != _this) then
      {
        systemChat "Error: Vehicle is full, please try another vehicle.";
      };
     }, _target] call CBA_fnc_execNextFrame;
  };
  default {
    private _pos = [_target, 0, 25, boundingBox (vehicle player) select 2] call BIS_fnc_findSafePos;
    if (count _pos == 2) exitWith {
      _pos append [0];
      vehicle player setPosATL _pos;
    };
    systemChat "No safe position to teleport found.";
  };
};
