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

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayChallengeToast
struct UWBP_ToastNotification_Manager_C_DisplayChallengeToast_Params
{
	class UWBP_Toast2_C**                              Toast;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayToast
struct UWBP_ToastNotification_Manager_C_DisplayToast_Params
{
	class UWBP_ToastNotifcation_Entry_C**              Toast;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastNotificationReceived
struct UWBP_ToastNotification_Manager_C_OnToastNotificationReceived_Params
{
	struct FToastData*                                 ToastData;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleToastNotificationRemove
struct UWBP_ToastNotification_Manager_C_HandleToastNotificationRemove_Params
{
	class UKSWidget**                                  ToastNotification;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastIntroAnimFinished
struct UWBP_ToastNotification_Manager_C_OnToastIntroAnimFinished_Params
{
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.Construct
struct UWBP_ToastNotification_Manager_C_Construct_Params
{
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleChallengeToastNotificationRemove
struct UWBP_ToastNotification_Manager_C_HandleChallengeToastNotificationRemove_Params
{
	class UKSWidget**                                  ToastNotification;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.ExecuteUbergraph_WBP_ToastNotification_Manager
struct UWBP_ToastNotification_Manager_C_ExecuteUbergraph_WBP_ToastNotification_Manager_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
