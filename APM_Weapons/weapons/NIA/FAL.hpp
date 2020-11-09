class hlc_fal_base;

class hlc_rifle_FAL5061: hlc_fal_base //This is actually an FAL 50.63
{
	displayName = "FN FAL 50.63";
	ACE_barrelLength = 436;
	ACE_barrelTwist = 304.8‬;
};

class hlc_rifle_FAL5061Rail: hlc_fal_base
{
	displayName = "FN FAL 50.63 (RIS)";
	ACE_barrelLength = 436;
	ACE_barrelTwist = 304.8‬;
};

class hlc_rifle_FAL5000: hlc_rifle_FAL5061
{
	ACE_barrelLength = 533;
	ACE_barrelTwist = 304.8‬;
};

class hlc_rifle_FAL5000Rail: hlc_rifle_FAL5061Rail
{
	ACE_barrelLength = 533;
	ACE_barrelTwist = 304.8‬;
};

class hlc_rifle_falosw: hlc_fal_base
{
	ACE_barrelLength = 279.4;
	ACE_barrelTwist = 254;
};