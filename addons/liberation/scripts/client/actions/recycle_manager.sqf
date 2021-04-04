private _recycleable_classnames = [];

{
    _recycleable_classnames append _x;
} forEach [
    KPLIB_b_light_classes,
    KPLIB_b_heavy_classes,
    KPLIB_b_air_classes,
    KPLIB_b_static_classes,
    KPLIB_b_support_classes,
    KPLIB_o_allVeh_classes
];

{
  [_x,"init",
  {
    (_this select 0) addAction ["<t color='#FFFF00'>" + localize "STR_RECYCLE" + "</t> <img size='2' image='res\ui_recycle.paa'/>", "scripts\client\actions\do_recycle.sqf", "", -900, true, true, "", "build_confirmed == 0 && (vehicle player == player) && (player getVariable 'KPLIB_fobDist' < GRLIB_fob_range)",10];
  },false,[],true] call CBA_fnc_addClassEventHandler
} forEach _recycleable_classnames;
