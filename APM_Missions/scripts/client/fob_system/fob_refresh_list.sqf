params ["_tv_list"];

tvClear _tv_list;
//Fill listbox
_FOB_level = (getPos player) call get_fob_level;

_categories = [];
{
	_cat = _x select 6;
	_categories pushBackUnique _cat;
} forEach APM_fob_shop;

_categories sort true;

{
	_new = _tv_list tvAdd [[], _x];
	//_tv_list tvSetColor [[_new], [0.1,0.78,0.1,1]];
} forEach _categories;

{
	_x params ["_classname", "_displayname", "_price", "_required", "_code", "_tooltip", ["_cat", "Misc", [""]]];
	if (_required <= _FOB_level) then {
		if (_displayname == "") then {
			_displayname = getText (configFile >> "CfgVehicles" >> _classname >> "displayname");
		};
		_price_str =":   " + (_price toFixed 0) + " Su";
		_displayname = _displayname + _price_str;
		_cat_belong = _categories find _cat;
		_created_index = _tv_list tvAdd [[_cat_belong], _displayname];
		_tv_list tvSetData [[_cat_belong, _created_index], str _x];
		_tv_list tvSetTooltip [[_cat_belong, _created_index], _tooltip];
	};
	
} forEach APM_fob_shop;

{
	_tv_list tvSort [[_forEachIndex], false];
} forEach _categories;