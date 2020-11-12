[
	"APM_foot_vd",
	"SLIDER",
	["View Distance (Foot)", "Set view distance while on foot"],
	["APM Options", "View Distance Options"],
	[200, 20000, 3000, 0],
	2,
	{
		params ["_value"];
		if (vehicle player == player) then {
			setViewDistance APM_foot_vd;
		};
	}
] call CBA_Settings_fnc_init;

[
	"APM_foot_vd",
	"SLIDER",
	["View Distance (Foot)", "Set view distance while on foot."],
	["APM Options", "View Distance Options"],
	[200, 20000, 3000, 0],
	2,
	{
		params ["_value"];
		if (vehicle player == player) then {
			setViewDistance APM_foot_vd;
		};
	}
] call CBA_Settings_fnc_init;

[
	"APM_ground_vd",
	"SLIDER",
	["View Distance (Ground Vehicle)", "Set view distance while in ground vehicles."],
	["APM Options", "View Distance Options"],
	[200, 20000, 3000, 0],
	2,
	{
		params ["_value"];
		if ((vehicle player != player) and (vehicle player isKindOf "LandVehicle")) then {
			setViewDistance APM_ground_vd;
		};
	}
] call CBA_Settings_fnc_init;

[
	"APM_air_vd",
	"SLIDER",
	["View Distance (Aircraft)", "Set view distance while in aircraft."],
	["APM Options", "View Distance Options"],
	[200, 20000, 3000, 0],
	2,
	{
		params ["_value"];
		if ((vehicle player != player) and (vehicle player isKindOf "Air")) then {
			setViewDistance APM_air_vd;
		};
	}
] call CBA_Settings_fnc_init;

[
	"apm_knockout_time_player",
	"SLIDER",
	["Set Player Knockout Time", "Changes the amount of time (seconds) when knocking someone out. Only available if you are a SRC.+ rank."],
	["APM Options", "Misc Options"],
	[1, 90, 30, 0],
	2,
	{}
] call CBA_Settings_fnc_init;

[
	"apm_knockout_time_AI",
	"SLIDER",
	["Set AI Knockout Time", "Changes the amount of time (seconds) when knocking AI out. Only available if you are a C2.+ rank."],
	["APM Options", "Misc Options"],
	[1, 90, 30, 0],
	2,
	{}
] call CBA_Settings_fnc_init;

[
	"arsenal_additional_buttons",
	"SLIDER",
	["Move Additional Arsenal Buttons", "Moves the vertical position of the additional arsenal buttons."],
	["APM Options", "Arsenal Options"],
	[-0.25,1.5,0.7,2],
	2,
	{}
] call CBA_Settings_fnc_init;
