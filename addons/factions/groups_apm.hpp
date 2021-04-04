			class apm_contractors_logistics
			{
				name = "Contractors (Shield)";
				class apm_shield
				{
					faction = "B_faction_APM";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Shield Element";
					rarityGroup = 0.5;
					side = 1; //0 = Opfor, 1 = Blufor, 2 = Indfor.
					class Unit0
					{
						vehicle = "B_Contractor_APM_TL_Shield";
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
					};
					class Unit1
					{
						vehicle = "B_Contractor_APM_Medic_Shield";
						position[] = {5,-5,0};
						rank = "CORPORAL";
						side = 1;
					};
					class Unit2
					{
						vehicle = "B_Contractor_APM_Rifleman_Shield";
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
					};
					class Unit3
					{
						vehicle = "B_Contractor_APM_EOD_Shield";
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
					};
				};
			};
			class apm_contractors_sniper
			{
				name = "Contractors (Longbarrel)";
				class apm_lb_alpha
				{
					faction = "B_faction_APM";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Longbarrel Alpha";
					rarityGroup = 0.5;
					side = 1; //0 = Opfor, 1 = Blufor, 2 = Indfor.
					class Unit0
					{
						vehicle = "B_Contractor_APM_LB_TL1";
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
					};
					class Unit1
					{
						vehicle = "B_Contractor_APM_LB_Spotter1";
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
					};
					class Unit2
					{
						vehicle = "B_Contractor_APM_LB_Sniper1";
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
					};
					class Unit3
					{
						vehicle = "B_Contractor_APM_LB_RTO1";
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
					};
				};
				class apm_lb_bravo
				{
					faction = "B_faction_APM";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Longbarrel Bravo";
					rarityGroup = 0.5;
					side = 1; //0 = Opfor, 1 = Blufor, 2 = Indfor.
					class Unit0
					{
						vehicle = "B_Contractor_APM_LB_TL2";
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
					};
					class Unit1
					{
						vehicle = "B_Contractor_APM_LB_Spotter2";
						position[] = {5,-5,0};
						rank = "SERGEANT";
						side = 1;
					};
					class Unit2
					{
						vehicle = "B_Contractor_APM_LB_Sniper2";
						position[] = {-5,-5,0};
						rank = "SERGEANT";
						side = 1;
					};
					class Unit3
					{
						vehicle = "B_Contractor_APM_LB_RTO2";
						position[] = {10,-10,0};
						rank = "SERGEANT";
						side = 1;
					};
				};
			};
			class apm_contractors_full
			{
				name = "Contractors (Sword)";
				class apm_fireteam_red
				{
					faction = "B_faction_APM";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fireteam (Red)";
					rarityGroup = 0.5;
					side = 1; //0 = Opfor, 1 = Blufor, 2 = Indfor.
					class Unit0
					{
						vehicle = "B_Contractor_APM_TL1";
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
					};
					class Unit1
					{
						vehicle = "B_Contractor_APM_Medic1";
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
					};
					class Unit2
					{
						vehicle = "B_Contractor_APM_Marksman1";
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
					};
					class Unit3
					{
						vehicle = "B_Contractor_APM_AT1";
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
					};
				};
				class apm_fireteam_blue
				{
					faction = "B_faction_APM";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fireteam (Blue)";
					rarityGroup = 0.5;
					side = 1; //0 = Opfor, 1 = Blufor, 2 = Indfor.
					class Unit0
					{
						vehicle = "B_Contractor_APM_TL2";
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
					};
					class Unit1
					{
						vehicle = "B_Contractor_APM_Medic2";
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
					};
					class Unit2
					{
						vehicle = "B_Contractor_APM_AR1";
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
					};
					class Unit3
					{
						vehicle = "B_Contractor_APM_Grenadier1";
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
					};
				};
				class apm_fireteam_white
				{
					faction = "B_faction_APM";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fireteam (Yellow)";
					rarityGroup = 0.5;
					side = 1; //0 = Opfor, 1 = Blufor, 2 = Indfor.
					class Unit0
					{
						vehicle = "B_Contractor_APM_TL4";
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
					};
					class Unit1
					{
						vehicle = "B_Contractor_APM_Medic4";
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
					};
					class Unit2
					{
						vehicle = "B_Contractor_APM_Marksman2";
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
					};
					class Unit3
					{
						vehicle = "B_Contractor_APM_AT2";
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
					};
				};
				class apm_fireteam_green
				{
					faction = "B_faction_APM";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Fireteam (Green)";
					rarityGroup = 0.5;
					side = 1; //0 = Opfor, 1 = Blufor, 2 = Indfor.
					class Unit0
					{
						vehicle = "B_Contractor_APM_TL3";
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
					};
					class Unit1
					{
						vehicle = "B_Contractor_APM_Medic3";
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
					};
					class Unit2
					{
						vehicle = "B_Contractor_APM_MG1";
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
					};
					class Unit3
					{
						vehicle = "B_Contractor_APM_Rifleman1";
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
					};
				};
				class apm_fireteam_csword1
				{
					faction = "B_faction_APM";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Command Team (Sword 1)";
					rarityGroup = 0.5;
					side = 1; //0 = Opfor, 1 = Blufor, 2 = Indfor.
					class Unit0
					{
						vehicle = "B_Contractor_APM_SL1";
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
					};
					class Unit1
					{
						vehicle = "B_Contractor_APM_Medic5";
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
					};
					class Unit2
					{
						vehicle = "B_Contractor_APM_RTO1";
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
					};
					class Unit3
					{
						vehicle = "B_Contractor_APM_EOD1";
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
					};
				};
				class apm_fireteam_csword2
				{
					faction = "B_faction_APM";
					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";
					name = "Command Team (Sword 2)";
					rarityGroup = 0.5;
					side = 1; //0 = Opfor, 1 = Blufor, 2 = Indfor.
					class Unit0
					{
						vehicle = "B_Contractor_APM_SL2";
						position[] = {0,0,0};
						rank = "SERGEANT";
						side = 1;
					};
					class Unit1
					{
						vehicle = "B_Contractor_APM_Medic6";
						position[] = {5,-5,0};
						rank = "PRIVATE";
						side = 1;
					};
					class Unit2
					{
						vehicle = "B_Contractor_APM_RTO2";
						position[] = {-5,-5,0};
						rank = "PRIVATE";
						side = 1;
					};
					class Unit3
					{
						vehicle = "B_Contractor_APM_EOD2";
						position[] = {10,-10,0};
						rank = "PRIVATE";
						side = 1;
					};
				};
			};
