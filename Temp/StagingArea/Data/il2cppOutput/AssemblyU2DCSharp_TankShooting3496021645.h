#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.UI.Slider
struct Slider_t1468074762;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// TankShooting
struct  TankShooting_t3496021645  : public MonoBehaviour_t3012272455
{
	// System.Int32 TankShooting::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// UnityEngine.Rigidbody TankShooting::m_Shell
	Rigidbody_t1972007546 * ___m_Shell_3;
	// UnityEngine.Transform TankShooting::m_FireTransform
	Transform_t284553113 * ___m_FireTransform_4;
	// UnityEngine.UI.Slider TankShooting::m_AimSlider
	Slider_t1468074762 * ___m_AimSlider_5;
	// UnityEngine.AudioSource TankShooting::m_ShootingAudio
	AudioSource_t3628549054 * ___m_ShootingAudio_6;
	// UnityEngine.AudioClip TankShooting::m_ChargingClip
	AudioClip_t3714538611 * ___m_ChargingClip_7;
	// UnityEngine.AudioClip TankShooting::m_FireClip
	AudioClip_t3714538611 * ___m_FireClip_8;
	// System.Single TankShooting::m_MinLaunchForce
	float ___m_MinLaunchForce_9;
	// System.Single TankShooting::m_MaxLaunchForce
	float ___m_MaxLaunchForce_10;
	// System.Single TankShooting::m_MaxChargeTime
	float ___m_MaxChargeTime_11;
	// System.String TankShooting::m_FireButton
	String_t* ___m_FireButton_12;
	// System.Single TankShooting::m_CurrentLaunchForce
	float ___m_CurrentLaunchForce_13;
	// System.Single TankShooting::m_ChargeSpeed
	float ___m_ChargeSpeed_14;
	// System.Boolean TankShooting::m_Fired
	bool ___m_Fired_15;
};
