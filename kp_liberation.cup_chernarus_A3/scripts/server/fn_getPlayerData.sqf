params ["_uid","_name"];
_base_data = [0,0,0,0,0,0,0,0,0,0,[["arifle_MX_ACO_pointer_F","","acc_pointer_IR","optic_Aco",["30Rnd_65x39_caseless_mag",30],[],""],[],["hgun_P07_F","","","",["16Rnd_9x21_Mag",17],[],""],["U_B_CombatUniform_mcam",[["ACE_fieldDressing",1],["ACE_packingBandage",1],["ACE_morphine",1],["ACE_tourniquet",1],["30Rnd_65x39_caseless_mag",2,30]]],["V_PlateCarrier1_rgr",[["30Rnd_65x39_caseless_mag",7,30],["16Rnd_9x21_Mag",2,17],["SmokeShell",1,1],["SmokeShellGreen",1,1],["Chemlight_green",2,1],["HandGrenade",2,1]]],[],"H_HelmetB","",[],["ItemMap","","TFAR_anprc152_1","ItemCompass","ItemWatch","NVGoggles"]]];
_data = "extDB3" callExtension format ["0:apm:getPlayerData:%1", _uid];

_data = call compile _data;

if !((_data select 1) isEqualTo []) then [{
	missionNamespace setVariable [format ["PD_%1", _uid], _data select 1 select 0, true];
	"extDB3" callExtension format ["0:apm:updatePlayerName:%1:%2", _name, _uid];
},{
	missionNamespace setVariable [format ["PD_%1", _uid], _base_data, true];
	"extDB3" callExtension format ["0:apm:createPlayerData:%1:%2", _uid, _name];
}];