params ["_player"];

if (isNull _player) exitWith {
	systemChat "Must be placed on a player unit.";
};

/*if !(isPlayer _player) exitWith {
	systemChat "Must be placed on a player unit.";
};*/

if !(local _player) exitWith {
	[[_player], "scripts\sm_evil\init_slender.sqf"] remoteExec ["execVM", _player];
};

_loadout = [[],[],[],["LOP_U_CHR_Functionary_01",[["ACE_elasticBandage",2],["ACE_CableTie",2],["ACE_epinephrine",1],["ACE_splint",2],["ACE_tourniquet",3]]],[],[],"","G_Blindfold_01_white_F",[],["ItemMap","B_UavTerminal","TFAR_anprc152","ItemCompass","ItemWatch","TRYK_G_bala_wh_NV"]];

_player setUnitLoadout _loadout;

missionNamespace setVariable ["Slender_man", _player, true];

//TFAR Events
talking_players = [];
_player setVariable ["tfar_sendingDistanceMultiplicator", 50, true];
_player setVariable ["tfar_receivingDistanceMultiplicator", 50, true];
//Slender KeyUp
["Slender_OnBeforeTangent", "OnBeforeTangent", {
	params ["_slender", "_radio", "_type", "_adt", "_tx"];
	if (_tx) then {
		//Slender keys radio, determin if handheld first, exit if not.
		if (_type != 0) exitWith {};
		//determin channel, and if in range, send event to players, otherwise normal.
		_freq = if (_adt) then {
			//Get Alt channel freq
			_channel = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getAdditionalSwChannel;
			[(call TFAR_fnc_ActiveSwRadio), _channel] call TFAR_fnc_getChannelFrequency
		} else {
			//Get Prim channel freq
			(call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwFrequency
		};
		if (parseNumber _freq >= 125) then {
			["Slender_TFAR_OBT", _this] call CBA_fnc_remoteEvent;
		};
	} else {
		//Slender release key, delete UI on players
		["Slender_TFAR_OBT", _this] call CBA_fnc_remoteEvent;
	};
}, _player] call TFAR_fnc_addEventHandler;

//Player KeyUp Received
_tfar_player_obt = ["Player_TFAR_OBT", tfar_player] call CBA_fnc_addEventHandler;

slender_onEachFrame = addMissionEventHandler ["Draw3D", {
	if (!alive player) exitWith {
		removeMissionEventHandler ["Draw3D", _thisEventHandler];
	};
	_tgts = missionNamespace getVariable ["talking_players", []];
	{
		_name = name _x;
		_pos = _x modelToWorld [0,0,1.5];
		_scale = 0.01 max (20/(slender_man distance _x)) min 0.25;
		drawIcon3D [
			"res\ACE_Radio_icon.paa", //Icon
			[1,1,1,1], //Icon color
			_pos,
			_scale, //width
			_scale, //height
			0, //angle
			_name,
			0,
			_scale,
			"RobotoCondensed",
			"center",
			true
		];
	} forEach _tgts;
}];

//Create snake tentacles and attachTo
_player setDir 0;
{
	_x params ["_pos", "_vector"];
	_snake = group _player createUnit ["Snake_random_F", getPos _player, [], 0, "NONE"];
	_snake setPos (_player modelToWorld _pos);
	_snake attachTo [_player];
	_snake setVectorDirAndUp [_vector, [0,1,0.5], "Pelvis"];
	_snake setObjectTextureGlobal [0, "#(rgb,8,8,3)color(0,0,0,0.6)"];
} forEach [
	[ [-0.377344,-0.107422,1.28882] , [0.999645,-0.00533097,0] ],
	[ [-0.379297,-0.275391,0.83893] , [0.573774,0.7227517,0] ],
	[ [0.306641,-0.429688,0.85616] , [-0.561892,0.7273431,0] ],
	[ [-0.379297,-0.275391,1.03893] , [0.573774,0.7227517,0] ],
	[ [0.306641,-0.429688,1.05616] , [-0.561892,0.7273431,0] ],
	[ [0.38125,-0.28125,1.30683] , [-0.961892,0.7273431,0] ]
];

_player setFace "Custom";

//Create local lightsource toggle for Slenderman using CTRL + L

slender_fnc_light = compile preprocessFileLineNumbers "scripts\sm_evil\slender_fnc_light.sqf";

[
	"Slender Keybinds",
	"slender_light_toggle",
	"Toggle Local Light Source",
	{},
	slender_fnc_light,
	[38, [false, true, false]]
] call CBA_fnc_addKeybind;

//Tell all players to have slender loop now that hes live.

[] remoteExec ["fnc_slenderLoop", 0];

//(un)Hide Slenderman
[
	"Slender Keybinds",
	"slender_hide_toggle",
	"(Un)Hide Slenderman",
	{
		_hidden = isObjectHidden player;
		if (_hidden) then {
			_code = {
				_this hideObjectGlobal false;
				{
					// Current result is saved in variable _x
					_x hideObjectGlobal false;
				} forEach attachedObjects _this;
			};
			[player, _code] remoteExec ["spawn", 2];
		} else {
			_code = {
				_this hideObjectGlobal true;
				{
					// Current result is saved in variable _x
					_x hideObjectGlobal true;
				} forEach attachedObjects _this;
			};
			[player, _code] remoteExec ["spawn", 2];

		};
	},
	{},
	[40, [false, true, false]]
] call CBA_fnc_addKeybind;

//Map click TP option 
addMissionEventHandler ["MapSingleClick", {
	params ["_units", "_pos", "_alt", "_shift"];
	if (_shift) then {
		player setPos _pos;
	};
}];

//Point TP color CBA setting
[
	"slender_pointer_color",
	"COLOR",
	["Set Pointer Color", "Sets the pointer color for any pointer involving slender"],
	"Slender Options",
	[0.2,0.1,0.4,1],
	2,
	{}
] call CBA_fnc_addSetting;

//Point to TP option
[
	"Slender Keybinds",
	"slender_point_tp",
	"Teleport Slender",
	{
		//Generate line in onEachFrame
		onEachFrame {
			_point = screenToWorld [0.5,0.5];
			_ins = lineIntersectsSurfaces [
				eyePos player,
				_point,
				player,
				objNull,
				true,
				5
			];
			if (count _ins > 0) then {
				_point = ASLToATL (_ins#0#0);
			};
			_distance2D = player distance2D _point;
			drawIcon3D [
				"\A3\ui_f\data\map\markers\system\empty_ca.paa",
				slender_pointer_color,
				_point,
				1,
				1,
				0,
				format ["TP: %1m", _distance2D],
				0
			];
		};
	},
	{
		//TP player upon release of keys
		onEachFrame {};
		_point = screenToWorld [0.5,0.5];
		_ins = lineIntersectsSurfaces [
				eyePos player,
				_point,
				player,
				objNull,
				true,
				5
			];
			if (count _ins > 0) then {
				_point = ASLToATL (_ins#0#0);
			};
		player setPos _point;
	},
	[38, [true, false, false]]
] call CBA_fnc_addKeybind;

//launch tentacle keybind
[
	"Slender Keybinds",
	"slender_launch_tentacle",
	"Launch Tentacle",
	{[] spawn fnc_launchTentacle},
	{},
	[240, [false, false, false]]
] call CBA_fnc_addKeybind;

//wind tentacle keybind
[
	"Slender Keybinds",
	"slender_wind_tentacle",
	"Wind Tentacle",
	{
		_rope = (ropes tentacle_anchor) # 0;
		ropeUnwind [
			_rope,
			2,
			-2,
			true
		];
	},
	{},
	[240, [false, false, false]]
] call CBA_fnc_addKeybind;

//Delete Tentacle
[
	"Slender Keybinds",
	"slender_remove_tentacle",
	"Unlatch Tentacle",
	{
		_rope = (ropes tentacle_anchor) # 0;
		tentacle_arm ropeDetach _rope;
	},
	{},
	[240, [false, false, false]]
] call CBA_fnc_addKeybind;

//invincible loop

while {player == slender_man} do {
	sleep 0.25;
	[player, false] call ace_medical_fnc_setUnconscious;
	[player, player] call ace_medical_treatment_fnc_fullHeal;
};