class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail
{
	class compatibleItems
	{
		ACE_optic_LRPS_tna_2D = 1;
		ACE_optic_LRPS_ghex_2D = 1;
		ace_optic_hamr_khk_2d = 1;
		ace_optic_arco_blk_2d = 1;
		ace_optic_arco_arid_2d = 1;
		ace_optic_arco_lush_2d = 1;
		ace_optic_arco_ghex_2d = 1;
		optic_mrd = 1;
		optic_mrd_black = 1;
	};
};
class asdg_OpticRail1913_long: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
		optic_ico_01_f = 1;
		optic_ico_01_black_f = 1;
		optic_ico_01_sand_f = 1;
		optic_ico_01_camo_f = 1;
	};
};
class asdg_OpticRail1913_short: asdg_OpticRail1913
{
	class compatibleItems: compatibleItems
	{
    rhsusf_acc_LEUPOLDMK4 = 1;
    rhsusf_acc_LEUPOLDMK4_d = 1;
    rhsusf_acc_LEUPOLDMK4_wd = 1;
    rhsusf_acc_LEUPOLDMK4_2 = 1;
    rhsusf_acc_LEUPOLDMK4_2_d = 1;
    rhsusf_acc_LEUPOLDMK4_2_MRDS = 1;
    rhsusf_acc_premier = 1;
    rhsusf_acc_premier_low = 1;
	};
};
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
		rhsusf_acc_anpeq15_laser = 1;
		rhsusf_acc_anpeq15_bk_laser = 1;
		rhsusf_acc_anpeq15A_red = 1;
		rhsusf_acc_anpeq15side_red = 1;
		rhsusf_acc_anpeq15side_bk_red = 1;
		rhsusf_acc_anpeq15_top_red = 1;
		rhsusf_acc_anpeq15_bk_top_red = 1;
		rhsusf_acc_anpeq15_wmx_laser = 1;
		rhsusf_acc_anpeq16a_green = 1;
	};
};
class rhs_western_rifle_laser_slot_top: asdg_FrontSideRail //for weapons with clear top quad rail.
{
	class compatibleItems;
};
class rhs_western_rifle_laser_slot: rhs_western_rifle_laser_slot_top //for weapons with leaf sights for GL's and such.
{
	class compatibleItems: compatibleItems
	{
		rhsusf_acc_anpeq15_laser = 0;
		rhsusf_acc_anpeq15_bk_laser = 0;
		rhsusf_acc_anpeq15_top_red = 0;
		rhsusf_acc_anpeq15_bk_top_red = 0;
		rhsusf_acc_anpeq15_wmx_laser = 0;
	};
};
class asdg_UnderSlot: asdg_SlotInfo
{
	class compatibleItems;
};
class asdg_PistolUnderRail: asdg_SlotInfo
{
	class compatibleItems
	{
		rh_m6x = 1;
		rh_x2 = 1;
		rh_x300 = 1;
	};
};
class asdg_MuzzleSlot;
class asdg_MuzzleSlot_9MM;
class asdg_MuzzleSlot_556: asdg_MuzzleSlot
{
		class compatibleItems
		{
			hlc_muzzle_snds_rotex3p = 0;
			hlc_muzzle_gunfighter_comp = 0;
			hlc_muzzle_kx3_comp = 0;
			hlc_muzzle_sf3p_556 = 0;
			rhsusf_acc_sf3p556 = 0;
			rhsusf_acc_sfmb556 = 0;
		};
};
class asdg_MuzzleSlot_545R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		hlc_muzzle_sf3p_762r = 0;
		hlc_muzzle_snds_arsenalcomp = 0;
	};
};
class asdg_MuzzleSlot_762: asdg_MuzzleSlot
{
	class compatibleItems
	{
		hlc_muzzle_MAG58_Brake = 0;
		rhsusf_acc_ARDEC_M240 = 0;
		hlc_muzzle_snds_rotex3p = 0;
		hlc_muzzle_gunfighter_comp = 0;
		hlc_muzzle_sf3p_762r = 0;
		hlc_muzzle_kx3_comp = 0;
    rhsusf_acc_m2010s = 1;
   	rhsusf_acc_m2010s_d = 1;
   	rhsusf_acc_m2010s_sa = 1;
    rhsusf_acc_m2010s_wd = 1;
		uk3cb_muzzle_snds_M14 = 1;
		rhsusf_acc_aac_m14dcqd_silencer = 1;
		rhsusf_acc_aac_m14dcqd_silencer_d = 1;
		rhsusf_acc_aac_m14dcqd_silencer_wd = 1;
		rhsusf_acc_m14_flashsuppresor = 0;
	};
};
class asdg_MuzzleSlot_65: asdg_MuzzleSlot_762
{
		class compatibleItems: compatibleItems
		{
			hlc_muzzle_sf3p_68 = 0;
		};
};
class rhs_western_762rifle_muzzle_slot: asdg_MuzzleSlot_762
{
	class compatibleItems;
};
class asdg_MuzzleSlot_762MG: asdg_MuzzleSlot
{
	class compatibleItems
	{
		hlc_muzzle_MAG58_Brake = 0;
		rhsusf_acc_ARDEC_M240 = 0;
	};
};
class asdg_MuzzleSlot_762R: asdg_MuzzleSlot
{
	class compatibleItems
	{
		hlc_muzzle_sf3p_762 = 0;
		hlc_muzzle_snds_arsenalcomp = 0;
	};
};
class asdg_MuzzleSlot_762R_SVD: asdg_MuzzleSlot
{
	class compatibleItems
	{
		rhs_acc_tgpv = 1;
		rhs_acc_tgpv2 = 1;
	};
};
class UnderBarrelSlot;
class rhs_rifle_gripod_slot: UnderBarrelSlot
{
	class compatibleItems
	{
		rhsusf_acc_grip1 = 1;
		rhsusf_acc_grip2 = 1;
		rhsusf_acc_grip2_tan = 1;
		rhsusf_acc_grip2_wd = 1;
		rhsusf_acc_grip3 = 1;
		rhsusf_acc_grip3_tan = 1;
		rhs_acc_grip_rk2 = 1;
		rhs_acc_grip_rk6 = 1;
		rhs_acc_grip_ffg2 = 1;
		rhsusf_acc_rvg_blk = 1;
		rhsusf_acc_rvg_de = 1;
		rhsusf_acc_tacsac_blk = 1;
		rhsusf_acc_tacsac_tan = 1;
		rhsusf_acc_tacsac_blue = 1;
		rhsusf_acc_tdstubby_blk = 1;
		rhsusf_acc_tdstubby_tan = 1;
		rhsusf_acc_kac_grip = 1;
		hlc_grip_AFG2=1;
		hlc_grip_PMVFG=1;
	};
};
class nia_rifle_bipodsgrips_slot: asdg_UnderSlot
{
	class compatibleItems: compatibleItems
	{
		rhsusf_acc_grip1 = 1;
		rhsusf_acc_grip2 = 1;
		rhsusf_acc_grip2_tan = 1;
		rhsusf_acc_grip2_wd = 1;
		rhsusf_acc_grip3 = 1;
		rhsusf_acc_grip3_tan = 1;
		rhs_acc_grip_rk2 = 1;
		rhs_acc_grip_rk6 = 1;
		rhs_acc_grip_ffg2 = 1;
		rhsusf_acc_rvg_blk = 1;
		rhsusf_acc_rvg_de = 1;
		rhsusf_acc_tacsac_blk = 1;
		rhsusf_acc_tacsac_tan = 1;
		rhsusf_acc_tacsac_blue = 1;
		rhsusf_acc_tdstubby_blk = 1;
		rhsusf_acc_tdstubby_tan = 1;
		rhsusf_acc_kac_grip = 1;
		hlc_grip_AFG2=1;
		hlc_grip_PMVFG=1;
	};
};
class nia_rifle_grips_slot: UnderBarrelSlot //Why do both of these exist?
{
	displayName = "Gripod slot";
	class compatibleItems
	{
		rhsusf_acc_grip1 = 1;
		rhsusf_acc_grip2 = 1;
		rhsusf_acc_grip2_tan = 1;
		rhsusf_acc_grip2_wd = 1;
		rhsusf_acc_grip3 = 1;
		rhsusf_acc_grip3_tan = 1;
		rhs_acc_grip_rk2 = 1;
		rhs_acc_grip_rk6 = 1;
		rhs_acc_grip_ffg2 = 1;
		rhsusf_acc_rvg_blk = 1;
		rhsusf_acc_rvg_de = 1;
		rhsusf_acc_tacsac_blk = 1;
		rhsusf_acc_tacsac_tan = 1;
		rhsusf_acc_tacsac_blue = 1;
		rhsusf_acc_tdstubby_blk = 1;
		rhsusf_acc_tdstubby_tan = 1;
		rhsusf_acc_kac_grip = 1;
		hlc_grip_AFG2=1;
		hlc_grip_PMVFG=1;
	};
};
class rhs_Underslot_m249;
class rhs_Underslot_m249_ris: rhs_Underslot_m249
{
	class compatibleItems;
};
