/* 
 * This file contains parameters to config and function call to start an instance of
 * traffic in the mission. The file is edited by the mission developer.
 *
 * See file Engima\Traffic\Documentation.txt for documentation and a full reference of 
 * how to customize and use Engima's Traffic.
 */
 Engima_Traffic_HeadlessClientName = "HC2";
 private ["_parameters"];

// Set traffic parameters.
_parameters = [
	["SIDE", civilian],
	["VEHICLES", ["CFP_C_AFG_Datsun_Pickup_01", "CFP_C_AFG_Datsun_Pickup_Covered_01", "CFP_C_AFG_Lada_01, CFP_C_AFG_Offroad_01", "CFP_C_AFG_Skoda_105_L_01", "CFP_C_AFG_Skoda_Octavia_01", "CFP_C_AFG_Truck_01", "CFP_C_AFG_Truck_Boxer_01"]],
	["VEHICLES_COUNT", 1],
	["MIN_SPAWN_DISTANCE", 800],
	["MAX_SPAWN_DISTANCE", 1400],
	["AREA_MARKER", "cars"],
	["HIDE_AREA_MARKER", true],
	["ON_UNIT_CREATED", {(_this select 0) limitSpeed 35}],
	["MIN_SKILL", 1],
	["MAX_SKILL", 1],
	["DEBUG", false]
];

// Start an instance of the traffic
_parameters spawn ENGIMA_TRAFFIC_StartTraffic;

_parameters = [
    ["SIDE", east],
    ["VEHICLES", ["CFP_O_TBAN_Hilux_DShKM_01"]],
    ["VEHICLES_COUNT", 1],
    ["MIN_SPAWN_DISTANCE", 800],
    ["MAX_SPAWN_DISTANCE", 1400],
    ["ON_UNIT_CREATING", { 
        private _doSpawnVehicle = false; 

        if (isNil "ME_lastTryTime") then { ME_lastTryTime = 0; }; 

        if (time - ME_lastTryTime > 60) then {
            _doSpawnVehicle = random 100 < 5;
            ME_lastTryTime = time;
        }; 

        _doSpawnVehicle
    }],
	["ON_UNIT_CREATED", {(_this select 0) limitSpeed 35}],
	["AREA_MARKER", "cars", "cars2", "cars3", "cars4"],
    ["DEBUG", false]
];

// Start an instance of the traffic
_parameters spawn ENGIMA_TRAFFIC_StartTraffic;

// Set traffic parameters.
_parameters = [
	["SIDE", civilian],
	["VEHICLES", ["CFP_C_AFG_Datsun_Pickup_01", "CFP_C_AFG_Datsun_Pickup_Covered_01", "CFP_C_AFG_Lada_01, CFP_C_AFG_Offroad_01", "CFP_C_AFG_Skoda_105_L_01", "CFP_C_AFG_Skoda_Octavia_01", "CFP_C_AFG_Truck_01", "CFP_C_AFG_Truck_Boxer_01"]],
	["VEHICLES_COUNT", 4],
	["MIN_SPAWN_DISTANCE", 800],
	["MAX_SPAWN_DISTANCE", 1400],
	["AREA_MARKER", "cars2"],
	["HIDE_AREA_MARKER", true],
	["ON_UNIT_CREATED", {(_this select 0) limitSpeed 35}],
	["MIN_SKILL", 1],
	["MAX_SKILL", 1],
	["DEBUG", false]
];

// Start an instance of the traffic
_parameters spawn ENGIMA_TRAFFIC_StartTraffic;

// Set traffic parameters.
_parameters = [
	["SIDE", civilian],
	["VEHICLES", ["CFP_C_AFG_Datsun_Pickup_01", "CFP_C_AFG_Datsun_Pickup_Covered_01", "CFP_C_AFG_Lada_01, CFP_C_AFG_Offroad_01", "CFP_C_AFG_Skoda_105_L_01", "CFP_C_AFG_Skoda_Octavia_01", "CFP_C_AFG_Truck_01", "CFP_C_AFG_Truck_Boxer_01"]],
	["VEHICLES_COUNT", 1],
	["MIN_SPAWN_DISTANCE", 800],
	["MAX_SPAWN_DISTANCE", 1400],
	["AREA_MARKER", "cars3"],
	["HIDE_AREA_MARKER", true],
	["ON_UNIT_CREATED", {(_this select 0) limitSpeed 35}],
	["MIN_SKILL", 1],
	["MAX_SKILL", 1],
	["DEBUG", false]
];

// Start an instance of the traffic
_parameters spawn ENGIMA_TRAFFIC_StartTraffic;

// Set traffic parameters.
_parameters = [
	["SIDE", civilian],
	["VEHICLES", ["CFP_C_AFG_Datsun_Pickup_01", "CFP_C_AFG_Datsun_Pickup_Covered_01", "CFP_C_AFG_Lada_01, CFP_C_AFG_Offroad_01", "CFP_C_AFG_Skoda_105_L_01", "CFP_C_AFG_Skoda_Octavia_01", "CFP_C_AFG_Truck_01", "CFP_C_AFG_Truck_Boxer_01"]],
	["VEHICLES_COUNT", 1],
	["MIN_SPAWN_DISTANCE", 800],
	["MAX_SPAWN_DISTANCE", 1400],
	["AREA_MARKER", "cars4"],
	["HIDE_AREA_MARKER", true],
	["ON_UNIT_CREATED", {(_this select 0) limitSpeed 35}],
	["MIN_SKILL", 1],
	["MAX_SKILL", 1],
	["DEBUG", false]
];

// Start an instance of the traffic
_parameters spawn ENGIMA_TRAFFIC_StartTraffic;