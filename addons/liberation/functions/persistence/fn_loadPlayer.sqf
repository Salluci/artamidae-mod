params ["_player", "_didJIP"];

if (_player in [HC1, HC2, HC3]) exitWith {false};
if (!isServer) exitWith {false};

private _name = name _player;
private _uid = getPlayerUID _player;

private _baseData = [0,0,0,0,0,0,0,0,0,0,[["arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",["30Rnd_65x39_caseless_mag",30],[],""],[],["hgun_P07_F","","","",["16Rnd_9x21_Mag",17],[],""],["U_B_CombatUniform_mcam",[["ACE_fieldDressing",1],["ACE_packingBandage",1],["ACE_morphine",1],["ACE_tourniquet",1],["30Rnd_65x39_caseless_mag",2,30]]],["V_PlateCarrier1_rgr",[["30Rnd_65x39_caseless_mag",7,30],["16Rnd_9x21_Mag",2,17],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1],["HandGrenade",2,1]]],[],"H_HelmetB","",[],["ItemMap","","TFAR_anprc152","ItemCompass","ItemWatch","NVGoggles"]],""];
private _data = "extDB3" callExtension format ["0:apm:getPlayerData:%1", _uid];

_data = parseSimpleArray _data;

if ((_data select 1) isNotEqualTo []) then [{
	_data = _data select 1 select 0;
	"extDB3" callExtension format ["0:apm:updatePlayerName:%1:%2", _name, _uid];
},{
	_data = _baseData;
	"extDB3" callExtension format ["0:apm:createPlayerData:%1:%2", _uid, _name];
}];

_data params ["_isAdmin", ["_isZeus", 0], "_isBanned", "_isMedic", "_isENG", "_isFixed", "_isRotor", "_isCrew", "_isEOD", "_rank", "_loadout", "_positions"];

//Set Position
if (APM_PersistentPosition && {_positions isNotEqualTo ""}) then {
  _positions = createHashMapFromArray _positions;
  private _pos = _positions get (missionNamespace getVariable "APM_Key");
  if (APM_isLiberation && !isNil "_pos") then {
    [{missionNamespace getVariable ["GRLIB_force_redeploy", true] isEqualTo false && {_player distance (markerPos GRLIB_respawn_marker) > 50}}, {
      _player setPosATL _pos;
    }] call CBA_fnc_waitUntilAndExecute;
  } else {
    _player setPosATL _pos;
  };
};

//Setup Certs
_player setVariable ["Ace_medical_medicClass", _isMedic, true];
_player setVariable ["Ace_isEngineer", _isENG, true];
_player setVariable ["ACE_isEOD", [false, true] select _isEOD, true];
_player setVariable ["APM_crewman", [false, true] select _isCrew, true];
_player setVariable ["APM_rotor", [false, true] select _isRotor, true];
_player setVariable ["APM_fixed", [false, true] select _isFixed, true];
_player setVariable ["APM_rank", _rank, true];

//Apply rank patch & ingame rank
private _insignia = switch _rank do {
  case 0;
  case 1 :  {""};
  case 2 :  {"APM_patch_C10"};
  case 3 :  {"APM_patch_C20"};
  case 4 :  {"APM_patch_C30"};
  case 5 :  {"APM_patch_SRC0"};
  case 6;
  case 7 :  {"APM_patch_CC0"};
  case 8 :  {"APM_patch_SBCO0"};
  case 9 :  {"APM_patch_FCO0"};
  case 10 : {"APM_patch_ACO0"};
  case 11 : {"APM_patch_SCO0"};
  case 12 : {"APM_patch_CMDR0"};
  default {""};
};

private _rank = switch _rank do {
  case 4 : {"CORPORAL"};
  case 5 : {"SERGEANT"};
  case 6 : {"SERGEANT"};
  case 7 : {"SERGEANT"};
  case 8 : {"LIEUTENANT"};
  case 9 : {"LIEUTENANT"};
  case 10 : {"CAPTAIN"};
  case 11 : {"CAPTAIN"};
  case 12 : {"MAJOR"};
  default {"PRIVATE"};
};
_player setUnitRank _rank;

//Set Loadout
_player setUnitLoadout _loadout;

//Set Data variable for clientside init
_player setVariable ["APM_Data", _data, [2, owner _player]];

//Callback EH
["APM_PlayerCallBack", _data, _player] call CBA_fnc_targetEvent;

//Ready _player for disconnect EH
_player setVariable ["APM_Ready", true, true];
