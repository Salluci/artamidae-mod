#define DEFAULT_MATERIAL "\a3\data_f\default.rvmat"
#define DEFAULT_TEXTURE "#(rgb,8,8,3)color(0,0,0,0)"

params ["_unit", "_class"];

// --- load texture from config.cpp or description.ext
private _cfgInsignia = [["CfgUnitInsignia", _class], configNull] call BIS_fnc_loadClass;

// --- check if insignia exists
if (configName _cfgInsignia != _class) exitWith
{
	[
		"'%1' is not found in CfgUnitInsignia. Available classes: %2",
		_class,
		("true" configClasses (configFile >> "CfgUnitInsignia") apply {configName _x})
		+
		("true" configClasses (missionConfigFile >> "CfgUnitInsignia") apply {configName _x})
		+
		("true" configClasses (campaignConfigFile >> "CfgUnitInsignia") apply {configName _x})
	]
	call BIS_fnc_error;
	false
};

// --- find insignia index in hidden textures
private _hiddenSelections = getArray (configFile >> "CfgVehicles" >> getText (configFile >> "CfgWeapons" >> uniform _unit >> "ItemInfo" >> "uniformClass") >> "hiddenSelections");

_hiddenSelections = _hiddenSelections apply {toLower _x};

private _index = _hiddenSelections find "insignia";

private _set = -1;

if (_index isEqualTo -1) exitWith
{
	_unit setVariable ["BIS_fnc_setUnitInsignia_class", nil, true];
	private _hiddenSelectionsTextures = getArray (configFile >> "CfgVehicles" >> getText (configFile >> "CfgWeapons" >> uniform _unit >> "ItemInfo" >> "uniformClass") >> "hiddenSelectionsTextures");
	_hiddenSelectionsTextures = _hiddenSelectionsTextures apply {toLower _x};
	_hiddenSelectionsTextures = _hiddenSelectionsTextures - ["insignia"];
	{
		_unit setObjectTextureGlobal [_forEachIndex, _x];
	} forEach _hiddenSelectionsTextures;
	private _hiddenSelectionsMaterials = getArray (configFile >> "CfgVehicles" >> getText (configFile >> "CfgWeapons" >> uniform _unit >> "ItemInfo" >> "uniformClass") >> "hiddenSelectionsMaterials");
	{
		_unit setObjectMaterialGlobal [_forEachIndex, _x];
	} forEach _hiddenSelectionsMaterials;
  0
};

if (_unit call BIS_fnc_getUnitInsignia != _class) then
{
  _unit setVariable ["BIS_fnc_setUnitInsignia_class", [_class, nil] select (_class isEqualTo ""), true];
  _unit setObjectMaterialGlobal [_index, getText (_cfgInsignia >> "material") call {[_this, DEFAULT_MATERIAL] select (_this isEqualTo "")}];
  _unit setObjectTextureGlobal [_index, getText (_cfgInsignia >> "texture") call {[_this, DEFAULT_TEXTURE] select (_this isEqualTo "")}];
  _set = 1;
};

_set
