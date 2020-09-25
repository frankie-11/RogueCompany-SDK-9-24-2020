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

// Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.AnimGraph
struct UABP_GAD_ZiplineDevice_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                // (Parm, OutParm)
};

// Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.BlueprintUpdateAnimation
struct UABP_GAD_ZiplineDevice_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.ExecuteUbergraph_ABP_GAD_ZiplineDevice
struct UABP_GAD_ZiplineDevice_C_ExecuteUbergraph_ABP_GAD_ZiplineDevice_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
