disableSerialization;

//Detect player;
params ["_name"];
apm_target = {
	_tname = name _x;
	if (_name == _tname) exitWith {_x};
} forEach allPlayers;

//Get player certs
_c_medic = apm_target getVariable ["Ace_medical_medicClass", 0];
_c_eng = apm_target getVariable ["Ace_isEngineer", 0];
_c_rank = apm_target getVariable ["APM_rank", 0];
_c_eod = [0,1] select (apm_target getVariable ["ACE_isEOD", false]);
_c_rotor = [0,1] select (apm_target getVariable ["APM_rotor", false]);
_c_fixed = [0,1] select (apm_target getVariable ["APM_fixed", false]);
_c_crew = [0,1] select (apm_target getVariable ["APM_crewman", false]);
_cfg_patches = apm_target getVariable ["all_configs", ["Error: Not defined"]];
//create Dialog
createDialog "APM_Admin_Player";
waitUntil {!isNull (findDisplay 33564)};
_display = findDisplay 33564;
_lb_medic = _display displayCtrl 151564;
_lb_eng = _display displayCtrl 1515641;
_lb_eod = _display displayCtrl 1515642;
_lb_rotor = _display displayCtrl 1515643;
_lb_fixed = _display displayCtrl 1515644;
_lb_rank = _display displayCtrl 1515646;
_lb_crew = _display displayCtrl 1515680;
_bn_commit = _display displayCtrl 156489;
_lb_patches = _display displayCtrl 152525;
_bn_temp = _display displayCtrl 256489;
{
	_x lbAdd "False";
	_x lbAdd "True";
} forEach [
	_lb_eod,
	_lb_rotor,
	_lb_fixed,
	_lb_crew
];

_lb_rank lbAdd "Candidate/Pub";
_lb_rank lbAdd "RCT";
_lb_rank lbAdd "C1";
_lb_rank lbAdd "C2";
_lb_rank lbAdd "SC2";
_lb_rank lbAdd "C3";
_lb_rank lbAdd "SC3";
_lb_rank lbAdd "SRC";
_lb_rank lbAdd "SRSC";
_lb_rank lbAdd "CC";
_lb_rank lbAdd "SBCO";
_lb_rank lbAdd "FCO";
_lb_rank lbAdd "ACO";
_lb_rank lbAdd "SCO";
_lb_rank lbAdd "CMDR";

_lb_medic lbAdd "Level 1";
_lb_medic lbAdd "Level 2";
_lb_medic lbAdd "Level 3";

_lb_eng lbAdd "None";
_lb_eng lbAdd "Basic Eng";
_lb_eng lbAdd "Adv Eng";

{
	_x params ["_lb", "_lvl"];
	_lb lbSetCurSel _lvl;
} forEach [
	[_lb_medic, _c_medic],
	[_lb_eng, _c_eng],
	[_lb_eod, _c_eod],
	[_lb_rotor, _c_rotor],
	[_lb_fixed, _c_fixed],
	[_lb_rank, _c_rank],
	[_lb_crew, _c_crew]
];

{
	_lb_patches lbAdd _x;
} forEach _cfg_patches;

//Button Event
_bn_commit ctrlAddEventHandler ["ButtonClick", {
	_display = findDisplay 33564;
	_lb_medic = _display displayCtrl 151564;
	_lb_eng = _display displayCtrl 1515641;
	_lb_eod = _display displayCtrl 1515642;
	_lb_rotor = _display displayCtrl 1515643;
	_lb_fixed = _display displayCtrl 1515644;
	_lb_rank = _display displayCtrl 1515646;
	_lb_crew = _display displayCtrl 1515680;
	
	//New settings
	_n_medic = lbCurSel _lb_medic;
	_n_eng = lbCurSel _lb_eng;
	_n_rank = lbCurSel _lb_rank;
	_n_eod = [false, true] select (lbCurSel _lb_eod);
	_n_rotor = [false, true] select (lbCurSel _lb_rotor);
	_n_fixed = [false, true] select (lbCurSel _lb_fixed);
	_n_crew = [false, true] select (lbCurSel _lb_crew);
	
	//Apply Variables
	apm_target setVariable ["Ace_medical_medicClass", _n_medic, true];
	apm_target setVariable ["Ace_isEngineer", _n_eng, true];
	apm_target setVariable ["ACE_isEOD", _n_eod, true];
	apm_target setVariable ["APM_rank", _n_rank, true];
	apm_target setVariable ["APM_rotor", _n_rotor, true];
	apm_target setVariable ["APM_fixed", _n_fixed, true];
	apm_target setVariable ["APM_crewman", _n_crew, true];
	
	//Send to Database
	_uid = getPlayerUID apm_target;
	_loadout = getUnitLoadout apm_target;
	_fixed = lbCurSel _lb_fixed;
	_rotor = lbCurSel _lb_rotor;
	_crewman = lbCurSel _lb_crew;
	_eod = lbCurSel _lb_eod;
	
	_plugin_args = format ["0:apm:updatePlayerCerts:%1:%2:%3:%4:%5:%6:%7:%8:%9", _n_medic, _n_eng, _fixed, _rotor, _crewman, _eod, _n_rank, _loadout, _uid];
	["extDB3", _plugin_args] remoteExec ["callExtension", 2];
	
	//Reset Dialog
	_display closeDisplay 0;
	
	hint format ["%1 certs have been updated.", name apm_target];
	[apm_fnc_open_admin_panel, []] call cba_fnc_execNextFrame;
}];
_bn_temp ctrlAddEventHandler ["ButtonClick", {
	_display = findDisplay 33564;
	_lb_medic = _display displayCtrl 151564;
	_lb_eng = _display displayCtrl 1515641;
	_lb_eod = _display displayCtrl 1515642;
	_lb_rotor = _display displayCtrl 1515643;
	_lb_fixed = _display displayCtrl 1515644;
	_lb_rank = _display displayCtrl 1515646;
	_lb_crew = _display displayCtrl 1515680;
	
	//New settings
	_n_medic = lbCurSel _lb_medic;
	_n_eng = lbCurSel _lb_eng;
	_n_rank = lbCurSel _lb_rank;
	_n_eod = [false, true] select (lbCurSel _lb_eod);
	_n_rotor = [false, true] select (lbCurSel _lb_rotor);
	_n_fixed = [false, true] select (lbCurSel _lb_fixed);
	_n_crew = [false, true] select (lbCurSel _lb_crew);
	
	//Apply Variables
	apm_target setVariable ["Ace_medical_medicClass", _n_medic, true];
	apm_target setVariable ["Ace_isEngineer", _n_eng, true];
	apm_target setVariable ["ACE_isEOD", _n_eod, true];
	apm_target setVariable ["APM_rank", _n_rank, true];
	apm_target setVariable ["APM_rotor", _n_rotor, true];
	apm_target setVariable ["APM_fixed", _n_fixed, true];
	apm_target setVariable ["APM_crewman", _n_crew, true];
	
	//Send to Database
	_uid = getPlayerUID apm_target;
	_loadout = getUnitLoadout apm_target;
	_fixed = lbCurSel _lb_fixed;
	_rotor = lbCurSel _lb_rotor;
	_crewman = lbCurSel _lb_crew;
	_eod = lbCurSel _lb_eod;
	//Reset Dialog
	_display closeDisplay 0;
	
	hint format ["%1 certs have temporarily assigned", name apm_target];
	[apm_fnc_open_admin_panel, []] call cba_fnc_execNextFrame;
}];