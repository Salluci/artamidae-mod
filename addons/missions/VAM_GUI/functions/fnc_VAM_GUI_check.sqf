//VAM Check
disableSerialization;
private _VAM_display = findDisplay 4900;
private _vehiclename = getText ((configOf VAM_targetvehicle) >> "displayName");
private _currentvehicletext = _VAM_display displayCtrl 4950;
_currentvehicletext ctrlSetText _vehiclename;

switch (true) do {
	case (VAM_targetvehicle isKindOf "APC_Wheeled_03_base_F") : {[] spawn fnc_VAM_Gorgon_setup;};
	case (VAM_targetvehicle isKindOf "LT_01_base_F") : {[] spawn fnc_VAM_Nyx_setup;};
	case (VAM_targetvehicle isKindOf "APC_Wheeled_02_base_v2_F") : {[] spawn fnc_VAM_Marid_v2_setup;};
	case (VAM_targetvehicle isKindOf "APC_Wheeled_02_base_F") : {[] spawn fnc_VAM_Marid_v1_setup;};
	case (VAM_targetvehicle isKindOf "Heli_Light_01_base_F") : {[] spawn fnc_VAM_HBPN_setup;};
	case (VAM_targetvehicle isKindOf "Heli_Attack_01_base_F") : {[] spawn fnc_VAM_Blackfoot_setup;};
	case (VAM_targetvehicle isKindOf "Heli_Light_02_base_F") : {[] spawn fnc_VAM_Orca_setup;};
	case (VAM_targetvehicle isKindOf "UGV_01_base_F") : {[] spawn fnc_VAM_UGV_rcws_setup;};
	default {[] spawn fnc_VAM_common_setup;};
};
