//Call Database
//TODO OPTRE shit.

if (!isServer) exitWith {};

_vehShopQuery = dbPrepareQueryConfig "getVehShop";
private _resAsyncVeh = APM_db dbExecuteAsync _vehShopQuery;
_resAsyncVeh dbBindCallback [{
	params ["_result"];
	_data = dbResultToParsedArray _result;
	missionNamespace setVariable ["APM_vehicle_shop", _data, true];
}];

private _fobShopQuery = dbPrepareQueryConfig "getFobShop";
private _resAsyncFob = APM_db dbExecuteAsync _fobShopQuery;
_resAsyncFob dbBindCallback [{
	params ["_result"];
	_data = dbResultToParsedArray _result;
	missionNamespace setVariable ["APM_fob_shop", _data, true];
}];
