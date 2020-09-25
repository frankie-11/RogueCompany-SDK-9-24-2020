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

// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.InitalizeButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameConfirmation_C::InitalizeButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.InitalizeButtons");

	UWBP_CustomGameConfirmation_C_InitalizeButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.GetButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UKSWidget*>       Buttons                        (Parm, OutParm, ZeroConstructor)

void UWBP_CustomGameConfirmation_C::GetButtons(TArray<class UKSWidget*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.GetButtons");

	UWBP_CustomGameConfirmation_C_GetButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.PopulateCustomPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           QueueId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           mapId                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameConfirmation_C::PopulateCustomPopup(int* QueueId, int* mapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.PopulateCustomPopup");

	UWBP_CustomGameConfirmation_C_PopulateCustomPopup_Params params;
	params.QueueId = QueueId;
	params.mapId = mapId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameConfirmation_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.InitializeWidget");

	UWBP_CustomGameConfirmation_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameConfirmation_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_CustomGameConfirmation_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameConfirmation_C::BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWBP_CustomGameConfirmation_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_2_CloseButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomGameConfirmation_C::BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_2_CloseButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_2_CloseButtonClicked__DelegateSignature");

	UWBP_CustomGameConfirmation_C_BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_2_CloseButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.ExecuteUbergraph_WBP_CustomGameConfirmation
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameConfirmation_C::ExecuteUbergraph_WBP_CustomGameConfirmation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.ExecuteUbergraph_WBP_CustomGameConfirmation");

	UWBP_CustomGameConfirmation_C_ExecuteUbergraph_WBP_CustomGameConfirmation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.OnCreateLobby__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           QueueId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameConfirmation_C::OnCreateLobby__DelegateSignature(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.OnCreateLobby__DelegateSignature");

	UWBP_CustomGameConfirmation_C_OnCreateLobby__DelegateSignature_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.OnCancelLobby__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameConfirmation_C::OnCancelLobby__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C.OnCancelLobby__DelegateSignature");

	UWBP_CustomGameConfirmation_C_OnCancelLobby__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
