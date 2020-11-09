class hlc_AWC_base;

class hlc_rifle_awmagnum: hlc_AWC_base
{
	ACE_barrelLength = 685.8;
	displayName = "AI AWM .300WM (OD)";
	recoil = "recoil_dmr_02";
	class WeaponSlotsInfo;
};

class hlc_rifle_awMagnum_OD_ghillie: hlc_rifle_awmagnum
{
	displayName = "AI AWM .300WM (OD/Ghillie)";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 151;
	};
};

class hlc_rifle_awMagnum_BL: hlc_rifle_awmagnum
{
	displayName = "AI AWM .300WM (Black)";
	class WeaponSlotsInfo;
};

class hlc_rifle_awMagnum_BL_ghillie: hlc_rifle_awMagnum_BL
{
	displayName = "AI AWM .300WM (Black/Ghillie)";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 151;
	};
};

class hlc_rifle_awMagnum_FDE: hlc_rifle_awmagnum
{
	displayName = "AI AWM .300WM (FDE)";
	class WeaponSlotsInfo;
};

class hlc_rifle_awMagnum_FDE_ghillie: hlc_rifle_awMagnum_FDE
{
	displayName = "AI AWM .300WM (FDE/Ghillie)";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 151;
	};
};

class hlc_rifle_awmagnum338: hlc_rifle_awmagnum
{
	baseWeapon = "hlc_rifle_awmagnum338";
	magazines[] = {"APM_5Rnd_338LM_FMJ"};
	magazineWell[] = {"CBA_338LM_AI"};
	hiddenSelectionsTextures[] = {"\hlc_wp_fhAWC\tex\awcstock_OD_co.paa","\hlc_wp_fhAWC\tex\AWC_Scope_co.paa","\APM_Weapons\Data\Magnumbits_ca.paa"};
	displayName = "AI AWM .338LM (OD)";
};
class hlc_rifle_awMagnum338_BL: hlc_rifle_awMagnum_BL
{
	baseWeapon = "hlc_rifle_awmagnum338_BL";
	magazines[] = {"APM_5Rnd_338LM_FMJ"};
	magazineWell[] = {"CBA_338LM_AI"};
	hiddenSelectionsTextures[] = {"\hlc_wp_fhAWC\tex\AWCSTOCK_black_co.paa","\hlc_wp_fhAWC\tex\AWC_Scope_co.paa","\APM_Weapons\Data\Magnumbits_ca.paa"};
	displayName = "AI AWM .338LM (Black)";
};
class hlc_rifle_awMagnum338_FDE: hlc_rifle_awMagnum_FDE
{
	baseWeapon = "hlc_rifle_awmagnum338_FDE";
	magazines[] = {"APM_5Rnd_338LM_FMJ"};
	magazineWell[] = {"CBA_338LM_AI"};
	hiddenSelectionsTextures[] = {"\hlc_wp_fhAWC\tex\awcstock_FDE_co.paa","\hlc_wp_fhAWC\tex\AWC_Scope_co.paa","\APM_Weapons\Data\Magnumbits_ca.paa"};
	displayName = "AI AWM .338LM (FDE)";
};
