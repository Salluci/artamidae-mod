class CfgMagazineWells
{
	class CBA_65x39_Katiba //Add new mags to Katiba
	{
		APM_mags[] =
		{
			"APM_30Rnd_65_Creedmor_k_mag",
			"APM_30Rnd_65_HPBT_k_mag"
		};
  };
	class MX_65x39_MSBS //Add new mags to MSBS
	{
		APM_mags[] =
		{
			"APM_30Rnd_65_Creedmor_MSBS_mag",
			"APM_30Rnd_65_CM_T_MSBS_Mag",
			"APM_30Rnd_65_HPBT_MSBS_mag"
		};
	};
	class APM_50BMG_5
	{
		APM_mags[] = {__APM50BMG5};
	};
	class CBA_50BMG_M107
	{
		APM_mags[] =
		{
			"apm_10rnd_50bmg_api_m107",
			"apm_10rnd_50bmg_amax_m107",
			"apm_5rnd_50bmg_heapi"
		};
	};
	class CBA_65x39_MX
	{
		APM_mags[] = {__APMMXMAGS};
	};
	class CBA_65C_AR10
	{
		APM_Mags[] =
		{
			"APM_20Rnd_65C_AR10_EPR_Mag",
			"APM_20Rnd_65C_AR10_HPBT_Mag",
			"APM_20Rnd_65C_AR10_Tracer_Mag"
		};
		ACE_ballistics[] = {};
	};
	class CBA_65x39_Mk200
	{
		APM_mags[] =
		{
			"apm_200rnd_65cm_cased_box",
			"apm_200rnd_65cm_cased_box_tracer",
			"apm_200rnd_65cm_hpbt_cased_box"
		};
	};
	class CBA_762x51_AR10 //Add new mags to SR-25
	{
		APM_mags[] = { __APMSR25MAGS};
	};
	class CBA_762x51_SCAR //Add new mags to SCAR-H
	{
		APM_mags[] =	{__APMSCARMAGS};
	};
	class CBA_762x51_M14
	{
		BI_magazines[] +=
		{
			"10Rnd_Mk14_762x51_Mag"
		};
		APM_mags[] = { __APMUNIVERSALMAGS, __APMM14MAGS};
	};
	class CBA_762x51_FAL //FAL
	{
		ace_ballistics[] = {};
	};
	class CBA_762x51_HK417 //HK417
	{
		APM_mags[] = {__APMUNIVERSALMAGS};
	};
	class CBA_762x51_G3 //G3
	{
		ace_ballistics[] = {};
		apm_mags[] = {__APMG3MAGS};
	};
	class CBA_338NM_LINKS
	{
		apm_mags[] =
		{
			"apm_130rnd_338nm_IRDIM_box",
			"apm_130rnd_338nm_tracer_box",
			"apm_60rnd_338nm_FMJ_box",
			"apm_60rnd_338nm_IRDIM_box",
			"apm_60rnd_338nm_tracer_box"
		};
	};
	class CBA_93x64_LINKS
	{
		apm_mags[] =
		{
			"apm_150rnd_93x64_IRDIM_Belt",
			"apm_150rnd_93x64_Tracer_Belt",
			"apm_80rnd_93x64_FMJ_Belt",
			"apm_80rnd_93x64_IRDIM_Belt",
			"apm_80rnd_93x64_Tracer_Belt"
		};
	};
	class Cyrus_93
	{
		apm_mags[] =
		{
			"apm_10rnd_93x64_IRDIM_Mag",
			"apm_10rnd_93x64_Tracer_Mag"
		};
	};
	class CBA_68SPC_STANAG //ACR
	{
		APM_mags[] ={	__APM68MAGS};
	};
	class CBA_40mm_M203
	{
		RHS_grenades[] = {__RHS40mmM203};
	};
	class CBA_40mm_GP
	{
		RHS_Magazines[] ={__RHS40mmGP};
	};
	class CBA_792x57_LINKS
	{
		RHS_belts[] = {"rhsgref_50Rnd_792x57_SmE_drum","rhsgref_50Rnd_792x57_SmE_notracers_drum","rhsgref_50Rnd_792x57_SmK_drum","rhsgref_50Rnd_792x57_SmK_alltracers_drum","rhsgref_296Rnd_792x57_SmE_belt","rhsgref_296Rnd_792x57_SmE_notracers_belt","rhsgref_296Rnd_792x57_SmK_belt","rhsgref_296Rnd_792x57_SmK_alltracers_belt"};
	};
	class CBA_556x45_MINIMI
	{
		RHS_boxes_extra[] = {"rhs_200rnd_556x45_M_SAW","rhs_200rnd_556x45_T_SAW","rhs_200rnd_556x45_B_SAW"};
	};
	class CBA_762x51_LINKS
	{
		RHS_belts[] = {"rhsusf_50Rnd_762x51","rhsusf_50Rnd_762x51_m61_ap","rhsusf_50Rnd_762x51_m62_tracer","rhsusf_50Rnd_762x51_m80a1epr","rhsusf_50Rnd_762x51_m82_blank","rhsusf_100Rnd_762x51","rhsusf_100Rnd_762x51_m61_ap","rhsusf_100Rnd_762x51_m62_tracer","rhsusf_100Rnd_762x51_m80a1epr","rhsusf_100Rnd_762x51_m82_blank","rhsusf_50Rnd_762x51_m993","rhsusf_100Rnd_762x51_m993"};
		NIA_belts[] = {"hlc_100Rnd_762x51_M_M60E4", "hlc_100Rnd_762x51_B_M60E4", "hlc_100Rnd_762x51_Barrier_M60E4", "hlc_100Rnd_762x51_T_M60E4", "hlc_100Rnd_762x51_Mdim_M60E4","hlc_200Rnd_762x51_B_M60E4","hlc_200Rnd_762x51_M_M60E4","hlc_200Rnd_762x51_Mdim_M60E4","hlc_200Rnd_762x51_Barrier_M60E4","hlc_200Rnd_762x51_T_M60E4"};
	};
	class CBA_303B_LeeEn
	{
		UK3CB_magazines[] = {"UK3CB_Enfield_Mag"};
		PO_magazines[] = {"LOP_10rnd_77mm_mag"};
	};
	class CBA_300WM_AI
	{
		RHS_magazines[] = {"rhsusf_5Rnd_300winmag_xm2010"};
		APM_mags[] = {"APM_5Rnd_300WM_OTM"};
	};
	class CBA_338LM_AI
	{
    ace_ballistics[] = {};
    APM_mags[] = {"APM_5Rnd_338LM_AP", "APM_5Rnd_338LM_FMJ", "APM_5Rnd_338LM_300gr"};
	};
};
