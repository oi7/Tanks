#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Complete.TankMovement
struct TankMovement_t725121276;
// Complete.TankShooting
struct TankShooting_t483533744;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// Complete.TankManager
struct  TankManager_t1826010214  : public Object_t
{
	// UnityEngine.Color Complete.TankManager::m_PlayerColor
	Color_t1588175760  ___m_PlayerColor_0;
	// UnityEngine.Transform Complete.TankManager::m_SpawnPoint
	Transform_t284553113 * ___m_SpawnPoint_1;
	// System.Int32 Complete.TankManager::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// System.String Complete.TankManager::m_ColoredPlayerText
	String_t* ___m_ColoredPlayerText_3;
	// UnityEngine.GameObject Complete.TankManager::m_Instance
	GameObject_t4012695102 * ___m_Instance_4;
	// System.Int32 Complete.TankManager::m_Wins
	int32_t ___m_Wins_5;
	// Complete.TankMovement Complete.TankManager::m_Movement
	TankMovement_t725121276 * ___m_Movement_6;
	// Complete.TankShooting Complete.TankManager::m_Shooting
	TankShooting_t483533744 * ___m_Shooting_7;
	// UnityEngine.GameObject Complete.TankManager::m_CanvasGameObject
	GameObject_t4012695102 * ___m_CanvasGameObject_8;
};
