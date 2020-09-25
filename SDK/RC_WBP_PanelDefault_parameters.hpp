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

// Function WBP_PanelDefault.WBP_PanelDefault_C.SetContentPadding
struct UWBP_PanelDefault_C_SetContentPadding_Params
{
	struct FMargin*                                    ContentPadding;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PanelDefault.WBP_PanelDefault_C.SetPanelColor
struct UWBP_PanelDefault_C_SetPanelColor_Params
{
	struct FLinearColor*                               PanelColor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PanelDefault.WBP_PanelDefault_C.PreConstruct
struct UWBP_PanelDefault_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PanelDefault.WBP_PanelDefault_C.Construct
struct UWBP_PanelDefault_C_Construct_Params
{
};

// Function WBP_PanelDefault.WBP_PanelDefault_C.ExecuteUbergraph_WBP_PanelDefault
struct UWBP_PanelDefault_C_ExecuteUbergraph_WBP_PanelDefault_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
