private _loadouts = profileNamespace getVariable ["ace_arsenal_saved_loadouts", []];
private _cfgWeapons = configFile >> "CfgWeapons"; //So we don't resolve every time in loop

// _loadouts is an associative array [loadoutName, loadoutContent, loadoutName, ...], so we have to skip the name in our loop
for "_i" from 1 to (count _loadouts) step 1 do {

    _inventory = (_loadouts select _i) select 1;
    // iterate through each container
    {
        _content = _x;
        // iterate through each item of the container
        {
            _class = _cfgWeapons >> _x;

            //Following will replace 0.9.x Radios with their 1.0 versions. //#TODO Enable for Release -- yet untested
            //if ((_class select [0,3]) == "tf_") then {_class = "tfar_" + (_class select [3])};

            // if the item is an actual radio, not a radio prototype nor common item
            if ((isClass _class) && {isNumber (_class >> "tf_radio")}) then {
                // erase the content value with parent prototype
                //diag_log ["TFAR","replace",_class,_forEachIndex,getText (_class >> "tf_parent")];
                _content set [_forEachIndex, getText (_class >> "tf_parent")];
            };
        } forEach _content;
        true
    } count [
        (_inventory select 3) select 1, // uniform content
        (_inventory select 4) select 1, // vest content
        (_inventory select 5) select 1, // backpack content
        _inventory select 9             // assigned items
    ];
};

profileNamespace setVariable ["ace_arsenal_saved_loadouts", _loadouts]; //We always have to set in profileNamespace
