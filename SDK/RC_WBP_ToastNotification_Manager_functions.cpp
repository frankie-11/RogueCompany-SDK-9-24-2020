// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayChallengeToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Toast2_C**          Toast                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ToastNotification_Manager_C::DisplayChallengeToast(class UWBP_Toast2_C** Toast)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayChallengeToast");

	UWBP_ToastNotification_Manager_C_DisplayChallengeToast_Params params;
	params.Toast = Toast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayToast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ToastNotifcation_Entry_C** Toast                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ToastNotification_Manager_C::DisplayToast(class UWBP_ToastNotifcation_Entry_C** Toast)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.DisplayToast");

	UWBP_ToastNotification_Manager_C_DisplayToast_Params params;
	params.Toast = Toast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastNotificationReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FToastData*             ToastData                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ToastNotification_Manager_C::OnToastNotificationReceived(struct FToastData* ToastData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastNotificationReceived");

	UWBP_ToastNotification_Manager_C_OnToastNotificationReceived_Params params;
	params.ToastData = ToastData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleToastNotificationRemove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWidget**              ToastNotification              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ToastNotification_Manager_C::HandleToastNotificationRemove(class UKSWidget** ToastNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleToastNotificationRemove");

	UWBP_ToastNotification_Manager_C_HandleToastNotificationRemove_Params params;
	params.ToastNotification = ToastNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastIntroAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_ToastNotification_Manager_C::OnToastIntroAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.OnToastIntroAnimFinished");

	UWBP_ToastNotification_Manager_C_OnToastIntroAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ToastNotification_Manager_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.Construct");

	UWBP_ToastNotification_Manager_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleChallengeToastNotificationRemove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWidget**              ToastNotification              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ToastNotification_Manager_C::HandleChallengeToastNotificationRemove(class UKSWidget** ToastNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.HandleChallengeToastNotificationRemove");

	UWBP_ToastNotification_Manager_C_HandleChallengeToastNotificationRemove_Params params;
	params.ToastNotification = ToastNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.ExecuteUbergraph_WBP_ToastNotification_Manager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ToastNotification_Manager_C::ExecuteUbergraph_WBP_ToastNotification_Manager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotification_Manager.WBP_ToastNotification_Manager_C.ExecuteUbergraph_WBP_ToastNotification_Manager");

	UWBP_ToastNotification_Manager_C_ExecuteUbergraph_WBP_ToastNotification_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
