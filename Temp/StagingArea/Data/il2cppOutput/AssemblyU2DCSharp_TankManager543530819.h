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
// TankMovement
struct TankMovement_t3737609177;
// TankShooting
struct TankShooting_t3496021645;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// TankManager
struct  TankManager_t543530819  : public Object_t
{
	// UnityEngine.Color TankManager::m_PlayerColor
	Color_t1588175760  ___m_PlayerColor_0;
	// UnityEngine.Transform TankManager::m_SpawnPoint
	Transform_t284553113 * ___m_SpawnPoint_1;
	// System.Int32 TankManager::m_PlayerNumber
	int32_t ___m_PlayerNumber_2;
	// System.String TankManager::m_ColoredPlayerText
	String_t* ___m_ColoredPlayerText_3;
	// UnityEngine.GameObject TankManager::m_Instance
	GameObject_t4012695102 * ___m_Instance_4;
	// System.Int32 TankManager::m_Wins
	int32_t ___m_Wins_5;
	// TankMovement TankManager::m_Movement
	TankMovement_t3737609177 * ___m_Movement_6;
	// TankShooting TankManager::m_Shooting
	TankShooting_t3496021645 * ___m_Shooting_7;
	// UnityEngine.GameObject TankManager::m_CanvasGameObject
	GameObject_t4012695102 * ___m_CanvasGameObject_8;
};
