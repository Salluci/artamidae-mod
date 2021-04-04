class CfgGroups
{
	class West
	{
		class B_faction_APM
		{
			name = "Artamidae PMC";
			#include "groups_apm.hpp"
			#include "groups_apm_vehicles.hpp"
		};
	};
	class East
	{
		class O_faction_SkuaIntl
		{
			name = "Skua International";
			#include "groups_skua.hpp"
			#include "groups_skua_vehicles.hpp"
		};
		class O_faction_KrampusLegion
		{
			name = "Krampus Legion";
			#include "groups_krampus.hpp"
		};
		/*class RUS
		{
			name = "Russian Spetznaz";
			#include "groups_spetsnaz.hpp"
			#include "groups_spetsnaz_vehicles.hpp"
		};*/
	};
	class Indep
	{
		class I_faction_MayhemPMC
		{
			name = "Mayhem PMC";
			#include "groups_mayhem.hpp"
			#include "groups_mayhem_vehicles.hpp"
		};
	};
};
