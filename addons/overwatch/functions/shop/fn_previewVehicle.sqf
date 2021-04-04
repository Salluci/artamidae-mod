params ["_ctrl", "_selection"];
private _data = parseSimpleArray (_ctrl lbData _selection);
if !(isNull preview_vehicle) then {
  deleteVehicle preview_vehicle;
};
_data params ["_classname", "_displayname", "_cost", "_cat", "_code"];
preview_vehicle = _classname createVehicleLocal ghostpoint_pos;
preview_vehicle enableSimulation false;
preview_vehicle setPos ghostpoint_pos;
shop_cam camSetTarget preview_vehicle;
private _bounding = boundingBox preview_vehicle;
private _relpos = [
  (abs (_bounding select 0 select 0)) + 2,
  (abs (_bounding select 0 select 1)) + 2,
  (abs (_bounding select 0 select 2)) + 2
];
shop_cam camSetRelPos _relpos;
shop_cam camCommit 0;
