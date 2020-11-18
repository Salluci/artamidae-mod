APM_Zeus_customChannel = radioChannelCreate [
	[
		248/256,
		108/256,
		243/256,
		1
	],
	"Zeus Chat",
	"Zeus Chat:%UNIT_NAME",
	[],
	true
];

while {true} do {
	_all_curators_players = [];
	{
		_player = getAssignedCuratorUnit _x;
		if (!isNull _player) then {
			_all_curators_players pushBackUnique _player;
		};
	} forEach allCurators;
	APM_Zeus_customChannel radioChannelAdd _all_curators_players;
	sleep 5;
};