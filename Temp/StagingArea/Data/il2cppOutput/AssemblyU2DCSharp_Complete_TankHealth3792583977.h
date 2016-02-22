#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Slider
struct Slider_t1468074762;
// UnityEngine.UI.Image
struct Image_t3354615620;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.ParticleSystem
struct ParticleSystem_t56787138;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// Complete.TankHealth
struct  TankHealth_t3792583977  : public MonoBehaviour_t3012272455
{
	// System.Single Complete.TankHealth::m_StartingHealth
	float ___m_StartingHealth_2;
	// UnityEngine.UI.Slider Complete.TankHealth::m_Slider
	Slider_t1468074762 * ___m_Slider_3;
	// UnityEngine.UI.Image Complete.TankHealth::m_FillImage
	Image_t3354615620 * ___m_FillImage_4;
	// UnityEngine.Color Complete.TankHealth::m_FullHealthColor
	Color_t1588175760  ___m_FullHealthColor_5;
	// UnityEngine.Color Complete.TankHealth::m_ZeroHealthColor
	Color_t1588175760  ___m_ZeroHealthColor_6;
	// UnityEngine.GameObject Complete.TankHealth::m_ExplosionPrefab
	GameObject_t4012695102 * ___m_ExplosionPrefab_7;
	// UnityEngine.AudioSource Complete.TankHealth::m_ExplosionAudio
	AudioSource_t3628549054 * ___m_ExplosionAudio_8;
	// UnityEngine.ParticleSystem Complete.TankHealth::m_ExplosionParticles
	ParticleSystem_t56787138 * ___m_ExplosionParticles_9;
	// System.Single Complete.TankHealth::m_CurrentHealth
	float ___m_CurrentHealth_10;
	// System.Boolean Complete.TankHealth::m_Dead
	bool ___m_Dead_11;
};
