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

// Function WBP_TextChat.WBP_TextChat_C.IsTextChatEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsEnabled                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::IsTextChatEnabled(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.IsTextChatEnabled");

	UWBP_TextChat_C_IsTextChatEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEnabled != nullptr)
		*IsEnabled = params.IsEnabled;
}


// Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledApplied
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::HandleTextChatEnabledApplied(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledApplied");

	UWBP_TextChat_C_HandleTextChatEnabledApplied_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.AddCancelKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_TextChat_C::AddCancelKey(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.AddCancelKey");

	UWBP_TextChat_C_AddCancelKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputReleased
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_C::ConsumeCancelInputReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputReleased");

	UWBP_TextChat_C_ConsumeCancelInputReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.IsAnyCancelKeyDown
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AnyKeyDown                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::IsAnyCancelKeyDown(bool* AnyKeyDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.IsAnyCancelKeyDown");

	UWBP_TextChat_C_IsAnyCancelKeyDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnyKeyDown != nullptr)
		*AnyKeyDown = params.AnyKeyDown;
}


// Function WBP_TextChat.WBP_TextChat_C.AddAllCancelKeys
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Actions                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_TextChat_C::AddAllCancelKeys(TArray<struct FName>* Actions)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.AddAllCancelKeys");

	UWBP_TextChat_C_AddAllCancelKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actions != nullptr)
		*Actions = params.Actions;
}


// Function WBP_TextChat.WBP_TextChat_C.ProcessDelayedFocusClear
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_C::ProcessDelayedFocusClear()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.ProcessDelayedFocusClear");

	UWBP_TextChat_C_ProcessDelayedFocusClear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_TextChat_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.OnFocusReceived");

	UWBP_TextChat_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TextChat.WBP_TextChat_C.HandleSubmitTextInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_TextChat_C::HandleSubmitTextInput(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.HandleSubmitTextInput");

	UWBP_TextChat_C_HandleSubmitTextInput_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.CanChatInChannel
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel*             Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_TextChat_C::CanChatInChannel(EPUMG_ChatChannel* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.CanChatInChannel");

	UWBP_TextChat_C_CanChatInChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_TextChat.WBP_TextChat_C.GetDefaultChannel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPUMG_ChatChannel              DefaultChannel                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::GetDefaultChannel(EPUMG_ChatChannel* DefaultChannel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.GetDefaultChannel");

	UWBP_TextChat_C_GetDefaultChannel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DefaultChannel != nullptr)
		*DefaultChannel = params.DefaultChannel;
}


// Function WBP_TextChat.WBP_TextChat_C.HandleChannelChanged
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPUMG_ActiveChatChannelData ChannelData                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_TextChat_C::HandleChannelChanged(struct FPUMG_ActiveChatChannelData* ChannelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.HandleChannelChanged");

	UWBP_TextChat_C_HandleChannelChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ChannelData != nullptr)
		*ChannelData = params.ChannelData;
}


// Function WBP_TextChat.WBP_TextChat_C.HandleChatMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPUMG_ChatData          Message                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_TextChat_C::HandleChatMessage(struct FPUMG_ChatData* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.HandleChatMessage");

	UWBP_TextChat_C_HandleChatMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;
}


// Function WBP_TextChat.WBP_TextChat_C.DisableInputListeners
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_C::DisableInputListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.DisableInputListeners");

	UWBP_TextChat_C_DisableInputListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.EnableInputListeners
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_C::EnableInputListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.EnableInputListeners");

	UWBP_TextChat_C_EnableInputListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputPressed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_C::ConsumeCancelInputPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputPressed");

	UWBP_TextChat_C_ConsumeCancelInputPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.SetUIFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsFocused                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::SetUIFocus(bool* IsFocused)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.SetUIFocus");

	UWBP_TextChat_C_SetUIFocus_Params params;
	params.IsFocused = IsFocused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.FinishTextChat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   InputText                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          ShouldSubmitText               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          WaitForCancelRelease           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::FinishTextChat(bool* ShouldSubmitText, bool* WaitForCancelRelease, struct FText* InputText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.FinishTextChat");

	UWBP_TextChat_C_FinishTextChat_Params params;
	params.ShouldSubmitText = ShouldSubmitText;
	params.WaitForCancelRelease = WaitForCancelRelease;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InputText != nullptr)
		*InputText = params.InputText;
}


// Function WBP_TextChat.WBP_TextChat_C.StartTextChat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          BeginChatCommand               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::StartTextChat(bool* BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.StartTextChat");

	UWBP_TextChat_C_StartTextChat_Params params;
	params.BeginChatCommand = BeginChatCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TextChat_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.Construct");

	UWBP_TextChat_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.Tick");

	UWBP_TextChat_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.OpenTextChat
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          BeginChatCommand               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::OpenTextChat(bool* BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.OpenTextChat");

	UWBP_TextChat_C_OpenTextChat_Params params;
	params.BeginChatCommand = BeginChatCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.OnTextCommitted
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>*      CommitMethod                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::OnTextCommitted(struct FText* Text, TEnumAsByte<ETextCommit>* CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.OnTextCommitted");

	UWBP_TextChat_C_OnTextCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_TextChat_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.InitializeWidgetNavigation");

	UWBP_TextChat_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.HandleChatMessageReceived
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPUMG_ChatData*         ReceivedMessage                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_TextChat_C::HandleChatMessageReceived(struct FPUMG_ChatData* ReceivedMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.HandleChatMessageReceived");

	UWBP_TextChat_C_HandleChatMessageReceived_Params params;
	params.ReceivedMessage = ReceivedMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.OnChannelChanged
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPUMG_ActiveChatChannelData* ChatChannelData                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_TextChat_C::OnChannelChanged(struct FPUMG_ActiveChatChannelData* ChatChannelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.OnChannelChanged");

	UWBP_TextChat_C_OnChannelChanged_Params params;
	params.ChatChannelData = ChatChannelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelJoined
// (Event, Protected, BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel*             Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::HandleChatChannelJoined(EPUMG_ChatChannel* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelJoined");

	UWBP_TextChat_C_HandleChatChannelJoined_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelLeft
// (Event, Protected, BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel*             Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::HandleChatChannelLeft(EPUMG_ChatChannel* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelLeft");

	UWBP_TextChat_C_HandleChatChannelLeft_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.InitializeWidget");

	UWBP_TextChat_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.OnCancelButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_TextChat_C::OnCancelButtonPressed(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.OnCancelButtonPressed");

	UWBP_TextChat_C_OnCancelButtonPressed_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.OpenTextChatToPlayer
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.OpenTextChatToPlayer");

	UWBP_TextChat_C_OpenTextChatToPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.HandleCloseTextChat
// (BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_C::HandleCloseTextChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.HandleCloseTextChat");

	UWBP_TextChat_C_HandleCloseTextChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledChanged
// (BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_C::HandleTextChatEnabledChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledChanged");

	UWBP_TextChat_C_HandleTextChatEnabledChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat.WBP_TextChat_C.ExecuteUbergraph_WBP_TextChat
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_C::ExecuteUbergraph_WBP_TextChat(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat.WBP_TextChat_C.ExecuteUbergraph_WBP_TextChat");

	UWBP_TextChat_C_ExecuteUbergraph_WBP_TextChat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
