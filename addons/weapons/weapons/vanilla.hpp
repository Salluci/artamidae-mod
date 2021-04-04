class arifle_MX_Base_F: Rifle_Base_F
{
  class Single: Mode_SemiAuto
  {
      dispersion = "((2.3) * 0.00029088)";
  };
  class FullAuto: Mode_FullAuto
  {
      dispersion = "((2.3) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: asdg_MuzzleSlot_65
    {
      iconPosition[]={0,0.44999999};
      iconScale=0.2;
    };
    class PointerSlot: asdg_FrontSideRail
    {
      iconPosition[]={0.2,0.44999999};
      iconScale=0.25;
    };
  };
};
class arifle_MX_Black_F;
class arifle_MX_khk_F: arifle_MX_Black_F
{
  displayName = "MX (Khaki)";
};
class arifle_MXC_F: arifle_MX_Base_F
{
  class Single: Single
  {
      dispersion = "((2.7) * 0.00029088)";
  };
  class FullAuto: FullAuto
  {
      dispersion = "((2.7) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: MuzzleSlot
    {
      iconPosition[]={0,0.40000001};
    };
    class PointerSlot: PointerSlot
    {
      iconPosition[]={0.2,0.40000001};
    };
  };
};
class arifle_MXC_Black_F;
class arifle_MXC_khk_F: arifle_MXC_Black_F
{
  displayName = "MXC (Khaki)";
};
class arifle_MXM_F: arifle_MX_Base_F
{
  class Single: Single
  {
      dispersion = "((1.4) * 0.00029088)";
  };
  class FullAuto: FullAuto
  {
      dispersion = "((1.4) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    allowedSlots[]= {901};
    class MuzzleSlot: MuzzleSlot
    {
      iconPosition[]={0,0.40000001};
    };
  };
};
class arifle_MXM_Black_F;
class arifle_MXM_khk_F: arifle_MXM_Black_F
{
  displayName = "MXM (Khaki)";
};
class arifle_MX_SW_F: arifle_MX_Base_F
{
    class Single: Mode_SemiAuto
    {
        dispersion = "((1.5) * 0.00029088)";
    };

    class FullAuto: Mode_FullAuto
    {
        dispersion = "((1.5) * 0.00029088)";
    };
};
class arifle_MX_SW_Black_F;
class arifle_MX_SW_khk_F: arifle_MX_SW_Black_F
{
  displayName = "MX LSW (Khaki)";
};
class arifle_MX_GL_Black_F;
class arifle_MX_GL_khk_F: arifle_MX_GL_Black_F
{
  displayName = "MX 3GL (Khaki)";
};
class LMG_Mk200_F: Rifle_Long_Base_F
{
  rhsusf_acc_anpeq15 = 2;
  recoil = "recoil_LIM";
  ACE_barrelLength = 381;
  ACE_barrelTwist = 178;
  //hiddenSelectionsTextures[] = {"a3\Weapons_F_Enoch\Machineguns\M200\Data\1st_person_black_co.paa","\A3\Weapons_F\Machineguns\M200\data\body_co","\A3\Weapons_F\Machineguns\M200\data\grip_co"};
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    allowedSlots[]={901};
    class MuzzleSlot: asdg_MuzzleSlot_65
    {
      iconPosition[] = {-0.07,0.389};
      iconScale = 0.2;
    };
  };
  class GunParticles: GunParticles
  {
    class SecondEffect
    {
      positionName="Nabojnicestart";
      directionName="Nabojniceend";
      effectName="CaselessAmmoCloud";
    };
  };
};
class LMG_Zafir_F: Rifle_Long_Base_F
{
  ACE_barrelLength = 508;
  displayName = "Negev NG7R";
  descriptionShort = "Light Machine Gun<br />Caliber: 7.62x54mm";
  class Single: Mode_SemiAuto
  {
      dispersion = "((1.7) * 0.00029088)";
      class BaseSoundModeType;
      class SilencedSound: BaseSoundModeType
      {
        soundSetShot[]=
        {
          "Zafir_silencerShot_SoundSet",
          "Zafir_silencerTail_SoundSet",
          "Zafir_silencerInteriorTail_SoundSet"
        };
      };
      sounds[]=
      {
        "StandardSound",
        "SilencedSound"
      };
  };
  class FullAuto: Mode_FullAuto
  {
      dispersion = "((1.7) * 0.00029088)";
      class BaseSoundModeType;
      class SilencedSound: BaseSoundModeType
      {
        soundSetShot[]=
        {
          "Zafir_silencerShot_SoundSet",
          "Zafir_silencerTail_SoundSet",
          "Zafir_silencerInteriorTail_SoundSet"
        };
      };
      sounds[]=
      {
        "StandardSound",
        "SilencedSound"
      };
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: asdg_MuzzleSlot_762MG
    {
      linkProxy="\A3\Data_F\proxies\weapon_slots\MUZZLE";
      iconPosition[]={0.050000001,0.38};
      iconScale=0.2;
    };
    allowedSlots[]={901};
    mass = 174.1;
  };
};
class LMG_Negev_F: LMG_Zafir_F
{
  displayName = "Negev NG7";
  baseWeapon = "LMG_Negev_F";
  magazines[] = {"150Rnd_762x51_Box", "150Rnd_762x51_Box_Tracer"};
  magazineWell[] = {"CBA_762x51_LINKS"};
  descriptionShort = "Light Machine Gun<br />Caliber: 7.62x51mm";
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: asdg_MuzzleSlot_762
    {
      linkProxy="\A3\Data_F\proxies\weapon_slots\MUZZLE";
      iconPosition[]={0.050000001,0.38};
      iconScale=0.2;
      class compatibleItems: compatibleItems
      {
        muzzle_snds_h_mg_blk_F = 1;
        muzzle_snds_h_mg_khk_F = 1;
        muzzle_snds_h_mg = 1;
      };
    };
  };
};
class LMG_03_base_F: Rifle_Long_Base_F
{
  ACE_Overheating_allowSwapBarrel = 1;
  class FullAutoSlow: Mode_FullAuto
  {
    dispersion = "((1.2) * 0.00029088)";
  };
  class FullAutoFast: FullAutoSlow
  {
    dispersion = "((1.2) * 0.00029088)";
  };
  magazineReloadTime = 0;
  magazines[] =
  {
    "200Rnd_556x45_Box_Red_F",
    "200Rnd_556x45_Box_Tracer_Red_F",
  };
  magazineWell[] += {CBA_556x45_MINIMI};
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: asdg_MuzzleSlot_762MG
    {
      class compatibleItems: compatibleItems
      {
        hlc_muzzle_MAG58_Brake = 0;
        rhsusf_acc_ARDEC_M240 = 0;
        rhsusf_acc_rotex5_grey = 1;
        rhsusf_acc_rotex5_tan = 1;
        rhsusf_acc_nt4_black = 1;
        rhsusf_acc_nt4_tan = 1;
        hlc_muzzle_556NATO_KAC = 1;
        hlc_muzzle_556NATO_rotexiiic_tan = 1;
        hlc_muzzle_556NATO_rotexiiic_grey = 1;
        hlc_muzzle_556NATO_M42000 = 1;
      };
    };
    allowedSlots[]={901};
    mass = 154.4;
  };
};
class LMG_03_F;
class LMG_03_Vehicle_F: LMG_03_F
{
    cursor = "EmptyCursor";
    cursoraim = "mg";
    magazineReloadTime = 5.8;
};
class arifle_AK12_base_F: Rifle_Base_F
{
	rhsusf_acc_anpeq15 = 2;
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    mass = 82;
    class MuzzleSlot: asdg_MuzzleSlot_762R
    {
      iconPosition[]={0,0.34999999};
      iconScale=0.2;
      class compatibleItems: compatibleItems
      {
        muzzle_snds_B=1;
        muzzle_snds_B_khk_F=1;
        muzzle_snds_B_snd_F=1;
        muzzle_snds_B_arid_F=1;
        muzzle_snds_B_lush_F=1;
      };
    };
    class CowsSlot: asdg_OpticRail1913
    {
      iconPosition[]={0.5,0.25};
      iconScale=0.2;
    };
    class UnderBarrelSlot: asdg_UnderSlot
    {
      iconPosition[]={0.34999999,0.69999999};
      iconScale=0.30000001;
    };
  };
};
class arifle_AK12_GL_base_F: arifle_AK12_base_F
{
  class EGLM: UGL_F
  {
    magazines[] = {};
    magazineWell[] = {CBA_40mm_GP};
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    mass = 100;
  };
};
class arifle_AK12U_base_F: arifle_AK12_base_F
{
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    mass = 76;
    class CowsSlot: CowsSlot
    {
      iconPosition[]={0.40000001,0.25};
    };
    class UnderBarrelSlot: asdg_UnderSlot
    {
      iconPosition[]={0.23999999,0.69999999};
      iconScale=0.30000001;
    };
  };
};
class arifle_RPK12_base_F: arifle_AK12_base_F
{
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    mass = 114;
    class CowsSlot: CowsSlot
    {
      iconPosition[]={0.56999999,0.31};
      iconScale=0.17;
    };
  };
};
class DMR_01_base_F: Rifle_Long_Base_F
{
  class Single: Mode_SemiAuto {
      dispersion = "((.81) * 0.00029088)";
  };
  class FullAuto: Mode_FullAuto {
      dispersion = "((.81) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    allowedSlots[] = {901};
    class MuzzleSlot: asdg_MuzzleSlot_762R_SVD
    {
      class compatibleItems: compatibleItems
      {
        muzzle_snds_B=1;
        muzzle_snds_B_khk_F=1;
        muzzle_snds_B_snd_F=1;
        muzzle_snds_B_arid_F=1;
        muzzle_snds_B_lush_F=1;
      };
      iconPosition[]={0,0.44999999};
      iconScale=0.2;
    };
  };
};
class DMR_02_base_F: Rifle_Long_Base_F
{
  class Single: Mode_SemiAuto
  {
    dispersion = "((.7) * 0.00029088)";
    __ROF(350);
    class BaseSoundModeType;
    class StandardSound: BaseSoundModeType
    {
      soundSetShot[] = {"RHSUSF_m240_Shot_SoundSet","RHSUSF_rifle_med_Tail_SoundSet","RHSUSF_rifle2_Tail_SoundSet","DMR02_InteriorTail_SoundSet"};
      begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_01",5.01187,1,2200};
      begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_02",5.01187,1,2200};
      begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_03",5.01187,1,2200};
      soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
    };
    class SilencedSound: BaseSoundModeType
    {
      SoundSetShot[] = {"RHSGREF_sd_fnfal_Shot_SoundSet","RHSUSF_sd_mmg1_Tail_SoundSet","DMR02_silencerInteriorTail_SoundSet"};
      begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_short_01",1,1,500};
      begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\silencer_DMR_02_short_02",1,1,500};
      soundBegin[] = {"begin1",0.5,"begin2",0.5};
    };
    //DMR02_Shot_SoundSet
    //DMR02_silencerShot_SoundSet
    /*class StandardSound
    {
      soundSetShot[] = {"RHSUSF_m240_Shot_SoundSet","RHSUSF_rifle_med_Tail_SoundSet","RHSUSF_m240_stereoLayer_SoundSet"};
    };
    class SilencedSound
    {
      soundSetShot[] = {"RHSGREF_sd_fnfal_Shot_SoundSet","RHSGREF_sd_mmg1_Tail_SoundSet"};
    };*/
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    mass = 97.0034;
    allowedSlots[] = {901};
  };
};
class MMG_02_base_F: Rifle_Long_Base_F
{
  class manual: Mode_FullAuto
  {
    __MOA(1.7);
  };
};
class srifle_DMR_02_F: DMR_02_base_F
{
  ACE_barrelLength = 660;
};
class EBR_base_F: Rifle_Long_Base_F
{
  class Single: Mode_SemiAuto {
      dispersion = "((.9) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    allowedSlots[]={901};
    class MuzzleSlot: asdg_MuzzleSlot_762
    {
      iconPosition[]={0.050000001,0.38};
      iconScale=0.2;
    };
  };
};
class srifle_EBR_F;
class DMR_03_base_F: Rifle_Long_Base_F
{
  class Single: Mode_SemiAuto
  {
      dispersion = "((.79) * 0.00029088)";
  };
  class FullAuto: Mode_FullAuto
  {
      dispersion = "((.79) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    allowedSlots[] = {901};
    class MuzzleSlot: asdg_MuzzleSlot_762
    {
      iconPosition[]={0.12,0.43099999};
      iconScale=0.15000001;
    };
  };
};
class srifle_DMR_03_F: DMR_03_base_F
{
  magazineWell[] = {"CBA_762x51_AR10","CBA_762x51_AR10_L","CBA_762x51_AR10_XL"};
  magazines[] = {"APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag"};
};
class srifle_DMR_03_multicam_F: srifle_DMR_03_F
{
  scopeArsenal = 0;
};
class srifle_DMR_03_woodland_F: srifle_DMR_03_F
{
  scopeArsenal = 0;
};
class DMR_04_base_F: Rifle_Long_Base_F
{
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    allowedSlots[] = {901};
  };
};
class DMR_05_base_F: Rifle_Long_Base_F
{
  class Single: Mode_SemiAuto {
      dispersion = "((.72) * 0.00029088)";
  };
  class FullAuto: Mode_FullAuto {
      dispersion = "((.72) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    allowedSlots[] = {901};
  };
};
class DMR_06_base_F: Rifle_Long_Base_F
{
  class Single: Mode_SemiAuto {
      dispersion = "((1.2) * 0.00029088)";
  };
  class FullAuto: Mode_FullAuto {
      dispersion = "((1.2) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    allowedSlots[] = {901};
    class MuzzleSlot: asdg_MuzzleSlot_762
    {
      iconPosition[]={0.059999999,0.40000001};
      iconScale=0.15000001;
    };
  };
};
class DMR_06_hunter_base_F: DMR_06_base_F
{
  class Single: Single {
      dispersion = "((1.2) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: asdg_MuzzleSlot_762
    {
      iconPosition[]={0.059999999,0.40000001};
      iconScale=0.15000001;
    };
    class CowsSlot: asdg_OpticRail1913
    {
      iconPosition[]={0.51999998,0.36000001};
      iconScale=0.15000001;
    };
    class UnderBarrelSlot: asdg_UnderSlot
    {
      iconPosition[]={0.31999999,0.80000001};
      iconScale=0.30000001;
    };
  };
};
class DMR_07_base_F: Rifle_Long_Base_F
{
  class Single: Mode_SemiAuto
  {
      dispersion = "((1.3) * 0.00029088)";
  };
  class FullAuto: Mode_FullAuto
  {
      dispersion = "((1.3) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    allowedSlots[] = {901};
  };
};
class GM6_base_F: Rifle_Long_Base_F
{
  class Single: Mode_SemiAuto
  {
    dispersion="((0.45) * 0.00029088)";
    class BaseSoundModeType
    {
      closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Closure_01",1,1,30};
      closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Closure_02",1,1,30};
      soundClosure[] = {"closure1",0.5,"closure2",0.5};
    };
    class StandardSound: BaseSoundModeType
    {
      soundSetShot[] = {"DMR02_Shot_SoundSet","DMR02_Tail_SoundSet","M320_Tail_SoundSet","GM6Lynx_InteriorTail_SoundSet"};
      begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_01",5.01187,1,2200};
      begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_02",5.01187,1,2200};
      begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_03",5.01187,1,2200};
      soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
    };
    /*class BaseSoundModeType
    {
      closure1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Closure_01",1,1,30};
      closure2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_Closure_02",1,1,30};
      soundClosure[] = {"closure1",0.5,"closure2",0.5};
    };
    class StandardSound: BaseSoundModeType
    {
      SoundSetShot[] = {"DMR02_Shot_SoundSet","DMR02_Tail_SoundSet","DMR02_InteriorTail_SoundSet"};
      begin1[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_01",5.01187,1,2200};
      begin2[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_02",5.01187,1,2200};
      begin3[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR_02_short_03",5.01187,1,2200};
      soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin2",0.34};
    };*/
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    allowedSlots[] = {901};
    mass = 240;
  };
};
class srifle_GM6_F: GM6_base_F
{
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    allowedSlots[] = {901};
    mass = 240;
    class PointerSlot: asdg_FrontSideRail
    {
      iconPosition[]={0.050000001,0.38};
      iconScale=0.2;
    };
  };
  magazineWell[] = {"APM_50BMG_5"};
};
class LRR_base_F: Rifle_Long_Base_F
{
  class Single: Mode_SemiAuto
  {
    dispersion="((0.2) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    allowedSlots[] = {901};
  };
};
class srifle_LRR_F: LRR_base_F
{
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    allowedSlots[] = {901};
  };
};
class arifle_SPAR_01_base_F: Rifle_Base_F
{
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    mass = 69; //Nice.
  };
  class Single: Mode_SemiAuto {
      dispersion = "((1.12) * 0.00029088)";
  };
  class FullAuto: Mode_FullAuto {
      dispersion = "((1.12) * 0.00029088)";
  };
};
class arifle_SPAR_01_GL_base_F: arifle_SPAR_01_base_F
{
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    mass = 80;
  };
};
class arifle_SPAR_02_base_F: Rifle_Base_F
{
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    mass = 77;
  };
  class Single: Mode_SemiAuto {
      dispersion = "((1.12) * 0.00029088)";
  };
  class FullAuto: Mode_FullAuto {
      dispersion = "((1.12) * 0.00029088)";
  };
};
class arifle_SPAR_03_base_F: Rifle_Base_F
{
    class Single: Mode_SemiAuto {
        dispersion = "((0.81) * 0.00029088)";
    };

    class FullAuto: Mode_FullAuto {
        dispersion = "((0.81) * 0.00029088)";
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
      mass = 105;
    };
};
class arifle_MSBS65_base_F: Rifle_Base_F
{
  rhsusf_acc_anpeq15 = 2;
  class Single: Mode_SemiAuto
  {
    dispersion = "((1.7) * 0.00029088)";
  };
  class FullAuto: Mode_FullAuto
  {
      dispersion = "((1.7) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: asdg_MuzzleSlot_65
    {
      linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
      iconPosition[]={0,0.38};
      iconScale=0.2;
    };
    class CowsSlot: asdg_OpticRail1913
    {
      iconPosition[]={0.37,0.23999999};
      iconScale=0.2;
    };
    class PointerSlot: asdg_FrontSideRail
    {
      iconPosition[]={0.20999999,0.38};
      iconScale=0.2;
    };
  };
};
class arifle_MSBS65_Mark_base_F: arifle_MSBS65_base_F
{
  class Single: Single
  {
    dispersion = "((1.12) * 0.00029088)";
  };
  class FullAuto: FullAuto
  {
      dispersion = "((1.12) * 0.00029088)";
  };
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: asdg_MuzzleSlot_65
    {
      linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
      iconPosition[]={0,0.38};
      iconScale=0.2;
    };
    class CowsSlot: asdg_OpticRail1913
    {
      iconPosition[]={0.37,0.23999999};
      iconScale=0.2;
    };
    class PointerSlot: asdg_FrontSideRail
    {
      iconPosition[]={0.20999999,0.38};
      iconScale=0.2;
    };
    class UnderBarrelSlot: asdg_UnderSlot
    {
      iconPosition[]={0.23999999,0.69999999};
      iconScale=0.30000001;
    };
  };
};
class arifle_MSBS65_GL_base_F: arifle_MSBS65_base_F
{
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: asdg_MuzzleSlot_65
    {
      linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
      iconPosition[]={0,0.38};
      iconScale=0.2;
    };
    class CowsSlot: asdg_OpticRail1913
    {
      iconPosition[]={0.37,0.23999999};
      iconScale=0.2;
    };
    class PointerSlot: asdg_FrontSideRail
    {
      iconPosition[]={0.20999999,0.38};
      iconScale=0.2;
    };
  };
};
class arifle_MSBS65_UBS_base_F: arifle_MSBS65_base_F
{
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: asdg_MuzzleSlot_65
    {
      linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
      iconPosition[]={0.12,0.40000001};
      iconScale=0.2;
    };
    class CowsSlot: asdg_OpticRail1913
    {
      iconPosition[]={0.46000001,0.27000001};
      iconScale=0.2;
    };
    class PointerSlot: asdg_FrontSideRail
    {
      iconPosition[]={0.31,0.40000001};
      iconScale=0.2;
    };
  };
};
class SMG_05_base_F: Rifle_Short_Base_F
{
  magazineWell[] = {"CBA_9x19_MP5"};
};
class SMG_02_base_F;
class hgun_P07_F: Pistol_Base_F
{
  class Single: Mode_SemiAuto
  {
    __ROF(705);
  };
};
class hgun_Rook40_F: Pistol_Base_F
{
  displayName = "Rook-40 Machine Pistol";
  modes[] = {"Single", "FullAuto"};
  class Single: Mode_SemiAuto
  {
    __ROF(1100);
  };
  class FullAuto: Single
  {
    autofire = 1;
    displayname = "Full";
    textureType = "fullAuto";
    showToPlayer = 1;
    __ROF(1100);
  };
};
class hgun_ACPC2_F: Pistol_Base_F
{
  displayName = "Custom Covert .45";
  class WeaponSlotsInfo;
  hiddenSelectionsTextures[]=
  {
    "x\APM\Addons\Weapons\Data\ACP_BLK.paa"
  };
  class Single: Mode_SemiAuto
  {
    __ROF(705);
    __MOA(7);
  };
};
class hgun_9mmC2_F: hgun_ACPC2_F
{
  displayName = "Custom Covert 9mm";
  descriptionShort = "Handgun<br />Caliber: 9x19mm";
  magazines[] = {15rnd_9x21_m1911_mag};
  magazineWell[] = {};
  baseWeapon = "hgun_9mmC2_F";
  recoil = "recoil_pistol_2011";
  class WeaponSlotsInfo: WeaponSlotsInfo
  {
    class MuzzleSlot: asdg_MuzzleSlot_9MM
    {};
  };
};
class hgun_Pistol_heavy_01_F: Pistol_Base_F
{
  ACE_barrelLength = "(5.3) * 25.4";
};
class gatling_20mm;
class gatling_20mm_VTOL_01: gatling_20mm
{
  magazines[] = {"4000Rnd_20mm_Tracer_Red_shells","2000Rnd_20mm_shells","1000Rnd_20mm_shells","300Rnd_20mm_shells","1000Rnd_20mm_AP_shells"};
};
