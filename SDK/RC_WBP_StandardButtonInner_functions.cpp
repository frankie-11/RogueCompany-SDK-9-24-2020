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

// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Height                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FName*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowPromptOnFocus              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonInner_C::SetDefaultValues(float* Height, float* Width, struct FText* ButtonText, struct FName* Action, bool* ShowPromptOnFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultValues");

	UWBP_StandardButtonInner_C_SetDefaultValues_Params params;
	params.Height = Height;
	params.Width = Width;
	params.ButtonText = ButtonText;
	params.Action = Action;
	params.ShowPromptOnFocus = ShowPromptOnFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InHeight                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonInner_C::SetHeight(float* InHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetHeight");

	UWBP_StandardButtonInner_C_SetHeight_Params params;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HasGamepadAction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasGamepadAction               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonInner_C::HasGamepadAction(bool* HasGamepadAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HasGamepadAction");

	UWBP_StandardButtonInner_C_HasGamepadAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasGamepadAction != nullptr)
		*HasGamepadAction = params.HasGamepadAction;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetGamepadPromptForAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonInner_C::SetGamepadPromptForAction(struct FName* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetGamepadPromptForAction");

	UWBP_StandardButtonInner_C_SetGamepadPromptForAction_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonInner_C::SetDefaultDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetDefaultDisplay");

	UWBP_StandardButtonInner_C_SetDefaultDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InWidth                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonInner_C::SetWidth(float* InWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetWidth");

	UWBP_StandardButtonInner_C_SetWidth_Params params;
	params.InWidth = InWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetButtonText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ButtonText                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StandardButtonInner_C::SetButtonText(struct FText* ButtonText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.SetButtonText");

	UWBP_StandardButtonInner_C_SetButtonText_Params params;
	params.ButtonText = ButtonText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_StandardButtonInner_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.NavigateConfirm");

	UWBP_StandardButtonInner_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonInner_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.PreConstruct");

	UWBP_StandardButtonInner_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_StandardButtonInner_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Construct");

	UWBP_StandardButtonInner_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StandardButtonInner_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_StandardButtonInner_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StandardButtonInner_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_StandardButtonInner_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_StandardButtonInner_C::BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_StandardButtonInner_C_BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_StandardButtonInner_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadHover");

	UWBP_StandardButtonInner_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_StandardButtonInner_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadUnhover");

	UWBP_StandardButtonInner_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonInner_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.GamepadConfirm");

	UWBP_StandardButtonInner_C_GamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Hover
// (BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonInner_C::Do_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Hover");

	UWBP_StandardButtonInner_C_Do_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Unhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_StandardButtonInner_C::Do_Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.Do Unhover");

	UWBP_StandardButtonInner_C_Do_Unhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonInner_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.InitializeWidget");

	UWBP_StandardButtonInner_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonInner_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.HandleInputStateChanged");

	UWBP_StandardButtonInner_C_HandleInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.ExecuteUbergraph_WBP_StandardButtonInner
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StandardButtonInner_C::ExecuteUbergraph_WBP_StandardButtonInner(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.ExecuteUbergraph_WBP_StandardButtonInner");

	UWBP_StandardButtonInner_C_ExecuteUbergraph_WBP_StandardButtonInner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_StandardButtonInner_C::OnUnhovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnUnhovered__DelegateSignature");

	UWBP_StandardButtonInner_C_OnUnhovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_StandardButtonInner_C::OnHovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnHovered__DelegateSignature");

	UWBP_StandardButtonInner_C_OnHovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_StandardButtonInner_C::OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StandardButtonInner.WBP_StandardButtonInner_C.OnClicked__DelegateSignature");

	UWBP_StandardButtonInner_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
