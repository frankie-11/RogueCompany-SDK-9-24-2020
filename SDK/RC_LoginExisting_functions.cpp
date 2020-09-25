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

// Function LoginExisting.LoginExisting_C.SetCacheErrorMsg
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULoginExisting_C::SetCacheErrorMsg()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.SetCacheErrorMsg");

	ULoginExisting_C_SetCacheErrorMsg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.UpdatePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULoginExisting_C::UpdatePlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.UpdatePlayerName");

	ULoginExisting_C_UpdatePlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULoginExisting_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.NavigateBack");

	ULoginExisting_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LoginExisting.LoginExisting_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULoginExisting_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.NavigateConfirm");

	ULoginExisting_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LoginExisting.LoginExisting_C.SetPlatformSpecificInterface
// (Public, BlueprintCallable, BlueprintEvent)

void ULoginExisting_C::SetPlatformSpecificInterface()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.SetPlatformSpecificInterface");

	ULoginExisting_C_SetPlatformSpecificInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.HandleLoginError
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  ErrorMsg                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoginExisting_C::HandleLoginError(struct FText* ErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.HandleLoginError");

	ULoginExisting_C_HandleLoginError_Params params;
	params.ErrorMsg = ErrorMsg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginExisting_C::BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature");

	ULoginExisting_C_BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void ULoginExisting_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.InitializeWidgetNavigation");

	ULoginExisting_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.OnShown
// (Event, Public, BlueprintEvent)

void ULoginExisting_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.OnShown");

	ULoginExisting_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.BndEvt__PasswordField_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginExisting_C::BndEvt__PasswordField_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.BndEvt__PasswordField_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature");

	ULoginExisting_C_BndEvt__PasswordField_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginExisting_C::BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature");

	ULoginExisting_C_BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULoginExisting_C::BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature");

	ULoginExisting_C_BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.BndEvt__PasswordField_K2Node_ComponentBoundEvent_63_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULoginExisting_C::BndEvt__PasswordField_K2Node_ComponentBoundEvent_63_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.BndEvt__PasswordField_K2Node_ComponentBoundEvent_63_OnEditableTextBoxChangedEvent__DelegateSignature");

	ULoginExisting_C_BndEvt__PasswordField_K2Node_ComponentBoundEvent_63_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.Handle Input State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginExisting_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.Handle Input State Changed");

	ULoginExisting_C_Handle_Input_State_Changed_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.ConfirmClicked
// (BlueprintCallable, BlueprintEvent)

void ULoginExisting_C::ConfirmClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.ConfirmClicked");

	ULoginExisting_C_ConfirmClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.OnHide
// (Event, Public, BlueprintEvent)

void ULoginExisting_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.OnHide");

	ULoginExisting_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.BndEvt__PCCreateButton_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginExisting_C::BndEvt__PCCreateButton_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.BndEvt__PCCreateButton_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature");

	ULoginExisting_C_BndEvt__PCCreateButton_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginExisting_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.InitializeWidget");

	ULoginExisting_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULoginExisting_C::BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	ULoginExisting_C_BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULoginExisting_C::BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	ULoginExisting_C_BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginExisting_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.PreConstruct");

	ULoginExisting_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.OnProfileChangeRequested
// (BlueprintCallable, BlueprintEvent)

void ULoginExisting_C::OnProfileChangeRequested()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.OnProfileChangeRequested");

	ULoginExisting_C_OnProfileChangeRequested_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.Gamepad Select Username
// (BlueprintCallable, BlueprintEvent)

void ULoginExisting_C::Gamepad_Select_Username()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.Gamepad Select Username");

	ULoginExisting_C_Gamepad_Select_Username_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.Gamepad Select Password
// (BlueprintCallable, BlueprintEvent)

void ULoginExisting_C::Gamepad_Select_Password()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.Gamepad Select Password");

	ULoginExisting_C_Gamepad_Select_Password_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginExisting.LoginExisting_C.ExecuteUbergraph_LoginExisting
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginExisting_C::ExecuteUbergraph_LoginExisting(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginExisting.LoginExisting_C.ExecuteUbergraph_LoginExisting");

	ULoginExisting_C_ExecuteUbergraph_LoginExisting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
