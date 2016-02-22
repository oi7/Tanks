#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CameraControl
struct CameraControl_t464488024;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// TankManager[]
struct TankManagerU5BU5D_t3777340498;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1291133240;
struct WaitForSeconds_t1291133240_marshaled;
// TankManager
struct TankManager_t543530819;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// GameManager
struct  GameManager_t2369589051  : public MonoBehaviour_t3012272455
{
	// System.Int32 GameManager::m_NumRoundsToWin
	int32_t ___m_NumRoundsToWin_2;
	// System.Single GameManager::m_StartDelay
	float ___m_StartDelay_3;
	// System.Single GameManager::m_EndDelay
	float ___m_EndDelay_4;
	// CameraControl GameManager::m_CameraControl
	CameraControl_t464488024 * ___m_CameraControl_5;
	// UnityEngine.UI.Text GameManager::m_MessageText
	Text_t3286458198 * ___m_MessageText_6;
	// UnityEngine.GameObject GameManager::m_TankPrefab
	GameObject_t4012695102 * ___m_TankPrefab_7;
	// TankManager[] GameManager::m_Tanks
	TankManagerU5BU5D_t3777340498* ___m_Tanks_8;
	// System.Int32 GameManager::m_RoundNumber
	int32_t ___m_RoundNumber_9;
	// UnityEngine.WaitForSeconds GameManager::m_StartWait
	WaitForSeconds_t1291133240 * ___m_StartWait_10;
	// UnityEngine.WaitForSeconds GameManager::m_EndWait
	WaitForSeconds_t1291133240 * ___m_EndWait_11;
	// TankManager GameManager::m_RoundWinner
	TankManager_t543530819 * ___m_RoundWinner_12;
	// TankManager GameManager::m_GameWinner
	TankManager_t543530819 * ___m_GameWinner_13;
};
