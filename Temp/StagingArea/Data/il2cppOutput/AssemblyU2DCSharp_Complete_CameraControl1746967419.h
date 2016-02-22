#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3681339876;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// Complete.CameraControl
struct  CameraControl_t1746967419  : public MonoBehaviour_t3012272455
{
	// System.Single Complete.CameraControl::m_DampTime
	float ___m_DampTime_2;
	// System.Single Complete.CameraControl::m_ScreenEdgeBuffer
	float ___m_ScreenEdgeBuffer_3;
	// System.Single Complete.CameraControl::m_MinSize
	float ___m_MinSize_4;
	// UnityEngine.Transform[] Complete.CameraControl::m_Targets
	TransformU5BU5D_t3681339876* ___m_Targets_5;
	// UnityEngine.Camera Complete.CameraControl::m_Camera
	Camera_t3533968274 * ___m_Camera_6;
	// System.Single Complete.CameraControl::m_ZoomSpeed
	float ___m_ZoomSpeed_7;
	// UnityEngine.Vector3 Complete.CameraControl::m_MoveVelocity
	Vector3_t3525329789  ___m_MoveVelocity_8;
	// UnityEngine.Vector3 Complete.CameraControl::m_DesiredPosition
	Vector3_t3525329789  ___m_DesiredPosition_9;
};
