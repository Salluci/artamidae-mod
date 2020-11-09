#define __APMG3MAGS "apm_20rnd_762x51_ap_g3", "apm_20rnd_762x51_sblr_g3", "apm_20rnd_762x51_m61_g3"
#define __APMMXMAGS "APM_30Rnd_65_Creedmoor_black_mag", "APM_30Rnd_65_Creedmoor_khaki_mag", "APM_30Rnd_65x47_Scenar_Khaki_mag", "APM_30Rnd_65x47_Scenar_black_mag", "APM_30Rnd_65_Creedmoor_sand_tracer_mag", "APM_30Rnd_65_Creedmoor_khaki_tracer_mag", "APM_30Rnd_65_Creedmoor_black_tracer_mag"
#define __APMSR25MAGS "APM_20Rnd_762x51_SR25_M61_AP_Mag","APM_20Rnd_762x51_SR25_M80A1EPR_Ball_Mag","APM_20Rnd_762x51_SR25_M80_ball_mag","APM_20Rnd_762x51_SR25_Mk319_mag","APM_20Rnd_762x51_SR25_IRDIM_mag", "APM_20Rnd_762x51_SR25_BTSub_mag"
#define __APMSCARMAGS "APM_20Rnd_762x51_SCAR_mk319_Mag", "APM_20Rnd_762x51_SCAR_mk319_Mag_bk", "APM_20Rnd_762x51_SCAR_M993_AP_mag", "APM_20Rnd_762x51_SCAR_M993_AP_mag_bk", "APM_20Rnd_762x51_SCAR_SD_mag", "APM_20Rnd_762x51_SCAR_SD_mag_bk"
#define __APMM14MAGS "APM_20Rnd_762x51_M80A1EPR_mag", "apm_20rnd_762x51_AP_M14", "apm_20rnd_762x51_AP3_M14", "apm_20Rnd_762x51_EPR_M14", "apm_20rnd_762x51_LR_M14"
#define __APMUNIVERSALMAGS "APM_20Rnd_762x51_M61_AP_Mag", "APM_20Rnd_762x51_M80A1_EPR_Mag"
#define __APM68MAGS "apm_30rnd_68x43_FMJ_PMAG", "apm_30rnd_68x43_OTM_PMAG", "apm_30rnd_68x43_Sub_PMAG", "apm_30Rnd_68x43_Tracer_PMAG", "apm_30Rnd_68x43_IRDIM_PMAG", "apm_30rnd_68x43_FMJ_EMAG", "apm_30rnd_68x43_OTM_EMAG", "apm_30rnd_68x43_Sub_EMAG", "apm_30Rnd_68x43_Tracer_EMAG", "apm_30Rnd_68x43_IRDIM_EMAG"
#define __RHS40mmM203 "rhs_mag_M441_HE","rhs_mag_M433_HEDP","rhs_mag_M781_Practice","rhs_mag_M397_HET","rhs_mag_M4009","rhs_mag_m576","rhs_mag_M585_white","rhs_mag_M661_green","rhs_mag_M662_red","rhs_mag_M713_red","rhs_mag_M714_white","rhs_mag_M715_green","rhs_mag_M716_yellow"
#define __RHS40mmGP "rhs_VOG25","rhs_VOG25p","rhs_vg40tb","rhs_vg40sz","rhs_vg40op_white","rhs_vg40op_green","rhs_vg40op_red","rhs_GRD40_white","rhs_GRD40_green","rhs_GRD40_red","rhs_VG40MD","rhs_VG40MD_White","rhs_VG40MD_Green","rhs_VG40MD_Red","rhs_GDM40"
#define __APM50BMG5 "ACE_5Rnd_127x99_Mag", "ACE_5Rnd_127x99_API_Mag", "ACE_5Rnd_127x99_AMAX_Mag", "apm_5rnd_50bmg_heapi"

#define __mass6520 mass = 9.65;
#define __mass6530 mass = 12.06;
#define __mass65100 mass = 37.5;
#define __mass65200 mass = 76.98;

#define __mass65CM20 mass = 9.61;
#define __mass65CM30 mass = 14.41;
#define __mass65CM100 mass = 48.03;
#define __mass65CM200 mass = 96.07;

#define __mass556EPR30 mass = 9.4;
#define __mass556SBLR30 mass = 9.7;
#define __mass556SOST30 mass = 9.5;
#define __mass556AP30 mass = 9.2;

#define __ROF(rpm) reloadtime = (60/##rpm)
#define __MOA(__X) dispersion = __EVAL(__X * 0.0002909)
#define __DEXTERITY(__COMPONENTS,__MODIF) dexterity = __EVAL((3.75/__EVAL(__COMPONENTS + 0.001)) + __EVAL(__MODIF/10) + 0.4); aimTransitionSpeed = __EVAL(((3.75/__EVAL(__COMPONENTS + 0.001)) + __EVAL(__MODIF/10) + 0.4) * 0.7)
