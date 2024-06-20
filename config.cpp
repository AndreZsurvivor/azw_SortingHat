class CfgPatches
{
	class azw_SortingHat
	{
		units[]				=	{"azw_SortingHat"};
		weapons[]			=	{};
		requiredVersion		=	0.1;
		requiredAddons[]	=	{"DZ_Data","DZ_Scripts","DZ_Characters_Headgear"};
	};
};
class CfgMods
{
	class azw_SortingHat
	{
		name				=	"azw_SortingHat";
		credits				=	"BirdMan";
		author				=	"AndreZ";
		authorID			=	"0";
		type				=	"mod";
		dependencies[]		=	{"World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[]		=	{"azw_SortingHat/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value		=	"";
				files[]		=	{"azw_SortingHat/scripts/4_world"};
			};
		};
	};
};

class CfgVehicles
{
	class CowboyHat_black;
	class azw_SortingHat : CowboyHat_black
	{
		
	};
};

class CfgSoundShaders
{
	
	class azw_TestTones_SoundShader
	{
		volume	= 1;
		range	= 500;
		samples[] =
		{	
			{ "azw_SortingHat\sounds\TestTone01", 1 },
			{ "azw_SortingHat\sounds\TestTone02", 1 },
			{ "azw_SortingHat\sounds\TestTone03", 1 },
			{ "azw_SortingHat\sounds\TestTone04", 1 }
		};
	};
};

class CfgSoundSets
{
	class azw_TestTones_SoundSet
	{
		soundShaders[] = { "azw_TestTones_SoundShader" };
		spatial = 0;
	};
};