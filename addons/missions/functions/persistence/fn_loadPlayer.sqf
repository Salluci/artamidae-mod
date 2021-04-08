params ["_player", "_didJIP"];

if (_player in [HC1, HC2, HC3]) exitWith {false};
if (!isServer) exitWith {false};

private _name = name _player;
private _uid = getPlayerUID _player;

private _getDataQuery = dbPrepareQueryConfig ["getPlayerData", _uid];
private _resultAsync = APM_db dbExecuteAsync _getDataQuery;
_resultAsync dbBindCallback [{
    params ["_result", "_args"];
		_args params ["_player", "_uid", "_name"];
    private _data = dbResultToParsedArray _result;

		if (_data isEqualTo []) then {
			_data = [false, false, false, 0, 0, false, false, false, false, 0, "B_Soldier_F"];
			private _createDataQuery = dbPrepareQueryConfig ["createPlayerData", [_uid, _name]];
			APM_db dbExecuteAsync _createDataQuery;
		} else {
			private _updateNameQuery = dbPrepareQueryConfig ["updatePlayerName", [_uid, _name]];
			APM_db dbExecuteAsync _updateNameQuery;
      _data = _data select 0;
		};

		_data params ["_isAdmin", "_isZeus", "_isBanned", "_isMedic", "_isENG", "_isFixed", "_isRotor", "_isCrew", "_isEOD", "_rank", "_loadout"];

		//Setup Certs
    _player setVariable ["APM_Admin", _isAdmin, true];
		_player setVariable ["Ace_medical_medicClass", _isMedic, true];
		_player setVariable ["Ace_isEngineer", _isENG, true];
		_player setVariable ["ACE_isEOD", _isEOD, true];
		_player setVariable ["APM_crewman", _isCrew, true];
		_player setVariable ["APM_rotor", _isRotor, true];
		_player setVariable ["APM_fixed", _isFixed, true];
		_player setVariable ["APM_rank", _rank, true];

		//Set Loadout
		_player setUnitLoadout _loadout;

		//Set Data variable for clientside init
		_player setVariable ["APM_Data", _data, [2, owner _player]];

		//Callback EH
		["APM_PlayerCallBack", _data, _player] call CBA_fnc_targetEvent;

		//Ready _player for disconnect EH
		_player setVariable ["APM_Ready", true, true];

}, [_player, _uid, _name]];
