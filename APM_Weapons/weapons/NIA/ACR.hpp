//ACR recoils, ROF
//Black MBUS's
//Potentially fix grip2 animation?
//Remove Squantoon/Aron variants.
class hlc_acr556_base;
class hlc_rifle_ACR_SBR_tan: hlc_acr556_base
{
	displayName = "ACR-E (5.56mm/10.5/Tan)";
	recoil = "recoil_acr556";
		class Single: Mode_SemiAuto
		{
			reloadTime = "((60)/790)";
		};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = "((60)/790)";
		};
	hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
	dexterity = 1.7;
};
class hlc_rifle_ACR_SBR_tan_grip: hlc_rifle_ACR_SBR_tan
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR_SBR_tan_grip2: hlc_rifle_ACR_SBR_tan
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR_SBR_tan_grip3: hlc_rifle_ACR_SBR_tan
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR_SBR_green: hlc_rifle_ACR_SBR_tan
{
  displayName = "ACR-E (5.56mm/10.5/Green)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR_SBR_green_grip: hlc_rifle_ACR_SBR_green
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR_SBR_green_grip2: hlc_rifle_ACR_SBR_green
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR_SBR_green_grip3: hlc_rifle_ACR_SBR_green
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR_SBR_Black: hlc_rifle_ACR_SBR_tan
{
  displayName = "ACR-E (5.56mm/10.5/Black)";
};
class hlc_rifle_ACR_SBR_black_grip: hlc_rifle_ACR_SBR_black
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR_SBR_black_grip2: hlc_rifle_ACR_SBR_black
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR_SBR_black_grip3: hlc_rifle_ACR_SBR_black
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR_MID_black: hlc_rifle_ACR_SBR_tan
{
  displayName = "ACR-E (5.56mm/16.5/Black)";
  class Single: Single
  {
    reloadTime = "((60)/790)";
  };
  class FullAuto: FullAuto
  {
    reloadTime = "((60)/790)";
  };
	dexterity = 1.5;
};
class hlc_rifle_ACR_MID_black_grip: hlc_rifle_ACR_MID_black
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR_MID_black_grip2: hlc_rifle_ACR_MID_black
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR_MID_black_grip3: hlc_rifle_ACR_MID_black
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR_MID_tan: hlc_rifle_ACR_MID_black
{
  displayName = "ACR-E (5.56mm/16.5/Tan)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR_MID_tan_grip: hlc_rifle_ACR_MID_tan
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR_MID_tan_grip2: hlc_rifle_ACR_MID_tan
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR_MID_tan_grip3: hlc_rifle_ACR_MID_tan
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR_MID_green: hlc_rifle_ACR_MID_black
{
  displayName = "ACR-E (5.56mm/16.5/Green";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR_MID_green_grip: hlc_rifle_ACR_MID_green
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR_MID_green_grip2: hlc_rifle_ACR_MID_green
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR_MID_green_grip3: hlc_rifle_ACR_MID_green
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR_Carb_black: hlc_rifle_ACR_SBR_tan
{
  displayName = "ACR-E (5.56mm/14.5/Black)";
  class Single: Single
  {
    reloadTime = "((60)/790)";
  };
  class FullAuto: FullAuto
  {
    reloadTime = "((60)/790)";
  };
	dexterity = 1.6;
};
class hlc_rifle_ACR_Carb_black_grip: hlc_rifle_ACR_Carb_black
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR_Carb_black_grip2: hlc_rifle_ACR_Carb_black
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR_Carb_black_grip3: hlc_rifle_ACR_Carb_black
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR_Carb_tan: hlc_rifle_ACR_Carb_black
{
  displayName = "ACR-E (5.56mm/14.5/Tan)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR_Carb_tan_grip: hlc_rifle_ACR_Carb_tan
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR_Carb_tan_grip2: hlc_rifle_ACR_Carb_tan
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR_Carb_tan_grip3: hlc_rifle_ACR_Carb_tan
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR_Carb_green: hlc_rifle_ACR_Carb_black
{
  displayName = "ACR-E (5.56mm/14.5/Green)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR_Carb_green_grip: hlc_rifle_ACR_Carb_green
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR_Carb_green_grip2: hlc_rifle_ACR_Carb_green
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR_Carb_green_grip3: hlc_rifle_ACR_Carb_green
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR_full_black: hlc_rifle_ACR_SBR_tan
{
  displayName = "ACR-E (5.56mm/20/Black)";
  class Single: Single
  {
    reloadTime = "((60)/790)";
  };
  class FullAuto: FullAuto
  {
    reloadTime = "((60)/790)";
  };
	dexterity = 1.4;
};
class hlc_rifle_ACR_full_tan: hlc_rifle_ACR_full_black
{
  displayName = "ACR-E (5.56mm/20/Tan)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR_full_green: hlc_rifle_ACR_full_black
{
  displayName = "ACR-E (5.56mm/20/Green)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR_GL_SBR_black: hlc_rifle_ACR_SBR_Black
{
  displayName = "ACR-E UGL (5.56mm/10.5/Black)";
	dexterity = 1.6;
};
class hlc_rifle_ACR_GL_SBR_green: hlc_rifle_ACR_GL_SBR_black
{
  displayName = "ACR-E UGL (5.56mm/10.5/Green)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR_GL_SBR_tan: hlc_rifle_ACR_GL_SBR_black
{
  displayName = "ACR-E UGL (5.56mm/10.5/Tan)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR_GL_Carb_black: hlc_rifle_ACR_Carb_black
{
  displayName = "ACR-E UGL (5.56mm/14.5/Black)";
	dexterity = 1.5;
};
class hlc_rifle_ACR_GL_Carb_green: hlc_rifle_ACR_GL_Carb_black
{
  displayName = "ACR-E UGL (5.56mm/14.5/Green)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR_GL_Carb_tan: hlc_rifle_ACR_GL_Carb_black
{
  displayName = "ACR-E UGL (5.56mm/14.5/Tan)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR_GL_mid_black: hlc_rifle_ACR_MID_black
{
  displayName = "ACR-E UGL (5.56mm/16.5/Black)";
	dexterity = 1.4;
};
class hlc_rifle_ACR_GL_mid_green: hlc_rifle_ACR_GL_mid_black
{
  displayName = "ACR-E UGL (5.56mm/16.5/Green)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR_GL_mid_tan: hlc_rifle_ACR_GL_mid_black
{
  displayName = "ACR-E UGL (5.56mm/16.5/Tan)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-556black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_acr_base;
class hlc_rifle_ACR68_SBR_tan: hlc_acr_base
{
	displayName = "ACR-E (6.8mm/10.5/Tan)";
	recoil = "recoil_acr68";
	class Single: Mode_SemiAuto
	{
		reloadTime = "((60)/705)";
		class BaseSoundModeType;
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[] =
			{
				"acr_silencerShot_SoundSet",
				"acr_silencerTail_SoundSet"
			};
		};
	};
	class FullAuto: Mode_FullAuto
	{
		reloadTime = "((60)/705)";
		class BaseSoundModeType;
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[] =
			{
				"acr_silencerShot_SoundSet",
				"acr_silencerTail_SoundSet"
			};
		};
	};
	hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
	dexterity = 1.7;
};
class hlc_rifle_ACR68_SBR_tan_grip: hlc_rifle_ACR68_SBR_tan
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR68_SBR_tan_grip2: hlc_rifle_ACR68_SBR_tan
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR68_SBR_tan_grip3: hlc_rifle_ACR68_SBR_tan
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR68_SBR_green: hlc_rifle_ACR68_SBR_tan
{
  displayName = "ACR-E (6.8mm/10.5/Green)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR68_SBR_green_grip: hlc_rifle_ACR68_SBR_green
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR68_SBR_green_grip2: hlc_rifle_ACR68_SBR_green
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR68_SBR_green_grip3: hlc_rifle_ACR68_SBR_green
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR68_SBR_black: hlc_rifle_ACR68_SBR_tan
{
  displayName = "ACR-E (6.8mm/10.5/Black)";
};
class hlc_rifle_ACR68_SBR_black_grip: hlc_rifle_ACR68_SBR_black
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR68_SBR_black_grip2: hlc_rifle_ACR68_SBR_black
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR68_SBR_black_grip3: hlc_rifle_ACR68_SBR_black
{
	dexterity = 1.9;
	inertia = 0.34;
	aimTransitionSpeed = 1.0892678;
};
class hlc_rifle_ACR68_Carb_black: hlc_rifle_ACR68_SBR_tan
{
  displayName = "ACR-E (6.8mm/14.5/Black)";
  class Single: Single
  {
    reloadTime = "((60)/705)";
  };
  class FullAuto: FullAuto
  {
    reloadTime = "((60)/705)";
  };
	dexterity = 1.6;
};
class hlc_rifle_ACR68_Carb_black_grip: hlc_rifle_ACR68_Carb_black
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR68_Carb_black_grip2: hlc_rifle_ACR68_Carb_black
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR68_Carb_black_grip3: hlc_rifle_ACR68_Carb_black
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR68_Carb_green: hlc_rifle_ACR68_Carb_black
{
  displayName = "ACR-E (6.8mm/14.5/Green)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR68_Carb_Green_grip: hlc_rifle_ACR68_Carb_Green
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR68_Carb_Green_grip2: hlc_rifle_ACR68_Carb_Green
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR68_Carb_Green_grip3: hlc_rifle_ACR68_Carb_Green
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR68_Carb_tan: hlc_rifle_ACR68_Carb_black
{
  displayName = "ACR-E (6.8mm/14.5/Tan)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR68_Carb_tan_grip: hlc_rifle_ACR68_Carb_tan
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR68_Carb_tan_grip2: hlc_rifle_ACR68_Carb_tan
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR68_Carb_tan_grip3: hlc_rifle_ACR68_Carb_tan
{
	dexterity = 1.8;
	inertia = 0.355;
	aimTransitionSpeed = 1.0692678;
};
class hlc_rifle_ACR68_mid_black: hlc_rifle_ACR68_SBR_tan
{
  displayName = "ACR-E (6.8mm/16.5/Black)";
  class Single: Single
  {
    reloadTime = "((60)/705)";
  };
  class FullAuto: FullAuto
  {
    reloadTime = "((60)/705)";
  };
	dexterity = 1.5;
};
class hlc_rifle_ACR68_MID_black_grip: hlc_rifle_ACR68_MID_black
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR68_MID_black_grip2: hlc_rifle_ACR68_MID_black
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR68_MID_black_grip3: hlc_rifle_ACR68_MID_black
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR68_mid_green: hlc_rifle_ACR68_mid_black
{
  displayName = "ACR-E (6.8mm/16.5/Green)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR68_MID_green_grip: hlc_rifle_ACR68_MID_green
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR68_MID_green_grip2: hlc_rifle_ACR68_MID_green
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR68_MID_green_grip3: hlc_rifle_ACR68_MID_green
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR68_mid_tan: hlc_rifle_ACR68_mid_black
{
  displayName = "ACR-E (6.8mm/16.5/Tan)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR68_MID_tan_grip: hlc_rifle_ACR68_MID_tan
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR68_MID_tan_grip2: hlc_rifle_ACR68_MID_tan
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR68_MID_tan_grip3: hlc_rifle_ACR68_MID_tan
{
	dexterity = 1.7;
	inertia = 0.37;
	aimTransitionSpeed = 1.0592678;
};
class hlc_rifle_ACR68_full_black: hlc_rifle_ACR68_SBR_tan
{
  displayName = "ACR-E (6.8mm/20/Black)";
  class Single: Single
  {
    reloadTime = "((60)/705)";
  };
  class FullAuto: FullAuto
  {
    reloadTime = "((60)/705)";
  };
	dexterity = 1.4;
};
class hlc_rifle_ACR68_full_green: hlc_rifle_ACR68_full_black
{
  displayName = "ACR-E (6.8mm/20/Green)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR68_full_tan: hlc_rifle_ACR68_full_black
{
  displayName = "ACR-E (6.8mm/20/Tan)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR68_GL_SBR_black: hlc_rifle_ACR68_SBR_black
{
  displayName = "ACR-E UGL (6.8mm/10.5/Black)";
	dexterity = 1.6;
};
class hlc_rifle_ACR68_GL_SBR_green: hlc_rifle_ACR68_GL_SBR_black
{
  displayName = "ACR-E UGL (6.8mm/10.5/Green)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR68_GL_SBR_tan: hlc_rifle_ACR68_GL_SBR_black
{
  displayName = "ACR-E UGL (6.8mm/10.5/Tan)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR68_GL_Carb_black: hlc_rifle_ACR68_Carb_black
{
  displayName = "ACR-E UGL (6.8mm/14.5/Black)";
	dexterity = 1.5;
};
class hlc_rifle_ACR68_GL_Carb_green: hlc_rifle_ACR68_GL_Carb_black
{
  displayName = "ACR-E UGL (6.8mm/14.5/Green)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR68_GL_Carb_tan: hlc_rifle_ACR68_GL_Carb_black
{
  displayName = "ACR-E UGL (6.8mm/14.5/Tan)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR68_GL_mid_black: hlc_rifle_ACR68_mid_black
{
  displayName = "ACR-E UGL (6.8mm/16.5/Black)";
	dexterity = 1.4;
};
class hlc_rifle_ACR68_GL_mid_green: hlc_rifle_ACR68_GL_mid_black
{
  displayName = "ACR-E UGL (6.8mm/16.5/Green)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_green_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3-green_co.paa","hlc_wp_ACR\tex\mapyesGreen_co.paa","hlc_wp_ACR\tex\pmagGreen_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR68_GL_mid_tan: hlc_rifle_ACR68_GL_mid_black
{
  displayName = "ACR-E UGL (6.8mm/16.5/Tan)";
  hiddenSelectionsTextures[] = {"hlc_wp_ACR\tex\map1_co.paa","hlc_wp_ACR\tex\map2-68black_co.paa","hlc_wp_ACR\tex\map3_co.paa","hlc_wp_ACR\tex\mapyes_co.paa","hlc_wp_ACR\tex\pmag_co.paa","hlc_wp_ACR\tex\afg2_co.paa"};
};
class hlc_rifle_ACR68_aron: hlc_rifle_ACR68_Carb_black
{
  scopeArsenal = 0;
};
class hlc_rifle_ACR68_Squant: hlc_rifle_ACR68_SBR_tan
{
  scopeArsenal = 0;
};
