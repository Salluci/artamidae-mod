
APM_Zeus_customChannel = radioChannelCreate [
	[
		248/256,
		148/256,
		6/256,
		1
	],
	"Zeus Chat",
	"Zeus (%UNIT_NAME)",
	[],
	false
];

{
	private _channels = _x getVariable ["channels", []];
	_channels pushBackUnique APM_Zeus_customChannel;
	_x setVariable ["channels", _channels]
} forEach allCurators;

publicVariable "APM_Zeus_customChannel";
