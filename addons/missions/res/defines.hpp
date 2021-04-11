#include "baseClassesExport.hpp"
class RscTablet   {
	type = CT_STATIC;
	idc = -1;
	style = ST_PICTURE;
	shadow = 0;
	colorText[] = {1,1,1,1};
	x = "SafeZoneX + (SafeZoneW - (3/4*SafeZoneH))/2";
	y = "SafeZoneY + (SafezoneH * 0)";
	w = "3/4*SafeZoneH";
	h = "SafeZoneH";
	moving = 1;
	colorBackground[] = {0, 0, 0, 1};
	text="res\tablet.paa";
	font = "PuristaMedium";
	sizeEx = "(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
};
class tablet_background
{
	type = 0;
	idc = -1;
	x = safeZoneX+safeZoneW*0.17642753;
	y = safeZoneY+safeZoneH*-0.1640625;
	w = safeZoneW*0.65007321;
	h = safeZoneH*1.30729167;
	style = 48;
	text = "res\TabTemp.paa";
	colorBackground[] = {1,1,1,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	sizeEx = (((((safezoneW/safezoneH) min 1.2)/1.2)/25)*1);
};
class name_box
{
	type = 0;
	idc = 32;
	x = safeZoneX+safeZoneW*0.23572475;
	y = safeZoneY+safeZoneH*0.15104167;
	w = safeZoneW*0.3726208;
	h = safeZoneH*0.02213542;
	style = 0;
	text = "Name : Credits";
	font = "RobotoCondensed";
	colorBackground[] = {0.5294,0.6118,0.9451,0};
	colorText[] = {1,1,1,1};
	sizeEx = (((((safezoneW/safezoneH) min 1.2)/1.2)/25)*0.85);

};
class time_box
{
	type = 0;
	idc = 33;
	x = safeZoneX+safeZoneW*0.74743778;
	y = safeZoneY+safeZoneH*0.15104167;
	w = safeZoneW*0.3726208;
	h = safeZoneH*0.02213542;
	style = 0;
	text = "";
	font = "RobotoCondensed";
	colorBackground[] = {0.5294,0.6118,0.9451,0};
	colorText[] = {1,1,1,1};
	sizeEx = (((((safezoneW/safezoneH )min 1.2)/1.2)/25)*0.9);

};
class rsc_confirm_purchase: RscButtonMenu
{
	idc = 63912;
	x = safeZoneX + safeZoneW * 0.7005;
	y = safeZoneY + safeZoneH * 0.765;
	w = safeZoneW * 0.07;
	onLoad = "(_this # 0) ctrlEnable false;";
	text = "Purchase";
	action = "call APM_missions_fnc_purchase";
};
class rsc_laptop_cancel: RscButtonMenuCancel
{
	idc = 63913;
	x = safeZoneX + safeZoneW * 0.2353;
	y = safeZoneY + safeZoneH * 0.765;
	w = safeZoneW * 0.07;
	action = "closeDialog 6391";
};
class rsc_laptop_previewimg: RscPicture
{
	idc = 63915;
	x = safeZoneX + safeZoneW * 0.51171304;
	y = safeZoneY + safeZoneH * 0.2;
	w = safeZoneW * 0.23352856;
	h = safeZoneH * 0.40234375;
	text = "";
};
class lb_vehiclesList: RscListBox
{
	idc = 63914;
	x = safeZoneX + safeZoneW * 0.25;
	y = safeZoneY + safeZoneH * 0.225;
	w = safeZoneW * 0.25;
	h = safeZoneH * 0.45;
	onLBSelChanged = "_this call APM_missions_fnc_previewVehicle";
};
class Ace_interaction_APM_map : RscMapControl
{
	x = 1.1;
	y = 0.7;
	w = 0.25;
	h = 0.25;
};
