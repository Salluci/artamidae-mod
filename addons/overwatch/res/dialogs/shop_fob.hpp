class laptop_fob_shop
{
	idd = 6392;
	movingEnable = 0;

	class ControlsBackground
	{

		class background : tablet_background {
			moving = 0;
		};
	};
	class Controls
	{

		class name_box : name_box {idc = 34;};
		class time_box : time_box {idc = 35;};
		class confirm_purchase_text
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.61273793;
			y = safeZoneY + safeZoneH * 0.796875;
			w = safeZoneW * 0.10881406;
			h = safeZoneH * 0.02213542;
			style = 0;
			text = "Confirm Purchase";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "TahomaB";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7);

		};
		class back_text
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.42532943;
			y = safeZoneY + safeZoneH * 0.79947917;
			w = safeZoneW * 0.06881406;
			h = safeZoneH * 0.02213542;
			style = 0;
			text = "Back";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "TahomaB";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7);

		};
		class rsc_confirm_purchase : RscButton
		{
			idc = 63922;
			x = safeZoneX + safeZoneW * 0.58931186;
			y = safeZoneY + safeZoneH * 0.79296875;
			w = safeZoneW * 0.01683749;
			h = safeZoneH * 0.03125;
			colorText[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			text = "";
			tooltip = "Click to confirm purchase";

		};
		class rsc_laptop_cancel : RscButton
		{
			idc = 63923;
			x = safeZoneX + safeZoneW * 0.40117131;
			y = safeZoneY + safeZoneH * 0.79427084;
			w = safeZoneW * 0.01683749;
			h = safeZoneH * 0.03125;
			colorText[] = {0,0,0,0};
			colorFocused[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0};
			colorBackgroundActive[] = {0,0,0,0};
			text = "Back";
			action = "closeDialog 6392";
			tooltip = "Click to Cancel";

		};
		class RscListbox_1500 : RscListBox
		{
			idc = 63924;
			x = safeZoneX + safeZoneW * 0.22913617;
			y = safeZoneY + safeZoneH * 0.18359375;
			w = safeZoneW * 0.25329429;
			h = safeZoneH * 0.43619792;
			period = 1;
			colorSelectBackground[] = {0.1, 0.1, 0.877, 1};
			colorSelectBackground2[] = {1, 1, 1, 1};
			class ListScrollBar
			{
				color[] = {0.8,0.8,0.8,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		class rsc_laptop_previewimg : RscPicture
		{
			idc = 63925;
			x = safeZoneX + safeZoneW * 0.51171304;
			y = safeZoneY + safeZoneH * 0.19661459;
			w = safeZoneW * 0.23352856;
			h = safeZoneH * 0.40234375;
			text = "#(argb,256,256,1)r2t(shoprender0,1.0);";

		};
		/*class rsc_laptop_price : RscText
		{
			idc = 63926;
			x = safeZoneX + safeZoneW * 0.24377746;
			y = safeZoneY + safeZoneH * 0.62109375;
			w = safeZoneW * 0.1749634;
			h = safeZoneH * 0.0546875;
			text = "Price: ";

		};
		class Bn_light: RscButton
		{
			idc = 1600;
			text = "Light Vehicles"; //--- ToDo: Localize;
			x = 0.256009 * safezoneW + safezoneX;
			y = 0.75 * safezoneH + safezoneY;
			w = 0.0770496 * safezoneW;
			h = 0.042 * safezoneH;
		};
		class Bn_Heavy: Bn_light
		{
			idc = 1601;
			text = "Heavy Vehicles"; //--- ToDo: Localize;
			x = 0.33948 * safezoneW + safezoneX;
		};
		class Bn_Helo: Bn_light
		{
			idc = 1602;
			text = "Helicopters"; //--- ToDo: Localize;
			x = 0.42295 * safezoneW + safezoneX;
		};
		class Bn_Aircraft: Bn_light
		{
			idc = 1603;
			text = "Aircraft"; //--- ToDo: Localize;
			x = 0.506421 * safezoneW + safezoneX;
		};
		class Bn_Support: Bn_light
		{
			idc = 1604;
			text = "Support"; //--- ToDo: Localize;
			x = 0.589891 * safezoneW + safezoneX;
		};
		class Bn_Naval: Bn_light
		{
			idc = 1605;
			text = "Naval Vehicles"; //--- ToDo: Localize;
			x = 0.673362 * safezoneW + safezoneX;
		};*/
		class tb_vehicleClass: RscToolbox
		{
			idc = 1800;
			//style = 2098;
			style = 2;
			x = 0.25601 * safezoneW + safezoneX;
			y = 0.71 * safezoneH + safezoneY;
			w = 0.179782 * safezoneW;
			h = 0.084 * safezoneH;
			colorText[] = {1, 0, 0, 1};
			colorTextSelect[] = {0, 1, 0, 1};
			colorBackground[] = {0, 0, 1, 0};
			colorSelectedBg[] = {0, 0, 0, 0};
			rows = 2;
			columns = 3;
			//strings[] = {"res\LightVicApp.paa", "res\HeavyApp.paa", "res\BoatApp.paa", "res\SupportApp.paa", "res\HeliApp.paa", "res\PlaneApp.paa"};
			strings[] = {"Light", "Heavy", "Naval", "Support", "Helo", "Fixedwing"};
			checked_strings[] = {"[Light]", "[Heavy]", "[Naval]", "[Support]", "[Helo]", "[Fixedwing]"};
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);
		};
	};

};
