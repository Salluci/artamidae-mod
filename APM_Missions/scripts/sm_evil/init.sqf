#define pathMacro(thescript) compile preprocessFileLineNumbers ("scripts\sm_evil\" + #thescript + ".sqf");

tfar_slender = pathMacro(tfar_slender)
tfar_player = pathMacro(tfar_player)
fnc_canSeeSlender = pathMacro(fnc_canSeeSlender)
fnc_slenderLoop = pathMacro(fnc_slenderLoop)
fnc_launchTentacle = pathMacro(fnc_launchTentacle)
fnc_beenCaptured = pathMacro(fnc_beenCaptured)

//Setup CBA remote event

_tfar_slender_obt = ["Slender_TFAR_OBT", tfar_slender] call CBA_fnc_addEventHandler;

_tfar_player = ["Player_OnBeforeTangent", "OnBeforeTangent", {
	if (player != Slender_man) then {
		["Player_TFAR_OBT", _this, Slender_man] call CBA_fnc_targetEvent;
	};
}, player] call TFAR_fnc_addEventHandler;