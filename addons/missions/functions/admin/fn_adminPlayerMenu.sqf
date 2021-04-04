disableSerialization;

//Detect player;
params [["_name","",[""]]];

apm_target = allPlayers select {name _x == _name} select 0;

//Get player certs
private _c_medic = apm_target getVariable ["Ace_medical_medicClass", 0];
private _c_eng = apm_target getVariable ["Ace_isEngineer", 0];
private _c_rank = apm_target getVariable ["APM_rank", 0];
private _c_eod = [0,1] select (apm_target getVariable ["ACE_isEOD", false]);
private _c_rotor = [0,1] select (apm_target getVariable ["APM_rotor", false]);
private _c_fixed = [0,1] select (apm_target getVariable ["APM_fixed", false]);
private _c_crew = [0,1] select (apm_target getVariable ["APM_crewman", false]);
private _cfg_patches = apm_target getVariable ["all_configs", ["Error: Not defined"]];
private _ranks = ["Candidate/Pub", "RCT", "C1", "C2", "C3", "SRC", "CC", "SBCO", "FCO", "ACO", "SCO", "CMDR"];

//Create Dialog
createDialog "APM_Admin_Player";
waitUntil {!isNull (findDisplay 33564)};
private _display = findDisplay 33564;
private _lb_medic = _display displayCtrl 151564;
private _lb_eng = _display displayCtrl 1515641;
private _lb_eod = _display displayCtrl 1515642;
private _lb_rotor = _display displayCtrl 1515643;
private _lb_fixed = _display displayCtrl 1515644;
private _lb_rank = _display displayCtrl 1515646;
private _lb_crew = _display displayCtrl 1515680;
private _bn_commit = _display displayCtrl 156489;
private _lb_patches = _display displayCtrl 152525;
private _bn_temp = _display displayCtrl 256489;
{
	_x lbAdd "False";
	_x lbAdd "True";
} forEach [
	_lb_eod,
	_lb_rotor,
	_lb_fixed,
	_lb_crew
];

{_lb_rank lbAdd _x;} forEach _ranks;

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
	private _n_medic = lbCurSel _lb_medic;
	private _n_eng = lbCurSel _lb_eng;
	private _n_rank = lbCurSel _lb_rank;
	private _n_eod = [false, true] select (lbCurSel _lb_eod);
	private _n_rotor = [false, true] select (lbCurSel _lb_rotor);
	private _n_fixed = [false, true] select (lbCurSel _lb_fixed);
	private _n_crew = [false, true] select (lbCurSel _lb_crew);

	//Apply Variables
	apm_target setVariable ["Ace_medical_medicClass", _n_medic, true];
	apm_target setVariable ["Ace_isEngineer", _n_eng, true];
	apm_target setVariable ["ACE_isEOD", _n_eod, true];
	apm_target setVariable ["APM_rank", _n_rank, true];
	apm_target setVariable ["APM_rotor", _n_rotor, true];
	apm_target setVariable ["APM_fixed", _n_fixed, true];
	apm_target setVariable ["APM_crewman", _n_crew, true];

	//Send to Database
	private _uid = getPlayerUID apm_target;
	private _fixed = lbCurSel _lb_fixed;
	private _rotor = lbCurSel _lb_rotor;
	private _crewman = lbCurSel _lb_crew;
	private _eod = lbCurSel _lb_eod;

	private _plugin_args = format ["0:apm:updatePlayerCerts:%1:%2:%3:%4:%5:%6:%7:%8", _n_medic, _n_eng, _fixed, _rotor, _crewman, _eod, _n_rank, _uid];
	["extDB3", _plugin_args] remoteExec ["callExtension", 2];

	//Reset Dialog
	_display closeDisplay 0;

	hint format ["%1 certs have been updated.", name apm_target];
	[apm_missions_fnc_adminMenu] call cba_fnc_execNextFrame;
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
	private _n_medic = lbCurSel _lb_medic;
	private _n_eng = lbCurSel _lb_eng;
	private _n_rank = lbCurSel _lb_rank;
	private _n_eod = [false, true] select (lbCurSel _lb_eod);
	private _n_rotor = [false, true] select (lbCurSel _lb_rotor);
	private _n_fixed = [false, true] select (lbCurSel _lb_fixed);
	private _n_crew = [false, true] select (lbCurSel _lb_crew);

	//Apply Variables
	apm_target setVariable ["Ace_medical_medicClass", _n_medic, true];
	apm_target setVariable ["Ace_isEngineer", _n_eng, true];
	apm_target setVariable ["ACE_isEOD", _n_eod, true];
	apm_target setVariable ["APM_rank", _n_rank, true];
	apm_target setVariable ["APM_rotor", _n_rotor, true];
	apm_target setVariable ["APM_fixed", _n_fixed, true];
	apm_target setVariable ["APM_crewman", _n_crew, true];

	//Reset Dialog
	_display closeDisplay 0;

	hint format ["%1 certs have temporarily assigned", name apm_target];
	[apm_missions_fnc_adminMenu] call cba_fnc_execNextFrame;
}];
