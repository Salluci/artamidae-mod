//Setup Base markers array and ACE condition
base_marker_array = allMapMarkers select {"base_marker" in _x};

APM_ACE_base_condition = {
	{
		if (ACE_Player inArea _x) then {breakWith true};
		false
	} forEach base_marker_array;
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
private _APM_ACE_Arsenal_menu = ["APMArsenalMenu", "APM Arsenal", ["x\APM\addons\Misc\Data\UI\ui_arsenal.paa"], {}, {isNull (objectParent ACE_Player) && APM_ACE_base_condition}] call ace_interact_menu_fnc_createAction;
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
}, APM_ACE_base_condition] call ace_interact_menu_fnc_createAction;

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
	if (!isNil "ALIVE_sys_logistics") then {
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

//Zeus Actions
_action = ["Zeus_Budget", "Set Budget", "", {
	//Create Textbox
	private _displayZeus = findDisplay 312;
	private _edit = _displayZeus ctrlCreate ["RscEdit", 123444];
	_edit ctrlSetPosition [0.5,0.5,0.2, 0.06];
	_edit ctrlCommit 0;

	//Create Button
	private _button = _displayZeus ctrlCreate ["RscButton", 1235555];
	_button ctrlSetPosition [0.55,0.6,0.1,0.06];
	_button ctrlCommit 0;

	//Edit Button Text
	_button ctrlSetText "Set Budget";
	_button ctrlCommit 0;

	//Add Button Event
	_button ctrlAddEventHandler ["ButtonClick",
	{
		params ["_btn"];
		private _display = ctrlParent _btn;
		private _edit = _display displayCtrl 123444;
		private _amount = parseNumber (ctrlText _edit);
		missionNamespace setVariable ["APM_Budget", _amount max 0, true];

		//Delete CTRLs
		ctrlDelete _edit;
		ctrlDelete _btn;
	}];
}, {true}] call ace_interact_menu_fnc_createAction;
[["ACE_ZeusActions"], _action] call ace_interact_menu_fnc_addActionToZeus;

//Teleports
private _apmTeleportMenu = ["APMTeleMenu", "Teleport To:", "res\ace_icons\portal_blue_ca.paa", {
}, APM_ACE_base_condition, {
	private _modules = ([] call BIS_fnc_getRespawnPositions) select {if (_x isEqualType objNull) then {alive _x} else {true}};;
	private _actions = [];
	private _code = {(_this select 2) call apm_missions_fnc_teleport};
	{
		private _id = format ["ACE_TP_%1", _x];
		private _name = _x getVariable ["name", ""];
		private _nearLocation = nearestLocations [position _x, ["Name", "NameCity", "NameCityCapital", "NameLocal"], 1000, _x];
		if (typeOf _x isKindOf "Module_F") then
		{
			if (count _nearLocation == 0) then
			{
				private _title = format ["%2 Grid: %1", mapGridPosition _x, _name];
				private _action = [_id, _title, "res\ace_icons\portal_orange_ca.paa", _code, {true}, {}, _x] call ace_interact_menu_fnc_createAction;
				_actions pushBack [_action, [], player];
			} else {
				private _location = _nearLocation select 0;
				private _title = format ["%3 @ %1 Grid: %2", text _location , mapGridPosition _x, _name];
				private _action = [_id, _title, "res\ace_icons\portal_orange_ca.paa", _code, {true}, {}, _x] call ace_interact_menu_fnc_createAction;
				_actions pushBack [_action, [], player];
			};
		} else {
			private _type = getText (configFile >> "CfgVehicles" >>
			typeOf _x >> "displayName");
			if (count _nearLocation == 0) then
			{
				private _title = format ["%2 Grid: %1", mapGridPosition _x, _type];
				private _action = [_id, _title, "res\ace_icons\portal_orange_ca.paa", _code, {true}, {}, _x] call ace_interact_menu_fnc_createAction;
				_actions pushBack [_action, [], player];
			} else {
				private _location = _nearLocation select 0;
				private _title = format ["%3 @ %1 Grid: %2", text _location , mapGridPosition _x, _type];
				private _action = [_id, _title, "res\ace_icons\portal_orange_ca.paa", _code, {true}, {}, _x] call ace_interact_menu_fnc_createAction;
				_actions pushBack [_action, [], player];
			};
		};
	} forEach _modules;
	_actions
}, nil, "", 0, [false, false, false, true, false]] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _apmTeleportMenu] call ace_interact_menu_fnc_addActionToObject;
