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

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetPromptActionActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_Input_C::SetPromptActionActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetPromptActionActive");

	UWBP_TextChat_Input_C_SetPromptActionActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateGamepadFocus
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_Input_C::UpdateGamepadFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateGamepadFocus");

	UWBP_TextChat_Input_C_UpdateGamepadFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.HandleInputStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_Input_C::HandleInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.HandleInputStateChange");

	UWBP_TextChat_Input_C_HandleInputStateChange_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetEngaged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Engaged                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_Input_C::SetEngaged(bool* Engaged)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetEngaged");

	UWBP_TextChat_Input_C_SetEngaged_Params params;
	params.Engaged = Engaged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateHintText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_Input_C::UpdateHintText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateHintText");

	UWBP_TextChat_Input_C_UpdateHintText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.GetHintText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_TextChat_Input_C::GetHintText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.GetHintText");

	UWBP_TextChat_Input_C_GetHintText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetCurrentChannel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel*             Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_PlayerInfo**       PersonalChannelPlayer          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_Input_C::SetCurrentChannel(EPUMG_ChatChannel* Channel, class UPUMG_PlayerInfo** PersonalChannelPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetCurrentChannel");

	UWBP_TextChat_Input_C_SetCurrentChannel_Params params;
	params.Channel = Channel;
	params.PersonalChannelPlayer = PersonalChannelPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.On_Input_KeyDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_TextChat_Input_C::On_Input_KeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.On_Input_KeyDown");

	UWBP_TextChat_Input_C_On_Input_KeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_Input_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.PreConstruct");

	UWBP_TextChat_Input_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TextChat_Input_C::BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_TextChat_Input_C_BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_Input_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.InitializeWidget");

	UWBP_TextChat_Input_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnViewStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  CurrentRoute                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousRoute                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EViewManagerLayer*             Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_Input_C::OnViewStateChanged(struct FName* CurrentRoute, struct FName* PreviousRoute, EViewManagerLayer* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnViewStateChanged");

	UWBP_TextChat_Input_C_OnViewStateChanged_Params params;
	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_TextChat_Input_C::BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature");

	UWBP_TextChat_Input_C_BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_Input_C::BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UWBP_TextChat_Input_C_BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.ExecuteUbergraph_WBP_TextChat_Input
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_Input_C::ExecuteUbergraph_WBP_TextChat_Input(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.ExecuteUbergraph_WBP_TextChat_Input");

	UWBP_TextChat_Input_C_ExecuteUbergraph_WBP_TextChat_Input_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnDownPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_Input_C::OnDownPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnDownPressed__DelegateSignature");

	UWBP_TextChat_Input_C_OnDownPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnUpPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_Input_C::OnUpPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnUpPressed__DelegateSignature");

	UWBP_TextChat_Input_C_OnUpPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnRightPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_Input_C::OnRightPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnRightPressed__DelegateSignature");

	UWBP_TextChat_Input_C_OnRightPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnLeftPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_Input_C::OnLeftPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnLeftPressed__DelegateSignature");

	UWBP_TextChat_Input_C_OnLeftPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnCancelPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_TextChat_Input_C::OnCancelPressed__DelegateSignature(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnCancelPressed__DelegateSignature");

	UWBP_TextChat_Input_C_OnCancelPressed__DelegateSignature_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnTabPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_Input_C::OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnTabPressed__DelegateSignature");

	UWBP_TextChat_Input_C_OnTabPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
