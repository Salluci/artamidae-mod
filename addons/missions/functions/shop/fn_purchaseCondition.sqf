params ["_ctrl", "_selection"];
private _display = findDisplay 6391;
private _bn_purchase = _display displayCtrl 63912;
private _data = call compile (_ctrl lbData _selection);
_data params ["_classname", "_displayname", "_price", "_cat", "_code"];

if (_selection == -1) exitWith
{
  _bn_purchase ctrlEnable false;
  _bn_purchase ctrlSetTooltip "Nothing selected!";
};

//Cert Checks
private _cert = true;

switch (_cat) do
{
  case 1: {_cert = player getVariable ["APM_crewman", false]};
  case 4: {_cert = player getVariable ["APM_rotor", false]};
  case 5: {_cert = player getVariable ["APM_fixed", false]};
  default {_cert = true};
};
if !(_cert) exitWith
{
  _bn_purchase ctrlEnable false;
  _bn_purchase ctrlSetTooltip "Not certified for this type of vehicle!";
};

//Price check
private _budget = missionNamespace getVariable ["APM_Budget", 0];
if (_price > _budget) exitWith
{
  _bn_purchase ctrlEnable false;
  _bn_purchase ctrlSetTooltip "Vehicle does not fit within budget!";
};

_bn_purchase ctrlEnable true;
_bn_purchase ctrlSetTooltip "";
