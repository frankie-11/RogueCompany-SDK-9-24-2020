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

// Function WBP_PlatformIcon.WBP_PlatformIcon_C.SetPlatform
struct UWBP_PlatformIcon_C_SetPlatform_Params
{
	EKSPlatformType*                                   Platform;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlatformIcon.WBP_PlatformIcon_C.PreConstruct
struct UWBP_PlatformIcon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlatformIcon.WBP_PlatformIcon_C.Construct
struct UWBP_PlatformIcon_C_Construct_Params
{
};

// Function WBP_PlatformIcon.WBP_PlatformIcon_C.ExecuteUbergraph_WBP_PlatformIcon
struct UWBP_PlatformIcon_C_ExecuteUbergraph_WBP_PlatformIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
