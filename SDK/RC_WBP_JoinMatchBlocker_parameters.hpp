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

// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnKeyUp
struct UWBP_JoinMatchBlocker_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnKeyDown
struct UWBP_JoinMatchBlocker_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.InitializeWidgetNavigation
struct UWBP_JoinMatchBlocker_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.StartShowSequence
struct UWBP_JoinMatchBlocker_C_StartShowSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.StartHideSequence
struct UWBP_JoinMatchBlocker_C_StartHideSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnInitialized
struct UWBP_JoinMatchBlocker_C_OnInitialized_Params
{
};

// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnShowAnimFinish
struct UWBP_JoinMatchBlocker_C_OnShowAnimFinish_Params
{
};

// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnShowAnimStart
struct UWBP_JoinMatchBlocker_C_OnShowAnimStart_Params
{
};

// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.ExecuteUbergraph_WBP_JoinMatchBlocker
struct UWBP_JoinMatchBlocker_C_ExecuteUbergraph_WBP_JoinMatchBlocker_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
