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

// Function PlayerActionPopup.PlayerActionPopup_C.UpdateMuteText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActionPopup_C::UpdateMuteText(bool* IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionPopup.PlayerActionPopup_C.UpdateMuteText");

	UPlayerActionPopup_C_UpdateMuteText_Params params;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionPopup.PlayerActionPopup_C.GetButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UStandardButton_C*> Buttons                        (Parm, OutParm, ZeroConstructor)

void UPlayerActionPopup_C::GetButtons(TArray<class UStandardButton_C*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionPopup.PlayerActionPopup_C.GetButtons");

	UPlayerActionPopup_C_GetButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function PlayerActionPopup.PlayerActionPopup_C.BndEvt__MutePlayerButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerActionPopup_C::BndEvt__MutePlayerButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionPopup.PlayerActionPopup_C.BndEvt__MutePlayerButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UPlayerActionPopup_C_BndEvt__MutePlayerButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionPopup.PlayerActionPopup_C.BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_164_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerActionPopup_C::BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_164_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionPopup.PlayerActionPopup_C.BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_164_OnClicked__DelegateSignature");

	UPlayerActionPopup_C_BndEvt__ReportPlayerButton_K2Node_ComponentBoundEvent_164_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionPopup.PlayerActionPopup_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerActionPopup_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionPopup.PlayerActionPopup_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UPlayerActionPopup_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionPopup.PlayerActionPopup_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActionPopup_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionPopup.PlayerActionPopup_C.InitializeWidget");

	UPlayerActionPopup_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionPopup.PlayerActionPopup_C.OnPopupShown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64_t*                       NewPlayerID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         NewPlayerState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TeamNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CanReport                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActionPopup_C::OnPopupShown(int64_t* NewPlayerID, class AKSPlayerState** NewPlayerState, int* TeamNum, bool* CanReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionPopup.PlayerActionPopup_C.OnPopupShown");

	UPlayerActionPopup_C_OnPopupShown_Params params;
	params.NewPlayerID = NewPlayerID;
	params.NewPlayerState = NewPlayerState;
	params.TeamNum = TeamNum;
	params.CanReport = CanReport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionPopup.PlayerActionPopup_C.OnPlayerReported
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActionPopup_C::OnPlayerReported(int* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionPopup.PlayerActionPopup_C.OnPlayerReported");

	UPlayerActionPopup_C_OnPlayerReported_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionPopup.PlayerActionPopup_C.BndEvt__ViewProfile_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UPlayerActionPopup_C::BndEvt__ViewProfile_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionPopup.PlayerActionPopup_C.BndEvt__ViewProfile_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UPlayerActionPopup_C_BndEvt__ViewProfile_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionPopup.PlayerActionPopup_C.ExecuteUbergraph_PlayerActionPopup
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActionPopup_C::ExecuteUbergraph_PlayerActionPopup(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionPopup.PlayerActionPopup_C.ExecuteUbergraph_PlayerActionPopup");

	UPlayerActionPopup_C_ExecuteUbergraph_PlayerActionPopup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionPopup.PlayerActionPopup_C.OnBackOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPlayerActionPopup_C::OnBackOut__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionPopup.PlayerActionPopup_C.OnBackOut__DelegateSignature");

	UPlayerActionPopup_C_OnBackOut__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionPopup.PlayerActionPopup_C.OnMutePlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int64_t*                       OwningPlayerID                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActionPopup_C::OnMutePlayer__DelegateSignature(bool* IsMuted, int64_t* OwningPlayerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionPopup.PlayerActionPopup_C.OnMutePlayer__DelegateSignature");

	UPlayerActionPopup_C_OnMutePlayer__DelegateSignature_Params params;
	params.IsMuted = IsMuted;
	params.OwningPlayerID = OwningPlayerID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlayerActionPopup.PlayerActionPopup_C.OnReportPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64_t*                       ReportedPlayerID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         NewPlayerState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TeamNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerActionPopup_C::OnReportPlayer__DelegateSignature(int64_t* ReportedPlayerID, class AKSPlayerState** NewPlayerState, int* TeamNum)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayerActionPopup.PlayerActionPopup_C.OnReportPlayer__DelegateSignature");

	UPlayerActionPopup_C_OnReportPlayer__DelegateSignature_Params params;
	params.ReportedPlayerID = ReportedPlayerID;
	params.NewPlayerState = NewPlayerState;
	params.TeamNum = TeamNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
