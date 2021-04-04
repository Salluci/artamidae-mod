call compileScript ["Engima\Traffic\Init.sqf"];

call compileScript ["CallToPrayer\init.sqf"];

if (isNil {profileNamespace getVariable "APM_OverwatchIntroDone"} && {hasInterface}) then {

titleCut ["", "BLACK FADED", 999];
	[] Spawn {
	waitUntil{!(isNil "BIS_fnc_init")};

	titleText ["AuburnAlumni Presents...Operation Overwatch","PLAIN"];
	titleFadeOut 10;
	sleep 5;

	titleText ["June 2014...Lythium Province, Afghanistan.  Taliban presence has increased dramatically over the last 6 months.","PLAIN"];
	titleFadeOut 15;
	sleep 8;

	titleText ["Local Afghan forces have suffered heavy losses in trying to repel the insurgent threat.", "PLAIN"];
	titleFadeout 15;
	sleep 8;

	titleText ["CIA Operatives have been in country for several months establishing intel on local Taliban activity.  Special Forces have been deployed to augment this presence and begin offensive operations in conjunction with ANA forces.", "PLAIN"];
	titleFadeout 15;
	sleep 10;

	titleText ["Work with local forces, identify Taliban threats, and eliminate them.  It's time to take the fight back to the Taliban.","PLAIN DOWN"];
	titleFadeOut 10;
	sleep 10;

	// Info text
	[str ("ALiVE Insurgency"), str("HA Campaign"), str("June 2014")] spawn BIS_fnc_infoText;

	sleep 3;
	"dynamicBlur" ppEffectEnable true;
	"dynamicBlur" ppEffectAdjust [6];
	"dynamicBlur" ppEffectCommit 0;
	"dynamicBlur" ppEffectAdjust [0.0];
	"dynamicBlur" ppEffectCommit 5;

	titleCut ["", "BLACK IN", 9];
	};
	profileNamespace setVariable ["APM_OverwatchIntroDone", true];
	saveProfileNamespace;
};

//init R3F
call compileScript ["R3F_LOG\init.sqf"];

//APM default loadouts
call compileScript ["scripts\default_loadouts.sqf"];

//Vehicle Customization
call compileScript ["VAM_GUI\VAM_GUI_init.sqf"];
