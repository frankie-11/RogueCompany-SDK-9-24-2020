#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_TextChat.WBP_TextChat_C.IsTextChatEnabled
struct UWBP_TextChat_C_IsTextChatEnabled_Params
{
	bool                                               IsEnabled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledApplied
struct UWBP_TextChat_C_HandleTextChatEnabledApplied_Params
{
	bool*                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.AddCancelKey
struct UWBP_TextChat_C_AddCancelKey_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputReleased
struct UWBP_TextChat_C_ConsumeCancelInputReleased_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.IsAnyCancelKeyDown
struct UWBP_TextChat_C_IsAnyCancelKeyDown_Params
{
	bool                                               AnyKeyDown;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.AddAllCancelKeys
struct UWBP_TextChat_C_AddAllCancelKeys_Params
{
	TArray<struct FName>                               Actions;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_TextChat.WBP_TextChat_C.ProcessDelayedFocusClear
struct UWBP_TextChat_C_ProcessDelayedFocusClear_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.OnFocusReceived
struct UWBP_TextChat_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleSubmitTextInput
struct UWBP_TextChat_C_HandleSubmitTextInput_Params
{
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_TextChat.WBP_TextChat_C.CanChatInChannel
struct UWBP_TextChat_C_CanChatInChannel_Params
{
	EPUMG_ChatChannel*                                 Channel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.GetDefaultChannel
struct UWBP_TextChat_C_GetDefaultChannel_Params
{
	EPUMG_ChatChannel                                  DefaultChannel;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleChannelChanged
struct UWBP_TextChat_C_HandleChannelChanged_Params
{
	struct FPUMG_ActiveChatChannelData                 ChannelData;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleChatMessage
struct UWBP_TextChat_C_HandleChatMessage_Params
{
	struct FPUMG_ChatData                              Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_TextChat.WBP_TextChat_C.DisableInputListeners
struct UWBP_TextChat_C_DisableInputListeners_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.EnableInputListeners
struct UWBP_TextChat_C_EnableInputListeners_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.ConsumeCancelInputPressed
struct UWBP_TextChat_C_ConsumeCancelInputPressed_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.SetUIFocus
struct UWBP_TextChat_C_SetUIFocus_Params
{
	bool*                                              IsFocused;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.FinishTextChat
struct UWBP_TextChat_C_FinishTextChat_Params
{
	struct FText                                       InputText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool*                                              ShouldSubmitText;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              WaitForCancelRelease;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.StartTextChat
struct UWBP_TextChat_C_StartTextChat_Params
{
	bool*                                              BeginChatCommand;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.Construct
struct UWBP_TextChat_C_Construct_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.Tick
struct UWBP_TextChat_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.OpenTextChat
struct UWBP_TextChat_C_OpenTextChat_Params
{
	bool*                                              BeginChatCommand;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.OnTextCommitted
struct UWBP_TextChat_C_OnTextCommitted_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.InitializeWidgetNavigation
struct UWBP_TextChat_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.HandleChatMessageReceived
struct UWBP_TextChat_C_HandleChatMessageReceived_Params
{
	struct FPUMG_ChatData*                             ReceivedMessage;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_TextChat.WBP_TextChat_C.OnChannelChanged
struct UWBP_TextChat_C_OnChannelChanged_Params
{
	struct FPUMG_ActiveChatChannelData*                ChatChannelData;                                          // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelJoined
struct UWBP_TextChat_C_HandleChatChannelJoined_Params
{
	EPUMG_ChatChannel*                                 Channel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleChatChannelLeft
struct UWBP_TextChat_C_HandleChatChannelLeft_Params
{
	EPUMG_ChatChannel*                                 Channel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.InitializeWidget
struct UWBP_TextChat_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.OnCancelButtonPressed
struct UWBP_TextChat_C_OnCancelButtonPressed_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_TextChat.WBP_TextChat_C.OpenTextChatToPlayer
struct UWBP_TextChat_C_OpenTextChatToPlayer_Params
{
	class UPUMG_PlayerInfo**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat.WBP_TextChat_C.HandleCloseTextChat
struct UWBP_TextChat_C_HandleCloseTextChat_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.HandleTextChatEnabledChanged
struct UWBP_TextChat_C_HandleTextChatEnabledChanged_Params
{
};

// Function WBP_TextChat.WBP_TextChat_C.ExecuteUbergraph_WBP_TextChat
struct UWBP_TextChat_C_ExecuteUbergraph_WBP_TextChat_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
