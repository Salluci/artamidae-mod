  _box = _this select 0;

  _configs = uinamespace getVariable "ace_arsenal_configItems";
  _mags = _configs select 2;
  _thrown = _configs select 15;
  _put = _configs select 16;
  _misc_items = _configs select 17;
  _all = _mags + _thrown + _put + _misc_items;
  [_box, _all, true] call ace_arsenal_fnc_initBox;
