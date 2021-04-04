#include "script_component.hpp"
class CfgPatches
{
	class ADDON
	{
		units[]={};
		weapons[]={};
		magazines[]={};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[]=
		{
			"apm_main",
			"cba_legacy_jr_prep"
		};
		name="APM Weapons";
		author="LinkIsParking";
		VERSION_CONFIG;
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
	class GrenadeBase;
	class B_556x45_Ball;
	class B_762x51_Ball;

	class B_20mm: BulletBase
	{
		indirectHitRange = 8;
		caliber = 2;
	};
	class B_20mm_AP: BulletBase
	{
		hit = 80;
		indirectHit = 12;
		caliber = 4;
	};
	class B_30mm_HE;
	class B_40mm_GPR: B_30mm_HE
	{
		indirectHitRange = 12;
	};
	class B_30mm_APFSDS;
	class B_40mm_APFSDS: B_30mm_APFSDS
	{
		caliber = 12;
	};
	class Sh_125mm_HEAT;
	class Sh_105mm_HEAT_MP: Sh_125mm_HEAT
	{
		hit = 125;
		indirectHit = 30;
		indirectHitRange = 25;
	};

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
	class ammo_Penetrator_base;
	class ammo_Penetrator_105mm: ammo_Penetrator_base
	{
		caliber = 45;
	};

	class Default;
	class Grenade: Default
	{
		deflecting=5;
		deflectionSlowDown = 0.2;
	};
	class GrenadeHand: Grenade
	{
		hit = 16;
		indirectHit = 16;
		indirectHitRange = 8;
	};
	class mini_Grenade: GrenadeHand
	{
		deflecting=5;
		hit = 12;
		indirectHit = 12;
		indirectHitRange = 6;
	};
	class SmokeShell;
	class SmokeShellGreen;
	class SmokeShellYellow;
	class SmokeShellRed;
	class rhs_g_vog25;

	class G_40mm_HE: GrenadeBase
	{
		indirectHit = 35;
		indirectHitRange = 10.7;
	};
	class G_40mm_HEDP: G_40mm_HE
	{
		indirectHit = 15;
		indirectHitRange = 3.6;
	};
	class rhsusf_40mm_HE: G_40mm_HE
	{
		indirectHit = 35;
	};
	class rhsusf_40mm_HEDP: rhsusf_40mm_HE
	{
		indirectHit = 15;
	};

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
		deflecting=1;
		deflectionSlowDown=0.2;
		explosive = 0.01;
	};
	class ACE_G_M14: SmokeShell
	{
		explosive = 0.01;
	};
};

//Base definitions

class Mode_FullAuto;
class Mode_Burst;
class Mode_SemiAuto;

class cfgWeapons
{
	class ItemCore;
	class ACE_ItemCore;
	class InventoryItem_Base_F;
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
	class ACE_IR_Strobe_Item: ACE_ItemCore
	{
		ACE_Attachable = "MS_Strobe_Ammo_1";
	};
	class InventoryFlashLightItem_Base_F;
	class acc_flashlight: ItemCore
	{
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
			 color[]={600,750,900};
			 ambient[]={10,7.5,5};
			 position="flash dir";
			 direction="flash";
			 size=1;
			 innerAngle=24;
			 outerAngle=30;
			 coneFadeCoef=3;
			 intensity=350;
			 useFlare=1;
			 dayLight=1;
			 FlareSize=0.69999999;
			 flareMaxDistance=250;
			 onlyInNvg=0;
			 scale[]={0};
			 class Attenuation
			 {
			  start=40;
			  constant=80;
			  linear=50;
			  quadratic=12;
			  hardLimitStart=140;
			  hardLimitEnd=180;
			 };
			};
		};
	};
	class acc_flashlight_pistol: ItemCore
	{
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
			 color[]={600,750,900};
			 ambient[]={10,7.5,5};
			 position="flash dir";
			 direction="flash";
			 size=1;
			 innerAngle=24;
			 outerAngle=30;
			 coneFadeCoef=3;
			 intensity=350;
			 useFlare=1;
			 dayLight=1;
			 FlareSize=0.69999999;
			 flareMaxDistance=250;
			 onlyInNvg=0;
			 scale[]={0};
			 class Attenuation
			 {
			  start=40;
			  constant=80;
			  linear=50;
			  quadratic=12;
			  hardLimitStart=140;
			  hardLimitEnd=180;
			 };
			};
		};
	};
	class ACE_Flashlight_Maglite_ML300L: Pistol_Base_F
	{
		class FlashLight
		{
		 color[]={600,750,900};
		 ambient[]={10,7.5,5};
		 position="flash dir";
		 direction="flash";
		 size=1;
		 innerAngle=24;
		 outerAngle=30;
		 coneFadeCoef=3;
		 intensity=350;
		 useFlare=1;
		 dayLight=1;
		 FlareSize=0.69999999;
		 flareMaxDistance=250;
		 onlyInNvg=0;
		 scale[]={0};
		 class Attenuation
		 {
			start=40;
			constant=80;
			linear=50;
			quadratic=12;
			hardLimitStart=140;
			hardLimitEnd=180;
		 };
		};
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
	class VTOL_base_F;
	class VTOL_01_base_F: VTOL_base_F
  {
    class Turrets;
  };
	class VTOL_01_armed_base_F: VTOL_01_base_F
  {
    class NewTurret;
    class Turrets: Turrets
    {
      class GunnerTurret_01: NewTurret
      {
        magazines[] = {"100Rnd_105mm_HEAT_MP","40Rnd_105mm_APFSDS_T_Red","4000Rnd_20mm_Tracer_Red_shells","1000Rnd_20mm_AP_shells"};
        minElev = -40;
        minTurn = 65;
        maxTurn = 115;
      };
      class GunnerTurret_02: GunnerTurret_01
      {
        magazines[] = {"240Rnd_40mm_GPR_Tracer_Red_shells","240Rnd_40mm_GPR_Tracer_Red_shells","160Rnd_40mm_APFSDS_Tracer_Red_shells","160Rnd_40mm_APFSDS_Tracer_Red_shells"};
        minElev = -40;
        minTurn = 65;
        maxTurn = 115;
      };
    };
  };
};
