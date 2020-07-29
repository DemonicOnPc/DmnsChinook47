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
	class Dmns_Sounds_Vehicles_Air_Chinook47
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Sounds_Effects"};
	};
};

class CfgSoundShaders
{
	class Dmns_Chinook47_Base_Int_SoundShader
	{
		range = 20;
	};
	class Dmns_Chinook47_Base_Ext_SoundShader
	{
		range = 500;
	};

	class Dmns_Chinook47_Loop_Int_SoundShader: Dmns_Chinook47_Base_Int_SoundShader
	{
		samples[] = {{"DmnsChinook47\DayZExpansion\Sounds\Vehicles\Air\Chinook47\Dmns_Chinook47_Loop_Int",1}};
		frequency = "rpm";
		volume = "rpm * (1-camPos) * 0.4";
	};

	class Dmns_Chinook47_Loop_Ext_SoundShader: Dmns_Chinook47_Base_Ext_SoundShader
	{
		samples[] = {{"DmnsChinook47\DayZExpansion\Sounds\Vehicles\Air\Chinook47\Dmns_Chinook47_Loop_Ext",1}};
		frequency = "rpm";
		volume = "rpm * camPos";
	};

	class Dmns_Chinook47_Rotor_Int_SoundShader: Dmns_Chinook47_Base_Int_SoundShader
	{
		samples[] = {{"DmnsChinook47\DayZExpansion\Sounds\Vehicles\Air\Chinook47\Dmns_Chinook47_Rotor_Int",1}};
		frequency = "rpm * speed";
		volume = "rpm * speed * (1-camPos) * 0.3";
	};

	class Dmns_Chinook47_Rotor_Ext_SoundShader: Dmns_Chinook47_Base_Ext_SoundShader
	{
		samples[] = {{"DmnsChinook47\DayZExpansion\Sounds\Vehicles\Air\Chinook47\Dmns_Chinook47_Rotor_Ext",1}};
		frequency = "rpm * speed";
		volume = "rpm * speed * camPos";
	};
};

class CfgSoundSets
{
	class Dmns_Chinook47_Base_Ext_SoundShader
	{
		sound3DProcessingType = "Vehicle_Ext_3DProcessingType";
		distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
		volumeCurve = "vehicleEngineAttenuationCurve";
		volumeFactor = 1;
		occlusionFactor = 0;
		obstructionFactor = 0;
		spatial = 1;
		loop = 1;
		positionOffset[] = { 0, 0, 0 };
	};
	class Dmns_Chinook47_Base_Int_SoundShader
	{
		sound3DProcessingType = "Vehicle_Int_3DProcessingType";
		distanceFilter = "softVehiclesDistanceFreqAttenuationFilter";
		volumeCurve = "vehicleEngineAttenuationCurve";
		volumeFactor = 1;
		occlusionFactor = 0;
		obstructionFactor = 0;
		spatial = 1;
		loop = 1;
		positionOffset[] = { 0, 0, 0 };
	};
	
	class Dmns_Chinook47_Loop_Int_SoundSet: Dmns_Chinook47_Base_Int_SoundShader
	{
		soundShaders[]=
		{
			"Dmns_Chinook47_Loop_Int_SoundShader"
		};
		volumeFactor = 1;
	};

	class Dmns_Chinook47_Loop_Ext_SoundSet: Dmns_Chinook47_Base_Ext_SoundShader
	{
		soundShaders[]=
		{
			"Dmns_Chinook47_Loop_Ext_SoundShader"
		};
		volumeFactor=1;
	};

	class Dmns_Chinook47_Rotor_Int_SoundSet: Dmns_Chinook47_Base_Int_SoundShader
	{
		soundShaders[]=
		{
			"Dmns_Chinook47_Rotor_Int_SoundShader"
		};
		volumeFactor = 1;
	};

	class Dmns_Chinook47_Rotor_Ext_SoundSet: Dmns_Chinook47_Base_Ext_SoundShader
	{
		soundShaders[]=
		{
			"Dmns_Chinook47_Rotor_Ext_SoundShader"
		};
		volumeFactor=1;
	};
};