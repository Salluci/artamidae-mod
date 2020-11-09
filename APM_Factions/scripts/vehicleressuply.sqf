_code = {
    if (hasInterface) then {
        _box = _this select 0;
        _configs = uinamespace getVariable "ace_arsenal_configItems";
        _mags = _configs select 2;
        _thrown = _configs select 15;
        _put = _configs select 16;
        _misc_items = _configs select 17;
        _all = _mags + _thrown + _put + _misc_items;
        [_box, _all, false] call ace_arsenal_fnc_initBox;
    };
};

_box = _this select 0;
[[_box], _code] remoteExec ["call", 0];
