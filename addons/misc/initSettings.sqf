[
	"apm_use_view_distance_settings",
	"CHECKBOX",
	"Use APM Options for View Distance control",
	["/Artamidae Mod", "View Distance Options"],
	false,
	2,
	{}
] call CBA_Settings_fnc_init;

[
	"APM_foot_vd",
	"SLIDER",
	["View Distance (Foot)", "Set view distance while on foot"],
	["/Artamidae Mod", "View Distance Options"],
	[200, 20000, 3000, 0],
	2,
	{
		if (isNull (objectParent ACE_Player)) then {
			setViewDistance APM_foot_vd;
			setObjectViewDistance APM_foot_vd;
		};
	}
] call CBA_Settings_fnc_init;

[
	"APM_ground_vd",
	"SLIDER",
	["View Distance (Ground Vehicle)", "Set view distance while in ground vehicles."],
	["/Artamidae Mod", "View Distance Options"],
	[200, 20000, 3000, 0],
	2,
	{
		if ((objectParent ACE_Player) isKindOf "LandVehicle") then {
			setViewDistance APM_ground_vd;
			setObjectViewDistance APM_ground_vd;
		};
	}
] call CBA_Settings_fnc_init;

[
	"APM_air_vd",
	"SLIDER",
	["View Distance (Aircraft)", "Set view distance while in aircraft."],
	["/Artamidae Mod", "View Distance Options"],
	[200, 20000, 3000, 0],
	2,
	{
		if ((objectParent ACE_Player) isKindOf "Air") then {
			setViewDistance APM_air_vd;
			setObjectViewDistance APM_air_vd;
		};
	}
] call CBA_Settings_fnc_init;

[
	"apm_knockout_time_player",
	"SLIDER",
	["Set Player Knockout Time", "Changes the amount of time (seconds) when knocking someone out. Only available if you are a SRC.+ rank."],
	["/Artamidae Mod", "Misc Options"],
	[1, 90, 30, 0],
	2,
	{}
] call CBA_Settings_fnc_init;

[
	"apm_knockout_time_AI",
	"SLIDER",
	["Set AI Knockout Time", "Changes the amount of time (seconds) when knocking AI out. Only available if you are a C2.+ rank."],
	["/Artamidae Mod", "Misc Options"],
	[1, 90, 30, 0],
	2,
	{}
] call CBA_Settings_fnc_init;

[
	"FARE_GN_ENABLED",
	"CHECKBOX",
	["Enable Group Renaming Interaction", "Enables the Rename Group interaction when you are the group leader."],
	["/Artamidae Mod", "Misc Options"],
	false,
	2,
	{}
] call CBA_Settings_fnc_init;

[
	"apm_show_port_loadout_action",
	"CHECKBOX",
	["Show Port Loadouts Action", "Show the Port Loadout action under the APM Arsenal Menu"],
	["/Artamidae Mod", "Misc Options"],
	true,
	2,
	{}
] call CBA_Settings_fnc_init;

[
	"arsenal_additional_buttons",
	"SLIDER",
	["Move Additional Arsenal Buttons", "Moves the vertical position of the additional arsenal buttons."],
	["/Artamidae Mod", "Arsenal Options"],
	[-0.25,1.5,0.7,2],
	2
] call CBA_Settings_fnc_init;

[
	"ace_medical_preventInstantDeath",
	"CHECKBOX",
	["Prevent Instant Death", "Simulate pre-rewrite ""Prevent Instant Death"" logic."],
	["/Artamidae Mod", "Medical Options"],
	false,
	1
] call CBA_Settings_fnc_init;

[
	"ace_medical_bloodVolumeThreshold",
	"SLIDER",
	["Blood Volume Wake-Up Threshold", "Blood volume needs to be above this amount, in liters, to allow units to wake up."],
	["/Artamidae Mod", "Medical Options"],
	[3.0,6.0,5.1,1],
	1
] call CBA_Settings_fnc_init;

[
	"ace_medical_bloodPressureThresholdCoefficient",
	"SLIDER",
	["Blood Pressure Wake-Up Threshold Coefficient", "Coefficient for Blood Pressure Wake-Up Threshold. Lower makes it easier to wake up."],
	["/Artamidae Mod", "Medical Options"],
	[0,1,1,1],
	1
] call CBA_Settings_fnc_init;

[
	"ace_medical_const_bloodlossknockoutthreshold",
	"SLIDER",
	["Blood Loss KO Threshold", "Blood Loss KO Threshold. Higher makes it easier to wake up. 2 ignores Blood Loss in Stable Vitals calculation. 0 makes bleeding units unable to wake up."],
	["/Artamidae Mod", "Medical Options"],
	[0,2,0.5,1],
	1
] call CBA_Settings_fnc_init;

[
	"ace_medical_const_WakeUpInterval",
	"SLIDER",
	["Unconscious Wake-Up Interval", "Base time for calculation of unconscious state stable vitals check. Lower means it's ran more often"],
	["/Artamidae Mod", "Medical Options"],
	[0,30,15,0],
	1
] call CBA_Settings_fnc_init;
