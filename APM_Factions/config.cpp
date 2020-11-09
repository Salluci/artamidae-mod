#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class APM_Factions
	{
		#include "CfgPatches_units.hpp"
		requiredVersion=1.4;
		requiredAddons[]=
		{
			"A3_Data_F_Oldman_Loadorder",
			"ace_compat_rhs_usf3",
			"ace_compat_rhs_afrf3",
			"ace_compat_rhs_gref3",
			"ace_compat_rhs_saf3"
		};
		name="APM Factions";
		author="LinkIsParking";
	};
};

class CBA_Extended_EventHandlers_base;

#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgGroups.hpp"

class Extended_Init_EventHandlers
{
	class Man
	{
		class apm_loadout_event
		{
			init = "_this call apm_fnc_loadoutApply";
		};
	};
};

class CfgFunctions
{
	class APM
	{
		class loadout
		{
			tag = "APM";
			file = "\APM_Factions\fnc";
			class loadoutApply {};
		};
	};
};
class CfgUnitInsignia
{
	class APM_Skua
	{
		author = "LinkIsParking";
		texture = "APM_Factions\data\skua.paa";
		textureVehicle = "";
		scope = 2;
		displayName = "Skua Phoenix Division";
	};
};
