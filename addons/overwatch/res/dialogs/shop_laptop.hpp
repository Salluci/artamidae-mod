class laptop_vehicle_shop
{
	idd = 6391;
	movingEnable = 1;
	class ControlsBackground
	{
		class background: tablet_background
		{
			moving = 1;
		};
	};
	class Controls
	{
		class name_box: name_box
		{
			idc = 34;
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
			text = "#(argb,256,256,1)r2t(shoprender0,1.0);";
		};
		class lb_vehiclesList: RscListBox
		{
			idc = 63914;
			x = safeZoneX + safeZoneW * 0.25;
			y = safeZoneY + safeZoneH * 0.225;
			w = safeZoneW * 0.25;
			h = safeZoneH * 0.45;
			onLBSelChanged = "_this call APM_missions_fnc_previewVehicle; _this call APM_missions_fnc_purchaseCondition; APM_vehShopLastSelection = _this select 1;";
		};
		class cb_vehicleClass: RscCombo
		{
			idc = 1800;
			//style = 2098;
			x = safeZoneX + safeZoneW * 0.25;
			y = safeZoneY + safeZoneH * 0.2;
			w = safeZoneW * 0.25;
			h = safeZoneH * 0.025;
			onLBSelChanged = "_this call APM_missions_fnc_refreshList; APM_vehShopLastCategory = _this select 1;";
			class Items
			{
				class Light
				{
					text = "Light Vehicles";
					pictureRight = "\A3\ui_f\data\map\vehicleicons\iconCar_ca.paa";
					default = 1;
				};
				class Heavy
				{
					text = "Heavy Vehicles";
					pictureRight = "\A3\ui_f\data\map\vehicleicons\iconTank_ca.paa";
				};
				class Naval
				{
					text = "Naval Vehicles";
					pictureRight = "\A3\ui_f\data\map\vehicleicons\iconShip_ca.paa";
				};
				class Support
				{
					text = "Support Assets";
					pictureRight = "\A3\ui_f\data\map\vehicleicons\iconCrateSupp_ca.paa";
				};
				class Helicopter
				{
					text = "Helicopters";
					pictureRight = "\A3\ui_f\data\map\vehicleicons\iconHelicopter_ca.paa";
				};
				class Planes
				{
					text = "Planes";
					pictureRight = "\A3\ui_f\data\map\vehicleicons\iconPlane_ca.paa";
				};
			};
		};
	};
};
