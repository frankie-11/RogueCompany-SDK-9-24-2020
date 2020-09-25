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

// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.SetViewStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EToastCategory*                ToastCategory                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ToastNotifcation_Entry_C::SetViewStyle(EToastCategory* ToastCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.SetViewStyle");

	UWBP_ToastNotifcation_Entry_C_SetViewStyle_Params params;
	params.ToastCategory = ToastCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ToastNotifcation_Entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.Construct");

	UWBP_ToastNotifcation_Entry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayWaitAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_ToastNotifcation_Entry_C::PlayWaitAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayWaitAnimation");

	UWBP_ToastNotifcation_Entry_C_PlayWaitAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayOutroAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_ToastNotifcation_Entry_C::PlayOutroAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.PlayOutroAnimation");

	UWBP_ToastNotifcation_Entry_C_PlayOutroAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.HandleOutroAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_ToastNotifcation_Entry_C::HandleOutroAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.HandleOutroAnimFinished");

	UWBP_ToastNotifcation_Entry_C_HandleOutroAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.ExecuteUbergraph_WBP_ToastNotifcation_Entry
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ToastNotifcation_Entry_C::ExecuteUbergraph_WBP_ToastNotifcation_Entry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.ExecuteUbergraph_WBP_ToastNotifcation_Entry");

	UWBP_ToastNotifcation_Entry_C_ExecuteUbergraph_WBP_ToastNotifcation_Entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.FinishedIntroAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ToastNotifcation_Entry_C::FinishedIntroAnimation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.FinishedIntroAnimation__DelegateSignature");

	UWBP_ToastNotifcation_Entry_C_FinishedIntroAnimation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.OnRemoveToastNotification__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWidget**              ToastWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ToastNotifcation_Entry_C::OnRemoveToastNotification__DelegateSignature(class UKSWidget** ToastWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ToastNotifcation_Entry.WBP_ToastNotifcation_Entry_C.OnRemoveToastNotification__DelegateSignature");

	UWBP_ToastNotifcation_Entry_C_OnRemoveToastNotification__DelegateSignature_Params params;
	params.ToastWidget = ToastWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
