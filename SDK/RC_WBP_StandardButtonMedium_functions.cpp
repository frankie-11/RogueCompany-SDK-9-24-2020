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

// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GetGamepadPromptKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasValidKeyPrompt              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FKey                    GamepadKey                     (Parm, OutParm)

void UWBP_StandardButtonMedium_C::GetGamepadPromptKey(bool* HasValidKeyPrompt, struct FKey* GamepadKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GetGamepadPromptKey");

	UWBP_StandardButtonMedium_C_GetGamepadPromptKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasValidKeyPrompt != nullptr)
		*HasValidKeyPrompt = params.HasValidKeyPrompt;
	if (GamepadKey != nullptr)
		*GamepadKey = params.GamepadKey;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetKeyPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   GamepadButton                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StandardButtonMedium_C::SetKeyPrompt(struct FKey* GamepadButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetKeyPrompt");

	UWBP_StandardButtonMedium_C_SetKeyPrompt_Params params;
	params.GamepadButton = GamepadButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetDefaultDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonMedium_C::SetDefaultDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetDefaultDisplay");

	UWBP_StandardButtonMedium_C_SetDefaultDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InWidth                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonMedium_C::SetWidth(float* InWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetWidth");

	UWBP_StandardButtonMedium_C_SetWidth_Params params;
	params.InWidth = InWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StandardButtonMedium_C::SetButtonText(struct FText* ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.SetButtonText");

	UWBP_StandardButtonMedium_C_SetButtonText_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_StandardButtonMedium_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.NavigateConfirm");

	UWBP_StandardButtonMedium_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonMedium_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.PreConstruct");

	UWBP_StandardButtonMedium_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StandardButtonMedium_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Construct");

	UWBP_StandardButtonMedium_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StandardButtonMedium_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_StandardButtonMedium_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StandardButtonMedium_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_StandardButtonMedium_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StandardButtonMedium_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_StandardButtonMedium_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_StandardButtonMedium_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadHover");

	UWBP_StandardButtonMedium_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_StandardButtonMedium_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadUnhover");

	UWBP_StandardButtonMedium_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonMedium_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.GamepadConfirm");

	UWBP_StandardButtonMedium_C_GamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Hover
// (BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonMedium_C::Do_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Hover");

	UWBP_StandardButtonMedium_C_Do_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Unhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonMedium_C::Do_Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.Do Unhover");

	UWBP_StandardButtonMedium_C_Do_Unhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonMedium_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.InitializeWidget");

	UWBP_StandardButtonMedium_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonMedium_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.HandleInputStateChanged");

	UWBP_StandardButtonMedium_C_HandleInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StandardButtonMedium_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnInitialized");

	UWBP_StandardButtonMedium_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.ExecuteUbergraph_WBP_StandardButtonMedium
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonMedium_C::ExecuteUbergraph_WBP_StandardButtonMedium(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.ExecuteUbergraph_WBP_StandardButtonMedium");

	UWBP_StandardButtonMedium_C_ExecuteUbergraph_WBP_StandardButtonMedium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_StandardButtonMedium_C::OnUnhovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnUnhovered__DelegateSignature");

	UWBP_StandardButtonMedium_C_OnUnhovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_StandardButtonMedium_C::OnHovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnHovered__DelegateSignature");

	UWBP_StandardButtonMedium_C_OnHovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_StandardButtonMedium_C::OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonMedium.WBP_StandardButtonMedium_C.OnClicked__DelegateSignature");

	UWBP_StandardButtonMedium_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
