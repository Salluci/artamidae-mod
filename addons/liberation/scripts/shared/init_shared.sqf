kill_manager = compileScript ["scripts\shared\kill_manager.sqf"];

build_remote_call = compileScript ["scripts\server\remotecall\build_remote_call.sqf"];
build_fob_remote_call = compileScript ["scripts\server\remotecall\build_fob_remote_call.sqf"];
cancel_build_remote_call = compileScript ["scripts\server\remotecall\cancel_build_remote_call.sqf"];
prisonner_remote_call = compileScript ["scripts\server\remotecall\prisonner_remote_call.sqf"];
recycle_remote_call = compileScript ["scripts\server\remotecall\recycle_remote_call.sqf"];
reinforcements_remote_call = compileScript ["scripts\server\remotecall\reinforcements_remote_call.sqf"];
sector_liberated_remote_call = compileScript ["scripts\server\remotecall\sector_liberated_remote_call.sqf"];
intel_remote_call = compileScript ["scripts\server\remotecall\intel_remote_call.sqf"];
start_secondary_remote_call = compileScript ["scripts\server\remotecall\start_secondary_remote_call.sqf"];
change_prod_remote_call = compileScript ["scripts\server\remotecall\change_prod_remote_call.sqf"];
build_fac_remote_call = compileScript ["scripts\server\remotecall\build_fac_remote_call.sqf"];
if (KP_liberation_ailogistics) then {
    add_logiGroup_remote_call = compileScript ["scripts\server\remotecall\add_logiGroup_remote_call.sqf"];
    del_logiGroup_remote_call = compileScript ["scripts\server\remotecall\del_logiGroup_remote_call.sqf"];
    add_logiTruck_remote_call = compileScript ["scripts\server\remotecall\add_logiTruck_remote_call.sqf"];
    del_logiTruck_remote_call = compileScript ["scripts\server\remotecall\del_logiTruck_remote_call.sqf"];
    save_logi_remote_call = compileScript ["scripts\server\remotecall\save_logi_remote_call.sqf"];
    abort_logi_remote_call = compileScript ["scripts\server\remotecall\abort_logi_remote_call.sqf"];
};

remote_call_sector = compileScript ["scripts\client\remotecall\remote_call_sector.sqf"];
remote_call_fob = compileScript ["scripts\client\remotecall\remote_call_fob.sqf"];
remote_call_battlegroup = compileScript ["scripts\client\remotecall\remote_call_battlegroup.sqf"];
remote_call_endgame = compileScript ["scripts\client\remotecall\remote_call_endgame.sqf"];
remote_call_prisonner = compileScript ["scripts\client\remotecall\remote_call_prisonner.sqf"];
remote_call_intel = compileScript ["scripts\client\remotecall\remote_call_intel.sqf"];
remote_call_incoming = compileScript ["scripts\client\remotecall\remote_call_incoming.sqf"];

civinfo_notifications = compileScript ["scripts\client\civinformant\civinfo_notifications.sqf"];
civinfo_escort = compileScript ["scripts\client\civinformant\civinfo_escort.sqf"];
civinfo_delivered = compileScript ["scripts\server\civinformant\civinfo_delivered.sqf"];

asymm_notifications = compileScript ["scripts\client\asymmetric\asymm_notifications.sqf"];

[] spawn compileScript ["scripts\shared\diagnostics.sqf"];
