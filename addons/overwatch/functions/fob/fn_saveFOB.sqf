disableSerialization;
current_FOB_truck = _this select 0;

_display = (findDisplay 46) createDisplay "RscDisplayEmpty";

//Name text
_name_edit = _display ctrlCreate ["RscEdit", 1234];
_name_edit ctrlSetPosition [0.2,0.2,0.2,0.06];
_name_edit ctrlSetBackgroundColor [1,1,1,1];
_name_edit ctrlSetTextColor [0,0,0,1];
_name_edit ctrlSetText "(Name Template)";
_name_edit ctrlCommit 0;

//Category text
_category_edit = _display ctrlCreate ["RscEdit", 123];
_category_edit ctrlSetPosition [0.2,0.28,0.2,0.06];
_category_edit ctrlSetBackgroundColor [1,1,1,1];
_category_edit ctrlSetTextColor [0,0,0,1];
_category_edit ctrlSetText "(Set Category)";
_category_edit ctrlCommit 0;

//Save button
_save_bt = _display ctrlCreate ["RscButton", 456];
_save_bt ctrlSetPosition [0.2,0.36,0.2,0.06];
_save_bt ctrlSetText "Save FOB Template";
_save_bt ctrlCommit 0;

_save_bt ctrlAddEventHandler ["ButtonClick", {
	_bt = _this select 0;
	_display = ctrlParent _bt;
	_name_edit = _display displayCtrl 1234;
	_category_edit = _display displayCtrl 123;
	
	//Get name and Cat
	_name = ctrlText _name_edit;
	if ((_name isEqualTo "") or (_name isEqualTo "(Name Template)")) exitWith {systemChat "Must have unique name for Template!!!"};
	
	_cat = ctrlText _category_edit;
	if ((_cat isEqualTo "") or (_cat isEqualTo "(Set Category)")) exitWith {systemChat "Must give a category name"};
	
	_saved_fobs = profileNamespace getVariable ["APM_saved_FOB_templates", []];
	
	//Get all objects in currentMarker
	_marker = player getVariable "current_FOB";
	_marker_pos = getMarkerPos _marker;
	_marker_size = (getMarkerSize _marker) select 0;
	//_objects = (_marker_pos nearEntities _marker_size) select {!(_x isKindOf "Man")};
	//_objects = (_marker_pos nearObjects ["", _marker_size + 5]) select {_x getVariable ["APM_save_object", false]};
	_objects = (nearestObjects [_marker_pos, [], _marker_size]) select {_x getVariable ["APM_save_object", false]};
	if ((count _objects) == 0) exitWith {systemChat "No items detected to save. FOB not saved."};
	_fob_price = 0;
	_objects_array = [];
	_fob_truck_pos = getPos current_FOB_truck;
	_fob_truck_dir = getDir current_FOB_truck;
	{
		if !((_x isKindOf "Air") or (_x isKindOf "Car")) then {
			_pos = current_FOB_truck worldToModel getPos _x;
			_classname = typeOf _x;
			_dir = (getDir _x) - _fob_truck_dir;
			_vec = current_FOB_truck vectorWorldToModel (vectorDir _x);
			_code = _x getVariable ["Object_init", {}];
			_price = _x getVariable ["APM_FOB_Price", 0];
			_objects_array pushBack [_classname, _pos, _dir, _vec, _code, _price];
			_fob_price = _fob_price + _price;
		};
	} forEach _objects;
	_saved_fobs pushBackUnique [_name, _cat, _fob_price, _objects_array];
	profileNamespace setVariable ["APM_saved_FOB_templates", _saved_fobs];
	saveProfileNamespace;
	_display closeDisplay 1;
	current_FOB_truck = nil;
}];