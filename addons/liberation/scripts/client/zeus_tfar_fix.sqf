TFAR_Radio_Zeus_fix = false;
_action = ["Zeus_attach_body", "Attach Body to Zeus", "", {
	[] spawn {
		TFAR_Radio_Zeus_fix = true;
		_old_pos = position player;
		_old_side = side player;
		_old_grp = group player;
		[player] joinSilent (createGroup civilian);
		player allowDamage false;
		sleep 0.1;
		[player, true] remoteExec ["hideObjectGlobal", 2];
		sleep 0.1;
		[player, false] remoteExec ["enableSimulationGlobal", 2];
		_pos = curatorCamera modelToWorld [0, -0.5, -0.5];
		player setpos _pos;
		_dir = direction curatorCamera;
		player setdir _dir;
		waitUntil {
			_pos = curatorCamera modelToWorld [0, -0.5, -0.5];
			player setpos _pos;
			_dir = direction curatorCamera;
			player setdir _dir;
			sleep 0.1;
			!TFAR_Radio_Zeus_fix
		};
		sleep 0.1;
		[player, true] remoteExec ["enableSimulationGlobal", 2];
		[player, false] remoteExec ["hideObjectGlobal", 2];
		player setPos _old_pos;
		sleep 0.1;
		player allowDamage true;
		if (!isNull _old_grp) exitWith {[player] joinSilent _old_grp};
		[player] joinSilent (createGroup _old_side);
	};
}, {!TFAR_Radio_Zeus_fix}] call ace_interact_menu_fnc_createAction;

[["ACE_ZeusActions"], _action] call ace_interact_menu_fnc_addActionToZeus;

_action2 = ["Zeus_detach_body", "Detach Body from Zeus", "", {
TFAR_Radio_Zeus_fix = false;
}, {TFAR_Radio_Zeus_fix}] call ace_interact_menu_fnc_createAction;

[["ACE_ZeusActions"], _action2] call ace_interact_menu_fnc_addActionToZeus;