class CfgHints
{
	class APM_AmmoSheet
	{
		displayName = "Small Arms Ammunition Sheet";
		class APM_AmmoAcronyms
		{
      displayName = "Acronyms";
      displayNameShort = "";
      description = "AP - Armor Piercing<br/>AP-T - Armor Piercing Tracer<br/>AP-I - Armor Piercing Incendiary<br/>APDS - Armour Piercing Discarding Sabot<br/>BT - Ballistic Tip<br/>BTHP/HPBT - Boat Tail Hollow Point<br/>BTSP/SPBT - Boat Tail Soft Point<br/>EPR - Enhanced Performance Round<br/>FMJ - Full Metal Jacket<br/>HEAPI - High Explosive Armor Piercing Incendiary<br/>HP - Hollow Point<br/>IR-DIM - Infrared DIM Tracer <br/>JHP - Jacketed Hollow Point<br/>LR - Long Range <br/>OTM - Open Tip Match<br/>P - Warsaw Pact Tracer<br/>SBLR - Special Ball Long Range<br/>SOST - Special Operations Science and Technology<br/>U - Warsaw Pact Subsonic<br/><br/>BC - Ballistic Coefficient<br/>MV - Muzzle Velocity<br/>TS - typicalSpeed Value";
      image = "\a3\ui_f\data\gui\cfg\Hints\ammotype_ca.paa";
      arguments[] =
      {
      };
		};
    class APM_AmmoGeneral
    {
      displayName = "Rules of Thumb";
      displayNameShort = "";
      description = "Higher Caliber = Better BC, Penetration, and Damage at the cost of capacity, weight, and recoil. More pronounced travel arc depending on range.<br/><br/>Damage Formula = Damage * Velocity/TS <br/><br/>Penetration Formula = Penetration Coefficient * TS * 0.015<br/><br/>AP Ammo - More MV, less BC, not as effective against personnel. Better for vehicles/cover and urban environments.<br/>BT Ammo - Better damage and BC at the cost of muzzle velocity and weight. Better for medium to long range engagements, or armored personnel.<br/>EPR/FMJ - Standard ammo. Jack of all trades. Typically tracers are chambered in this. EPR > FMJ for BC/Penetration, FMJ > EPR for MV/Damage.<br/>SBLR/LR Ammo - Better damage and BC at the cost of muzzle velocity and weight. Better for long range engagements, or windy conditions. Less damage than BT.<br/>HP/JHP Ammo - More MV, more Damage, less Penetration, less BC.";
    };
    class APM_AmmoLethality
    {
      displayName = "Lethality";
      displayNameShort = "";
      description = "Only applicable if using ACE.<br/><br/>Only shots to the torso or head will actually kill infantry, unless external changes are made. Therefore, shot placement matters. Try to go for the neck, face, head, or groin of targets to bypass body armor.";
    };
    class APM_Ammo556
    {
      displayName = "5.56x45mm NATO";
      displayNameShort = "";
      description = "Standard NATO intermediate cartridge.<br/>EPR - M855A1, Damage = 10.28, TS = 975m/s, BC(G1) = 0.313, BC(G7) = 0.151, Penetration (RHA) = 14.1mm<br/>SOST - Mk318, Damage = 10.7, TS = 954m/s, BC(G1) = 0.301, BC(G7) = 0.146, Penetration (RHA) = 9.8mm<br/>SBLR/SPR - Mk262, Damage = 11.12, TS = 869, BC(G1) = 0.361, BC(G7) = 0.180, Penetration (RHA) = 2.4mm<br/>AP - M995, Damage = 11.38, TS = 920m/s, BC(G1) = 0.31, BC(G7) = 0.152, Penetration(RHA) = 22.1mm";
    };
  };
};
