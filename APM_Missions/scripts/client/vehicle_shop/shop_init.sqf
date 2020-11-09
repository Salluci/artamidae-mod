//Declare Functions
_path = "scripts\client\vehicle_shop\";
APM_fnc_findHangarSpawn = compile preprocessFileLineNumbers (_path + "fn_findHangarSpawn.sqf");
APM_fnc_findHelipadSpawn = compile preprocessFileLineNumbers (_path + "fn_findHelipadSpawn.sqf");
APM_fnc_findRoadSpawn = compile preprocessFileLineNumbers (_path + "fn_findRoadSpawn.sqf");
APM_fnc_findWaterSpawn = compile preprocessFileLineNumbers (_path + "fn_findWaterSpawn.sqf");
APM_fnc_openShop = compile preprocessFileLineNumbers (_path + "fn_openShop.sqf");
APM_fnc_refreshList = compile preprocessFileLineNumbers (_path + "fn_refreshList.sqf");
APM_fnc_spawnVehicle = compile preprocessFileLineNumbers (_path + "fn_spawnVehicle.sqf");

//Create ACE interact
_action = ["apm_openShop", "Open Vehicle Shop", "res\ace_icons\vic_shop_ca.paa", {
	[] call APM_fnc_openShop;
}, APM_ACE_base_condition] call ace_interact_menu_fnc_createAction;

[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;