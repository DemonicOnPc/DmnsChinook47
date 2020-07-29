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
	class Dmns_Chinook47
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DayZExpansion_Core"};
	};
};

class CfgSlots
{
	class Slot_chinook47wheel_1_1
	{
		name="chinook47wheel_1_1";
		displayName="Chinook47 Wheel";
		descriptionShort="";
		selection="wheel_1_1";
		ghostIcon="wheel";
	};
	class Slot_chinook47wheel_1_2
	{
		name="chinook47wheel_1_2";
		displayName="Chinook47 Wheel";
		descriptionShort="";
		selection="wheel_1_2";
		ghostIcon="wheel";
	};
	class Slot_chinook47wheel_2_1
	{
		name="chinook47wheel_2_1";
		displayName="Chinook47 Wheel";
		descriptionShort="";
		selection="wheel_2_1";
		ghostIcon="wheel";
	};
	class Slot_chinook47wheel_2_2
	{
		name="chinook47wheel_2_2";
		displayName="Chinook47 Wheel";
		descriptionShort="";
		selection="wheel_2_2";
		ghostIcon="wheel";
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class ExpansionWreck;

	class SimulationModule;
	class Axles;
	class Front;
	class Wheels;
	class Rear;
	class Left;
	class Right;
	class AnimationSources;
	class Crew;
	class Driver;
	class CoDriver;
	class ExpansionHelicopterScript;
	class GUIInventoryAttachmentsProps;
	class Body;
	class DamageSystem;
	class DamageZones;
	class GlobalHealth;
	class HouseNoDestruct;
	class ExpansionWheel;
	
	class DmnsChinook47FrontWheel: ExpansionWheel
	{
		scope=2;
		displayName="Chinook47 Front Wheels";
		descriptionShort="wheels of the Chinook47 Helicopter";
		model="\DmnsChinook47\DayZExpansion\Vehicles\Air\Chinook47\proxy\chinook47_front_wheel.p3d";
		weight = 15000;
		inventorySlot[]=
		{
			"chinook47wheel_1_1",
			"chinook47wheel_2_1"
		};
		rotationFlags=4;
		physLayer="item_large";
		radiusByDamage[]={0,0.343,0.30000001,0.40000001,0.99980003,0.25,0.99989998,0.2};
		radius = 0.416;
		width = 0.316;
		tyreRollResistance = 0.015;
		tyreTread = 0.7;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {
						{
							1.0,
							{
								"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel.rvmat"}
							},
						{
							0.7,
							{
								"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel.rvmat"
							}
						},
						{
							0.5,
							{
								"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_dmg.rvmat"
							}
						},
						{
							0.3,
							{
								"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_dmg.rvmat"
							}
						},
						{
							0.0,
							{
								"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_dmg.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class DmnsChinook47BackWheel: ExpansionWheel
	{
		scope=2;
		displayName="Chinook47 Back Wheel";
		descriptionShort="wheels of the Chinook47 Helicopter";
		model="\DmnsChinook47\DayZExpansion\Vehicles\Air\Chinook47\proxy\chinook47_front_wheel.p3d";
		weight = 15000;
		inventorySlot[]=
		{
			"chinook47wheel_1_2",
			"chinook47wheel_2_2"
		};
		rotationFlags=4;
		physLayer="item_large";
		radiusByDamage[]={0,0.343,0.30000001,0.40000001,0.99980003,0.25,0.99989998,0.2};
		radius = 0.416;
		width = 0.316;
		tyreRollResistance = 0.015;
		tyreTread = 0.7;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
					healthLevels[] = {
						{
							1.0,
							{
								"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel.rvmat"}
							},
						{
							0.7,
							{
								"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel.rvmat"
							}
						},
						{
							0.5,
							{
								"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_dmg.rvmat"
							}
						},
						{
							0.3,
							{
								"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_dmg.rvmat"
							}
						},
						{
							0.0,
							{
								"DZ\vehicles\wheeled\OffroadHatchback\data\niva_wheel_dmg.rvmat"
							}
						}
					};
				};
			};
		};
	};

	class DmnsChinook47Wreck: ExpansionWreck
	{
		scope=2;
		displayname="Chinook47";
		model = "\ExpansionMi8Sample\DayZExpansion\Vehicles\Air\Mi_8AMT.p3d"; //fit this add a Chinook47 wreck
		class Cargo
		{
			itemsCargoSize[]={10,100};
		};
	};

	class DmnsChinook47: ExpansionHelicopterScript
	{
	 	scope=2;
		displayname="Chinook47";
		model="\DmnsChinook47\DayZExpansion\Vehicles\Air\Chinook47\Chinook_47.p3d";
		vehicleClass="Expansion_Helicopter";
		fuelCapacity=219;
		fuelConsumption=19;
	  	attachments[]=
		{
			"ExpansionHelicopterBattery",
			"Reflector_1_1",
			"ExpansionIgniterPlug",
			"ExpansionHydraulicHoses",
			"chinook47wheel_1_1",
			"chinook47wheel_1_2",
			"chinook47wheel_2_1",
			"chinook47wheel_2_2"
		};
		/*
		hiddenSelections[]=
        {
            "camo1",
			"camo2"
        };
		hiddenSelectionsTextures[]=
		{
			"dayzexpansion\vehicles\air\uh1h\data\uh1d_co.paa",
			"dayzexpansion\vehicles\air\uh1h\data\uh1d_in_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"dayzexpansion\vehicles\air\uh1h\data\uh1d.rvmat",
			"dayzexpansion\vehicles\air\uh1h\data\uh1d_in.rvmat"
		};
		*/
		class Cargo
		{
			itemsCargoSize[]={10,100};
			allowOwnedCargoManipulation=1;
			openable=0;
		};
		class AnimationSources
		{
			class rotor
            {
                source="user";
                animPeriod=0.025;
                initPhase=0;
            };
            class rearrotor
            {
                source="user";
                animPeriod=0.025;
                initPhase=0;
            };
			class hiderotor
            {
                source="user";
                animPeriod=0.00099999998;
                initPhase=0;
            };
			class hiderotorblur
            {
                source="user";
                animPeriod=0.00099999998;
                initPhase=0;
            };
			class cyclicForward
            {
                source="user";
                animPeriod=0.25;
                initPhase=0;
            };
			class cyclicAside
            {
                source="user";
                animPeriod=0.25;
                initPhase=0;
            };
			
			class damper_1_1
			{
				source = "user";
				initPhase = 0.4857;
				animPeriod = 1;
			};
			class damper_2_1: damper_1_1{};
			class damper_1_2
			{
				source = "user";
				initPhase = 0.4002;
				animPeriod = 1;
			};
			class damper_2_2: damper_1_2{};
		};
		class Crew: Crew
		{
			class Driver: Driver
			{
				actionSel="seat_driver";
				proxyPos="crewDriver";
				getInPos="pos driver";
				getInDir="pos driver dir";
			};
			class CoDriver: CoDriver
			{
				actionSel="seat_codriver";
				proxyPos="crewCoDriver";
				getInPos="pos cargo";
				getInDir="pos cargo dir";
			};
		};
		class SimulationModule: SimulationModule
		{
			drive = "DRIVE_RWD";
			airDragCoefficient = 0.928;
			class Steering
			{
				increaseSpeed[] = {0,50,30,40,60,25,120,5};
				decreaseSpeed[] = {0,50,60,30,120,10};
				centeringSpeed[] = {0,0,15,25,60,40,100,60};
			};
			class Throttle
			{
				reactionTime = 0.25;
				defaultThrust = 0.8;
				gentleThrust = 0.6;
				turboCoef = 5.0;
				gentleCoef = 0.7;
			};
			class Engine
			{
				inertia = 0.45;
				torqueMax = 187;
				torqueRpm = 2400;
				powerMax = 73.5;
				powerRpm = 4500;
				rpmIdle = 1000;
				rpmMin = 1050;
				rpmClutch = 1250;
				rpmRedline = 4700;
				rpmMax = 6800;
			};
			class Gearbox
			{
				reverse = 3.51;
				ratios[] = {3.5,2.26,1.45,1.0};
				timeToUncoupleClutch = 0.3;
				timeToCoupleClutch = 0.3;
				maxClutchTorque = 180;
			};
			class Axles: Axles
			{
				class Front: Front
				{
					maxSteeringAngle = 0;
					brakeBias = 0.7;
					brakeForce = 15000;
					wheelHubMass = 10;
					wheelHubRadius = 0.15;
					class Suspension
					{
						swayBar = 1;
						stiffness = 60000;
						compression = 2100;
						damping = 5500;
						travelMaxUp = 0.079;
						travelMaxDown = 0.06;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							inventorySlot = "chinook47wheel_1_1";
							animTurn = "turnfrontleft";
							animRotation = "wheelfrontleft";
							animDamper = "damper_1_1";
							wheelHub = "wheel_1_1_damper_land";
						};
						class Right: Right
						{
							inventorySlot = "chinook47wheel_2_1";
							animTurn = "turnfrontright";
							animRotation = "wheelfrontright";
							animDamper = "damper_2_1";
							wheelHub = "wheel_2_1_damper_land";
						};
					};
				};
				class Rear: Rear
				{
					maxSteeringAngle = 0;
					brakeBias = 0.3;
					brakeForce = 15000;
					finalRatio = 4.1;
					wheelHubMass = 10;
					wheelHubRadius = 0.15;
					class Suspension
					{
						swayBar = 1;
						stiffness = 34000;
						compression = 2000;
						damping = 5100;
						travelMaxUp = 0.086;
						travelMaxDown = 0.133;
					};
					class Wheels: Wheels
					{
						class Left: Left
						{
							inventorySlot = "chinook47wheel_1_2";
							animTurn = "turnbackleft";
							animRotation = "wheelbackleft";
							animDamper = "damper_1_2";
							wheelHub = "wheel_1_2_damper_land";
						};
						class Right: Right
						{
							inventorySlot = "chinook47wheel_2_2";
							animTurn = "turnbackright";
							animRotation = "wheelbackright";
							animDamper = "damper_2_2";
							wheelHub = "wheel_2_2_damper_land";
						};
					};
				};
			};
		};
		class Sounds
		{
			thrust=0.60000002;
			thrustTurbo=1;
			thrustGentle=0.30000001;
			thrustSmoothCoef=0.1;
			camposSmoothCoef=0.029999999;
			soundSetsFilter[] =
			{
				"Dmns_Chinook47_Loop_Ext_SoundSet",
				"Dmns_Chinook47_Rotor_Ext_SoundSet"
			};
			soundSetsInt[]=
			{
				"Dmns_Chinook47_Loop_Int_SoundSet",
				"Dmns_Chinook47_Rotor_Int_SoundSet"
			};
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name="Engine";
				description="";
				attachmentSlots[]=
				{
					"ExpansionHelicopterBattery",
					"ExpansionIgniterPlug",
					"ExpansionHydraulicHoses"
				};
				icon="missing";
			};
			class Body
			{
				name="Body";
				description="";
				attachmentSlots[]=
				{
					"Reflector_1_1"
				};
				icon="missing";
			};
			class Chassis
			{
				name="Chassis";
				description="";
				attachmentSlots[]=
				{
					"chinook47wheel_1_1",
					"chinook47wheel_1_2",
					"chinook47wheel_2_1",
					"chinook47wheel_2_2"
				};
				icon="wheel";
			};
		};
		class DamageSystem: DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 7500;
					healthLevels[] = {{1.0,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0.0,{}}};
				};
			};
		};
	};
};

class CfgNonAIVehicles
{
	class ProxyVehiclePart;
	class Proxychinook47_front_wheel: ProxyVehiclePart
	{
		model="\DmnsChinook47\DayZExpansion\Vehicles\Air\Chinook47\proxy\chinook47_front_wheel.p3d";
		inventorySlot[]=
		{
			"chinook47wheel_1_1",
		    "chinook47wheel_2_1"
		};
	};
	class Proxychinook47_back_wheel: ProxyVehiclePart
	{
		model="\DmnsChinook47\DayZExpansion\Vehicles\Air\Chinook47\proxy\chinook47_back_wheel.p3d";
		inventorySlot[]=
		{
			"chinook47wheel_1_2",
			"chinook47wheel_2_2"
		};
	};
};