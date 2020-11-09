class hlc_saw_base: Rifle_Base_F
{
	recoil = "recoil_LIM";
	class WeaponSlotsInfo;
};

class hlc_lmg_minimipara;

class hlc_lmg_minimi_railed: hlc_lmg_minimipara
{
	class WeaponSlotsInfo;
	class FullAuto;
};

class hlc_lmg_mk46: hlc_lmg_minimi_railed
{
	ACE_barrelLength = 414;
	ACE_barrelTwist = 178;
	changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_firemode",0.316228,1,5};
	modes[] = {"FullAutoFast","FullAuto","close","short","medium","medium_burst","far","veryfar","far_optic1","toofar_optic1","far_optic2","toofar_optic2"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 126;
		class UnderBarrelSlot: rhs_Underslot_m249_ris
		{
			class compatibleItems: compatibleItems
			{
				rhsusf_acc_kac_grip_saw_bipod = 0;
				rhsusf_acc_saw_bipod = 0;
				rhsusf_acc_grip4_bipod = 0;
				rhsusf_acc_saw_lw_bipod = 0;
			};
		};
	};
	class FullAuto: FullAuto
	{
		dispersion = "((1.2) * 0.00029088)";
		textureType = "fullAuto";
		reloadTime = "((60)/370)";
	};
	class FullAutoFast: FullAuto
	{
		dispersion = "((1.2) * 0.00029088)";
		textureType = "fastAuto";
		reloadTime = "((60)/730)";
	};
};

class hlc_lmg_mk46mod1: hlc_lmg_mk46
{
	ACE_barrelLength = 414;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 154.4;
	};
};

class hlc_lmg_mk48: hlc_saw_base
{
	ace_overheating_mrbs = 5545;
	recoil = "recoil_mk48";
	ACE_barrelLength = 501.7;
	ACE_barrelTwist = 304.8;
	descriptionShort = "Special Purpose Weapon<br/>Caliber: 7.62mm NATO";
	changeFiremodeSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Machineguns\SyndikatLMG\SyndikatLMG_firemode",0.316228,1,5};
	modes[] = {"FullAutoFast","FullAuto","close","short","medium","medium_burst","far","veryfar","far_optic1","toofar_optic1","far_optic2","toofar_optic2"};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 186.4;
		class UnderBarrelSlot: rhs_Underslot_m249_ris
		{
			class compatibleItems: compatibleItems
			{
				rhsusf_acc_kac_grip_saw_bipod = 0;
				rhsusf_acc_saw_bipod = 0;
				rhsusf_acc_grip4_bipod = 0;
				rhsusf_acc_saw_lw_bipod = 0;
			};
		};
		class MuzzleSlot: asdg_MuzzleSlot_762
		{
			class compatibleItems: compatibleItems
      {
        muzzle_snds_h_mg_blk_F = 1;
        muzzle_snds_h_mg_khk_F = 1;
        muzzle_snds_h_mg = 1;
      };
		};
	};
	class FullAuto: Mode_FullAuto
	{
		dispersion = "((1.2) * 0.00029088)";
		textureType = "fullAuto";
		reloadTime = "((60)/370)";
	};
	class FullAutoFast: FullAuto
	{
		dispersion = "((1.2) * 0.00029088)";
		textureType = "fastAuto";
		reloadTime = "((60)/710)";
		class BaseSoundModeType
		{
        	weaponSoundEffect = "DefaultRifle";
     	};
     	class StandardSound: BaseSoundModeType
		{
      		soundSetShot[] = { "mk48_Shot_SoundSet", "mk48_Tail_SoundSet" };
        };
      	class SilencedSound: BaseSoundModeType
		{
      		soundSetShot[] = { "mk48_silencerShot_SoundSet", "mk48_silencerTail_SoundSet" };
     	};
	};
};

class hlc_lmg_mk48mod1: hlc_lmg_mk48
{
	descriptionShort = "Special Purpose Weapon<br/>Caliber: 7.62mm NATO";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass = 182.6;
	};
};

class hlc_lmg_mk48mod2: hlc_lmg_mk48mod1
{
	displayName = "Mk 48 Mod 2";
	recoil = "recoil_LIM";
	descriptionShort = "Special Purpose Weapon<br/>Caliber: 6.5mm NATO";
	magazines[] = {"200Rnd_65x39_Cased_Box", "200Rnd_65x39_Cased_Box_Tracer"};
	magazineWell[] = {CBA_65x39_Mk200};
	baseWeapon = "hlc_lmg_mk48mod2";
	mass = 168.5;
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: asdg_MuzzleSlot_65
		{
			class compatibleItems: compatibleItems
      {
        muzzle_snds_h_mg_blk_F = 1;
        muzzle_snds_h_mg_khk_F = 1;
        muzzle_snds_h_mg = 1;
      };
		};
	};
	rhs_grip1_change = "hlc_lmg_mk48mod2_grip";
  rhs_grip2_change = "hlc_lmg_mk48mod2_grip2";
  rhs_grip3_change = "hlc_lmg_mk48mod2_grip3";
};
class hlc_lmg_mk48mod2_grip: hlc_lmg_mk48mod2
{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\gesture_m249_VFG.rtm" };
		inertia = 0.81;
		dexterity = 0.945315;
		aimTransitionSpeed = 0.661721;
};
class hlc_lmg_mk48mod2_grip2: hlc_lmg_mk48mod2
{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\gesture_m249_AFG.rtm" };
		inertia = 0.81;
		dexterity = 0.945315;
		aimTransitionSpeed = 0.661721;
};
class hlc_lmg_mk48mod2_grip3: hlc_lmg_mk48mod2
{
		scopeArsenal = 0;
		author = "Toadie";
		handanim[] = { "OFP2_ManSkeleton", "\hlc_wp_saw\anim\gesture\gesture_m249_VFG.rtm" };
		inertia = 0.81;
		dexterity = 0.945315;
		aimTransitionSpeed = 0.661721;
};
class hlc_lmg_minimipara_long_railed: hlc_lmg_minimipara
{
	displayName = "FN Minimi Para (Long/RIS)";
};

class hlc_m249_pip4;

class hlc_m249_SQuantoon: hlc_m249_pip4
{
	scopeArsenal = 0;
};
