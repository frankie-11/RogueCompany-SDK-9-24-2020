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

// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GetCurrentOptionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_PlayerContextMenuOption_C::GetCurrentOptionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GetCurrentOptionText");

	UWBP_PlayerContextMenuOption_C_GetCurrentOptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PlayerContextMenuOption_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.NavigateConfirm");

	UWBP_PlayerContextMenuOption_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.IsActiveForNavigation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenuOption_C::IsActiveForNavigation(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.IsActiveForNavigation");

	UWBP_PlayerContextMenuOption_C_IsActiveForNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Update Callout Visibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerContextMenuOption_C::Update_Callout_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Update Callout Visibility");

	UWBP_PlayerContextMenuOption_C_Update_Callout_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.SocialPlayerContextMenuOptionClickSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerContextMenuOption_C::SocialPlayerContextMenuOptionClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.SocialPlayerContextMenuOptionClickSFX");

	UWBP_PlayerContextMenuOption_C_SocialPlayerContextMenuOptionClickSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.SocialPlayerContextMenuOptionHoverSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerContextMenuOption_C::SocialPlayerContextMenuOptionHoverSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.SocialPlayerContextMenuOptionHoverSFX");

	UWBP_PlayerContextMenuOption_C_SocialPlayerContextMenuOptionHoverSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenuOption_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.PreConstruct");

	UWBP_PlayerContextMenuOption_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.SetActiveInMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenuOption_C::SetActiveInMenu(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.SetActiveInMenu");

	UWBP_PlayerContextMenuOption_C_SetActiveInMenu_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Handle Input State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenuOption_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Handle Input State Changed");

	UWBP_PlayerContextMenuOption_C_Handle_Input_State_Changed_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_PlayerContextMenuOption_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GamepadHover");

	UWBP_PlayerContextMenuOption_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_PlayerContextMenuOption_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.GamepadUnhover");

	UWBP_PlayerContextMenuOption_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerContextMenuOption_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.Construct");

	UWBP_PlayerContextMenuOption_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_PlayerContextMenuOption_C::BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature");

	UWBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenuOption_C::BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature(bool* IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature");

	UWBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature
// (BlueprintEvent)

void UWBP_PlayerContextMenuOption_C::BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature");

	UWBP_PlayerContextMenuOption_C_BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerContextMenuOption_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.OnInitialized");

	UWBP_PlayerContextMenuOption_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.ExecuteUbergraph_WBP_PlayerContextMenuOption
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenuOption_C::ExecuteUbergraph_WBP_PlayerContextMenuOption(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.ExecuteUbergraph_WBP_PlayerContextMenuOption");

	UWBP_PlayerContextMenuOption_C_ExecuteUbergraph_WBP_PlayerContextMenuOption_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.OnContextOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerContextOption>* Context_Option                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenuOption_C::OnContextOptionSelected__DelegateSignature(TEnumAsByte<EPlayerContextOption>* Context_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenuOption.WBP_PlayerContextMenuOption_C.OnContextOptionSelected__DelegateSignature");

	UWBP_PlayerContextMenuOption_C_OnContextOptionSelected__DelegateSignature_Params params;
	params.Context_Option = Context_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
