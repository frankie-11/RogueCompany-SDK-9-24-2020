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

// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InHeight                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonLarge_C::SetHeight(float* InHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetHeight");

	UWBP_StandardButtonLarge_C_SetHeight_Params params;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetGamepadPromptKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasValidKeyPrompt              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FKey                    GamepadKey                     (Parm, OutParm)

void UWBP_StandardButtonLarge_C::GetGamepadPromptKey(bool* HasValidKeyPrompt, struct FKey* GamepadKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GetGamepadPromptKey");

	UWBP_StandardButtonLarge_C_GetGamepadPromptKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasValidKeyPrompt != nullptr)
		*HasValidKeyPrompt = params.HasValidKeyPrompt;
	if (GamepadKey != nullptr)
		*GamepadKey = params.GamepadKey;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Set Key Prompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Prompt                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StandardButtonLarge_C::Set_Key_Prompt(struct FKey* Prompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Set Key Prompt");

	UWBP_StandardButtonLarge_C_Set_Key_Prompt_Params params;
	params.Prompt = Prompt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetGamepadPromptForAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonLarge_C::SetGamepadPromptForAction(struct FName* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetGamepadPromptForAction");

	UWBP_StandardButtonLarge_C_SetGamepadPromptForAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDefaultDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonLarge_C::SetDefaultDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetDefaultDisplay");

	UWBP_StandardButtonLarge_C_SetDefaultDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InWidth                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonLarge_C::SetWidth(float* InWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetWidth");

	UWBP_StandardButtonLarge_C_SetWidth_Params params;
	params.InWidth = InWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StandardButtonLarge_C::SetButtonText(struct FText* ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.SetButtonText");

	UWBP_StandardButtonLarge_C_SetButtonText_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_StandardButtonLarge_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.NavigateConfirm");

	UWBP_StandardButtonLarge_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonLarge_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.PreConstruct");

	UWBP_StandardButtonLarge_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StandardButtonLarge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Construct");

	UWBP_StandardButtonLarge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StandardButtonLarge_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_StandardButtonLarge_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StandardButtonLarge_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_StandardButtonLarge_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StandardButtonLarge_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_StandardButtonLarge_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_StandardButtonLarge_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadHover");

	UWBP_StandardButtonLarge_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_StandardButtonLarge_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadUnhover");

	UWBP_StandardButtonLarge_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonLarge_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.GamepadConfirm");

	UWBP_StandardButtonLarge_C_GamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Hover
// (BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonLarge_C::Do_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Hover");

	UWBP_StandardButtonLarge_C_Do_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Unhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonLarge_C::Do_Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.Do Unhover");

	UWBP_StandardButtonLarge_C_Do_Unhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonLarge_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.HandleInputStateChanged");

	UWBP_StandardButtonLarge_C_HandleInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StandardButtonLarge_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnInitialized");

	UWBP_StandardButtonLarge_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.ExecuteUbergraph_WBP_StandardButtonLarge
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonLarge_C::ExecuteUbergraph_WBP_StandardButtonLarge(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.ExecuteUbergraph_WBP_StandardButtonLarge");

	UWBP_StandardButtonLarge_C_ExecuteUbergraph_WBP_StandardButtonLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_StandardButtonLarge_C::OnUnhovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnUnhovered__DelegateSignature");

	UWBP_StandardButtonLarge_C_OnUnhovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_StandardButtonLarge_C::OnHovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnHovered__DelegateSignature");

	UWBP_StandardButtonLarge_C_OnHovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_StandardButtonLarge_C::OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonLarge.WBP_StandardButtonLarge_C.OnClicked__DelegateSignature");

	UWBP_StandardButtonLarge_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
