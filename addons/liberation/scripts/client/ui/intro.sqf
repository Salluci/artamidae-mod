if ( isNil "cinematic_camera_started" ) then { cinematic_camera_started = false };
sleep 0.5;
waitUntil { time > 0 };

[] spawn cinematic_camera;

dostartgame = 1;
introDone = true;
