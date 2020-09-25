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

// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.HandleInputStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* NewInputState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QueueSelection_RegionSelectButton_C::HandleInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE>* NewInputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.HandleInputStateChange");

	UWBP_QueueSelection_RegionSelectButton_C_HandleInputStateChange_Params params;
	params.NewInputState = NewInputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.SetupPromptImageHandling
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::SetupPromptImageHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.SetupPromptImageHandling");

	UWBP_QueueSelection_RegionSelectButton_C_SetupPromptImageHandling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QueueSelection_RegionSelectButton_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.InitializeWidget");

	UWBP_QueueSelection_RegionSelectButton_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.Update Region
// (BlueprintCallable, BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::Update_Region()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.Update Region");

	UWBP_QueueSelection_RegionSelectButton_C_Update_Region_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.OnHide");

	UWBP_QueueSelection_RegionSelectButton_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.LoginState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_LoginState*              LoginState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QueueSelection_RegionSelectButton_C::LoginState(EPUMG_LoginState* LoginState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.LoginState");

	UWBP_QueueSelection_RegionSelectButton_C_LoginState_Params params;
	params.LoginState = LoginState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.EnableAsButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::EnableAsButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.EnableAsButton");

	UWBP_QueueSelection_RegionSelectButton_C_EnableAsButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.DisableAsButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::DisableAsButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.DisableAsButton");

	UWBP_QueueSelection_RegionSelectButton_C_DisableAsButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.UpdateCrossplay
// (BlueprintCallable, BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::UpdateCrossplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.UpdateCrossplay");

	UWBP_QueueSelection_RegionSelectButton_C_UpdateCrossplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_QueueSelection_RegionSelectButton_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_QueueSelection_RegionSelectButton_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QueueSelection_RegionSelectButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.PreConstruct");

	UWBP_QueueSelection_RegionSelectButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QueueSelection_RegionSelectButton_C::ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton");

	UWBP_QueueSelection_RegionSelectButton_C_ExecuteUbergraph_WBP_QueueSelection_RegionSelectButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.RegionSelectRequested__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_QueueSelection_RegionSelectButton_C::RegionSelectRequested__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QueueSelection_RegionSelectButton.WBP_QueueSelection_RegionSelectButton_C.RegionSelectRequested__DelegateSignature");

	UWBP_QueueSelection_RegionSelectButton_C_RegionSelectRequested__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
