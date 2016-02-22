#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GameManager
struct GameManager_t2369589051;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// TankManager
struct TankManager_t543530819;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m4112277136 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C"  void GameManager_Start_m3059414928 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::SpawnAllTanks()
extern "C"  void GameManager_SpawnAllTanks_m3472706097 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::SetCameraTargets()
extern "C"  void GameManager_SetCameraTargets_m1685541455 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::GameLoop()
extern "C"  Object_t * GameManager_GameLoop_m2806301730 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::RoundStarting()
extern "C"  Object_t * GameManager_RoundStarting_m3222326628 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::RoundPlaying()
extern "C"  Object_t * GameManager_RoundPlaying_m2580904236 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameManager::RoundEnding()
extern "C"  Object_t * GameManager_RoundEnding_m3125057867 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameManager::OneTankLeft()
extern "C"  bool GameManager_OneTankLeft_m1452657273 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TankManager GameManager::GetRoundWinner()
extern "C"  TankManager_t543530819 * GameManager_GetRoundWinner_m2172256955 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TankManager GameManager::GetGameWinner()
extern "C"  TankManager_t543530819 * GameManager_GetGameWinner_m3242213477 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GameManager::EndMessage()
extern "C"  String_t* GameManager_EndMessage_m1450952029 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::ResetAllTanks()
extern "C"  void GameManager_ResetAllTanks_m2024749829 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::EnableTankControl()
extern "C"  void GameManager_EnableTankControl_m312857534 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::DisableTankControl()
extern "C"  void GameManager_DisableTankControl_m2559091135 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
