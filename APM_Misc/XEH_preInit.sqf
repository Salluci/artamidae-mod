#include "XEH_Prep.hpp"
#include "initSettings.sqf"
#include "initKeybinds.sqf"

APM_Punch_cond =
{
	private _rank = player getVariable ["APM_Rank", 0];
	if (_rank >=7) then {true} else {false};
};
APM_Punch_condAI =
{
	private _rank = player getVariable ["APM_Rank", 3];
	if (_rank >=3) then {true} else {false};
};
