#include "\a3\editor_f\Data\Scripts\dikCodes.h";
APM_Punch_cond = {
	_rank = player getVariable ["APM_Rank", 0];
	if (_rank >=7) then {true} else {false};
};
APM_Punch_condAI = {
	_rank = player getVariable ["APM_Rank", 0];
	if (_rank >=3) then {true} else {false};
};

fnc_bridge_punchHead = {
	_this spawn {
		_player = _this select 0;
		_target = _this select 1;
		_result = ["Are you sure you wish to knock this person out?", "Knock out?", "Yes", "No"] call BIS_fnc_guiMessage;
		if (_result) then {
			_player playActionNow "PutDown";
			sleep 0.5;
			[_target, "BRIDGE_PunchSound"] remoteExec ["say3D", 0, false];
			[_target, "head", 0, objNull, "punch", 0, 0.1] call ace_medical_fnc_handleDamage_advanced;
			[_target, true, apm_knockout_time, true] call ace_medical_fnc_setUnconscious;
		};
	};
};

_action = ["APM_Punch", "Punch", "BRIDGE_punch\ui\knock.paa", {
	[_player, _target] call fnc_bridge_punchHead;
	}, {if (isPlayer _target) then {((call APM_Punch_cond) and (alive _target))} else {((call APM_Punch_condAI) and (alive _target))}}, {}, [], "Head", 4.5] call ace_interact_menu_fnc_createAction;

_result = ["CAManBase", 0, [], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ["APM_Punch2", "Punch Passenger", "BRIDGE_punch\ui\knock.paa", {
	hint str _this;
	[_player, _target] call fnc_bridge_punchHead;
}, {if (isPlayer _target) then {((call APM_Punch_cond) and (alive _target) and (vehicle _target != _target))} else {((call APM_Punch_condAI) and (alive _target) and (vehicle _target != _target))}}] call ace_interact_menu_fnc_createAction;

_result = ["CAManBase", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

fnc_bridge_punchTarget =
{
	_player = _this select 0;
	_target = cursorTarget;
	_dist = _player distance _target;
	if ((isPlayer _target) and !(call APM_Punch_cond)) exitWith {Hint "Not ranked high enough to knock players out!"};
	if (!(isPlayer _target) and !(call APM_Punch_condAI)) exitWith {Hint "Not ranked high enough to knock AI out!"};

	if (_dist <= 3) then {

		if (_target isKindOf "Man") then {

			if (alive _target) then {

				_player playActionNow "PutDown";

				sleep 0.5;

				[_target, "BRIDGE_PunchSound"] remoteExec ["say3D", 0, false];

				[_target, "head", 0, objNull, "punch", 0, 0.1] call ace_medical_fnc_handleDamage_advanced;

				[_target, true, apm_knockout_time, true] call ace_medical_fnc_setUnconscious;

			};
		};
	};
};

["Knock People Unconscious", "bridge_kpu", "Punch", {[player] call fnc_bridge_punchTarget}, {}, [DIK_HOME, [false,false,false]]] call cba_fnc_addKeybind;
