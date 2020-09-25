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

// Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeColor
struct UWBP_BoxStroke_C_SetStrokeColor_Params
{
	struct FLinearColor*                               NewColor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeSize
struct UWBP_BoxStroke_C_SetStrokeSize_Params
{
	float*                                             NewSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeColor
struct UWBP_BoxStroke_C_ApplyStrokeColor_Params
{
};

// Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeSize
struct UWBP_BoxStroke_C_ApplyStrokeSize_Params
{
};

// Function WBP_BoxStroke.WBP_BoxStroke_C.PreConstruct
struct UWBP_BoxStroke_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_BoxStroke.WBP_BoxStroke_C.Construct
struct UWBP_BoxStroke_C_Construct_Params
{
};

// Function WBP_BoxStroke.WBP_BoxStroke_C.ExecuteUbergraph_WBP_BoxStroke
struct UWBP_BoxStroke_C_ExecuteUbergraph_WBP_BoxStroke_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
