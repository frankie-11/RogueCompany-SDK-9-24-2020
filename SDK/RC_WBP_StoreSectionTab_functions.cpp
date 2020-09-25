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

// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.ShowCTA
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowCTA                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSectionTab_C::ShowCTA(bool* ShowCTA)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.ShowCTA");

	UWBP_StoreSectionTab_C_ShowCTA_Params params;
	params.ShowCTA = ShowCTA;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetPromptButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   PromptKey                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoreSectionTab_C::SetPromptButton(struct FKey* PromptKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetPromptButton");

	UWBP_StoreSectionTab_C_SetPromptButton_Params params;
	params.PromptKey = PromptKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnInputStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSectionTab_C::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnInputStateChanged");

	UWBP_StoreSectionTab_C_OnInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_StoreSectionTab_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.NavigateConfirm");

	UWBP_StoreSectionTab_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StoreSectionTab_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.Construct");

	UWBP_StoreSectionTab_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreSectionTab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_StoreSectionTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreSectionTab_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.GamepadConfirm");

	UWBP_StoreSectionTab_C_GamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreSectionTab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_StoreSectionTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StoreSectionTab_C::BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_StoreSectionTab_C_BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetActive
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreSectionTab_C::SetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetActive");

	UWBP_StoreSectionTab_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetInactive
// (BlueprintCallable, BlueprintEvent)

void UWBP_StoreSectionTab_C::SetInactive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.SetInactive");

	UWBP_StoreSectionTab_C_SetInactive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSectionTab_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.PreConstruct");

	UWBP_StoreSectionTab_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSectionTab_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.InitializeWidget");

	UWBP_StoreSectionTab_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.ExecuteUbergraph_WBP_StoreSectionTab
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSectionTab_C::ExecuteUbergraph_WBP_StoreSectionTab(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.ExecuteUbergraph_WBP_StoreSectionTab");

	UWBP_StoreSectionTab_C_ExecuteUbergraph_WBP_StoreSectionTab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_StoreSectionTab_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnUnhovered__DelegateSignature");

	UWBP_StoreSectionTab_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_StoreSectionTab_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnHovered__DelegateSignature");

	UWBP_StoreSectionTab_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreSectionTab_C::OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreSectionTab.WBP_StoreSectionTab_C.OnClicked__DelegateSignature");

	UWBP_StoreSectionTab_C_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
