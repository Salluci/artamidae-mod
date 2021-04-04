Call to Prayer
-------------------

In your init.ext put this line

call compile preprocessFile "CallToPrayer\init.sqf";


In your description.ext define the following CfgSounds entry

class CfgSounds {
	sounds[] = {prayer};
	class prayer {
		name = "prayer";
		sound[] = {"CalltoPrayer\sounds\prayer.ogg", db+1, 1};
		titles[] = {};
	};
};




Credits
-----------
Hazey and Sacha for writing the initial functions.