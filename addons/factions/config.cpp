#include "script_component.hpp"
class CfgPatches
{
	class APM_Factions
	{
		#include "CfgPatches_units.hpp"
		requiredVersion = REQUIRED_VERSION;
		requiredAddons[]=
		{
			"apm_main"
		};
		name="APM Factions";
		author="LinkIsParking";
		VERSION_CONFIG;
	};
};

class DefaultEventHandlers;
class CBA_Extended_EventHandlers_base;

#include "CfgVehicles.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgVehicleClasses.hpp"
#include "CfgGroups.hpp"
