class Params
{
	class load_world
	{
		title = "Load Saved World";
		values[] = {1, 0};
		texts[] = {"Yes", "No"};
		default = 1;
	};
	class save_interval
	{
		title = "Save Interval (Minutes)";
		values[] = {0,5,15,60};
		texts[] = {"Off (admin only save)", "5min", "15min", "60min"};
		default = 15;
	};
	class apm_debugger
	{
		title = "APM Scripting Debug Messages";
		values[] = {0,1,2};
		texts[] = {"Off", "Low Level", "Detailed"};
		default = 0;
	};
};