disableSerialization;
createDialog "APM_Admin_Panel";

waitUntil {!isNull (findDisplay 448789)};

_display = findDisplay 448789;
_lb_players = _display displayCtrl 122451;
_bn_select = _display displayCtrl 59981;
_bn_ban = _display displayCtrl 955846;
_bn_banConfirm = _display displayCtrl 955861;
_bn_restart = _display displayCtrl 955869;
_tx_amount = _display displayCtrl 5152256;
_bn_budget = _display displayCtrl 9558612;

//Disable Ban Confirm
_bn_banConfirm ctrlEnable false;

//Populate player list
{
	_name = name _x;
	_patch = [_x] call BIS_fnc_getUnitInsignia;
	_rank = getText (configFile >> "CfgUnitInsignia" >> _patch >> "texture");
	_index = _lb_players lbAdd _name;
	_lb_players lbSetData [_index, str _x];
	_lb_players lbSetPictureRight  [_index, _rank];
} forEach allPlayers;

_bn_select ctrlAddEventHandler ["ButtonClick", {
	_display = findDisplay 448789;
	_lb_players = _display displayCtrl 122451;
	_selected = lbCurSel _lb_players;
	if (_selected == -1) exitWith {hintSilent "Select a player first!"};
	_selected_player = _lb_players lbText _selected;
	closeDialog 1;
	[apm_fnc_open_admin_player, [_selected_player]] call CBA_fnc_execNextFrame;
}];

_bn_ban ctrlAddEventHandler ["ButtonClick", {
	_display = findDisplay 448789;
	_bn_banConfirm = _display displayCtrl 955861;
	_lb_players = _display displayCtrl 122451;
	_selected = lbCurSel _lb_players;
	if (_selected == -1) exitWith {hintSilent "Select a player first!"};
	_bn_banConfirm ctrlEnable true;
}];

_lb_players ctrlAddEventHandler ["LBSelChanged", {
	_bn_banConfirm ctrlEnable false;
}];

_bn_banConfirm ctrlAddEventHandler ["ButtonClick", {
	_display = findDisplay 448789;
	_lb_players = _display displayCtrl 122451;
	_selected = lbCurSel _lb_players;
	_selected_player = _lb_players lbText _selected;
	_target = {
		_name = name _x;
		if (_name == _selected_player) exitWith {_x};
	} forEach allPlayers;
	if (isNull _target) exitWith {hint "Scripted Error: No target player found"};
	[player, _target] remoteExec ["db_banPlayer", 2];
	closeDialog 1;
	[apm_fnc_open_admin_panel,[]] call cba_fnc_execNextFrame;
}];

_bn_budget ctrlAddEventHandler ["ButtonClick", {
	_display = findDisplay 448789;
	_tx_amount = _display displayCtrl 5152256;
	_budget = parseNumber (ctrlText _tx_amount);
	missionNamespace setVariable ["APM_Budget", _budget, true];
}];

_bn_restart ctrlAddEventHandler ["ButtonClick", {
	[] spawn {
		_result = ["Are you sure you wish to restart the server? This will save all online players current certs and loadouts.", "Confirm Server Restart...", "Restart Server", "Cancel"] call BIS_fnc_guiMessage;
		if !(_result) exitwith {hintSilent "Restart Canceled"; sleep 1; hintSilent "";};
		[player]remoteExec ["fnc_save_all_players", 2, false];
	};
}];