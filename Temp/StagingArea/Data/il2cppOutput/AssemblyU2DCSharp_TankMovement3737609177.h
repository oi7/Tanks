#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// System.String
struct String_t;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// TankMovement
struct  TankMovement_t3737609177  : public MonoBehaviour_t3012272455
{
	// System.Int32 TankMovement::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// System.Single TankMovement::m_Speed
	float ___m_Speed_3;
	// System.Single TankMovement::m_TurnSpeed
	float ___m_TurnSpeed_4;
	// UnityEngine.AudioSource TankMovement::m_MovementAudio
	AudioSource_t3628549054 * ___m_MovementAudio_5;
	// UnityEngine.AudioClip TankMovement::m_EngineIdling
	AudioClip_t3714538611 * ___m_EngineIdling_6;
	// UnityEngine.AudioClip TankMovement::m_EngineDriving
	AudioClip_t3714538611 * ___m_EngineDriving_7;
	// System.Single TankMovement::m_PitchRange
	float ___m_PitchRange_8;
	// System.String TankMovement::m_MovementAxisName
	String_t* ___m_MovementAxisName_9;
	// System.String TankMovement::m_TurnAxisName
	String_t* ___m_TurnAxisName_10;
	// UnityEngine.Rigidbody TankMovement::m_Rigidbody
	Rigidbody_t1972007546 * ___m_Rigidbody_11;
	// System.Single TankMovement::m_MovementInputValue
	float ___m_MovementInputValue_12;
	// System.Single TankMovement::m_TurnInputValue
	float ___m_TurnInputValue_13;
	// System.Single TankMovement::m_OriginalPitch
	float ___m_OriginalPitch_14;
};
