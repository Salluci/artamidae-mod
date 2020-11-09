_statementEnable = {{_x setvariable ["acex_headless_blacklist",false,true];} forEach (curatorSelected select 0);};
_actionEnable = ["zeus_HC_disable","Enable Headless Client Transfer for Selected","",_statementEnable,{true}] call ace_interact_menu_fnc_createAction;
[["ACE_ZeusActions", "ZeusUnits"], _actionEnable] call ace_interact_menu_fnc_addActionToZeus;
_statementDisable = {{_x setvariable ["acex_headless_blacklist",true,true];} forEach (curatorSelected select 0);};
_actionDisable = ["zeus_HC_disable","Disable Headless Client Transfer for Selected","",_statementDisable,{true}] call ace_interact_menu_fnc_createAction;
[["ACE_ZeusActions", "ZeusUnits"], _actionDisable] call ace_interact_menu_fnc_addActionToZeus;
