params ["_player", "_radio", "_type", "_adt", "_tx"];

if (_tx) then {
	talking_players pushBackUnique _player;
} else {
	talking_players = talking_players - [_player];
};