#include "BIS_AddonInfo.hpp"
#include "script_macros.hpp"
class CfgPatches
{
	class APM_weapons
	{
		units[]={};
		weapons[]={};
		magazines[]={};
		requiredVersion=1.3200001;
		requiredAddons[]=
		{
			"A3_Data_F_Oldman_Loadorder",
			"ace_compat_rhs_usf3",
			"ace_compat_rhs_gref3",
			"ace_ballistics",
			"ace_smallarms",
			"ace_grenades",
			"ace_flashsuppressors", //Don't fucking ask.
			"hlcweapons_core",
			"cba_legacy_jr_prep"
		};
		name="APM Weapons";
		author="LinkIsParking";
	};
};

//Rails for Standard Modset
#include "cfgJointRails.hpp"


//Recoil Tweaks
#include "cfgRecoils.hpp"


//APM Magazines for Standard Modset
#include "cfgMagazines.hpp"


//Magwell Tweaks for Standard Modset
#include "cfgMagazineWells.hpp"


//Soundset, soundshader definitions for suppresed Negev NG7
#include "cfgSoundShaders.hpp"
#include "cfgSoundSets.hpp"

class cfgAmmo
{
	class BulletBase;
	class B_556x45_Ball;
	class B_762x51_Ball;

	//Ballistics Tweaks to NIArms ammo
	#include "weapons\NIA\cfgBallistics.hpp"
	class B_65x39_Caseless: BulletBase
	{
		hit = 15;
		caliber = 1.2;
		tracerEndTime = 4;
	};
	class ACE_65x47_Ball_Scenar: B_65x39_Caseless
	{
		hit = 13;
	};
	class B_338_Ball: BulletBase
  {
    caliber = 2.1;
    hit = 24;
		ACE_muzzleVelocities[]={881, 916, 926};
    ACE_barrelLengths[]={508.0, 660.4, 711.2};
		ACE_ballisticCoefficients[] = {0.349};
		airFriction = -0.00053383;
  };
  class ACE_338_Ball: B_338_Ball
  {
    caliber = 1.6;
    hit = 27;
		ACE_ballisticCoefficients[] = {0.421};
		ACE_muzzleVelocities[]={811, 831, 837};
		ACE_barrelLengths[]={508.0, 660.4, 711.2};
		airFriction = -0.00046105;
  };
  class ACE_338_Ball_API526: B_338_Ball
  {
    caliber = 2.8;
    hit = 20.2;
		ACE_barrelLengths[]={508.0, 680, 711.2};
		ACE_muzzleVelocities[]={880, 895, 900};
  };
  class ACE_762x67_Ball_Berger_Hybrid_OTM: B_762x51_Ball
  {
    caliber = 0.8;
    hit = 23;
  };
	class B_93x64_Ball: BulletBase
	{
		caliber = 2.5;
    hit = 26;
	};
	class B_93x64_IRDIM: B_93x64_Ball
	{
		nvgOnly = 1;
	};
  class B_338_NM_Ball: BulletBase
  {
    caliber = 2.2;
    hit = 18;
  };
	class B_338_NM_IRDIM: B_338_NM_Ball
	{
		nvgOnly = 1;
	};
	class B_127x108_Ball: BulletBase
	{
		hit = 60;
	};
	class B_127x108_APDS: B_127x108_Ball
	{
		hit = 75;
	};
	class B_127x99_Ball: BulletBase
	{
		hit = 50;
	};
	class ACE_127x99_API: B_127x99_Ball
	{
		hit = 40;
	};
	class B_127x99_SLAP: B_127x99_Ball
	{
		hit = 60;
	};
	class rhsusf_ammo_127x99_M33_Ball: B_127x99_Ball
	{
		hit = 50;
	};
	class rhsusf_ammo_127x99_mk211: rhsusf_ammo_127x99_M33_Ball
	{
    hit = 45;
    indirectHit = 4;
    indirectHitRange = 2;
    explosive = 0.2;
    caliber = 3.05761;
	};

	class MissileBase;
	class M_Titan_AT: MissileBase //RHS Compat for Titan Launcher
	{
			submunitionAmmo = "rhs_ammo_M_fgm148_AT_penetrator";
			submunitionDirectionType = "SubmunitionModelDirection";
			submunitionInitialOffset[] = {0,0,-0.2};
			submunitionInitSpeed = 1000;
			submunitionParentSpeedCoef = 0;
			warheadName = "TandemHEAT";
	};
	class ammo_Penetrator_base;
	class ammo_Penetrator_Titan_AT: ammo_Penetrator_base
	{
			warheadName = "TandemHEAT";
	};

	class Default;
	class Grenade: Default
	{
		deflecting=5;
		deflectionSlowDown=0.5;
	};
	class GrenadeHand: Grenade
	{
	};
	class mini_Grenade: GrenadeHand
	{
		deflecting=5;
	};
	class SmokeShell;
	class SmokeShellGreen;
	class SmokeShellYellow;
	class SmokeShellRed;
	class rhs_g_vog25;

	class G_40mm_Smoke: SmokeShell
	{
		simulation = "shotSmoke";
		deflectionSlowDown = 0.2;
	};
	class rhs_40mm_m713_red: SmokeShellRed
	{
		simulation = "shotSmoke";
		deflectionSlowDown = 0.2;
	};
	class rhs_40mm_m714_white: SmokeShell
	{
		simulation = "shotSmoke";
		deflectionSlowDown = 0.2;
	};
	class rhs_40mm_m715_green: SmokeShellGreen
	{
		simulation = "shotSmoke";
		deflectionSlowDown = 0.2;
	};
	class rhs_40mm_m716_yellow: SmokeShellYellow
	{
		simulation = "shotSmoke";
		deflectionSlowDown = 0.2;
	};
	class rhs_g_vg40md_white: rhs_g_vog25
	{
		simulation = "shotSmoke";
		deflectionSlowDown = 0.2;
	};
	class FlareCore;
	class FlareBase: FlareCore
	{
		timeToLive=80;
		brightness=200;
		intensity=1000000;
	};
	class F_40mm_White: FlareBase
	{
		timeToLive=60;
		brightness=125;
		intensity=1000000;
	};
	class ACE_40mm_Flare_white: F_40mm_White
	{
    intensity = 1.25e+006;
    timeToLive = 120;
    coefGravity = 0.2;
	};
	class Flare_82mm_AMOS_White: FlareCore
	{
		timeToLive=300;
		brightness=250;
		intensity=1500000;
		coefGravity = 0.2;
	};
	class rhs_ammo_an_m14_th3: SmokeShell
	{
		deflecting=2;
		deflectionSlowDown=0.3;
	};
};

//Base definitions

class Mode_FullAuto;
class Mode_Burst;
class Mode_SemiAuto;

class cfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class acc_flashlight;
	class acc_pointer_IR;
	class Rifle;
	class Pistol;
	class Rifle_Short_Base_F;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class Pistol_Base_F: Pistol
	{
		ACE_barrelTwist = 249;
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class bipod_01_F_snd: ItemCore
	{
		class ItemInfo;
	};

	//Vanilla Weapons
	#include "weapons\vanilla.hpp"

	//RHS Weapons
	#include "weapons\RHS.hpp"

	//NIArms Weapons
	#include "weapons\NIA.hpp"

	//3CB, LOP, etc. Weapons
	#include "weapons\Misc.hpp"

	//APM Optics
	#include "cfgOptics.hpp"
};
class cfgVehicles
{
	class B_Soldier_base_F;
	class B_Sharpshooter_F: B_Soldier_base_F //Fix for NATO Sharpshooter not having ammo.
	{
    magazines[] = {"APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
    respawnMagazines[] = {"APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
	};
	class Bag_Base;
	class B_Bergen_Base;
	class B_TacticalPack_Base: Bag_Base
	{
		maximumLoad = 260;
	};
	class B_Kitbag_Base: Bag_Base
	{
		mass = 45;
	};
	class UK3CB_B_Fieldpack: B_Bergen_Base
	{
		scope = 1;
		scopeArsenal = 0;
		maximumLoad = 280;
		mass = 50;
	};
	class UK3CB_B_Alice_D: B_Bergen_Base
	{
		maximumLoad = 240;
		mass = 50;
	};
	class UK3CB_B_Alice_Med_K:UK3CB_B_Alice_D
	{
		maximumLoad = 240;
	};
	class UK3CB_B_Alice_Bedroll_K: B_Bergen_Base
	{
		maximumLoad = 240;
	};
	class UK3CB_B_Alice_Medic_Bedroll_K: B_Bergen_Base
	{
		maximumLoad = 240;
	};
};
