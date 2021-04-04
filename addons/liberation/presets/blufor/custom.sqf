/*
    Needed Mods:
    - None

    Optional Mods:
    - BWMod
    - RHSUSAF
    - F-15C
    - F/A-18
    - CUP Weapons
    - CUP Vehicles
    - USAF Main Pack
    - USAF Fighters Pack
    - USAF Utility Pack
*/

/*
    --- Support classnames ---
    Each of these should be unique.
    The same classnames for different purposes may cause various unpredictable issues with player actions.
    Or not, just don't try!
*/
FOB_typename = "Land_Cargo_HQ_V1_F";                                    // This is the main FOB HQ building.
FOB_box_typename = "B_Slingload_01_Cargo_F";                            // This is the FOB as a container.
FOB_truck_typename = "B_T_Truck_01_box_F";                              // This is the FOB as a vehicle.
Arsenal_typename = "B_supplyCrate_F";                                   // This is the virtual arsenal as portable supply crates.
Respawn_truck_typename = "B_T_Truck_01_medical_F";                      // This is the mobile respawn (and medical) truck.
huron_typename = "B_Heli_Transport_03_unarmed_F";                       // This is Spartan 01, a multipurpose mobile respawn as a helicopter.
crewman_classname = "B_Contractor_APM_Rifleman_Shield";                 // This defines the crew for vehicles.
pilot_classname = "B_T_Helipilot_F";                                    // This defines the pilot for helicopters.
KP_liberation_little_bird_classname = "B_APM_MH6M";                     // These are the little birds which spawn on the Freedom or at Chimera base.
KP_liberation_boat_classname = "B_Boat_Transport_01_F";                 // These are the boats which spawn at the stern of the Freedom.
KP_liberation_truck_classname = "B_T_Truck_01_transport_F";             // These are the trucks which are used in the logistic convoy system.
KP_liberation_small_storage_building = "ContainmentArea_02_forest_F";     // A small storage area for resources.
KP_liberation_large_storage_building = "ContainmentArea_01_forest_F";     // A large storage area for resources.
KP_liberation_recycle_building = ["Land_RepairDepot_01_tan_F","Land_RepairDepot_01_green_F","Land_RepairDepot_01_civ_F"];           // The building defined to unlock FOB recycling functionality.
KP_liberation_air_vehicle_building = ["B_Radar_System_01_F","Land_ControlTower_02_F","Land_Airport_Tower_F"];             // The building defined to unlock FOB air vehicle functionality.
KP_liberation_heli_slot_building = ["Land_HelipadSquare_F"];              // The helipad used to increase the GLOBAL rotary-wing cap.
KP_liberation_plane_slot_building = ["Land_TentHangar_V1_F","Land_Ss_hangar","Land_Airport_01_hangar_F","Land_Hangar_F","Land_ServiceHangar_01_R_F"];             // The hangar used to increase the GLOBAL fixed-wing cap.
KP_liberation_supply_crate = "CargoNet_01_box_F";                       // This defines the supply crates, as in resources.
KP_liberation_ammo_crate = "B_CargoNet_01_ammo_F";                      // This defines the ammunition crates.
KP_liberation_fuel_crate = "CargoNet_01_barrels_F";                     // This defines the fuel crates.

/*
    --- Friendly classnames ---
    Each array below represents one of the 7 pages within the build menu.
    Format: ["vehicle_classname",supplies,ammunition,fuel],
    Example: ["B_APC_Tracked_01_AA_F",300,150,150],
    The above example is the NATO IFV-6a Cheetah, it costs 300 supplies, 150 ammunition and 150 fuel to build.
    IMPORTANT: The last element inside each array must have no comma at the end!
*/
infantry_units = [
    ["B_Contractor_APM_Rifleman1",20,0,0],                              // Rifleman (M4)
    ["B_Contractor_APM_Rifleman2",20,0,0],                              // Rifleman (ACR)
    ["B_Contractor_APM_Rifleman3",20,0,0],                              // Rifleman (AUG)
    ["B_Contractor_APM_Rifleman4",20,0,0],                              // Rifleman (SCAR-H)
    ["B_Contractor_APM_AT1",30,0,0],                                    // AT Specialist (G36C)
    ["B_Contractor_APM_AT2",30,0,0],                                    // AT Specialist (416)
    ["B_Contractor_APM_AT3",30,0,0],                                    // AT Specialist (AK-12U)
    ["B_Contractor_APM_Grenadier1",25,0,0],                             // Grenadier (416)
    ["B_Contractor_APM_Grenadier2",25,0,0],                             // Grenadier (AK-12)
    ["B_Contractor_APM_Grenadier3",25,0,0],                             // Grenadier (G3)
    ["B_Contractor_APM_AR1",25,0,0],                                    // Autorifleman (SPW)
    ["B_Contractor_APM_AR2",25,0,0],                                    // Autorifleman (M249)
    ["B_Contractor_APM_AR3",25,0,0],                                    // Autorifleman (Stoner LMG)
    ["B_Contractor_APM_MG1",35,0,0],                                    // Gunner (Mk. 48)
    ["B_Contractor_APM_MG2",35,0,0],                                    // Gunner (LWMMG)
    ["B_Contractor_APM_MG3",35,0,0],                                    // Gunner (HK121)
    ["B_Contractor_APM_Marksman1",30,0,0],                              // Marksman (HK417)
    ["B_Contractor_APM_Marksman2",30,0,0],                              // Marksman (SR-25)
    ["B_Contractor_APM_Medic1",30,0,0],                                 // Medic (Mk18)
    ["B_Contractor_APM_Medic2",30,0,0],                                 // Medic (MSBS SG)
    ["B_Contractor_APM_Medic3",30,0,0],                                 // Medic (SCAR-H)
    ["B_Contractor_APM_Medic4",30,0,0],                                 // Medic (MSBS)
    ["B_Contractor_APM_EOD1",30,0,0],                                   // Combat Engineer
    ["B_Contractor_APM_Rifleman_Shield",10,0,0],                        // Shield Operator
    ["B_Contractor_APM_EOD_Shield",10,0,0],                             // Shield EOD Specialist
    ["B_Contractor_APM_Medic_Shield",10,0,0],                           // Shield Medic
    ["B_Contractor_APM_TL_Shield",10,0,0],                              // Shield Team Leader
    ["B_T_Helipilot_F",10,0,0]                                         // Helicopter Pilot
];

light_vehicles = [
    ["B_Quadbike_01_F",25,0,10],                                        // Quad Bike
    ["I_Mayhem_Offroad",50,0,20],                                       // Offroad
    ["I_Mayhem_Offroad_M2",50,30,20],                                   // Offroad (M2)
    ["I_Mayhem_Offroad_AT",50,35,20],                                   // Offroad (AT)
    ["B_APM_DAGOR_Light",75,0,50],                                      // Prowler
    ["B_APM_DAGOR_XM312",75,40,50],                                     // Prowler (HMG)
    ["B_APM_DAGOR_Titan",75,60,50],                                     // Prowler (AT)
    ["B_T_MRAP_01_F",100,0,50],                                         // Hunter
    ["B_T_MRAP_01_hmg_F",100,40,50],                                    // Hunter (HMG)
    ["B_T_MRAP_01_gmg_F",100,60,50],                                    // Hunter (GMG)
    ["B_T_Truck_01_transport_F",125,0,75],                              // HEMTT Transport
    ["B_T_Truck_01_covered_F",125,0,75],                                // HEMTT Transport (Covered)
    ["rhsusf_m1025_black",100,0,50],                                    // M1025A2
    ["rhsusf_m1025_black_m2",100,40,50],                                // M1025A2 (M2)
    ["rhsusf_m1025_black_mk19",100,60,50],                              // M1025A2 (Mk19)
    ["B_UGV_01_F",150,0,50],                                            // UGV Stomper
    ["B_UGV_01_rcws_F",150,40,50],                                      // UGV Stomper (RCWS)
    ["B_Boat_Transport_01_F",100,0,25],                                 // Assault Boat
    ["B_Boat_Armed_01_minigun_F",200,80,75],                            // Speedboat Minigun
    ["rhsusf_mkvsoc",250,200,100],                                      // Mk.V SOCOM
    ["B_SDV_01_F",150,0,50]                                             // SDV
];

heavy_vehicles = [
    ["B_T_APC_Wheeled_01_cannon_F",200,75,125],                         // AMV-7 Marshall
    ["B_T_APC_Tracked_01_rcws_F",300,100,150],                          // IFV-6c Panther
    ["I_APC_tracked_03_cannon_olive_F",300,150,150],                    // FV-720 Mora
    ["I_APC_Wheeled_03_cannon_olive_F",200,75,125],                     // AFV-4 Gorgon
    ["B_T_APC_Tracked_01_AA_F",300,250,175],                            // IFV-6a Cheetah
    ["B_T_MBT_01_cannon_F",400,300,200],                                // M2A1 Slammer
    ["I_MBT_03_cannon_olive_F",400,300,200],                            // MBT-52 Kuma
    ["B_T_MBT_01_TUSK_F",500,350,225],                                  // M2A4 Slammer UP
    ["B_T_AFV_Wheeled_01_cannon_F",500,500,250],                        // Rhino MGS
    ["B_T_AFV_Wheeled_01_up_cannon_F",550,550,250],                     // Rhino MGS UP
    ["B_T_MBT_01_arty_F",600,1250,300],                                 // M4 Scorcher
    ["B_T_MBT_01_mlrs_F",800,1750,400]                                  // M5 Sandstorm MLRS
];

air_vehicles = [
    ["B_APM_MH6M",200,0,100],                                           // MH-6M Little Bird
    ["B_APM_AH6M",200,200,100],                                         // AH-6M Pawnee
    ["I_Heli_light_03_unarmed_F",225,0,125],                            // WY-55 Hellcat
    ["I_Heli_light_03_dynamicLoadout_F",225,200,125],                   // WY-55 Hellcat (Armed)
    ["RHS_UH1Y_UNARMED",225,0,125],                                     // UH-1Y (Unarmed)
    ["RHS_UH1Y_GS",225,200,125],                                        // UH-1Y (Ground Suppression)
    ["B_Heli_Attack_01_dynamicLoadout_F",500,400,200],                  // AH-99 Blackfoot
    ["RHS_AH1Z",500,500,200],                                           // AH-1Z (Multi-Role)
    ["RHS_AH64D_wd",750,750,250],                                       // AH-64D (Multi-Role)
    ["B_Heli_Transport_01_F",250,80,150],                               // UH-80 Ghost Hawk
    ["B_Heli_Transport_01_camo_F",250,80,150],                          // UH-80 Ghost Hawk (Camo)
    ["B_APM_UH60M",250,80,150],                                         // UH-60M
    ["B_APM_CH47F",275,80,175],                                         // CH-47 Chinook (Armed)
    ["B_APM_CH53E",300,0,175],                                          // CH-53E Super Stallion
    ["B_APM_CH53E_GAU21",300,100,175],                                  // CH-53E Super Stallion (GAU-21)
    ["B_Heli_Transport_03_F",300,80,175],                               // CH-67 Huron (Armed)
    ["B_UAV_02_dynamicLoadout_F",400,400,200],                          // MQ-4A Greyhawk
    ["B_T_UAV_03_dynamicLoadout_F",450,500,250],                        // MQ-12 Falcon
    ["B_UAV_05_F",500,500,200],                                         // UCAV Sentinel
    ["B_Plane_CAS_01_dynamicLoadout_F",1000,800,400],                   // A-164 Wipeout (CAS)
    ["B_Plane_Fighter_01_F",1500,1750,450],                             // F/A-181 Black Wasp II
    ["B_Plane_Fighter_01_Stealth_F",1500,1750,450],                     // F/A-181 Black Wasp II (Stealth)
    ["B_T_VTOL_01_armed_F",750,1500,500],                               // V-44 X Blackfish (Armed)
    ["B_T_VTOL_01_infantry_F",750,0,500],                               // V-44 X Blackfish (Infantry)
    ["B_T_VTOL_01_vehicle_F",750,0,500]                                 // V-44 X Blackfish (Vehicle)
];

static_vehicles = [
    ["B_HMG_01_F",25,40,0],                                             // Mk30A HMG .50
    ["B_HMG_01_high_F",25,40,0],                                        // Mk30 HMG .50 (Raised)
    ["B_HMG_01_A_F",35,40,0],                                           // Mk30 HMG .50 (Autonomous)
    ["B_GMG_01_F",35,60,0],                                             // Mk32A GMG 20mm
    ["B_GMG_01_high_F",35,60,0],                                        // Mk32 GMG 20mm (Raised)
    ["B_GMG_01_A_F",45,60,0],                                           // Mk32 GMG 20mm (Autonomous)
    ["B_T_Static_AT_F",50,100,0],                                       // Static Titan Launcher (AT)
    ["B_T_Static_AA_F",50,100,0],                                       // Static Titan Launcher (AA)
    ["B_Mortar_01_F",80,150,0],                                         // Mk6 Mortar
    ["RHS_M119_WD",100,200,0],                                          // M119A2
    ["RHS_TOW_TriPod_WD",50,100,0],                                     // TOW (AT)
    ["B_SAM_System_03_F",250,500,0]                                     // MIM-145 Defender
];

buildings = [
    ["Land_Cargo_House_V4_F",0,0,0],
    ["Land_Cargo_Patrol_V4_F",0,0,0],
    ["Land_Cargo_Tower_V4_F",0,0,0],
    ["Flag_NATO_F",0,0,0],
    ["Flag_US_F",0,0,0],
    ["BWA3_Flag_Ger_F",0,0,0],
    ["Flag_UK_F",0,0,0],
    ["Flag_White_F",0,0,0],
    ["Land_Medevac_house_V1_F",0,0,0],
    ["Land_Medevac_HQ_V1_F",0,0,0],
    ["Flag_RedCrystal_F",0,0,0],
    ["CamoNet_ghex_F",0,0,0],
    ["CamoNet_ghex_open_F",0,0,0],
    ["CamoNet_ghex_big_F",0,0,0],
    ["Land_PortableLight_single_F",0,0,0],
    ["Land_PortableLight_double_F",0,0,0],
    ["Land_LampSolar_F",0,0,0],
    ["Land_LampHalogen_F",0,0,0],
    ["Land_LampStreet_small_F",0,0,0],
    ["Land_LampAirport_F",0,0,0],
    ["Land_HelipadCircle_F",0,0,0],                                     // Strictly aesthetic - as in it does not increase helicopter cap!
    ["Land_HelipadRescue_F",0,0,0],                                     // Strictly aesthetic - as in it does not increase helicopter cap!
    ["PortableHelipadLight_01_blue_F",0,0,0],
    ["PortableHelipadLight_01_green_F",0,0,0],
    ["PortableHelipadLight_01_red_F",0,0,0],
    ["Land_CampingChair_V1_F",0,0,0],
    ["Land_CampingChair_V2_F",0,0,0],
    ["Land_CampingTable_F",0,0,0],
    ["MapBoard_altis_F",0,0,0],
    ["MapBoard_stratis_F",0,0,0],
    ["MapBoard_seismic_F",0,0,0],
    ["Land_Pallet_MilBoxes_F",0,0,0],
    ["Land_PaperBox_open_empty_F",0,0,0],
    ["Land_PaperBox_open_full_F",0,0,0],
    ["Land_PaperBox_closed_F",0,0,0],
    ["Land_DieselGroundPowerUnit_01_F",0,0,0],
    ["Land_ToolTrolley_02_F",0,0,0],
    ["Land_WeldingTrolley_01_F",0,0,0],
    ["Land_Workbench_01_F",0,0,0],
    ["Land_GasTank_01_blue_F",0,0,0],
    ["Land_GasTank_01_khaki_F",0,0,0],
    ["Land_GasTank_01_yellow_F",0,0,0],
    ["Land_GasTank_02_F",0,0,0],
    ["Land_BarrelWater_F",0,0,0],
    ["Land_BarrelWater_grey_F",0,0,0],
    ["Land_WaterBarrel_F",0,0,0],
    ["Land_WaterTank_F",0,0,0],
    ["Land_BagFence_01_round_green_F",0,0,0],
    ["Land_BagFence_01_short_green_F",0,0,0],
    ["Land_BagFence_01_long_green_F",0,0,0],
    ["Land_BagFence_01_corner_green_F",0,0,0],
    ["Land_BagFence_01_end_green_F",0,0,0],
    ["Land_BagBunker_01_small_green_F",0,0,0],
    ["Land_BagBunker_01_large_green_F",0,0,0],
    ["Land_HBarrier_01_tower_green_F",0,0,0],
    ["Land_HBarrier_01_line_1_green_F",0,0,0],
    ["Land_HBarrier_01_line_3_green_F",0,0,0],
    ["Land_HBarrier_01_line_5_green_F",0,0,0],
    ["Land_HBarrier_01_big_4_green_F",0,0,0],
    ["Land_HBarrier_01_wall_4_green_F",0,0,0],
    ["Land_HBarrier_01_wall_6_green_F",0,0,0],
    ["Land_HBarrier_01_wall_corner_green_F",0,0,0],
    ["Land_HBarrier_01_wall_corridor_green_F",0,0,0],
    ["Land_HBarrier_01_big_tower_green_F",0,0,0],
    ["Land_CncBarrierMedium_F",0,0,0],
    ["Land_CncBarrierMedium4_F",0,0,0],
    ["Land_Concrete_SmallWall_4m_F",0,0,0],
    ["Land_Concrete_SmallWall_8m_F",0,0,0],
    ["Land_CncShelter_F",0,0,0],
    ["Land_CncWall1_F",0,0,0],
    ["Land_CncWall4_F",0,0,0],
    ["Land_Sign_WarningMilitaryArea_F",0,0,0],
    ["Land_Sign_WarningMilAreaSmall_F",0,0,0],
    ["Land_Sign_WarningMilitaryVehicles_F",0,0,0],
    ["Land_Razorwire_F",0,0,0],
    ["Land_ClutterCutter_large_F",0,0,0]
];

support_vehicles = [
    [Arsenal_typename,100,200,0],
    [Respawn_truck_typename,200,0,100],
    [FOB_box_typename,300,500,0],
    [FOB_truck_typename,300,500,75],
    [KP_liberation_small_storage_building,0,0,0],
    [KP_liberation_large_storage_building,0,0,0],
    ["Land_RepairDepot_01_green_F",250,0,0],
    ["B_Radar_System_01_F",1000,0,0],
    ["Land_HelipadSquare_F",250,0,0],
    ["Land_TentHangar_V1_F",500,0,0],
    ["ACE_medicalSupplyCrate_advanced",0,0,0],
    ["ACE_Box_82mm_Mo_HE",0,0,0],
    ["ACE_Box_82mm_Mo_Smoke",0,0,0],
    ["ACE_Box_82mm_Mo_Illum",0,0,0],
    ["B_T_Truck_01_Repair_F",325,0,75],                                   // HEMTT Repair
    ["B_T_Truck_01_fuel_F",125,0,275],                                    // HEMTT Fuel
    ["B_T_Truck_01_ammo_F",125,200,75],                                   // HEMTT Ammo
    ["B_Slingload_01_Repair_F",275,0,0],                                // Huron Repair
    ["B_Slingload_01_Fuel_F",75,0,200],                                 // Huron Fuel
    ["B_Slingload_01_Ammo_F",75,200,0]                                  // Huron Ammo
];

/*
    --- Squads ---
    Pre-made squads for the commander build menu.
    These shouldn't exceed 10 members.
*/

// Light infantry squad.
blufor_squad_inf_light = [
    "B_Contractor_APM_TL1",
    "B_Contractor_APM_Rifleman1",
    "B_Contractor_APM_Rifleman1",
    "B_Contractor_APM_AT1",
    "B_Contractor_APM_Grenadier1",
    "B_Contractor_APM_AR1",
    "B_Contractor_APM_AR1",
    "B_Contractor_APM_MG1",
    "B_Contractor_APM_Medic1",
    "B_Contractor_APM_EOD1"
];

// Heavy infantry squad.
blufor_squad_inf = [
    "B_Contractor_APM_TL1",
    "B_Contractor_APM_AT1",
    "B_Contractor_APM_AT1",
    "B_Contractor_APM_Grenadier1",
    "B_Contractor_APM_AR1",
    "B_Contractor_APM_AR1",
    "B_Contractor_APM_MG1",
    "B_Contractor_APM_Marksman1",
    "B_Contractor_APM_Medic1",
    "B_Contractor_APM_EOD1"
];

// AT specialists squad.
blufor_squad_at = [
    "B_Contractor_APM_TL1",
    "B_Contractor_APM_Rifleman1",
    "B_Contractor_APM_Rifleman1",
    "B_Contractor_APM_AT2",
    "B_Contractor_APM_AT2",
    "B_Contractor_APM_AT2",
    "B_Contractor_APM_Medic1",
    "B_Contractor_APM_Rifleman1"
];

// AA specialists squad.
blufor_squad_aa = [
    "B_Contractor_APM_TL1",
    "B_Contractor_APM_Rifleman1",
    "B_Contractor_APM_Rifleman1",
    "B_Contractor_APM_AT3",
    "B_Contractor_APM_AT3",
    "B_Contractor_APM_AT3",
    "B_Contractor_APM_Medic1",
    "B_Contractor_APM_Rifleman1"
];

// Force recon squad.
blufor_squad_recon = [
    "B_Contractor_APM_TL1",
    "B_Contractor_APM_Rifleman2",
    "B_Contractor_APM_Rifleman2",
    "B_Contractor_APM_AT1",
    "B_Contractor_APM_Grenadier2",
    "B_Contractor_APM_Grenadier2",
    "B_Contractor_APM_Marksman2",
    "B_Contractor_APM_Marksman2",
    "B_Contractor_APM_Medic2",
    "B_Contractor_APM_EOD1"
];

// Paratroopers squad (The units of this squad will automatically get parachutes on build)
blufor_squad_para = [
    "B_Contractor_APM_Rifleman2",
    "B_Contractor_APM_Rifleman2",
    "B_Contractor_APM_Rifleman2",
    "B_Contractor_APM_Rifleman2",
    "B_Contractor_APM_Rifleman2",
    "B_Contractor_APM_Rifleman2",
    "B_Contractor_APM_Rifleman2",
    "B_Contractor_APM_Rifleman2",
    "B_Contractor_APM_Rifleman2",
    "B_Contractor_APM_Rifleman2"
];

/*
    --- Elite vehicles ---
    Classnames below have to be unlocked by capturing military bases.
    Which base locks a vehicle is randomized on the first start of the campaign.
*/
elite_vehicles = [
];
