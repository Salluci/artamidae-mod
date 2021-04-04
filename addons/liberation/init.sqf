
KPLIB_init = false;

// Version of the KP Liberation framework
KP_liberation_version = [0, 96, "7a"];

enableSaving [ false, false ];

//init R3F
call compileScript ["R3F_LOG\init.sqf"];

//APM default loadouts
call compileScript ["scripts\default_loadouts.sqf"];

//Vehicle Customization
call compileScript ["VAM_GUI\VAM_GUI_init.sqf"];

if (isDedicated) then {debug_source = "Server";} else {debug_source = name player;};

call KPLIB_fnc_initSectors;
if (!isServer) then {waitUntil {!isNil "KPLIB_initServer"};};
call compileScript ["scripts\shared\fetch_params.sqf"];
call compileScript ["kp_liberation_config.sqf"];
call compileScript ["presets\init_presets.sqf"];
call compileScript ["kp_objectInits.sqf"];

call KPPLM_fnc_postInit;

call compileScript ["scripts\shared\init_shared.sqf"];

if (isServer) then
{
  call compileScript ["scripts\server\init_server.sqf"];
};

if (!isDedicated && !hasInterface && isMultiplayer) then {
    [] spawn compileScript ["scripts\server\offloading\hc_manager.sqf"];
};

if (hasInterface) then {
    // Get mission version and readable world name for Discord rich presence
    [
        ["UpdateDetails", [localize "STR_MISSION_VERSION", "on", getText (configfile >> "CfgWorlds" >> worldName >> "description")] joinString " "]
    ] call (missionNamespace getVariable ["DiscordRichPresence_fnc_update", {}]);

    // Add EH for curator to add kill manager and object init recognition for zeus spawned units/vehicles
    {
        _x addEventHandler ["CuratorObjectPlaced", {[_this select 1] call KPLIB_fnc_handlePlacedZeusObject;}];
    } forEach allCurators;

    waitUntil {alive player};
    if (debug_source != name player) then {debug_source = name player};
    call compileScript ["scripts\client\init_client.sqf"];
} else {
    setViewDistance 1600;
};

KPLIB_init = true;

// Notify clients that server is ready
if (isServer) then {
    KPLIB_initServer = true;
    publicVariable "KPLIB_initServer";
};
