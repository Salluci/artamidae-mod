#include "dialogs\shop_laptop.hpp"
#include "dialogs\shop_fob.hpp"
#include "dialogs\APM_Admin_Panel.hpp"
#include "dialogs\APM_Admin_Player.hpp"
#define color255(val) __EVAL(val/255)
class RscTitles
{
	class Default
	{
		idd = -1;
		fadein = 0;
		fadeout = 0;
		duration = 0;
	};
	class APM_Credits_Display
	{
		idd = 77586;
		movingEnable = 1;
		EnableSimulation = 1;
		EnableDisplay = 1;
		duration = 99999999;
		fadein = 0.5;
		fadeout = 0.5;
		colorBackground[] = {0,0,0,0};
		name = "APM Credits Display";
		onLoad = "uiNamespace setVariable ['APM_Credits_Display', _this select 0];";
		class controls
		{
			class apm_cash_text: RscStructuredText
			{
				style = 0+2+16;
				idc = 775861;
				x = 1.0625;
				y = 0.08;
				w = 0.3;
				h = 0.2;
			};
		};
	};

	class RscProgress
	{
		type = 8;
		style = 0;
		colorFrame[] = {0,0,0,1};
		colorBar[] = {1,1,1,1};
		texture = "#(argb,8,8,3)color(1,1,1,1)";
		w = 1;
		h = 0.03;
	};

	class APM_Progress
	{
		idd = 1250;
		movingEnable = 1;
		EnableSimulation = 1;
		EnableDisplay = 1;
		duration = 99999999;
		fadein = 0.5;
		fadeout = 0.5;
		name = "APM Progress Display";
		onLoad = "uiNamespace setVariable ['APM_Progress', _this select 0];";
		class Controls
		{
			class text
			{
				type = 0;
				idc = 1257;
				x = safeZoneX + safeZoneW * 0.26953125;
				y = safeZoneY + safeZoneH * 0.12847223;
				w = safeZoneW * 0.4609375;
				h = safeZoneH * 0.23263889;
				style = 0;
				text = "Porting loadouts. Please wait...";
				colorBackground[] = {
					color255(50),
					color255(50),
					color255(200),
					0.5
				};
				colorText[] = {0,0,0,1};
				font = "PuristaSemiBold";
				sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);

			};
			class Progress: RscProgress
			{
				type = 8;
				idc = 1256;
				x = safeZoneX + safeZoneW * 0.29394532;
				y = safeZoneY + safeZoneH * 0.3;
				w = safeZoneW * 0.41210938;
				h = safeZoneH * 0.05555556;
				style = 0;
				colorBar[] = {1,0,0,1};
				colorFrame[] = {0.2902,0.3373,0.6471,1};
				texture = "#(argb,8,8,3)color(1,1,1,1)";
			};
		};
	};
};
