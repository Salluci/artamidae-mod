class hlc_ak_base: Rifle_Base_F 
{
	recoil = "recoil_aks";
};

class hlc_rifle_ak47 : hlc_ak_base 
{
	recoil = "recoil_akm";
};

class hlc_rifle_ak12: hlc_ak_base 
{
		ACE_barrelLength = 414.02;
		ACE_barrelTwist = 199.898;
};

class hlc_rifle_RPK12: hlc_rifle_ak12 
{
	ACE_barrelTwist = 240.03;
};

class hlc_rifle_saiga12k : hlc_ak_base 
{
	recoil = "recoil_MSBS65_ubs";
};

class hlc_rifle_RK62 : hlc_ak_base 
{
	recoil = "recoil_akm";
};