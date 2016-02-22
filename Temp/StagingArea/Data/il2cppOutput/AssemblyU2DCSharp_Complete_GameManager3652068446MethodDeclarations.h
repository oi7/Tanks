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

// Complete.GameManager
struct GameManager_t3652068446;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Complete.TankManager
struct TankManager_t1826010214;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Complete.GameManager::.ctor()
extern "C"  void GameManager__ctor_m1341310773 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.GameManager::Start()
extern "C"  void GameManager_Start_m288448565 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.GameManager::SpawnAllTanks()
extern "C"  void GameManager_SpawnAllTanks_m1359429078 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.GameManager::SetCameraTargets()
extern "C"  void GameManager_SetCameraTargets_m680493194 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Complete.GameManager::GameLoop()
extern "C"  Object_t * GameManager_GameLoop_m3964390125 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Complete.GameManager::RoundStarting()
extern "C"  Object_t * GameManager_RoundStarting_m518344057 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Complete.GameManager::RoundPlaying()
extern "C"  Object_t * GameManager_RoundPlaying_m1662394999 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Complete.GameManager::RoundEnding()
extern "C"  Object_t * GameManager_RoundEnding_m2264144544 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Complete.GameManager::OneTankLeft()
extern "C"  bool GameManager_OneTankLeft_m1609114230 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Complete.TankManager Complete.GameManager::GetRoundWinner()
extern "C"  TankManager_t1826010214 * GameManager_GetRoundWinner_m2543115253 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Complete.TankManager Complete.GameManager::GetGameWinner()
extern "C"  TankManager_t1826010214 * GameManager_GetGameWinner_m2284345323 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Complete.GameManager::EndMessage()
extern "C"  String_t* GameManager_EndMessage_m2878966270 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.GameManager::ResetAllTanks()
extern "C"  void GameManager_ResetAllTanks_m4206440106 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.GameManager::EnableTankControl()
extern "C"  void GameManager_EnableTankControl_m3516099811 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.GameManager::DisableTankControl()
extern "C"  void GameManager_DisableTankControl_m3075353914 (GameManager_t3652068446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
