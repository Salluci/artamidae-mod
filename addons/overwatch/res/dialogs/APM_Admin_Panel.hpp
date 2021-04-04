class APM_Admin_Panel
{
	idd = 448789;
	movingEnable = true;
	enableSimulation = true;

	class ControlsBackground
	{
		class Admin_panel_background
		{
			type = 0;
			idc = -1;
			moving = 1;
			x = safeZoneX + safeZoneW * 0.171875;
			y = safeZoneY + safeZoneH * 0.00694445;
			w = safeZoneW * 0.63183594;
			h = safeZoneH * 0.98611112;
			style = 48;
			text = "res\TabTemp.paa";
			colorBackground[] = {0.0863,0.6431,0.5961,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};
	class Controls
	{
		class Admin_panel_Title
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.29394532;
			y = safeZoneY + safeZoneH * 0.27430556;
			w = safeZoneW * 0.38769532;
			h = safeZoneH * 0.03819445;
			style = 2;
			text = "APM Admin Panel";
			colorBackground[] = {0.4549,0.9725,0.5333,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5);

		};
		class APM_Admin_Select_Button
		{
			type = 1;
			idc = 59981;
			x = safeZoneX + safeZoneW * 0.53808594;
			y = safeZoneY + safeZoneH * 0.32291667;
			w = safeZoneW * 0.11914063;
			h = safeZoneH * 0.0625;
			style = 2;
			text = "Select Player";
			borderSize = 0;
			colorBackground[] = {0.502,0.6,1,1};
			colorBackgroundActive[] = {0.302,0.4,0.8,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaBold";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};
		class APM_Admin_Ban_Button
		{
			type = 1;
			idc = 955846;
			x = safeZoneX + safeZoneW * 0.53808594;
			y = safeZoneY + safeZoneH * 0.39583334;
			w = safeZoneW * 0.11914063;
			h = safeZoneH * 0.11111112;
			style = 2;
			text = "Ban Player";
			borderSize = 0;
			colorBackground[] = {0.2,0.302,0.702,1};
			colorBackgroundActive[] = {0.302,0.4,0.8,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};
		class APM_Admin_Player_LB
		{
			type = 5;
			idc = 122451;
			x = safeZoneX + safeZoneW * 0.29394532;
			y = safeZoneY + safeZoneH * 0.34722223;
			w = safeZoneW * 0.21679688;
			h = safeZoneH * 0.12847223;
			style = 16;
			colorBackground[] = {1,1,1,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.1,0.1,0.1,1};
			colorSelectBackground[] = {0.75,0.75,0.75,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			rowHeight = 0;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1.0};
			class ListScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		class APM_Admin_Ban_Confirm
		{
			type = 1;
			idc = 955861;
			x = safeZoneX + safeZoneW * 0.53808594;
			y = safeZoneY + safeZoneH * 0.54166667;
			w = safeZoneW * 0.11914063;
			h = safeZoneH * 0.11111112;
			style = 16;
			text = "Confirm Ban";
			borderSize = 0;
			colorBackground[] = {0.2,0.302,0.702,1};
			colorBackgroundActive[] = {0.302,0.4,0.8,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};
		class APM_Admin_Save_Accounts
		{
			type = 1;
			idc = 955869;
			x = safeZoneX + safeZoneW * 0.51367188;
			y = safeZoneY + safeZoneH * 0.6875;
			w = safeZoneW * 0.14355469;
			h = safeZoneH * 0.03819445;
			style = 2;
			text = "Restart Server";
			borderSize = 0;
			colorBackground[] = {0.2,0.302,0.702,1};
			colorBackgroundActive[] = {0.302,0.4,0.8,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};
		/*class APM_Admin_Give_TempZeus
		{
			type = 1;
			idc = 355836;
			x = safeZoneX + safeZoneW * 0.31835938;
			y = safeZoneY + safeZoneH * 0.6875;
			w = safeZoneW * 0.14355469;
			h = safeZoneH * 0.03819445;
			style = 2;
			text = "Give Temp Zeus";
			borderSize = 0;
			colorBackground[] = {0.2,0.302,0.702,1};
			colorBackgroundActive[] = {0.302,0.4,0.8,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};*/
		class APM_Admin_Credits_Field
		{
			type = 2;
			idc = 5152256;
			x = safeZoneX + safeZoneW * 0.29394532;
			y = safeZoneY + safeZoneH * 0.51736112;
			w = safeZoneW * 0.09472657;
			h = safeZoneH * 0.0625;
			style = 0;
			text = "Amount (Delete Me!)";
			autocomplete = "";
			colorBackground[] = {1,1,1,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelection[] = {0.5,0.5,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.6);

		};
		class APM_Admin_Pay_Button
		{
			type = 1;
			idc = 9558612;
			x = safeZoneX + safeZoneW * 0.41601563;
			y = safeZoneY + safeZoneH * 0.51736112;
			w = safeZoneW * 0.09472657;
			h = safeZoneH * 0.0625;
			style = 2;
			text = "Set Budget";
			borderSize = 0;
			colorBackground[] = {0.2,0.302,0.702,1};
			colorBackgroundActive[] = {0.302,0.4,0.8,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};
		class APM_Refresh_Shop : APM_Admin_Pay_Button
		{
			y = safeZoneY + safeZoneH * 0.61;
			w = safeZoneW * 0.11;
			idc = 54897;
			text = "Refresh Vehicle Shop";
			onButtonClick = "[] remoteExec ['apm_missions_fnc_updateShop', 2]";
		};
	};
};
