disableSerialization;
createDialog "APM_Admin_Panel";

waitUntil {!isNull (findDisplay 448789)};

private _display = findDisplay 448789;
private _lb_players = _display displayCtrl 122451;
private _bn_select = _display displayCtrl 59981;
private _bn_ban = _display displayCtrl 955846;
private _bn_banConfirm = _display displayCtrl 955861;
private _bn_restart = _display displayCtrl 955869;
private _bn_budget = _display displayCtrl 9558612;

//Disable Ban Confirm
_bn_banConfirm ctrlEnable false;

//Populate player list
{
	private _name = name _x;
	private _index = _lb_players lbAdd _name;
	_lb_players lbSetData [_index, str _x];
} forEach (allPlayers - [HC1, HC2, HC3]);

_bn_select ctrlAddEventHandler ["ButtonClick", {
	_display = findDisplay 448789;
	_lb_players = _display displayCtrl 122451;
	private _selected = lbCurSel _lb_players;
	if (_selected == -1) exitWith {hintSilent "Select a player first!"};
	private _selected_player = _lb_players lbText _selected;
	closeDialog 1;
	[apm_missions_fnc_adminPlayerMenu, [_selected_player]] call CBA_fnc_execNextFrame;
}];

_bn_ban ctrlAddEventHandler ["ButtonClick", {
	private _display = findDisplay 448789;
	private _bn_banConfirm = _display displayCtrl 955861;
	private _lb_players = _display displayCtrl 122451;
	private _selected = lbCurSel _lb_players;
	if (_selected == -1) exitWith {hintSilent "Select a player first!"};
	_bn_banConfirm ctrlEnable true;
}];

_lb_players ctrlAddEventHandler ["LBSelChanged", {
	_bn_banConfirm ctrlEnable false;
}];

_bn_banConfirm ctrlAddEventHandler ["ButtonClick", {
	private _display = findDisplay 448789;
	private _lb_players = _display displayCtrl 122451;
	private _selected = lbCurSel _lb_players;
	private _selected_player = _lb_players lbText _selected;
	private _target =  (allPlayers select {(name _x) == _selected_player}) select 0;
	if (isNull _target) exitWith {hint "Scripted Error: No target player found"};
	["APM_banPlayer", [player, _target]] call CBA_fnc_serverEvent;
	closeDialog 1;
	[apm_missions_fnc_adminMenu] call CBA_fnc_execNextFrame;
}];

_bn_budget ctrlAddEventHandler ["ButtonClick", {
	private _display = findDisplay 448789;
	private _tx_amount = _display displayCtrl 5152256;
	private _budget = parseNumber (ctrlText _tx_amount);
	missionNamespace setVariable ["APM_Budget", _budget, true];
}];

_bn_restart ctrlAddEventHandler ["ButtonClick", {
	[] spawn {
		private _result = ["Are you sure you wish to restart the server? This will save all online players' loadouts.", "Confirm Server Restart...", "Restart Server", "Cancel"] call BIS_fnc_guiMessage;
		if !(_result) exitwith {};
		["APM_RestartServer", [player]] call CBA_fnc_serverEvent;
	};
}];
