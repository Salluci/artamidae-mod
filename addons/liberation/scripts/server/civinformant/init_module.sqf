// Scripts
// Task selection and spawning
civinfo_task = compileScript ["scripts\server\civinformant\tasks\civinfo_task.sqf"];

// Start spawn loop
[] spawn compileScript ["scripts\server\civinformant\civinfo_loop.sqf"];
