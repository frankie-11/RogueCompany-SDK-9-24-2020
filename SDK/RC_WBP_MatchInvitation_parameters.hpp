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

// Function WBP_MatchInvitation.WBP_MatchInvitation_C.BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_MatchInvitation_C_BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_MatchInvitation.WBP_MatchInvitation_C.BndEvt__Decline_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UWBP_MatchInvitation_C_BndEvt__Decline_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_MatchInvitation.WBP_MatchInvitation_C.ShowInvitation
struct UWBP_MatchInvitation_C_ShowInvitation_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FClientQueueInfo*                           QueueInfo;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_MatchInvitation.WBP_MatchInvitation_C.ShowError
struct UWBP_MatchInvitation_C_ShowError_Params
{
	struct FText*                                      ErrorMessage;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_MatchInvitation.WBP_MatchInvitation_C.StartShowSequence
struct UWBP_MatchInvitation_C_StartShowSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MatchInvitation.WBP_MatchInvitation_C.StartHideSequence
struct UWBP_MatchInvitation_C_StartHideSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MatchInvitation.WBP_MatchInvitation_C.InitializeWidgetNavigation
struct UWBP_MatchInvitation_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_MatchInvitation.WBP_MatchInvitation_C.OnHideAnimFinished
struct UWBP_MatchInvitation_C_OnHideAnimFinished_Params
{
};

// Function WBP_MatchInvitation.WBP_MatchInvitation_C.ExecuteUbergraph_WBP_MatchInvitation
struct UWBP_MatchInvitation_C_ExecuteUbergraph_WBP_MatchInvitation_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
