#include "XEH_Prep.hpp"
#include "initSettings.sqf"
#include "initKeybinds.sqf"

["CAManBase", "Init", {
  params ["_unit"];

  if (local _unit && {!isPlayer _unit}) then {
    private _cfg = configOf _unit;
    private _ids = call apm_misc_fnc_getServerIds;

    private _loadout = getText (_cfg >> "apm_loadout");

    if (_loadout isNotEqualTo "") then {
      _loadout = (_loadout splitString "'") select 0;
      _loadout = parseSimpleArray _loadout;

      _unit setUnitLoadout _loadout;

      _unit setVariable ["acex_headless_loadout", _loadout, _ids];
    };

    private _insignia = getText (_cfg >> "apm_insignia");

    if (_insignia isNotEqualTo "") then {
      [_unit, _insignia] call apm_fnc_setUnitInsignia;
    };

    _unit setVariable ["acex_headless_loadout", getUnitLoadout _unit, _ids];
  };
}, true, nil, true] call CBA_fnc_addClassEventHandler;

["All", "InitPost", {
  params ["_vehicle"];

  if (!isNil {_vehicle getVariable "APM_save_object"}) then {
    private _code = _vehicle getVariable ["object_init", {}];

    if (_code isEqualType "") then {
      if (isNil _code) then {
        _code = compile _code;
      } else {
        _code = missionNamespace getVariable _code;
      };
    };
    _vehicle call _code;
  };
}, true, ["Man"], true] call CBA_fnc_addClassEventHandler;

["CAManBase", "InitPost", {
  params ["_unit"];

  if (local _unit && {!isPlayer _unit} && {!isNil "GRLIB_save_key"}) then {
    private _cfg = configOf _unit;
    private _ids = call apm_misc_fnc_getServerIds;

    _unit setVariable ["acex_headless_loadout", getUnitLoadout _unit, _ids];

    private _loadout = getText (_cfg >> "apm_loadout");

    if (_loadout isNotEqualTo "") then {
      _loadout = (_loadout splitString "'") select 0;
      _loadout = parseSimpleArray _loadout;

      _unit setUnitLoadout _loadout;

      _unit setVariable ["acex_headless_loadout", _loadout, _ids];
    };
  };
}, true, nil, true] call CBA_fnc_addClassEventHandler;

if (isServer) then {
  ["APM_requestOwnership",
  {
    params ["_object", "_id"];

    _object setOwner _id;

  }] call CBA_fnc_addEventHandler;
};

if (hasInterface) then {
  ["unit", {
    params ["_newUnit"];

    _newUnit setVariable ["APM_secondChance", false, true];
  }, true] call CBA_fnc_addPlayerEventHandler;

  //Add favorites buttons
  ["ace_arsenal_displayOpened", {
    params ["_display"];
    _display call apm_arsenal_fnc_handleArsenal;
  }] call CBA_fnc_addEventHandler;

  //Exit code to save profileNamespace & fix insignia
  ["ace_arsenal_displayClosed", {
    saveProfileNamespace;
    last_favorites = nil;
    [player, player getVariable ["BIS_fnc_setUnitInsignia_class", ""]] call apm_fnc_setUnitInsignia;
  }] call CBA_fnc_addEventHandler;

  //Loadout tab events to hide/show custom buttons
  ["ace_arsenal_loadoutsDisplayOpened", {
    [false] call apm_arsenal_fnc_loadoutsDisplay;
  }] call CBA_fnc_addEventHandler;

  ["ace_arsenal_loadoutsDisplayClosed", {
    [true] call apm_arsenal_fnc_loadoutsDisplay;
  }] call CBA_fnc_addEventHandler;

  ["loadout", {
    if (isNil "apm_uniform_player") exitWith {
      apm_uniform_player = uniform player;
    };

    if (uniform player != apm_uniform_player) exitWith {
      private _hiddenSelectionsTextures = getArray (configFile >> "CfgVehicles" >> getText (configFile >> "CfgWeapons" >> uniform player >> "ItemInfo" >> "uniformClass") >> "hiddenSelectionsTextures");
      _hiddenSelectionsTextures = _hiddenSelectionsTextures apply {toLower _x};
      _hiddenSelectionsTextures = _hiddenSelectionsTextures - ["insignia"];
      {
        player setObjectTextureGlobal [_forEachIndex, _x];
      } forEach _hiddenSelectionsTextures;
      private _hiddenSelectionsMaterials = getArray (configFile >> "CfgVehicles" >> getText (configFile >> "CfgWeapons" >> uniform player >> "ItemInfo" >> "uniformClass") >> "hiddenSelectionsMaterials");
      {
        player setObjectMaterialGlobal [_forEachIndex, _x];
      } forEach _hiddenSelectionsMaterials;
      apm_uniform_player = uniform player;
      private _camoCoef = getNumber (configFile >> "CfgVehicles" >> getText (configFile >> "CfgWeapons" >> uniform player >> "ItemInfo" >> "uniformClass") >> "camouflage");
      player setUnitTrait ["CamouflageCoef", _camoCoef * (1 / 1.4^2)];
    };
  }] call CBA_fnc_addPlayerEventHandler;

  ["ace_zeus_zeusUnitAssigned", {
    params ["_logic", "_unit"];
    if (_unit isEqualTo player || {player getVariable "APM_admin"}) then {
      systemChat format ["Zeus Module assigned to %1.", name _unit];
    };
    if (!isNil "APM_Zeus_customChannel" && {_unit isEqualTo player}) then {
      [APM_Zeus_customChannel, [player]] remoteExec ["radioChannelAdd", 2];
    };
  }] call CBA_fnc_addEventHandler;

  ["vehicle", {
    if (!apm_use_view_distance_settings) exitWith {};
    private _vehicle = _this select 2;
    switch true do {
      case (_vehicle isEqualTo player): {
        setViewDistance APM_foot_vd;
        setObjectViewDistance APM_air_vd;
      };
      case (_vehicle isKindOf "Air"): {
        setViewDistance APM_air_vd;
        setObjectViewDistance APM_air_vd;
      };
      case (_vehicle isKindOf "LandVehicle"): {
        setViewDistance APM_ground_vd;
        setObjectViewDistance APM_ground_vd;
      };
    };
  }] call CBA_fnc_addPlayerEventHandler;

  //Prepare the resupply arsenal
  private _configs = uiNamespace getVariable "ace_arsenal_configItems";
  private _mags = _configs select 2;
  private _grenades = _configs select 15;
  private _explosives = _configs select 16;
  private _misc = _configs select 17;
  private _all = _mags + _grenades + _explosives + _misc;

  APM_resupplyBox = "Land_HelipadEmpty_F" createVehicleLocal [0,0,0];
  [APM_resupplyBox, _all, false] call ace_arsenal_fnc_addVirtualItems;

  //Same thing for full/favorite arsenal, blacklist will be handled on mission init
  APM_fullBox = "Land_HelipadEmpty_F" createVehicleLocal [0,0,0];
  [APM_fullBox, true, false] call ace_arsenal_fnc_addVirtualItems;
  private _cargo = APM_fullBox getVariable "ace_arsenal_virtualItems";
  {(_cargo select 17) pushBackUnique _x} forEach ((_cargo select 12) - ["ItemRadio"]); //Add TFAR prototype radios to misc items

  APM_favoritesBox = "Land_HelipadEmpty_F" createVehicleLocal [0,0,0];
  [APM_favoritesBox, (profileNamespace getVariable ["APM_arsenal_favorites", []]), false] call ace_arsenal_fnc_addVirtualItems;
  _cargo = APM_favoritesBox getVariable "ace_arsenal_virtualItems";
  {(_cargo select 17) pushBackUnique _x} forEach ((_cargo select 12) - ["ItemRadio"]);
};
