class InventoryOpticsItem_Base_F;
class optic_dms: ItemCore
{
  displayName = "Burris RT-6 1-6x24mm";
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class Snip
      {
        discretefov[] = {"0.25","0.125","0.25 / 3", "0.0625","0.25 / 5","0.25 / 6"};
        modelOptics[] = {"\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_F", "\A3\Weapons_F_EPA\acc\reticle_marksman_z_F"};
        opticsZoomMin = "0.249 / 6";
        opticsZoomMax = "0.249 / 1";
        opticsZoomInit = 0.75;
        visionMode[] = {};
      };
    };
  };
};
class optic_DMS_weathered_F: optic_dms
{
  displayName = "Burris RT-6 1-6x24mm (Old)";
};
class optic_dms_ghex_F: optic_dms
{
  displayName = "Burris RT-6 1-6x24mm (G-Hex)";
};
class optic_DMS_weathered_kir_F: optic_DMS_weathered_F
{
  scopeArsenal = 0;
};
class optic_Hamr: ItemCore
{
  displayName = "Leupold Mark 4 HAMR (Black/3D)";
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class Hamr2Scope
      {
        opticsZoomMin = "0.249 / 4";
        opticsZoomMax = "0.249 / 2";
        opticsZoomInit = 0.75;
      };
    };
  };
};
class optic_hamr_khk_f: optic_hamr
{
  displayName = "Leupold Mark 4 HAMR (Khaki/3D)";
};
class ace_optic_hamr_2d: optic_hamr
{
  displayName = "Leupold Mark 4 HAMR (Black/2D)";
  class ItemInfo: ItemInfo
  {
    class OpticsModes: OpticsModes
    {
      class Hamr2Scope: Hamr2Scope
      {
        opticsZoomMin = "0.249 / 4";
        opticsZoomMax = "0.249 / 4";
        opticsZoomInit = "0.249 / 4";
        visionMode[] = {};
      };
    };
  };
};
class ace_optic_hamr_pip: ace_optic_hamr_2d
{
  displayName = "Leupold Mark 4 HAMR (Black/PIP)";
  scope = 1;
};
class ace_optic_hamr_khk_2d: ace_optic_hamr_2d
{
  displayName = "Leupold Mark 4 HAMR (Khaki/2D)";
  model = "\A3\Weapons_F\Acc\acco_hamr_khk_f.p3d";
  picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Hamr_khk_F_ca.paa";
};
class optic_mrco: ItemCore
{
  displayName = "IOR-Valdada Pitbull II (3D)";
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class MRCOscope
      {
        opticsZoomMin = 0.0625;
      };
    };
  };
};
class ace_optic_mrco_2d: optic_mrco
{
  class ItemInfo: ItemInfo
  {
    class OpticsModes: OpticsModes
    {
      class MRCOscope: MRCOscope
      {
        opticsZoomInit = 0.0625;
        opticsZoomMax = 0.0625;
        opticsZoomMin = 0.0625;
        visionMode[] = {};
      };
    };
  };
};
class optic_arco: ItemCore
{
  displayName = "ELCAN SpecterOS 4x (Tan/3D)";
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class ARCO2scope
      {
        opticsZoomMin = "0.249 / 4";
        opticsZoomMax = "0.249 / 2";
        opticsZoomInit = 0.75;
      };
    };
  };
};
class ace_optic_arco_2d: optic_arco
{
  displayName = "ELCAN SpecterOS 4x (Tan/2D)";
  class ItemInfo: ItemInfo
  {
    class OpticsModes: OpticsModes
    {
      class ARCO2scope: ARCO2scope
      {
        opticsZoomMin = "0.249 / 4";
        opticsZoomMax = "0.249 / 4";
        opticsZoomInit = 0.75;
        visionMode[] = {};
      };
    };
  };
};
class ace_optic_arco_pip: ace_optic_arco_2d
{
  displayName = "ELCAN SpecterOS 4x (Tan/PIP)";
  scope = 1;
  class ItemInfo: ItemInfo
  {
    class OpticsModes: OpticsModes
    {
      class ARCO2scope: ARCO2scope
      {
        opticsZoomMin = "0.249 / 4";
        opticsZoomMax = "0.249 / 4";
        opticsZoomInit = 0.75;
      };
    };
  };
};
class optic_arco_blk_f: optic_arco
{
  displayName = "ELCAN SpecterOS 4x (Black/3D)";
};
class ace_optic_arco_blk_2d: ace_optic_arco_2d
{
  ace_optics_BodyDay = "\APM_Weapons\Data\Elcan.paa";
  ace_optics_BodyNight = "\APM_Weapons\Data\Elcan.paa";
  displayName = "ELCAN SpecterOS 4x (Black/2D)";
  model = "\A3\Weapons_F\Acc\acco_arco_blk_F.p3d";
  picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Arco_blk_F_ca.paa";
};
class optic_arco_ghex_f: optic_arco
{
  displayName = "ELCAN SpecterOS 4x (G-Hex/3D)";
};
class ace_optic_arco_ghex_2d: ace_optic_arco_2d
{
  ace_optics_BodyDay = "\z\ace\addons\optics\reticles\arco-bodyNight_ca.paa";
  displayName = "ELCAN SpecterOS 4x (G-Hex/2D)";
  model = "\A3\Weapons_F\Acc\acco_arco_ghex_F.p3d";
  picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_Arco_ghex_F_ca.paa";
};
class optic_arco_arid_f: optic_arco
{
  displayName = "ELCAN SpecterOS 4x (Arid/3D)";
};
class ace_optic_arco_arid_2d: ace_optic_arco_2d
{
  displayName = "ELCAN SpecterOS 4x (Arid/2D)";
  model = "\A3\Weapons_F\Acc\acco_arco_arid_F.p3d";
  picture = "\a3\Weapons_F_Enoch\Acc\Data\UI\icon_optic_Arco_arid_F_ca.paa";
};
class optic_arco_lush_f: optic_arco
{
  displayName = "ELCAN SpecterOS 4x (Lush/3D)";
};
class ace_optic_arco_lush_2d: ace_optic_arco_2d
{
  ace_optics_BodyDay = "\z\ace\addons\optics\reticles\arco-bodyNight_ca.paa";
  displayName = "ELCAN SpecterOS 4x (Lush/2D)";
  model = "\A3\Weapons_F\Acc\acco_arco_lush_F.p3d";
  picture = "\a3\Weapons_F_Enoch\Acc\Data\UI\icon_optic_Arco_lush_F_ca.paa";
};
class optic_Arco_AK_blk_F: optic_arco
{
  scope = 1;
};
class optic_Arco_AK_lush_F: optic_arco
{
  scope = 1;
};
class optic_Arco_AK_arid_F: optic_arco
{
  scope = 1;
};
class optic_KHS_base: ItemCore
{
  descriptionShort = "KAHLES Helia 2<br />Magnification: 4x–12x";
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class KHS
      {
        discretefov[] = {"0.25 / 4", "0.25 / 6", "0.25 / 8", "0.25 / 10", "0.25 / 12"};
        modelOptics[] = {"\A3\Weapons_F_Mark\Acc\reticle_acco_khs_F","\A3\Weapons_F_Mark\Acc\reticle_acco_khs_F","\A3\Weapons_F_Mark\Acc\reticle_acco_khs_F","\A3\Weapons_F_Mark\Acc\reticle_acco_khs_z_F"};
        opticsZoomMin = "0.25 / 12";
        opticsZoomMax = "0.25 / 4";
        opticsZoomInit = "0.25 / 4";
      };
    };
  };
};
class optic_KHS_blk: optic_KHS_base
{
  displayName = "KAHLES Helia 2 4-12x56mm (Black/3D)";
};
class optic_KHS_hex: optic_KHS_blk
{
  displayName = "KAHLES Helia 2 4-12x56mm (Hex/3D)";
};
class optic_KHS_tan: optic_KHS_blk
{
  scope = 2;
  displayName = "KAHLES Helia 2 4-12x56mm (Tan/3D)";
};
class optic_KHS_old: ItemCore
{
  displayName = "KAHLES Helia 2 4-12x56mm (Old/3D)";
  descriptionShort = "KAHLES Helia 2<br />Magnification: 4x–12x";
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class KHS
      {
        discretefov[] = {"0.25 / 4", "0.25 / 6", "0.25 / 8", "0.25 / 10", "0.25 / 12"};
        modelOptics[] = {"\A3\Weapons_F_Mark\Acc\reticle_acco_khs_F","\A3\Weapons_F_Mark\Acc\reticle_acco_khs_F","\A3\Weapons_F_Mark\Acc\reticle_acco_khs_F","\A3\Weapons_F_Mark\Acc\reticle_acco_khs_z_F"};
        opticsZoomMin = "0.25 / 12";
        opticsZoomMax = "0.25 / 4";
        opticsZoomInit = "0.25 / 4";
      };
    };
  };
};
class optic_AMS_base: ItemCore
{
  descriptionShort = "US Optics MR-10<br />Magnification: 1.8x–10x";
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class AMS
      {
        discretefov[] = {"0.25 / 1.8", "0.25 / 3.6", "0.25 / 5.4", "0.25 / 7.2", "0.25 / 10"};
        modelOptics[] = {"\A3\Weapons_F_Mark\Acc\reticle_acco_ams_F", "\A3\Weapons_F_Mark\Acc\reticle_acco_ams_F", "\A3\Weapons_F_Mark\Acc\reticle_acco_ams_z_F"};
        opticsZoomMin = "0.25 / 10";
        opticsZoomMax = "0.25 / 1.8";
        opticsZoomInit = "0.25 / 1.8";
      };
    };
  };
};
class optic_AMS: optic_AMS_base
{
  displayName = "US Optics MR-10 1.8-10x37mm (Black/3D)";
  descriptionShort = "US Optics MR-10<br />Magnification: 1.8x–10x";
};
class optic_AMS_khk: optic_AMS
{
  displayName = "US Optics MR-10 1.8-10x37mm (Khaki/3D)";
};
class optic_AMS_snd: optic_AMS
{
  displayName = "US Optics MR-10 1.8-10x37mm (Tan/3D)";
};
class optic_SOS: ItemCore
{
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class Snip
      {
        opticsZoomMin = "0.25 / 5";
        opticsZoomMax = "0.25 / 2.5";
        opticsZoomInit = "0.25 / 2.5";
        discretefov[] = {"0.25 / 2.5", "0.25 / 5"};
      };
    };
  };
};
class ACE_optic_SOS_2D: optic_SOS
{
  displayName = "MOS (Khaki/2D)";
  class ItemInfo: ItemInfo
  {
    class OpticsModes: OpticsModes
    {
      class Snip: Snip
      {
        opticsZoomMin = "0.25 / 5";
        opticsZoomMax = "0.25 / 2.5";
        opticsZoomInit = "0.25 / 2.5";
        discretefov[] = {"0.25 / 2.5", "0.25 / 5"};
      };
    };
  };
};
class ACE_optic_SOS_khk_2D: ACE_optic_SOS_2D
{
  model = "\A3\Weapons_F\Acc\acco_sniper_khk_F.p3d";
  picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_SOS_khk_F_ca.paa";
};
class ACE_optic_SOS_PIP: ACE_optic_SOS_2D
{
  scope = 1;
  class ItemInfo: ItemInfo
  {
    class OpticsModes: OpticsModes
    {
      class Snip: Snip
      {
        opticsZoomMin = "0.25 / 5";
        opticsZoomMax = "0.25 / 2.5";
        opticsZoomInit = "0.25 / 2.5";
        discretefov[] = {"0.25 / 2.5", "0.25 / 5"};
      };
    };
  };
};
class optic_lrps: ItemCore
{
  displayName = "Nightforce NXS 5.5-22x56mm (Black/3D)";
  descriptionShort = "Long-Range Precision Scope<br />Magnification: 5.5x–22x";
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class Snip
      {
        discretefov[] = {"0.25 / 5.5", "0.25 / 6", "0.25 / 6.5", "0.25 / 7", "0.25 / 7.5", "0.25 / 8", "0.25 / 10", "0.25 / 12", "0.25 / 15", "0.25 / 18", "0.25 / 22"};
        opticsZoomMin = "0.25 / 22";
        opticsZoomMax = "0.25 / 5.5";
        opticsZoomInit = "0.25 / 5.5";
      };
    };
  };
};
class ACE_optic_LRPS_2D: optic_LRPS
{
  displayName = "Nightforce NXS 5.5-22x56mm (Black/2D)";
  descriptionShort = "Long-Range Precision Scope<br />Magnification: 5.5x–22x";
  class ItemInfo: ItemInfo
  {
    class OpticsModes: OpticsModes
    {
      class Snip: Snip
      {
        opticsZoomMin = "0.25 / 22";
        opticsZoomMax = "0.25 / 5.5";
        opticsZoomInit = "0.25 / 5.5";
      };
    };
  };
};
class ACE_optic_LRPS_PIP: ACE_optic_LRPS_2D
{
  displayName = "Nightforce NXS 5.5-22x56mm (Black/PIP)";
  descriptionShort = "Long-Range Precision Scope<br />Magnification: 5.5x–22x";
  scope = 1;
  class ItemInfo: ItemInfo
  {
    class OpticsModes: OpticsModes
    {
      class Snip: Snip
      {
        opticsZoomMin = "0.25 / 22";
        opticsZoomMax = "0.25 / 5.5";
        opticsZoomInit = "0.25 / 5.5";
      };
    };
  };
};
class optic_LRPS_ghex_F: optic_LRPS
{
  displayName = "Nightforce NXS 5.5-22x56mm (G-Hex/3D)";
};
class ACE_optic_LRPS_ghex_2D: ACE_optic_LRPS_2D
{
  displayName = "Nightforce NXS 5.5-22x56mm (G-Hex/2D)";
  model = "\A3\Weapons_F\Acc\acco_sniper02_ghex_F.p3d";
  picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_LRPS_ghex_F_ca.paa";
};
class optic_LRPS_tna_F: optic_LRPS
{
  displayName = "Nightforce NXS 5.5-22x56mm (Jungle/3D)";
};
class ACE_optic_LRPS_tna_2D: ACE_optic_LRPS_2D
{
  displayName = "Nightforce NXS 5.5-22x56mm (Jungle/2D)";
  model = "\A3\Weapons_F\Acc\acco_sniper02_tna_F.p3d";
  picture = "\a3\Weapons_F_Exp\Acc\Data\UI\icon_optic_LRPS_tna_F_ca.paa";
};
class rhsusf_acc_sniper_base: ItemCore
{
  class ItemInfo: InventoryOpticsItem_Base_F
	{
    class OpticsModes
		{
      class pso1_scope
      {
        opticsZoomMax = 0.25/3.5;
				opticsZoomMin = 0.25/10;
				opticsZoomInit = 0.25/3.5;
				discretefov[] = {0.25/3.5,0.25/10};
      };
    };
  };
};
class rhsusf_acc_acog: rhsusf_acc_sniper_base
{
  class ItemInfo: ItemInfo
  {
    class OpticsModes
    {
      class elcan_scope
      {
        discreteDistance[] = {300};
        distanceZoomMin = 300;
        opticsPPEffects[] = {"OpticsCHAbera5","OpticsBlur5"};
        opticsZoomMin = 0.0625;
        opticsZoomMax = 0.0625;
        opticsZoomInit = 0.0625;
      };
    };
  };
};
class rhsusf_acc_acog_3d: rhsusf_acc_acog
{
  class ItemInfo: ItemInfo
  {
    class OpticsModes: OpticsModes
    {
      class elcan_scope: elcan_scope
      {
        opticsZoomMin = 0.0625;
        opticsZoomMax = 0.125;
        opticsZoomInit = 0.75;
      };
    };
  };
};
class rhsusf_acc_su230_base: ItemCore
{
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes;
  };
};
class rhsusf_acc_su230_base_3d: rhsusf_acc_su230_base
{
  class ItemInfo: ItemInfo
  {
    class OpticsModes: OpticsModes
    {
      class Elcan_x4
      {
        opticsID = 2;
        useModelOptics = 0;
        opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
        discreteDistance[] = {100};
        discreteDistanceInitIndex = 0;
        opticsZoomMin = 0.0625;
        opticsZoomMax = 0.125;
        opticsZoomInit = 0.55;
        memoryPointCamera = "opticView";
        visionMode[] = {};
        opticsFlare = 1;
        opticsDisablePeripherialVision = 1;
        distanceZoomMin = 100;
        distanceZoomMax = 100;
        cameraDir = "";
      };
    };
  };
};
class rhsusf_acc_su230_mrds_base: rhsusf_acc_su230_base
{
  class ItemInfo: ItemInfo
  {
    class OpticsModes;
  };
};
class rhsusf_acc_su230_mrds_base_3d: rhsusf_acc_su230_mrds_base
{
  class ItemInfo: ItemInfo
  {
    class OpticsModes: OpticsModes
    {
      class Elcan_x4
      {
        opticsID = 2;
        useModelOptics = 0;
        opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1","rhs_su230_Blur"};
        discreteDistance[] = {100};
        discreteDistanceInitIndex = 0;
        opticsZoomMin = 0.0625;
        opticsZoomMax = 0.125;
        opticsZoomInit = 0.55;
        memoryPointCamera = "opticView";
        visionMode[] = {};
        opticsFlare = 1;
        opticsDisablePeripherialVision = 1;
        distanceZoomMin = 100;
        distanceZoomMax = 100;
        cameraDir = "";
      };
    };
  };
};
class rhsusf_acc_LEUPOLDMK4_2: rhsusf_acc_sniper_base
{
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class pso1_scope
      {
        opticsZoomMax = "0.25/6.5";
        opticsZoomMin = "0.25/20";
        opticsZoomInit = "0.25/6.5";
        discretefov[] = {"0.25/6.5","0.25/20"};
      };
    };
  };
};
class rhs_acc_dh520x56: ItemCore
{
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class dedal_520
      {
        opticsZoomMin = "0.25 / 20";
        opticsZoomMax = "0.25 / 5";
        opticsZoomInit = "0.25 / 5";
      };
    };
  };
};
class SMA_ELCAN_SPECTER: ItemCore //Removes 2x Elcan's from the Arsenal
{
  scopeArsenal = 0;
};
class SMA_ELCAN_SPECTER_ARDRDS: ItemCore
{
  scopeArsenal = 0;
};
class SMA_ELCAN_SPECTER_RDS: ItemCore
{
  scopeArsenal = 0;
};
class SMA_ELCAN_SPECTER_4z: ItemCore
{
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class IronSight
      {
        opticsZoomInit = 0.75;
        opticsZoomMax = 0.75;
      };
    };
  };
};
class SMA_ELCAN_SPECTER_ARDRDS_4z: ItemCore
{
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class IronSight
      {
        opticsZoomInit = 0.75;
        opticsZoomMax = 0.75;
      };
    };
  };
};
class SMA_ELCAN_SPECTER_RDS_4z: ItemCore
{
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class IronSight
      {
        opticsZoomInit = 0.75;
        opticsZoomMax = 0.76;
      };
    };
  };
};
class SMA_ELCAN_SPECTER_GREEN_4z: ItemCore
{
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class IronSight
      {
        opticsZoomInit = 0.75;
        opticsZoomMax = 0.75;
      };
    };
  };
};
class SMA_ELCAN_SPECTER_GREEN_ARDRDS_4z: ItemCore
{
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class IronSight
      {
        opticsZoomInit = 0.75;
        opticsZoomMax = 0.75;
      };
    };
  };
};
class SMA_ELCAN_SPECTER_GREEN_RDS_4z: ItemCore
{
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class IronSight
      {
        opticsZoomInit = 0.75;
        opticsZoomMax = 0.75;
      };
    };
  };
};
class SMA_ELCAN_SPECTER_TAN_4z: ItemCore
{
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class IronSight
      {
        opticsZoomInit = 0.75;
        opticsZoomMax = 0.75;
      };
    };
  };
};
class SMA_ELCAN_SPECTER_TAN_ARDRDS_4z: ItemCore
{
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class IronSight
      {
        opticsZoomMax = 0.75;
        opticsZoomInit = 0.75;
      };
    };
  };
};
class SMA_ELCAN_SPECTER_TAN_RDS_4z: ItemCore
{
  class ItemInfo: InventoryOpticsItem_Base_F
  {
    class OpticsModes
    {
      class IronSight
      {
        opticsZoomInit = 0.75;
        opticsZoomMax = 0.75;
      };
    };
  };
};
