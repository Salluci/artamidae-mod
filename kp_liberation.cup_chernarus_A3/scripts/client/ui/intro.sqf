if ( isNil "cinematic_camera_started" ) then { cinematic_camera_started = false };
sleep 0.5;
waitUntil { time > 0 };

[] spawn cinematic_camera;

showcaminfo = true;
dostartgame = 1;

closeDialog 0;
cinematic_camera_started = false;
introDone = true;
