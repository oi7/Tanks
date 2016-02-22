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

// Complete.ShellExplosion
struct ShellExplosion_t3765947400;
// UnityEngine.Collider
struct Collider_t955670625;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Complete.ShellExplosion::.ctor()
extern "C"  void ShellExplosion__ctor_m2448007313 (ShellExplosion_t3765947400 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.ShellExplosion::Start()
extern "C"  void ShellExplosion_Start_m1395145105 (ShellExplosion_t3765947400 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Complete.ShellExplosion::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void ShellExplosion_OnTriggerEnter_m3043197063 (ShellExplosion_t3765947400 * __this, Collider_t955670625 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Complete.ShellExplosion::CalculateDamage(UnityEngine.Vector3)
extern "C"  float ShellExplosion_CalculateDamage_m1516901033 (ShellExplosion_t3765947400 * __this, Vector3_t3525329789  ___targetPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
