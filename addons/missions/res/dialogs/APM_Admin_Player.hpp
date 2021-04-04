class APM_Admin_Player
{
	idd = 33564;
	movingEnable = 1;

	class ControlsBackground
	{
		class APM_Admin_Player_Background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.02708639;
			y = safeZoneY + safeZoneH * -0.11458333;
			w = safeZoneW * 0.94509517;
			h = safeZoneH * 1.30208334;
			style = 48;
			moving = 1;
			text = "res\TabTemp.paa";
			colorBackground[] = {0.7333,0.9686,0.2157,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);
		};

	};
	class Controls
	{
		class APM_Player_Panel_Title
		{
			type = 0;
			idc = 754471;
			x = safeZoneX + safeZoneW * 0.12005857;
			y = safeZoneY + safeZoneH * 0.15104167;
			w = safeZoneW * 0.78550513;
			h = safeZoneH * 0.0625;
			style = 2;
			text = "Admin Panel:";
			colorBackground[] = {0.6,0.1333,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1.5);

		};
		class Control1954030450
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.3931186;
			y = safeZoneY + safeZoneH * 0.44270834;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03776042;
			style = 1;
			text = "Plane Pilot:";
			colorBackground[] = {0.6196,0.8784,0.6235,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);

		};
		class Control1954030450_copy1
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.3931186;
			y = safeZoneY + safeZoneH * 0.296875;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03776042;
			style = 1;
			text = "Engineer Level:";
			colorBackground[] = {0.6196,0.8784,0.6235,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);

		};
		class Control1954030450_copy2
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.3931186;
			y = safeZoneY + safeZoneH * 0.34505209;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03776042;
			style = 1;
			text = "EOD:";
			colorBackground[] = {0.6196,0.8784,0.6235,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);

		};
		class Control1954030450_copy3
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.3931186;
			y = safeZoneY + safeZoneH * 0.24869792;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03776042;
			style = 1;
			text = "Medic Level:";
			colorBackground[] = {0.6196,0.8784,0.6235,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);

		};
		class Control1954030450_copy4
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.3931186;
			y = safeZoneY + safeZoneH * 0.39453125;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03776042;
			style = 1;
			text = "Helo Pilot:";
			colorBackground[] = {0.6196,0.8784,0.6235,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);

		};
		/*class Control1954030450_copy5
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.3931186;
			y = safeZoneY + safeZoneH * 0.49088542;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03776042;
			style = 1;
			text = "Dagger Cert:";
			colorBackground[] = {0.6196,0.8784,0.6235,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);

		};*/
		class Control1954030450_copy6
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.3931186;
			y = safeZoneY + safeZoneH * 0.54036459;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03776042;
			style = 1;
			text = "Rank:";
			colorBackground[] = {0.6196,0.8784,0.6235,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);

		};
		class APM_Player_Select_Medic
		{
			type = 4;
			idc = 151564;
			x = safeZoneX + safeZoneW * 0.53953148;
			y = safeZoneY + safeZoneH * 0.24869792;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03125;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {1,1,1,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.8,0.2,0.2,1};
			colorSelectBackground[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		class APM_Player_Select_Engineer
		{
			type = 4;
			idc = 1515641;
			x = safeZoneX + safeZoneW * 0.53953148;
			y = safeZoneY + safeZoneH * 0.296875;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03125;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {1,1,1,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.8,0.2,0.2,1};
			colorSelectBackground[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		class APM_Player_Select_EOD
		{
			type = 4;
			idc = 1515642;
			x = safeZoneX + safeZoneW * 0.53953148;
			y = safeZoneY + safeZoneH * 0.34505209;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03125;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {1,1,1,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.8,0.2,0.2,1};
			colorSelectBackground[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		class APM_Player_Select_Helo
		{
			type = 4;
			idc = 1515643;
			x = safeZoneX + safeZoneW * 0.53953148;
			y = safeZoneY + safeZoneH * 0.39453125;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03125;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {1,1,1,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.8,0.2,0.2,1};
			colorSelectBackground[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		class APM_Player_Select_Plane
		{
			type = 4;
			idc = 1515644;
			x = safeZoneX + safeZoneW * 0.53953148;
			y = safeZoneY + safeZoneH * 0.44270834;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03125;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {1,1,1,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.8,0.2,0.2,1};
			colorSelectBackground[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		/*class APM_Player_Select_Dagger
		{
			type = 4;
			idc = 1515645;
			x = safeZoneX + safeZoneW * 0.53953148;
			y = safeZoneY + safeZoneH * 0.49088542;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03125;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {1,1,1,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.8,0.2,0.2,1};
			colorSelectBackground[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW/safezoneH) min 1.2) /1.2) /25)*1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};*/
		class APM_Player_Select_Rank
		{
			type = 4;
			idc = 1515646;
			x = safeZoneX + safeZoneW * 0.53953148;
			y = safeZoneY + safeZoneH * 0.54036459;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03125;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {1,1,1,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.8,0.2,0.2,1};
			colorSelectBackground[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW/safezoneH) min 1.2)/1.2)/25)*1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		class APM_Player_Commit
		{
			type = 1;
			idc = 156489;
			x = safeZoneX + safeZoneW * 0.68;
			y = safeZoneY + safeZoneH * 0.3;
			w = safeZoneW * 0.09;
			h = safeZoneH * 0.08;
			style = 2;
			text = "Commit Changes";
			borderSize = 0;
			colorBackground[] = {0.502,0.502,0.502,1};
			colorBackgroundActive[] = {0.8,0.8,0.8,1};
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
			sizeEx = (((((safezoneW/safezoneH) min 1.2)/1.2)/25)*0.95);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};
		class APM_Temp_Certs : APM_Player_Commit
		{
			idc = 256489;
			y = safeZoneY + safeZoneH * 0.4;
			text = "Temp Certs";
			//sizeEx = (((((safezoneW/safezoneH) min 1.2)/1.2)/25)*0.75);
			style = 2 + 16;
		};
		/*
		class Pay_Player_Field
		{
			type = 2;
			idc = 123321;
			x = safeZoneX + safeZoneW * 0.71156662;
			y = safeZoneY + safeZoneH * 0.24869792;
			w = safeZoneW * 0.09443632;
			h = safeZoneH * 0.03776042;
			style = 0;
			text = "Amount (Delete Me!)";
			autocomplete = "";
			colorBackground[] = {1,1,1,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelection[] = {0.5,0.5,0,1};
			colorText[] = {0,0,0,1};
			font = "PuristaBold";
			sizeEx = (((((safezoneW/safezoneH) min 1.2)/1.2)/25)*0.75);

		};
		class Pay_player_button
		{
			type = 1;
			idc = 1564111;
			x = safeZoneX + safeZoneW * 0.71156662;
			y = safeZoneY + safeZoneH * 0.296875;
			w = safeZoneW * 0.09443632;
			h = safeZoneH * 0.08723959;
			style = 2;
			text = "Pay Player";
			borderSize = 0;
			colorBackground[] = {0.502,0.502,0.502,1};
			colorBackgroundActive[] = {0.8,0.8,0.8,1};
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
			sizeEx = (((((safezoneW/safezoneH) min 1.2)/1.2)/25)*1);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};

		};*/
		class APM_Player_Select_Crewman
		{
			type = 4;
			idc = 1515680;
			x = safeZoneX + safeZoneW * 0.53953148;
			y = safeZoneY + safeZoneH * 0.49088542;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03125;
			style = 16;
			arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_ca.paa";
			arrowFull = "\A3\ui_f\data\GUI\RscCommon\RscCombo\arrow_combo_active_ca.paa";
			colorBackground[] = {1,1,1,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {0.8,0.2,0.2,1};
			colorSelectBackground[] = {1,1,1,1};
			colorText[] = {0,0,0,1};
			font = "PuristaMedium";
			maxHistoryDelay = 0;
			sizeEx = (((((safezoneW/safezoneH) min 1.2)/1.2)/25)*1);
			soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1.0};
			soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1.0};
			soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1.0};
			wholeHeight = 0.3;
			class ComboScrollBar
			{
				color[] = {1,1,1,1};
				thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
				arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
				arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
				border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";

			};

		};
		/*class APM_Player_Select_Grenadier : APM_Player_Select_Crewman
		{
			idc = 151581;
			y = safeZoneY + safeZoneH * 0.63984375;

		};
		class APM_Player_Select_MG : APM_Player_Select_Crewman
		{
			idc = 151582;
			y = safeZoneY + safeZoneH * 0.68984375;

		};
		class APM_Player_Select_Demo : APM_Player_Select_Crewman
		{
			idc = 151583;
			y = safeZoneY + safeZoneH * 0.73984375;

		};
		class APM_Player_Select_Marksman : APM_Player_Select_Crewman
		{
			idc = 151584;
			y = safeZoneY + safeZoneH * 0.78984375;

		};*/
		class Control19
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.3931186;
			y = safeZoneY + safeZoneH * 0.49088542;
			w = safeZoneW * 0.11932651;
			h = safeZoneH * 0.03776042;
			style = 1;
			text = "Crewman:";
			colorBackground[] = {0.6196,0.8784,0.6235,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW/safezoneH) min 1.2)/1.2)/25)*1);

		};
		/*class Control222 : Control19
		{
			text = "Grenadier:";
			y = safeZoneY + safeZoneH * 0.63984375;
		};
		class Control223 : Control19
		{
			text = "Gunner:";
			y = safeZoneY + safeZoneH * 0.68984375;
		};
		class Control224 : Control19
		{
			text = "Demolitions:";
			y = safeZoneY + safeZoneH * 0.73984375;
		};
		class Control227 : Control19
		{
			text = "Marksman/Sniper:";
			y = safeZoneY + safeZoneH * 0.78984375;
		};*/
		class all_pbos
		{
			type = 5;
			idc = 152525;
			x = safeZoneX + safeZoneW * 0.1442167;
			y = safeZoneY + safeZoneH * 0.25;
			w = safeZoneW * 0.28259151;
			h = safeZoneH * 0.49739584;
			style = 16;
			colorBackground[] = {1,1,1,1};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorSelect[] = {1,0,0,1};
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

	};

};
