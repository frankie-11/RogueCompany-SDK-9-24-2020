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

// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.GetHighlightMat
struct UWBP_RadialMenuHighlight_C_GetHighlightMat_Params
{
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetPosition
struct UWBP_RadialMenuHighlight_C_SetPosition_Params
{
	float*                                             Position;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetWidth
struct UWBP_RadialMenuHighlight_C_SetWidth_Params
{
	float*                                             Width;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
