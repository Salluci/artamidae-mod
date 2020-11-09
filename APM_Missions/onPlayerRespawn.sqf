params [
	"_newUnit",
	"_oldUnit",
	"_respawn",
	"_respawnDelay"
];

waitUntil {alive player};

_oldLoadout = getUnitLoadout _oldUnit;
_newUnit setUnitLoadout _oldLoadout;

_zeus = getAssignedCuratorLogic player;
	if !(isNull _zeus) exitWith {
		[APM_Zeus_customChannel, [player]] remoteExec ["radioChannelAdd", 0];
		if (APM_Debug_level > 0) then {
			systemChat "Added to Zeus Chat";
		};
	};