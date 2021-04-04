//Vehicle Appearance Manager GUI init
if (!hasInterface) exitWith {};

//Options
//Function preload
fnc_VAM_GUI_check = compileScript ["VAM_GUI\functions\fnc_VAM_GUI_check.sqf"];
fnc_VAM_action = compileScript ["VAM_GUI\functions\fnc_VAM_actionACE.sqf"];
fnc_VAM_reset = compileScript ["VAM_GUI\functions\fnc_VAM_reset.sqf"];
fnc_VAM_variable_cleaner = compileScript ["VAM_GUI\functions\fnc_VAM_variable_cleaner.sqf"];

//Vehicle Function
fnc_VAM_common_setup = compileScript ["VAM_GUI\vehicles\fnc_VAM_common_setup.sqf"];
fnc_VAM_common_camo = compileScript ["VAM_GUI\vehicles\fnc_VAM_common_camo.sqf"];
fnc_VAM_common_comp = compileScript ["VAM_GUI\vehicles\fnc_VAM_common_comp.sqf"];
fnc_VAM_common_camo_check = compileScript ["VAM_GUI\vehicles\fnc_VAM_common_camo_check.sqf"];
fnc_VAM_common_comp_check = compileScript ["VAM_GUI\vehicles\fnc_VAM_common_comp_check.sqf"];

fnc_VAM_Gorgon_setup = compileScript ["VAM_GUI\vehicles\exceptions\Gorgon\fnc_VAM_Gorgon_setup.sqf"];
fnc_VAM_Gorgon_camo = compileScript ["VAM_GUI\vehicles\exceptions\Gorgon\fnc_VAM_Gorgon_camo.sqf"];
fnc_VAM_Gorgon_camo_check = compileScript ["VAM_GUI\vehicles\exceptions\Gorgon\fnc_VAM_Gorgon_camo_check.sqf"];

fnc_VAM_Nyx_setup = compileScript ["VAM_GUI\vehicles\exceptions\Nyx\fnc_VAM_Nyx_setup.sqf"];
fnc_VAM_Nyx_camo = compileScript ["VAM_GUI\vehicles\exceptions\Nyx\fnc_VAM_Nyx_camo.sqf"];

fnc_VAM_Marid_v1_setup = compileScript ["VAM_GUI\vehicles\exceptions\Marid\fnc_VAM_Marid_v1_setup.sqf"];
fnc_VAM_Marid_v1_comp = compileScript ["VAM_GUI\vehicles\exceptions\Marid\fnc_VAM_Marid_v1_comp.sqf"];
fnc_VAM_Marid_v1_comp_check = compileScript ["VAM_GUI\vehicles\exceptions\Marid\fnc_VAM_Marid_v1_comp_check.sqf"];
fnc_VAM_Marid_v2_setup = compileScript ["VAM_GUI\vehicles\exceptions\Marid\fnc_VAM_Marid_v2_setup.sqf"];
fnc_VAM_Marid_camo = compileScript ["VAM_GUI\vehicles\exceptions\Marid\fnc_VAM_Marid_camo.sqf"];

fnc_VAM_HBPN_setup = compileScript ["VAM_GUI\vehicles\exceptions\HBPN\fnc_VAM_HBPN_setup.sqf"];
fnc_VAM_HBPN_camo = compileScript ["VAM_GUI\vehicles\exceptions\HBPN\fnc_VAM_HBPN_camo.sqf"];
fnc_VAM_HBPN_camo_check = compileScript ["VAM_GUI\vehicles\exceptions\HBPN\fnc_VAM_HBPN_camo_check.sqf"];

fnc_VAM_Blackfoot_setup = compileScript ["VAM_GUI\vehicles\exceptions\Blackfoot\fnc_VAM_Blackfoot_setup.sqf"];
fnc_VAM_Blackfoot_camo = compileScript ["VAM_GUI\vehicles\exceptions\Blackfoot\fnc_VAM_Blackfoot_camo.sqf"];
fnc_VAM_Blackfoot_camo_check = compileScript ["VAM_GUI\vehicles\exceptions\Blackfoot\fnc_VAM_Blackfoot_camo_check.sqf"];

fnc_VAM_Orca_setup = compileScript ["VAM_GUI\vehicles\exceptions\Orca\fnc_VAM_Orca_setup.sqf"];
fnc_VAM_Orca_camo = compileScript ["VAM_GUI\vehicles\exceptions\Orca\fnc_VAM_Orca_camo.sqf"];
fnc_VAM_Orca_camo_check = compileScript ["VAM_GUI\vehicles\exceptions\Orca\fnc_VAM_Orca_camo_check.sqf"];

fnc_VAM_UGV_rcws_setup = compileScript ["VAM_GUI\vehicles\exceptions\UGV_rcws\fnc_VAM_UGV_rcws_setup.sqf"];

call fnc_VAM_action;
