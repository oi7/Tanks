#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"

// ShellExplosion
struct  ShellExplosion_t2483468005  : public MonoBehaviour_t3012272455
{
	// UnityEngine.LayerMask ShellExplosion::m_TankMask
	LayerMask_t1862190090  ___m_TankMask_2;
	// UnityEngine.ParticleSystem ShellExplosion::m_ExplosionParticles
	ParticleSystem_t56787138 * ___m_ExplosionParticles_3;
	// UnityEngine.AudioSource ShellExplosion::m_ExplosionAudio
	AudioSource_t3628549054 * ___m_ExplosionAudio_4;
	// System.Single ShellExplosion::m_MaxDamage
	float ___m_MaxDamage_5;
	// System.Single ShellExplosion::m_ExplosionForce
	float ___m_ExplosionForce_6;
	// System.Single ShellExplosion::m_MaxLifeTime
	float ___m_MaxLifeTime_7;
	// System.Single ShellExplosion::m_ExplosionRadius
	float ___m_ExplosionRadius_8;
};
