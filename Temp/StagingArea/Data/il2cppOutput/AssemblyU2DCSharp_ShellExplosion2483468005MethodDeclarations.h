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

// ShellExplosion
struct ShellExplosion_t2483468005;
// UnityEngine.Collider
struct Collider_t955670625;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void ShellExplosion::.ctor()
extern "C"  void ShellExplosion__ctor_m3035498326 (ShellExplosion_t2483468005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShellExplosion::Start()
extern "C"  void ShellExplosion_Start_m1982636118 (ShellExplosion_t2483468005 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShellExplosion::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void ShellExplosion_OnTriggerEnter_m1914760162 (ShellExplosion_t2483468005 * __this, Collider_t955670625 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ShellExplosion::CalculateDamage(UnityEngine.Vector3)
extern "C"  float ShellExplosion_CalculateDamage_m3895375388 (ShellExplosion_t2483468005 * __this, Vector3_t3525329789  ___targetPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
