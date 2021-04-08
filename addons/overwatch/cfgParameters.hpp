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
	class real_time
	{
		title = "Use Real Time (EST)";
		values[] = {0, 1};
		texts[] = {"Off", "On"};
		default = 0;
	};
	class fps_marker
	{
		title = "Server FPS Markers";
		values[] = {0 , 1};
		texts[] = {"Off", "On"};
		default = 1;
	};
	class persistent_position
	{
		title = "Save/Load Player Position (Development)";
		values[] = {0, 1};
		texts[] = {"Off", "On"};
		default = 0;
	};
	class persistent_markers
	{
		title = "Save/Load Player Map Markers";
		values[] = {0, 1};
		texts[] = {"Off", "On"};
		default = 1;
	};
	class budget_reward
	{
		title = "Budget Reward for Kills";
		values[] = {0, 1};
		texts[] = {"Off", "On"};
		default = 1;
	};
	class paycheck_timer
	{
		title = "Paycheck Timer";
		values[] = {0, 15, 30, 60};
		texts[] = {"Off", "15min", "30min", "60min"};
		default = 30;
	};
};
