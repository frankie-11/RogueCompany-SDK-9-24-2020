#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ReloadReticle.ReloadReticle_C.ColorSet
struct UReloadReticle_C_ColorSet_Params
{
	struct FLinearColor*                               NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReloadReticle.ReloadReticle_C.UpdateShotgunReload
struct UReloadReticle_C_UpdateShotgunReload_Params
{
	float*                                             ReloadTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Percent;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReloadReticle.ReloadReticle_C.SetReloadTime
struct UReloadReticle_C_SetReloadTime_Params
{
	float*                                             NewTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReloadReticle.ReloadReticle_C.Tick
struct UReloadReticle_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReloadReticle.ReloadReticle_C.Circle Progress Open
struct UReloadReticle_C_Circle_Progress_Open_Params
{
};

// Function ReloadReticle.ReloadReticle_C.Circle Progress Close
struct UReloadReticle_C_Circle_Progress_Close_Params
{
};

// Function ReloadReticle.ReloadReticle_C.PreventCircleFill
struct UReloadReticle_C_PreventCircleFill_Params
{
};

// Function ReloadReticle.ReloadReticle_C.ShotgunCircleOpen
struct UReloadReticle_C_ShotgunCircleOpen_Params
{
};

// Function ReloadReticle.ReloadReticle_C.ShotgunCircleClose
struct UReloadReticle_C_ShotgunCircleClose_Params
{
};

// Function ReloadReticle.ReloadReticle_C.ExecuteUbergraph_ReloadReticle
struct UReloadReticle_C_ExecuteUbergraph_ReloadReticle_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
