////////////////////////////////////////////////////////////////////
//DeRap: APM_weapons\legacy_jr_prep\config.bin
//Produced from mikero's Dos Tools Dll version 7.46
//https://bytex.market/products/item/weodpphdknnzm70o0h8q/Mikero%27s%20Dos%20Tools
//'now' is Sun Jun 28 18:25:03 2020 : 'file' last modified on Sun Jun 28 04:26:34 2020
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class cba_legacy_jr_prep
	{
		author = "$STR_CBA_Author";
		name = "$STR_cba_legacy_jr_component";
		url = "$STR_CBA_URL";
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.98;
		requiredAddons[] = {"cba_jr", "ace_flashsuppressors"};
		version = 3.15;
	};
};
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete PointerSlot;
		};
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete PointerSlot;
		};
	};
	class arifle_MX_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete PointerSlot;
		};
	};
	class arifle_MX_GL_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete PointerSlot;
		};
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete PointerSlot;
		};
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete PointerSlot;
		};
	};
	class arifle_AK12_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete CowsSlot;
		};
	};
	class arifle_AK12_F: arifle_AK12_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete CowsSlot;
			delete UnderBarrelSlot;
		};
	};
	class arifle_AK12_lush_F: arifle_AK12_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete CowsSlot;
			delete UnderBarrelSlot;
		};
	};
	class arifle_AK12_arid_F: arifle_AK12_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete CowsSlot;
			delete UnderBarrelSlot;
		};
	};
	class arifle_AK12_GL_base_F: arifle_AK12_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo{};
	};
	class arifle_AK12_GL_F: arifle_AK12_GL_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete CowsSlot;
		};
	};
	class arifle_AK12_GL_lush_F: arifle_AK12_GL_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete CowsSlot;
		};
	};
	class arifle_AK12_GL_arid_F: arifle_AK12_GL_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete CowsSlot;
		};
	};
	class arifle_AK12U_base_F: arifle_AK12_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete CowsSlot;
			delete UnderBarrelSlot;
		};
	};
	class arifle_RPK12_base_F: arifle_AK12_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
			delete CowsSlot;
		};
	};
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
		};
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
		};
	};
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
		};
	};
	class DMR_06_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
		};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			delete MuzzleSlot;
		};
	};
};
