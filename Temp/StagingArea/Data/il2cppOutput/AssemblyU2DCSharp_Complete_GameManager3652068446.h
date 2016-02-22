#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Complete.CameraControl
struct CameraControl_t1746967419;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// Complete.TankManager[]
struct TankManagerU5BU5D_t1299242819;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1291133240;
struct WaitForSeconds_t1291133240_marshaled;
// Complete.TankManager
struct TankManager_t1826010214;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// Complete.GameManager
struct  GameManager_t3652068446  : public MonoBehaviour_t3012272455
{
	// System.Int32 Complete.GameManager::m_NumRoundsToWin
	int32_t ___m_NumRoundsToWin_2;
	// System.Single Complete.GameManager::m_StartDelay
	float ___m_StartDelay_3;
	// System.Single Complete.GameManager::m_EndDelay
	float ___m_EndDelay_4;
	// Complete.CameraControl Complete.GameManager::m_CameraControl
	CameraControl_t1746967419 * ___m_CameraControl_5;
	// UnityEngine.UI.Text Complete.GameManager::m_MessageText
	Text_t3286458198 * ___m_MessageText_6;
	// UnityEngine.GameObject Complete.GameManager::m_TankPrefab
	GameObject_t4012695102 * ___m_TankPrefab_7;
	// Complete.TankManager[] Complete.GameManager::m_Tanks
	TankManagerU5BU5D_t1299242819* ___m_Tanks_8;
	// System.Int32 Complete.GameManager::m_RoundNumber
	int32_t ___m_RoundNumber_9;
	// UnityEngine.WaitForSeconds Complete.GameManager::m_StartWait
	WaitForSeconds_t1291133240 * ___m_StartWait_10;
	// UnityEngine.WaitForSeconds Complete.GameManager::m_EndWait
	WaitForSeconds_t1291133240 * ___m_EndWait_11;
	// Complete.TankManager Complete.GameManager::m_RoundWinner
	TankManager_t1826010214 * ___m_RoundWinner_12;
	// Complete.TankManager Complete.GameManager::m_GameWinner
	TankManager_t1826010214 * ___m_GameWinner_13;
};
