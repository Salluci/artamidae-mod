/*
CfgVehicleClasses is used to determin what sub-category individual units will show up under the Units tab in zeus. CfgEditorSubcategories does the same but in the editor. I recommend creating all your categories in CfgVehicleClasses and then copy them over to CfgEditorSubcategories. CfgVehicleClasses related to the vehicleClass property in CfgVehicles and CfgEditorSubcategories relates to the editorSubcategory property.
*/

class CfgEditorSubcategories
{
	class apm_generic_civ //Classname for the vehicle class/category
	{
		displayName = "Contractors"; //Displayname for the class/category
	};
	class apm_contractor_combat //Classname for the vehicle class/category
	{
		displayName = "Contractors (Sword)"; //Displayname for the class/category
	};
	class apm_contractor_command //Classname for the vehicle class/category
	{
		displayName = "Contractors (Chainmail)"; //Displayname for the class/category
	};
	class apm_contractor_weapons
	{
		displayName = "Contractors (Lance)";
	};
	class apm_generic_spec
	{
		displayName = "Operators";
	};
	class apm_contractor_logistics
	{
		displayName = "Contractors (Shield)";
	};
	class apm_contractor_sniper
	{
		displayName = "Contractors (Longbarrel)";
	};
	class apm_generic_merc
	{
		displayName = "Mercenaries";
	};
	class apm_generic_wheeled
	{
		displayName="Cars/Trucks";
	};
	class apm_generic_tracked
	{
		displayName="APC/IFV";
	};
	class apm_generic_tanks
	{
		displayName="Tanks";
	};
	class apm_generic_helicopters
	{
		displayName="Helicopters";
	};
	class apm_generic_planes
	{
		displayName="Planes";
	};
	class apm_generic_static
	{
		displayName="Statics";
	};
	class apm_generic_boats
	{
		displayName="Boats";
	};
	class apm_generic_fob
	{
		displayName="FOB";
	};
};
