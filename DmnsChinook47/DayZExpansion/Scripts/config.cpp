/**
 * config.cpp
 *
 * DayZ Expansion Mod Samples
 * www.dayzexpansion.com
 * © 2020 DayZ Expansion Mod Team
 *
 * This work is licensed under the ADPL-SA license.
 * To view a copy of this license, visit https://www.bohemia.net/community/licenses/arma-and-dayz-public-license-share-alike-adpl-sa
 *
*/

class CfgPatches
{
	class DayZExpansion_Samples_Scripts
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"JM_CF_Scripts",
			"JM_COT_Scripts",
			"DZ_Data",
			"DayZExpansion_Scripts"
		};
	};
};

class CfgMods
{
	class Dmns_Chinook47
	{
		dir = "DmnsChinook47";		
		extra = 0;
		type = "mod";

		name = "DayZ Dmns Chinook Mod";
		
		picture = "DayZExpansion/GUI/textures/expansion_icon.edds";
		logo = "DayZExpansion/GUI/textures/expansion_icon.edds";
		logoSmall = "DayZExpansion/GUI/textures/expansion_icon.edds";
		logoOver = "DayZExpansion/GUI/textures/expansion_icon.edds";
		
		tooltip = "Dmns Chinook47";
		action = "";
		author = "$STR_MOD_EXPANSION_AUTHOR";
		authorID = "";
		version = "1.0.0";

		dependencies[]= 
		{
			"Game",
			"World",
			"Mission"
		};

		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] =
				{
					"DmnsChinook47/DayZExpansion/Scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value = "";
				files[] =
				{
					"DmnsChinook47/DayZExpansion/Scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value = "";
				files[] =
				{
					"DmnsChinook47/DayZExpansion/Scripts/5_Mission"
				};
			};
		};
	};
};
