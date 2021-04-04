//EH to prevent player from entering pilot
player addEventHandler ["GetInMan",
{
	params ["_unit", "_role", "_vehicle", "_turret"];

	if (_vehicle isKindOf "Helicopter") exitWith
	{
		if (player getVariable "APM_Rotor") exitWith {};
		if (_vehicle isKindOf "ParachuteBase") exitwith {};

		if (_role == "driver") exitWith
		{
			moveOut player;
			hintC "You are not a certified helicopter pilot.";
		};
		if (_role == "gunner") exitWith
		{
			_vehicle enableCopilot false;
			_vehicle lockDriver true;
		};
	};
	if (_vehicle isKindOf "Plane") exitWith
	{
		if (player getVariable "APM_Fixed") exitWith {};
		if (_role == "driver") exitWith
		{
			moveOut player;
			hintC "You are not a certified pilot.";
		};
		if (_role == "gunner") exitWith
		{
			_vehicle enableCopilot false;
			_vehicle lockDriver true;
		};
	};
}];
