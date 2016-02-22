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

// Complete.TankMovement
struct  TankMovement_t725121276  : public MonoBehaviour_t3012272455
{
	// System.Int32 Complete.TankMovement::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// System.Single Complete.TankMovement::m_Speed
	float ___m_Speed_3;
	// System.Single Complete.TankMovement::m_TurnSpeed
	float ___m_TurnSpeed_4;
	// UnityEngine.AudioSource Complete.TankMovement::m_MovementAudio
	AudioSource_t3628549054 * ___m_MovementAudio_5;
	// UnityEngine.AudioClip Complete.TankMovement::m_EngineIdling
	AudioClip_t3714538611 * ___m_EngineIdling_6;
	// UnityEngine.AudioClip Complete.TankMovement::m_EngineDriving
	AudioClip_t3714538611 * ___m_EngineDriving_7;
	// System.Single Complete.TankMovement::m_PitchRange
	float ___m_PitchRange_8;
	// System.String Complete.TankMovement::m_MovementAxisName
	String_t* ___m_MovementAxisName_9;
	// System.String Complete.TankMovement::m_TurnAxisName
	String_t* ___m_TurnAxisName_10;
	// UnityEngine.Rigidbody Complete.TankMovement::m_Rigidbody
	Rigidbody_t1972007546 * ___m_Rigidbody_11;
	// System.Single Complete.TankMovement::m_MovementInputValue
	float ___m_MovementInputValue_12;
	// System.Single Complete.TankMovement::m_TurnInputValue
	float ___m_TurnInputValue_13;
	// System.Single Complete.TankMovement::m_OriginalPitch
	float ___m_OriginalPitch_14;
};
