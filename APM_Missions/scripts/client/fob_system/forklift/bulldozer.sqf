params ["_forklift", "_object"];

_bounding = ((boundingBox _object)#1#0) max ((boundingBox _object)#1#1) max ((boundingBox _object)#1#2);
_time = 2 max _bounding min 25;
_condition = {
	params ["_args", "_pass", "_elapsedTime", "_totalTime", "_failCode"];
	//Change text on bar
	_display = uiNamespace getVariable ["cba_ui_progressbar", displayNull];
	_textbox = _display displayCtrl 10;
	_text = format ["Bulldoze in progress. %1 sec remaining", ceil (_totalTime - _elapsedTime)];
	_textbox ctrlSetText _text;
	_textbox ctrlCommit 0;
	//check for failure
	_args params ["_forklift", "_object"];
	_object setDamage [(_elapsedTime * 2/_totalTime), false];
	if (vehicle player != _forklift) exitWith {systemChat "You must remain in the Bulldozer"; false};
	if !(alive _forklift) exitWith {systemChat "Bulldozer destroyed"; false};
	true
};

_success = {
	params ["_args", "_pass", "_elapsedTime", "_totalTime", "_failCode"];
	_args params ["_forklift", "_object"];
	_object setDamage 0;
	[_object, true] remoteExec ["hideObjectGlobal", 2];
	[getPos _object, {
		APM_Hidden_Terrain pushBack _this;
		publicVariable "APM_Hidden_Terrain";
	}] remoteExec ["call", 2];
};

_failure = {
	hint "Bulldoze aborted!";
	params ["_args", "_pass", "_elapsedTime", "_totalTime", "_failCode"];
	_args params ["_forklift", "_object"];
	_object setDamage 0;
	[] spawn {
		sleep 2;
		hint "";
	};
};

[
	"Bulldozing Terrain Item",
	_time,
	_condition,
	_success,
	_failure,
	_this,
	true, //Block Mouse
	true, //Block Keys
	true //allow Esc
] call CBA_fnc_progressBar;