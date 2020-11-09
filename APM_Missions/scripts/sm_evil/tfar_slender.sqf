#define hudIDC 5000

params ["_slender", "_radio", "_type", "_adt", "_tx"];

if (_slender == player) exitWith {};

if (_tx) then {
	//Slender is tx, create hud display of slender perspective
	_hud = (findDisplay 46) ctrlCreate ["RscPicture", hudIDC];
	_hud ctrlSetText "#(argb,512,512,1)r2t(slendercam,1)";
	_hud ctrlSetPosition [-0.2, 0.75, 0.35, 0.35];
	_hud ctrlCommit 0;
	
	slender_camera = "camera" camCreate (getPos _slender);	
	slender_camera cameraEffect ["External", "LEFT", "slendercam"];
	"slendercam" setPiPEffect [3,1,1.2,0.7,0,[1,0,0,0.25],[1,1,1,0],[1,1,1,1]]; 
	_slender spawn {
		while {!isNull slender_camera} do {
			_all_players = allPlayers - [_this];
			//_zeus = allPlayers select {!isNull (getAssignedCuratorLogic _x)};
			//_all_players = _all_players - _zeus;
			_cam_tgt = [_this, _all_players] call CBA_fnc_getNearest;
			slender_camera camSetTarget _cam_tgt;
			slender_camera camCommit 0;
			slender_camera setPos (_this modelToWorldVisual [0, 0.25, 2]);
		};
	};
} else {
	//Slender isn't tx, destroy hud display
	_hud = (findDisplay 46) displayCtrl hudIDC;
	ctrlDelete _hud;
	slender_camera cameraEffect ["Terminate", "LEFT", "slendercam"];
	camDestroy slender_camera;
};