#include "script_component.hpp"
class CfgPatches
{
  class ADDON
  {
    units[]={};
		weapons[]={};
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[]=
		{
      "A3_Data_F_Oldman_Loadorder",
      "ace_main",
      "rhs_main_loadorder",
      "rhsusf_main_loadorder",
      "rhssaf_main_loadorder",
      "rhsgref_main_loadorder",
      "hlcweapons_core",
      "ace_smallarms",
      "ace_ballistics",
      "ace_grenades",
      "ace_attach",
      "ace_medical",
      "ace_advanced_ballistics",
      "ace_interaction",
      "ace_interact_menu",
      "ace_medical_treatment",
      "ace_medical_gui",
      "ace_zeus",
      "zen_modules"
		};
		author="LinkIsParking";
		name="APM Main";
    VERSION_CONFIG;
  };
};
#include "CfgSettings.hpp"
