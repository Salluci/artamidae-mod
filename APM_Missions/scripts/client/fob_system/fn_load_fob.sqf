disableSerialization;
current_FOB_truck = _this select 0;

_fob_templates = profileNamespace getVariable ["APM_saved_FOB_templates", []];

_display = findDisplay 46 createDisplay "RscDisplayEmpty";

//Create Tree
_FOB_tree = _display ctrlCreate ["RscTreeSearch", 123];
_FOB_tree ctrlSetPosition [0.2,0.2,0.35,0.35];
_FOB_tree ctrlSetBackgroundColor [0,0,0,0.7];
_FOB_tree ctrlCommit 0;

//Create Load button
_load_bt = _display ctrlCreate ["RscButton", 1234];
_load_bt ctrlSetPosition [0.2, 0.6, 0.15, 0.08];
_load_bt ctrlSetText "Load Template";
_load_bt ctrlCommit 0;

//Create Delete button
_delete_bt = _display ctrlCreate ["RscButton", 1235];
_delete_bt ctrlSetPosition [0.35, 0.6, 0.15, 0.08];
_delete_bt ctrlSetText "Delete Template";
_delete_bt ctrlCommit 0;

//Fill Tree
_categories = [];
{
	_cat = _x select 1;
	_categories pushBackUnique _cat;
} forEach (_fob_templates + fob_unfinshed_templates);

{
	_FOB_tree tvAdd [[], _x];
} forEach _categories;

{
	_x params ["_name", "_cat", "_price", "_array"];
	_cat_index = _categories find _cat;
	_true_name = format ["%1   $%2", _name, _price];
	_new_index = _FOB_tree tvAdd [[_cat_index], _true_name];
	_FOB_tree tvSetData [[_cat_index, _new_index], str _x];
} forEach (_fob_templates + fob_unfinshed_templates);

//CTRL Events

/*_FOB_tree ctrlAddEventHandler ["TreeSelChanged", {
	params ["_ctrl", "_selection"];
	_data = _ctrl tvData _selection;
	systemChat _data;
}];*/

_load_bt ctrlAddEventHandler ["ButtonClick", {
	_btn = _this select 0;
	_display = ctrlParent _btn;
	_FOB_tree = _display displayCtrl 123;
	_selection = tvCurSel _FOB_tree;
	_data = _FOB_tree tvData _selection;
	if (_data isEqualTo "") exitWith {systemChat "No Template Selected!"};
	_data = call compile _data;
	_data params ["_name", "_cat", "_price", "_object_array"];
	
	//Price Check
	_budget = [(player getVariable ["current_fob", "NONE"])] call fob_fnc_getSupply;
	if (_price > _budget) exitWith {systemChat "Can not afford FOB"};
	_budget = _budget - _price;
	[(player getVariable ["current_fob", "NONE"]), _budget] call fob_fnc_setSupply;
	
	//create Array of objects (hopefully)
	[_object_array] spawn {
		_progress_text = (findDisplay 46) ctrlCreate ["RscText", 12355];
		_progress_text ctrlSetPosition [0.25,0.25,0.75,0.06];
		_progress_text ctrlSetText "Building FOB...";
		_progress_text ctrlSetBackgroundColor [0,0,0,0.75];
		_progress_text ctrlCommit 0;
		_progress_bar = (findDisplay 46) ctrlCreate ["RscProgress", 1234];
		_progress_bar ctrlSetPosition [0.25,0.25,0.75,0.06];
		_progress_bar ctrlSetBackgroundColor [0,0.5,0,0.5];
		_progress_bar ctrlCommit 0;
		_object_array = _this select 0;
		_current_FOB_pos = getPos current_FOB_truck;
		_current_FOB_dir = getDir current_FOB_truck;
		_editable_objects = [];
		_progress_100 = count _object_array;
		{
			if !(alive current_FOB_truck) exitWith {
				systemChat "FOB truck destroyed! FOB Progress stopped.";
				ctrlDelete _progress_bar;
				ctrlDelete _progress_text;
			};
			_x params ["_classname", "_pos", "_dir", "_vec", "_code", "_price"];
			_true_pos = current_FOB_truck modelToWorld _pos;
			_new_object = _classname createVehicle _true_pos;
			_new_object setPos _true_pos;
			_new_object setDir (_dir + _current_FOB_dir);
			_true_vec = current_FOB_truck vectorModelToWorld _vec;
			_new_object setVectorDirandUp [_true_vec, (surfaceNormal _true_pos)];
			_new_object setVariable ["APM_FOB_price", _price, true];
			_new_object setVariable ["APM_save_object", true, true];
			_new_object setVariable ["Object_init", _code, true];
			_corrected_pos = getPos _new_object;
			_corrected_pos set [2, 0];
			_new_object setPos _corrected_pos;
			[_code, _new_object] remoteExec ["CBA_fnc_execNextFrame", 0];
			_editable_objects pushBack _new_object;
			sleep 1;
			_progress_bar progressSetPosition (_forEachIndex/_progress_100);
			_progress_bar ctrlCommit 1;
		} forEach _object_array;
		[_editable_objects, {{_x addCuratorEditableObjects [_this, true]} forEach allCurators}] remoteExec ["call", 0];
		current_FOB_truck = nil;
		ctrlDelete _progress_bar;
		ctrlDelete _progress_text;
	};
	_display closeDisplay 1;
	
}];

_delete_bt ctrlAddEventHandler ["ButtonClick", {
	_btn = _this select 0;
	_display = ctrlParent _btn;
	_FOB_tree = _display displayCtrl 123;
	_selection = tvCurSel _FOB_tree;
	_data = _FOB_tree tvData _selection;
	if (_data isEqualTo "") exitWith {systemChat "No Template Selected!"};
	_data = call compile _data;
	_data params ["_deleted_name", "_deleted_cat", "_deleted_price"];
	_fob_templates = profileNamespace getVariable ["APM_saved_FOB_templates", []];
	{
		_x params ["_name", "_cat", "_price"];
		if ((_name isEqualTo _deleted_name) and (_cat isEqualTo _deleted_cat) and (_price == _deleted_price)) exitWith {
			_fob_templates deleteAt _forEachIndex;
			systemChat format ["%1 deleted from templates.", _deleted_name];
		};
	} forEach _fob_templates;
	profileNamespace setVariable ["APM_saved_FOB_templates", _fob_templates];
	_display closeDisplay 1;
	[fob_loadFOB, [current_FOB_truck, player, []]] call CBA_fnc_execNextFrame;
}];

/*_delete_bt ctrlAddEventHandler ["ButtonClick", {
	systemChat "Double click ""Delete"" to confirm deleting this FOB template";
}];