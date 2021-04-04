class hlc_rifle_Bushmaster300;

class hlc_rifle_honeybase: hlc_rifle_Bushmaster300
{
	class WeaponSlotsInfo;
};

class hlc_rifle_honeybadger: hlc_rifle_honeybase
{
	class LinkedItems
	{
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
       		 item = "muzzle_hbadger";
      	};
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot
		{
			iconPosition[] = { 0.0, 0.45 };
        	iconScale = 0.2;
			linkProxy = "\a3\data_f\proxies\weapon_slots\MUZZLE";
			displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
    		iconPicture = "\a3\weapons_f\Data\ui\attachment_muzzle";
			class compatibleItems
			{
				muzzle_hbadger = 1;
			};
		};
	};
};			