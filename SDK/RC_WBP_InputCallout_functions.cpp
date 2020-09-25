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

// Function WBP_InputCallout.WBP_InputCallout_C.GetActionKeys
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UKSSettingsDataFactory** KSSettingsDataFactory          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPGAME_INPUT_STATE>* InputType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FKey                    PrimaryButton                  (Parm, OutParm)
// struct FKey                    SecondaryButton                (Parm, OutParm)

void UWBP_InputCallout_C::GetActionKeys(class UKSSettingsDataFactory** KSSettingsDataFactory, struct FName* Name, TEnumAsByte<EPGAME_INPUT_STATE>* InputType, struct FKey* PrimaryButton, struct FKey* SecondaryButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.GetActionKeys");

	UWBP_InputCallout_C_GetActionKeys_Params params;
	params.KSSettingsDataFactory = KSSettingsDataFactory;
	params.Name = Name;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PrimaryButton != nullptr)
		*PrimaryButton = params.PrimaryButton;
	if (SecondaryButton != nullptr)
		*SecondaryButton = params.SecondaryButton;
}


// Function WBP_InputCallout.WBP_InputCallout_C.UpdateComboIndicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InputCallout_C::UpdateComboIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.UpdateComboIndicator");

	UWBP_InputCallout_C_UpdateComboIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCallout.WBP_InputCallout_C.IsValidActionNameForCurrentInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_InputCallout_C::IsValidActionNameForCurrentInput(struct FName* Name, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.IsValidActionNameForCurrentInput");

	UWBP_InputCallout_C_IsValidActionNameForCurrentInput_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function WBP_InputCallout.WBP_InputCallout_C.ResetHoldProgress
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InputCallout_C::ResetHoldProgress()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.ResetHoldProgress");

	UWBP_InputCallout_C_ResetHoldProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCallout.WBP_InputCallout_C.SetHoldProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         HoldProgress                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputCallout_C::SetHoldProgress(float* HoldProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.SetHoldProgress");

	UWBP_InputCallout_C_SetHoldProgress_Params params;
	params.HoldProgress = HoldProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCallout.WBP_InputCallout_C.SetSecondaryKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InputCallout_C::SetSecondaryKey(struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.SetSecondaryKey");

	UWBP_InputCallout_C_SetSecondaryKey_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCallout.WBP_InputCallout_C.SetPrimaryKey
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InputCallout_C::SetPrimaryKey(struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.SetPrimaryKey");

	UWBP_InputCallout_C_SetPrimaryKey_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCallout.WBP_InputCallout_C.OnKeyBindSettingChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  KeyBindName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputCallout_C::OnKeyBindSettingChanged(struct FName* KeyBindName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.OnKeyBindSettingChanged");

	UWBP_InputCallout_C_OnKeyBindSettingChanged_Params params;
	params.KeyBindName = KeyBindName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCallout.WBP_InputCallout_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputCallout_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.InitializeWidget");

	UWBP_InputCallout_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCallout.WBP_InputCallout_C.ModeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputCallout_C::ModeChange(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.ModeChange");

	UWBP_InputCallout_C_ModeChange_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCallout.WBP_InputCallout_C.SetActionName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  KeyBoardAction                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  GamepadAction                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  MobileAction                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputCallout_C::SetActionName(struct FName* KeyBoardAction, struct FName* GamepadAction, struct FName* MobileAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.SetActionName");

	UWBP_InputCallout_C_SetActionName_Params params;
	params.KeyBoardAction = KeyBoardAction;
	params.GamepadAction = GamepadAction;
	params.MobileAction = MobileAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCallout.WBP_InputCallout_C.RemoveActionName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputCallout_C::RemoveActionName(struct FName* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.RemoveActionName");

	UWBP_InputCallout_C_RemoveActionName_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCallout.WBP_InputCallout_C.ClearAllActionName
// (BlueprintCallable, BlueprintEvent)

void UWBP_InputCallout_C::ClearAllActionName()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.ClearAllActionName");

	UWBP_InputCallout_C_ClearAllActionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InputCallout.WBP_InputCallout_C.ExecuteUbergraph_WBP_InputCallout
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InputCallout_C::ExecuteUbergraph_WBP_InputCallout(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InputCallout.WBP_InputCallout_C.ExecuteUbergraph_WBP_InputCallout");

	UWBP_InputCallout_C_ExecuteUbergraph_WBP_InputCallout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
