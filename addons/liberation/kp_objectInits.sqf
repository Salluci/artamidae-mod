/*
    Specific object init codes depending on classnames.

    Format:
    [
        Array of classnames as strings <ARRAY>,
        Code to apply <CODE>,
        Allow inheritance <BOOL> (default false)
    ]
    _this is the reference to the object with the classname

    Example:
        KPLIB_objectInits = [
            [
                ["O_soldierU_F"],
                {systemChat "CSAT urban soldier was spawned!"}
            ],
            [
                ["CAManBase"],
                {systemChat format ["Some human named '%1' was spawned!", name _this]},
                true
            ]
        ];
*/

KPLIB_objectInits = [
    // Set KP logo on white flag
    [
        ["Flag_White_F"],
        {_this setFlagTexture "res\flag_kp_co.paa";}
    ],

    // Add ViV and build action to FOB box/truck
    [
        [FOB_box_typename, FOB_truck_typename],
        {
            [_this] spawn {
                params ["_fobBox"];
                waitUntil {sleep 0.1; time > 0};
                [_fobBox] call KPLIB_fnc_setFobMass;
                if ((typeOf _fobBox) isEqualTo FOB_box_typename) then {
                    [_fobBox] call KPLIB_fnc_setFobMass;
                    [_fobBox] remoteExecCall ["KPLIB_fnc_setLoadableViV", 0, _fobBox];
                };
                [_fobBox] remoteExecCall ["KPLIB_fnc_addActionsFob", 0, _fobBox];
            };
        }
    ],

    // Add FOB building damage handler override and repack action
    [
        [FOB_typename],
        {
            _this addEventHandler ["HandleDamage", {0}];
            [_this] spawn {
                params ["_fob"];
                waitUntil {sleep 0.1; time > 0};
                [_fob] remoteExecCall ["KPLIB_fnc_addActionsFob", 0, _fob];
            };
        }
    ],

    // Add ViV action to Arsenal crate
    [
        [Arsenal_typename],
        {
            [_this] spawn {
                params ["_arsenal"];
                waitUntil {sleep 0.1; time > 0};
                [_arsenal] remoteExecCall ["KPLIB_fnc_setLoadableViV", 0, _arsenal];
            };
        }
    ],

    // Add storage type variable to built storage areas (only for FOB built/loaded ones)
    [
        [KP_liberation_small_storage_building, KP_liberation_large_storage_building],
        {_this setVariable ["KP_liberation_storage_type", 0, true];}
    ],

    // Add ACE variables to corresponding building types
    [
        KP_liberation_medical_facilities,
        {_this setVariable ["ace_medical_isMedicalFacility", true, true];}
    ],
    [
        KP_liberation_medical_vehicles,
        {_this setVariable ["ace_medical_isMedicalVehicle", true, true];}
    ],

    // Hide Cover on big GM trucks
    [
        ["gm_ge_army_kat1_454_cargo", "gm_ge_army_kat1_454_cargo_win"],
        {_this animateSource ["cover_unhide", 0, true];}
    ],

    // Make sure a slingloaded object is local to the helicopter pilot (avoid desync and rope break)
    [
        ["Helicopter"],
        {if (isServer) then {[_this] call KPLIB_fnc_addRopeAttachEh;} else {[_this] remoteExecCall ["KPLIB_fnc_addRopeAttachEh", 2];};},
        true
    ],

    // Disable autocombat (if set in parameters) and fleeing
    [
        ["Man"],
        {
            if (!(GRLIB_autodanger) && {(side _this) isEqualTo GRLIB_side_friendly}) then {
                _this disableAI "AUTOCOMBAT";
            };
            _this allowFleeing 0;
        },
        true
    ]
];
