//Declare functions
#define pathMacro(theScript) compile preprocessFileLineNumbers ('scripts\client\fob_system\supply\'+ #theScript + '.sqf')
fob_fnc_setSupply = pathMacro(setSupply);
fob_fnc_getSupply = pathMacro(getSupply);
fob_fnc_supplyBox = pathMacro(supplyBox);
