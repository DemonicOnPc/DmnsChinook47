/**
 * DmnsChinook47.c
 *
 * DayZ Expansion Mod Samples
 * www.dayzexpansion.com
 * © 2020 DayZ Expansion Mod Team
 *
 * This work is licensed under the ADPL-SA license.
 * To view a copy of this license, visit https://www.bohemia.net/community/licenses/arma-and-dayz-public-license-share-alike-adpl-sa
 *
*/

class DmnsChinook47Wreck: ExpansionHelicopterWreck {}

/**@class		DmnsChinook47
 * @brief		
 **/
class DmnsChinook47: ExpansionHelicopterScript
{
	// ------------------------------------------------------------
	void DmnsChinook47()
	{
		//! Vanilla
		m_dmgContactCoef							= 0.06;

		//! explosions
		m_ExplosionSize								= 50;

		m_MaxSpeed									= 200.0;

		m_AltitudeFullForce							= 1000.0;
		m_AltitudeNoForce							= 2000.0;

		m_EngineStartDuration						= 10.0;

		m_MinAutoRotateSpeed						= 2.0;
		m_MaxAutoRotateSpeed						= 10.0;

		m_BodyFrictionCoef							= 1.3;
		m_LiftForceCoef								= 1.5;

		m_CyclicForceCoef							= 1.5;

		m_CyclicSideSpeed							= 2.0;
		m_CyclicSideMax								= 0.5;
		m_CyclicSideCoef							= 0.4;

		m_CyclicForwardSpeed						= 10.0;
		m_CyclicForwardMax							= 1.0;
		m_CyclicForwardCoef							= 1.0;

		m_AntiTorqueSpeed							= 1.5;
		m_AntiTorqueMax								= 0.04;

		m_BankForceCoef								= 0.7;
		m_TailForceCoef								= 8.0;
	}
 
	// ------------------------------------------------------------
	override CarLightBase CreateFrontLight()
	{
		return CarLightBase.Cast( ScriptedLightBase.CreateLight( ExpansionHelicopterFrontLight ) );
	}
	
	// ------------------------------------------------------------
	override int GetAnimInstance()
	{
		return ExpansionVehicleAnimInstances.EXPANSION_MH6;
	}

	// ------------------------------------------------------------
	override int GetSeatAnimationType( int posIdx )
	{
		switch( posIdx )
		{
		case 0:
			return DayZPlayerConstants.VEHICLESEAT_DRIVER;
		case 1:
			return DayZPlayerConstants.VEHICLESEAT_CODRIVER;
		}

		return 0;
	}
	
	// ------------------------------------------------------------
	override int Get3rdPersonCameraType()
	{
		return DayZPlayerCameras.DAYZCAMERA_3RD_VEHICLE;
	}
	
	// ------------------------------------------------------------
	override bool CrewCanGetThrough( int posIdx )
	{		
		return true;
	}
	
	// ------------------------------------------------------------
	override bool IsVitalHelicopterBattery()
	{
		return true;
	}

	// ------------------------------------------------------------
	override bool IsVitalSparkPlug()
	{
		return false;
	}
	
	// ------------------------------------------------------------
	override bool IsVitalRadiator()
	{
		return false;
	}
	
	// ------------------------------------------------------------
	override bool IsVitalGlowPlug()
	{
		return false;
	}

	// ------------------------------------------------------------
	override bool IsVitalIgniterPlug()
	{
		return true;
	}

	// ------------------------------------------------------------	
	override bool IsVitalHydraulicHoses()
	{
		return true;
	}

	// ------------------------------------------------------------
	override bool IsVitalEngineBelt()
	{
		return false;
	}

	// ------------------------------------------------------------
	override bool CanObjectAttach( Object obj )
	{
		if ( vector.Distance( GetPosition(), obj.GetPosition() ) > m_BoundingRadius * 1.5 )
			return false;

		return true;
	}

	// ------------------------------------------------------------
	override float GetActionDistanceFuel()
	{
		return 2.5;
	}

	// ------------------------------------------------------------
	override float GetCameraHeight()
	{
		return 1;
	}

	// ------------------------------------------------------------
	override float GetCameraDistance()
	{
		return 25;
	}

	// ------------------------------------------------------------
	override float GetWreckAltitude()
	{
		return 1.5;
	}

	// ------------------------------------------------------------
	override vector GetWreckOffset()
	{
		return "0 0 -2.5";
	}
}