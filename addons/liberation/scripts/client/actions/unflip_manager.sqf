["Land","init",
{
  (_this select 0) addAction ["<t color='#FFFF00'>" + localize "STR_UNFLIP" + "</t> <img size='2' image='res\ui_flipveh.paa'/>", "scripts\client\actions\do_unflip.sqf", "", -950, true, true, "", "build_confirmed == 0 && (vehicle player == player)",10];
},true,["Man"],true] call CBA_fnc_addClassEventHandler
