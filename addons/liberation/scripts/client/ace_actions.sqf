//Setup ACE condition
APM_ACE_base_condition = {
	player getVariable ['KPLIB_fobDist', 99999] < 100
	|| {player getVariable ['KPLIB_isNearStart', false]}
};
APM_ACE_Resupply_condition = {
	player getVariable ['KPLIB_isNearMobRespawn', false]
	|| APM_ACE_base_condition
};

//Setup Arsenal
APM_Gear_shop_blacklist =
[
	"HLC_wp_M134Painless",
	"NWTS_Deer",
	"NWTS_Deer_bloody",
	"NWTS_Deer_Mossy",
	"NWTS_Deer_glow",
	"NWTS_Human_bloody",
	"NWTS_Human_simple",
	"NWTS_goggle_base",
	"NWTS_goggle_deer",
	"NWTS_goggle_deer_glow",
	"NWTS_goggle_deer_mossy",
	"NWTS_goggle_deer_bloody",
	"NWTS_goggle_human_bloody",
	"NWTS_goggle_human_simple"
];

[APM_fullBox, APM_Gear_shop_blacklist, true] call ace_arsenal_fnc_removeVirtualItems;
[APM_favoritesBox, APM_Gear_shop_blacklist, false] call ace_arsenal_fnc_removeVirtualItems;

//Arsenal self-interaction
private _APM_ACE_Arsenal_menu = ["APMArsenalMenu", "APM Arsenal", ["x\APM\addons\Misc\Data\UI\ui_arsenal.paa"], {}, {isNull (objectParent ACE_Player) && APM_ACE_resupply_condition}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _APM_ACE_Arsenal_menu] call ace_interact_menu_fnc_addActionToObject;

private _action = ["APM_Arsenal", "Open Full Arsenal", ["x\APM\addons\Misc\Data\UI\ui_arsenal.paa","#FFABAB"], {
	[] call apm_arsenal_fnc_openFullArsenal;
}, APM_ACE_base_condition] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "APMArsenalMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_Arsenal", "Open Favorite Arsenal", ["x\APM\addons\Misc\Data\UI\ui_arsenal.paa","#ABABFF"], {
	[] call apm_arsenal_fnc_openFavoritesArsenal;
}, APM_ACE_base_condition] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "APMArsenalMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_Arsenal", "Open Resupply Arsenal", ["\A3\ui_f\data\igui\cfg\simpletasks\types\rearm_ca.paa","#FFFFAB"], {
	[] call apm_arsenal_fnc_openResupplyArsenal;
}, APM_ACE_resupply_condition] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions", "APMArsenalMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["APM_Port_arsenal", "Port BIS Loadouts to ACE", ["x\APM\addons\Misc\Data\UI\ui_arsenal.paa", "#ABFFAB"], {
	call apm_arsenal_fnc_portLoadouts;
}, {apm_show_port_loadout_action && APM_ACE_base_condition}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions", "APMArsenalMenu"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ["apm_openShop", "Open Vehicle Shop", "res\ace_icons\vic_shop_ca.paa", {
	[] call APM_missions_fnc_openShop;
}, {isNull (objectParent ACE_Player) && APM_ACE_base_condition}] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

//Delete Trash/Hide Body
_action = ["DeleteGroundHolder", "Delete Trash", "", {
	if (APM_isALiVE) then {
		[ALIVE_sys_logistics, "removeObject", [_target]] call ALIVE_fnc_logistics;
	};
	[{deleteVehicle _this}, _target, 5] call CBA_fnc_waitAndExecute;
}, {true}] call ace_interact_menu_fnc_createAction;

["GroundWeaponHolder", 0, ["ACE_MainActions"], _action, false] call ace_interact_menu_fnc_addActionToClass;
["Default", 0, ["ACE_MainActions"], _action, false] call ace_interact_menu_fnc_addActionToClass;
["WeaponHolderSimulated", 0, ["ACE_MainActions"], _action, false] call ace_interact_menu_fnc_addActionToClass;
["Weapon_Empty", 0, ["ACE_MainActions"], _action, false] call ace_interact_menu_fnc_addActionToClass;

_action = ["DeleteGroundBody", "Hide Body", "", {
	_player action ["hideBody", _target];
}, {!alive _target}] call ace_interact_menu_fnc_createAction;
["CAManBase", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
