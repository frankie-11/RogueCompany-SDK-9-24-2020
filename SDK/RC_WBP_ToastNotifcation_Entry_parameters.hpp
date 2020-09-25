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

// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.SetViewStyle
struct UWBP_ToastNotifcation_Entry_C_SetViewStyle_Params
{
	EToastCategory*                                    ToastCategory;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.Construct
struct UWBP_ToastNotifcation_Entry_C_Construct_Params
{
};

// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayWaitAnimation
struct UWBP_ToastNotifcation_Entry_C_PlayWaitAnimation_Params
{
};

// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayOutroAnimation
struct UWBP_ToastNotifcation_Entry_C_PlayOutroAnimation_Params
{
};

// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.HandleOutroAnimFinished
struct UWBP_ToastNotifcation_Entry_C_HandleOutroAnimFinished_Params
{
};

// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.ExecuteUbergraph_WBP_ToastNotifcation_Entry
struct UWBP_ToastNotifcation_Entry_C_ExecuteUbergraph_WBP_ToastNotifcation_Entry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.FinishedIntroAnimation__DelegateSignature
struct UWBP_ToastNotifcation_Entry_C_FinishedIntroAnimation__DelegateSignature_Params
{
};

// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.OnRemoveToastNotification__DelegateSignature
struct UWBP_ToastNotifcation_Entry_C_OnRemoveToastNotification__DelegateSignature_Params
{
	class UKSWidget**                                  ToastWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
