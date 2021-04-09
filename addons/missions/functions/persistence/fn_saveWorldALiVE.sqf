private _uid = "";
private _id = "";

if (!isServer) exitWith {};

if !(isNil "ALiVE_sys_data") then {
  ["ALiVE SYS DATA PNS Autosave - Server Data OPD"] call ALIVE_fnc_dump;
  [_id, "__SERVER__", _uid] call ALIVE_fnc_data_onPlayerDisconnected;
};

if !(isNil "ALiVE_sys_player") then {
  ["ALiVE SYS DATA PNS Autosave - Server Player OPD"] call ALIVE_fnc_dump;
  [_id, "__SERVER__", _uid] call ALIVE_fnc_player_onPlayerDisconnected;
};

if (["ALiVE_sys_profile"] call ALiVE_fnc_isModuleAvailable) then {
  ["ALiVE SYS DATA PNS Autosave - Server Save Profiles"] call ALIVE_fnc_dump;
  [] call ALiVE_fnc_profilesSaveData;
};

if (["ALiVE_mil_OPCOM"] call ALiVE_fnc_isModuleAvailable) then {
  ["ALiVE SYS DATA PNS Autosave - Server Save OPCOM State"] call ALIVE_fnc_dump;
  _results = [] call ALiVE_fnc_OPCOMSaveData;
};

if (["ALiVE_mil_cqb"] call ALiVE_fnc_isModuleAvailable) then {
  ["ALiVE SYS DATA PNS Autosave - Server Save CQB State"] call ALIVE_fnc_dump;
  [] call ALiVE_fnc_CQBSaveData;
};

if (["ALiVE_sys_logistics"] call ALiVE_fnc_isModuleAvailable) then {
  ["ALiVE SYS DATA PNS Autosave - Server Save Logistics State"] call ALIVE_fnc_dump;
  [] call ALiVE_fnc_logisticsSaveData;
};

if (["ALiVE_sys_marker"] call ALiVE_fnc_isModuleAvailable) then {
  ["ALiVE SYS DATA PNS Autosave - Server Save Markers State"] call ALIVE_fnc_dump;
  [] call ALiVE_fnc_markerSaveData;
};

if (["ALiVE_sys_spotrep"] call ALiVE_fnc_isModuleAvailable) then {
  ["ALiVE SYS DATA PNS Autosave - Server Save SPOTREP State"] call ALIVE_fnc_dump;
  [] call ALiVE_fnc_spotrepSaveData;
};

if (["ALiVE_sys_sitrep"] call ALiVE_fnc_isModuleAvailable) then {
  ["ALiVE SYS DATA PNS Autosave - Server Save SITREP State"] call ALIVE_fnc_dump;
  [] call ALiVE_fnc_sitrepSaveData;
};

if (["ALiVE_sys_patrolrep"] call ALiVE_fnc_isModuleAvailable) then {
  ["ALiVE SYS DATA PNS Autosave - Server Save PATROLREP State"] call ALIVE_fnc_dump;
  [] call ALiVE_fnc_patrolrepSaveData;
};

if (["ALiVE_mil_logistics"] call ALiVE_fnc_isModuleAvailable) then {
  ["ALiVE SYS DATA PNS Autosave - Server Save ML State"] call ALIVE_fnc_dump;
  [] call ALiVE_fnc_MLSaveData;
};

if (["ALiVE_mil_C2ISTAR"] call ALiVE_fnc_isModuleAvailable) then {
  ["ALiVE SYS DATA PNS Autosave - Server Save Task State"] call ALIVE_fnc_dump;
  [] call ALiVE_fnc_taskHandlerSaveData;
};
