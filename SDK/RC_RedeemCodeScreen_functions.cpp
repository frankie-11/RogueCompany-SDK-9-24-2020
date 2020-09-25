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

// Function RedeemCodeScreen.RedeemCodeScreen_C.UpdateSubmitButtonState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void URedeemCodeScreen_C::UpdateSubmitButtonState()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.UpdateSubmitButtonState");

	URedeemCodeScreen_C_UpdateSubmitButtonState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.SetErrorMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ErrorMessage                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)

void URedeemCodeScreen_C::SetErrorMessage(struct FText* ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.SetErrorMessage");

	URedeemCodeScreen_C_SetErrorMessage_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnSpamPreventTimeout
// (Public, BlueprintCallable, BlueprintEvent)

void URedeemCodeScreen_C::OnSpamPreventTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnSpamPreventTimeout");

	URedeemCodeScreen_C_OnSpamPreventTimeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.GetPaletteColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName*                  Color_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (Parm, OutParm)

void URedeemCodeScreen_C::GetPaletteColor(struct FName* Color_Name, struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.GetPaletteColor");

	URedeemCodeScreen_C_GetPaletteColor_Params params;
	params.Color_Name = Color_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowPending
// (Public, BlueprintCallable, BlueprintEvent)

void URedeemCodeScreen_C::ShowPending()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.ShowPending");

	URedeemCodeScreen_C_ShowPending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.EndPending
// (Public, BlueprintCallable, BlueprintEvent)

void URedeemCodeScreen_C::EndPending()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.EndPending");

	URedeemCodeScreen_C_EndPending_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool URedeemCodeScreen_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.NavigateBack");

	URedeemCodeScreen_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowAnim
// (BlueprintCallable, BlueprintEvent)

void URedeemCodeScreen_C::StartShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowAnim");

	URedeemCodeScreen_C_StartShowAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)

void URedeemCodeScreen_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeTickAnimations");

	URedeemCodeScreen_C_InitializeTickAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemFinished
// (BlueprintCallable, BlueprintEvent)

void URedeemCodeScreen_C::ShowCodeRedeemFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemFinished");

	URedeemCodeScreen_C_ShowCodeRedeemFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemCodeScreen_C::ShowCodeRedeemAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemAnim");

	URedeemCodeScreen_C_ShowCodeRedeemAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitHideAnimation
// (BlueprintCallable, BlueprintEvent)

void URedeemCodeScreen_C::InitHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.InitHideAnimation");

	URedeemCodeScreen_C_InitHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemFinished
// (BlueprintCallable, BlueprintEvent)

void URedeemCodeScreen_C::HideCodeRedeemFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemFinished");

	URedeemCodeScreen_C_HideCodeRedeemFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemCodeScreen_C::HideCodeRedeemAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemAnim");

	URedeemCodeScreen_C_HideCodeRedeemAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideAnim
// (BlueprintCallable, BlueprintEvent)

void URedeemCodeScreen_C::StartHideAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideAnim");

	URedeemCodeScreen_C_StartHideAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemCodeScreen_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidget");

	URedeemCodeScreen_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void URedeemCodeScreen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetNavigation");

	URedeemCodeScreen_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URedeemCodeScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.Construct");

	URedeemCodeScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)

void URedeemCodeScreen_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetButtonListeners");

	URedeemCodeScreen_C_InitializeWidgetButtonListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.SubmitCode
// (BlueprintCallable, BlueprintEvent)

void URedeemCodeScreen_C::SubmitCode()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.SubmitCode");

	URedeemCodeScreen_C_SubmitCode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemCodeScreen_C::StartShowSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowSequence");

	URedeemCodeScreen_C_StartShowSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemCodeScreen_C::StartHideSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideSequence");

	URedeemCodeScreen_C_StartHideSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnShown
// (Event, Public, BlueprintEvent)

void URedeemCodeScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnShown");

	URedeemCodeScreen_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnHide
// (Event, Public, BlueprintEvent)

void URedeemCodeScreen_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnHide");

	URedeemCodeScreen_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCloseButtonClicked
// (BlueprintCallable, BlueprintEvent)

void URedeemCodeScreen_C::OnCloseButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnCloseButtonClicked");

	URedeemCodeScreen_C_OnCloseButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void URedeemCodeScreen_C::BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	URedeemCodeScreen_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeSubmit
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void URedeemCodeScreen_C::OnRedeemCodeSubmit()
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeSubmit");

	URedeemCodeScreen_C_OnRedeemCodeSubmit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeResult
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Error                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URedeemCodeScreen_C::OnRedeemCodeResult(bool* Success, struct FText* Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeResult");

	URedeemCodeScreen_C_OnRedeemCodeResult_Params params;
	params.Success = Success;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemCodeScreen_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.HandleInputStateChanged");

	URedeemCodeScreen_C_HandleInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URedeemCodeScreen_C::OnCodeTextChanged(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextChanged");

	URedeemCodeScreen_C_OnCodeTextChanged_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextCommit
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemCodeScreen_C::OnCodeTextCommit(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextCommit");

	URedeemCodeScreen_C_OnCodeTextCommit_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function RedeemCodeScreen.RedeemCodeScreen_C.ExecuteUbergraph_RedeemCodeScreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void URedeemCodeScreen_C::ExecuteUbergraph_RedeemCodeScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RedeemCodeScreen.RedeemCodeScreen_C.ExecuteUbergraph_RedeemCodeScreen");

	URedeemCodeScreen_C_ExecuteUbergraph_RedeemCodeScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
