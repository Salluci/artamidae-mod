/*Requires 3 invisible markers "waterSpawn", "riceSpawn" and "medSpawn" for spawning the supplies.
also requires 10 markers named "supplyMarker_1" through to "supplyMarker_10" for delivery locations 
these all go in the supplyMarker array and will be chosen at random. You can increase or decrease the number of delivery locations 
by adding or removing markers from this array.
*/

Hint "Supply pallets are ready for pickup at the marked location for delivery.";

publicVariable "supplyMarker";

_exists = ["supplyDrop"] call BIS_fnc_taskExists; 


if (str _exists == "true") exitWith
{
["HQ", "You already have 1 active Aid mission"] spawn BIS_fnc_showSubtitle;
};

sleep 1;

supplyMarker = [
"supplyMarker_1",
"supplyMarker_2",
"supplyMarker_3",
"supplyMarker_4",
"supplyMarker_5",
"supplyMarker_6",
"supplyMarker_7",
"supplyMarker_8",
"supplyMarker_9",
"supplyMarker_10"
]call BIS_fnc_selectRandom;

_delete = nearestObjects [getMarkerPos "waterSpawn", ["Land_WaterBottle_01_stack_F"], 50];
{deleteVehicle _x;}foreach _delete;
sleep 0.1;
_delete = nearestObjects [getMarkerPos "riceSpawn", ["Land_FoodSacks_01_cargo_brown_idap_F"], 50];
{deleteVehicle _x;}foreach _delete;
sleep 0.1;
_delete = nearestObjects [getMarkerPos "medSpawn", ["Land_PaperBox_01_small_closed_white_med_F"], 50];
{deleteVehicle _x;}foreach _delete;
sleep 0.1;


[WEST,["supplyDrop"],["Take a truck and deliver pallets of Rice and Water along with the Medical supplies to the location marked on the map.<br></br><br></br>","Deliver supplies","supplyMarker"],getMarkerPos (supplyMarker),1,1,true] call BIS_fnc_taskCreate;
["supplyDrop", "ASSIGNED",true] call BIS_fnc_taskSetState;
["supplyDrop","container"] call BIS_fnc_taskSetType;

//Spawn Supplies

_water = "Land_WaterBottle_01_stack_F" createvehicle getMarkerPos "waterSpawn";

sleep 0.1;
_rice= "Land_FoodSacks_01_cargo_brown_idap_F" createvehicle getMarkerPos "riceSpawn";

sleep 0.1;
_grain= "Land_PaperBox_01_small_closed_white_med_F" createvehicle getMarkerPos "medSpawn";	


//Check if supplies have been delivered

waitUntil {

    _obj = getMarkerPos supplyMarker nearobjects ["Land_WaterBottle_01_stack_F",30]; 
    _obj2 = getMarkerPos supplyMarker nearobjects ["Land_FoodSacks_01_cargo_brown_idap_F",30]; 
    _obj3 = getMarkerPos supplyMarker nearobjects ["Land_PaperBox_01_small_closed_white_med_F",30]; 
    count _obj > 0 && count _obj2 > 0 && count _obj3 > 0

};

sleep 5;

["supplyDrop", "SUCCEEDED",true] call BIS_fnc_taskSetState;
[getMarkerPos supplyMarker, [side player], -15] call ALIVE_fnc_updateSectorHostility;

//Now wait until the player is far enough away and then delete the supplies.
waitUntil { 

{getMarkerPos (supplyMarker) distance _x > 100 } count (playableUnits + switchableUnits) > 0

};
sleep 0.1;
_delete = nearestObjects [getMarkerPos supplyMarker, ["Land_WaterBottle_01_stack_F"], 50];
{deleteVehicle _x;}foreach _delete;
sleep 0.1;
_delete = nearestObjects [getMarkerPos supplyMarker, ["Land_FoodSacks_01_cargo_brown_idap_F"], 50];
{deleteVehicle _x;}foreach _delete;
sleep 0.1;
_delete = nearestObjects [getMarkerPos supplyMarker, ["Land_PaperBox_01_small_closed_white_med_F"], 50];
{deleteVehicle _x;}foreach _delete;
sleep 0.1;

sleep 5;

//Reset the mission ready for another
["supplyDrop",true] call BIS_fnc_deleteTask;
supplyMarker = "";