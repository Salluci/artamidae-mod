/*
    Needed Mods:
    - None

    Optional Mods:
    - None
*/

// Enemy infantry classes
opfor_officer = "I_Mayhem_Officer";                                          // Officer
opfor_squad_leader = "I_Contractor_Mayhem_TL2";                                  // Squad Leader
opfor_team_leader = "I_Contractor_Mayhem_TL1";                                   // Team Leader
opfor_sentry = "I_Contractor_Mayhem_Rifleman2";                                      // Rifleman (Lite)
opfor_rifleman = "I_Contractor_Mayhem_Rifleman1";                                         // Rifleman
opfor_rpg = "I_Contractor_Mayhem_AT1";                                          // Rifleman (LAT)
opfor_grenadier = "I_Contractor_Mayhem_Grenadier2";                                     // Grenadier
opfor_machinegunner = "I_Contractor_Mayhem_AR1";                                 // Autorifleman
opfor_heavygunner = "I_Contractor_Mayhem_AR2";                                  // Heavy Gunner
opfor_marksman = "I_Contractor_Mayhem_Marksman1";                                       // Marksman
opfor_sharpshooter = "I_Contractor_Mayhem_Sharpshooter1";                                // Sharpshooter
opfor_sniper = "I_Contractor_Mayhem_Sniper1";                                            // Sniper
opfor_at = "I_Contractor_Mayhem_AT2";                                            // AT Specialist
opfor_aa = "I_Contractor_Mayhem_AA1";                                            // AA Specialist
opfor_medic = "I_Contractor_Mayhem_Medic1";                                              // Combat Life Saver
opfor_engineer = "I_Contractor_Mayhem_Ammo_AT";                                        // Engineer
opfor_paratrooper = "I_Contractor_Mayhem_Rifleman3";                                   // Paratrooper

// Enemy vehicles used by secondary objectives.
opfor_mrap = "I_Mayhem_TIGR";
opfor_mrap_armed = "I_Mayhem_TIGR_Armed";
opfor_transport_helo = "I_Mayhem_UH60M";
opfor_transport_truck = "I_Mayhem_HEMMT_Covered";
opfor_ammobox_transport = "I_Mayhem_HEMMT";
opfor_fuel_truck = "I_Mayhem_HEMMT_Fuel";
opfor_ammo_truck = "I_Mayhem_HEMMT_Ammo";
opfor_fuel_container = "B_Slingload_01_Fuel_F";
opfor_ammo_container = "B_Slingload_01_Ammo_F";
opfor_flag = "Flag_White_F";

/* Adding a value to these arrays below will add them to a one out of however many in the array, random pick chance.
Therefore, adding the same value twice or three times means they are more likely to be chosen more often. */

/* Militia infantry. Lightweight soldier classnames the game will pick from randomly as sector defenders.
Think of them like garrison or military police forces, which are more meant to control the local population instead of fighting enemy armies. */
militia_squad = [
    "I_Militia_Mayhem_Rifleman1",                                                     // Rifleman (Lite)
    "I_Militia_Mayhem_Rifleman1",                                                     // Rifleman (Lite)
    "I_Militia_Mayhem_Rifleman1",                                                     // Rifleman
    "I_Militia_Mayhem_Rifleman1",                                                     // Rifleman
    "I_Militia_Mayhem_LAT1",                                                 // Rifleman (AT)
    "I_Militia_Mayhem_AR1",                                                  // Autorifleman
    "I_Militia_Mayhem_Marksman1",                                                   // Marksman
    "I_Militia_Mayhem_Medic1",                                               // Medic
    "I_Militia_Mayhem_TL1"                                                    // Engineer
];

// Militia vehicles. Lightweight vehicle classnames the game will pick from randomly as sector defenders. Can also be empty for only infantry milita.
militia_vehicles = [
    "I_Mayhem_Offroad_M2",
    "I_Mayhem_Offroad_M2",
    "I_Mayhem_Offroad_M2",
    "I_Mayhem_Offroad_M2",
    "I_Mayhem_Offroad_AT",
    "I_Mayhem_Offroad_AT",
    "I_Mayhem_TIGR_Armed"
];

// All enemy vehicles that can spawn as sector defenders and patrols at high enemy combat readiness (aggression levels).
opfor_vehicles = [
    "I_Mayhem_TIGR_Armed",                                                  // Ifrit (HMG)
    "I_Mayhem_TIGR_Armed",                                                  // Ifrit (GMG)
    "I_Mayhem_FV510",                                                  // Ifrit (GMG)
    "I_Mayhem_Offroad_AT",                                                    // Qilin (AT)
    "I_Mayhem_FV510",                                        // BTR-K Kamysh
    "I_Mayhem_FV510",                                        // BTR-K Kamysh
    "I_Mayhem_M6A2",                                            // ZSU-39 Tigris
    "I_Mayhem_M6A2",                                            // ZSU-39 Tigris
    "I_Mayhem_Merkava",                                                // T-100 Varsuk
    "I_Mayhem_Merkava",                                                // T-100 Varsuk
    "I_Mayhem_Merkava",                                                // T-140 Angara
    "I_Mayhem_Merkava"                                                // T-140K Angara
];

// All enemy vehicles that can spawn as sector defenders and patrols but at a lower enemy combat readiness (aggression levels).
opfor_vehicles_low_intensity = [
    "I_Mayhem_TIGR_Armed",
    "I_Mayhem_Offroad_M2",
    "I_Mayhem_Offroad_AT",
    "I_Mayhem_FV510",
    "I_Mayhem_M2A3"
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at high enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles = [
    "I_Mayhem_TIGR_Armed",                                                  // Ifrit (HMG)
    "I_Mayhem_FV510",                                                  // Ifrit (GMG)
    "I_Mayhem_FV510",                                                  // Ifrit (GMG)
    "I_Mayhem_Offroad_AT",                                                    // Qilin (AT)
    "I_Mayhem_HEMMT",                                           // Tempest Transport
    "I_Mayhem_HEMMT_Covered",                                             // Tempest Transport (Covered)
    "I_Mayhem_FV510",                                        // BTR-K Kamysh
    "I_Mayhem_FV510",                                        // BTR-K Kamysh
    "I_Mayhem_M6A2",                                            // ZSU-39 Tigris
    "I_Mayhem_M6A2",                                            // ZSU-39 Tigris
    "I_Mayhem_Merkava",                                                // T-100 Varsuk
    "I_Mayhem_Merkava",                                                // T-100 Varsuk
    "I_Mayhem_Merkava",                                                // T-140 Angara
    "I_Mayhem_Merkava",                                               // T-140K Angara
    "I_Mayhem_UH60M",                                 // Po-30 Orca (Armed)
    "I_Mayhem_UH60M",                                 // Po-30 Orca (Armed)
    "I_Mayhem_FV510",                                      // Mi-290 Taru (Bench)
    "I_Mayhem_AH64D"                                 // Mi-48 Kajman
];

// All enemy vehicles that can spawn as battlegroups, either assaulting or as reinforcements, at lower enemy combat readiness (aggression levels).
opfor_battlegroup_vehicles_low_intensity = [
    "I_Mayhem_TIGR_Armed",                                                  // Ifrit (HMG)
    "I_Mayhem_TIGR_Armed",                                                  // Ifrit (HMG)
    "I_Mayhem_HEMMT",                                           // Tempest Transport
    "I_Mayhem_FV510",                                          // MSE-3 Marid
    "I_Mayhem_FV510",                                        // BTR-K Kamysh
    "I_Mayhem_M6A2",                                            // ZSU-39 Tigris
    "I_Mayhem_UH60M",                                 // Po-30 Orca (Armed)
    "I_Mayhem_FV510"                                       // Mi-290 Taru (Bench)
];

/* All vehicles that spawn within battlegroups (see the above 2 arrays) and also hold 8 soldiers as passengers.
If something in this array can't hold all 8 soldiers then buggy behaviours may occur.    */
opfor_troup_transports = [
    "I_Mayhem_HEMMT",
    "I_Mayhem_HEMMT_Covered",
    "I_Mayhem_M2A3",
    "I_Mayhem_TIGR",
    "I_Mayhem_UH60M",
    "I_Mayhem_CH47F",
    "I_Mayhem_MH6M"
];

// Enemy rotary-wings that will need to spawn in flight.
opfor_choppers = [
    "I_Mayhem_UH60M",
    "I_Mayhem_CH47F",
    "I_Mayhem_AH64D",
    "I_Mayhem_AH6M",
    "I_Mayhem_MH6M"
];

// Enemy fixed-wings that will need to spawn in the air.
opfor_air = [
    "I_Mayhem_A10D",
    "I_Mayhem_FA181"
];
