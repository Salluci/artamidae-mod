//------------------------------------------------------------------------------------
// fn_enterGroupName.sqf
// Opens a text box so player can type in group name
// params: [_unit]
// _unit: OBJECT (unit)
// returns: nothing
// author: thoreaufare
//------------------------------------------------------------------------------------
params ["_unit"];

[] spawn {
	disableSerialization;

	// taken from Example 5 here: https://community.bistudio.com/wiki/ctrlCreate
	// TODO understand this and tweak GUI as needed

	_display = (findDisplay 46) createDisplay "RscDisplayEmpty";
	_ctrlGroup = _display ctrlCreate ["RscControlsGroupNoScrollbars", -1];
	_ctrlBackground = _display ctrlCreate ["RscTextMulti", -1, _ctrlGroup];
	IDD_EDIT_BOX = 123;
	_ctrlEdit = _display ctrlCreate ["RscEdit", IDD_EDIT_BOX, _ctrlGroup];
	_ctrlButton = _display ctrlCreate ["RscShortcutButton", -1, _ctrlGroup];

	// _ctrl ctrlSetPosition [x, y, w, h]
	_ctrlGroup ctrlSetPosition [0.5, 0.5, 0, 0];
	_ctrlGroup ctrlCommit 0;

	_ctrlBackground ctrlSetPosition [0, 0, 0.5, 0.12];
	_ctrlBackground ctrlSetBackgroundColor [0.5, 0.5, 0.5, 0.9];
	_ctrlBackground ctrlSetText "ENTER GROUP NAME:";
	_ctrlBackground ctrlEnable false;
	_ctrlBackground ctrlCommit 0;

	_ctrlEdit ctrlSetPosition [0.01, 0.05, 0.33, 0.05];
	_ctrlEdit ctrlSetBackgroundColor [0, 0, 0, 0.5];
	_ctrlEdit ctrlCommit 0;

	_ctrlButton ctrlSetPosition [0.36, 0.05, 0.13, 0.05];
	_ctrlButton ctrlCommit 0;
	_ctrlButton ctrlSetText "SUBMIT";
	
	_ctrlButton ctrlAddEventHandler ["ButtonClick", {
		params ["_ctrl"];
		_display = ctrlParent _ctrl;
		_text = ctrlText (_display displayCtrl IDD_EDIT_BOX);
		if (_text != "") then { 
			[player, _text] call fare_fnc_updateGroupName; 
		};
		_display closeDisplay 1;
	}];

	ctrlSetFocus _ctrlEdit;

	_ctrlGroup ctrlSetPosition [0.25, 0.25, 0.5, 0.5];
	_ctrlGroup ctrlCommit 0;
};