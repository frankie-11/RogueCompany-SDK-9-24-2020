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

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.GetMaxChatMessages
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            MaxChatMessages                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_ChatWindow_C::GetMaxChatMessages(int* MaxChatMessages)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.GetMaxChatMessages");

	UWBP_TextChat_ChatWindow_C_GetMaxChatMessages_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxChatMessages != nullptr)
		*MaxChatMessages = params.MaxChatMessages;
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.SetCollapsed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Collapsed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_ChatWindow_C::SetCollapsed(bool* Collapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.SetCollapsed");

	UWBP_TextChat_ChatWindow_C_SetCollapsed_Params params;
	params.Collapsed = Collapsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.AddChatMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPUMG_ChatData          ChatData                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_TextChat_ChatWindow_C::AddChatMessage(struct FPUMG_ChatData* ChatData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.AddChatMessage");

	UWBP_TextChat_ChatWindow_C_AddChatMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChatData != nullptr)
		*ChatData = params.ChatData;
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_ChatWindow_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.Tick");

	UWBP_TextChat_ChatWindow_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TextChat_ChatWindow_C::BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_TextChat_ChatWindow_C_BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_ChatWindow_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.InitializeWidget");

	UWBP_TextChat_ChatWindow_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_ChatWindow_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.HandleInputStateChanged");

	UWBP_TextChat_ChatWindow_C_HandleInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.ExecuteUbergraph_WBP_TextChat_ChatWindow
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_ChatWindow_C::ExecuteUbergraph_WBP_TextChat_ChatWindow(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.ExecuteUbergraph_WBP_TextChat_ChatWindow");

	UWBP_TextChat_ChatWindow_C_ExecuteUbergraph_WBP_TextChat_ChatWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.OnCloseButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_ChatWindow_C::OnCloseButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.OnCloseButtonClicked__DelegateSignature");

	UWBP_TextChat_ChatWindow_C_OnCloseButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
