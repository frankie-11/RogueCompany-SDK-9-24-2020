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

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.GetMaxChatMessages
struct UWBP_TextChat_ChatWindow_C_GetMaxChatMessages_Params
{
	int                                                MaxChatMessages;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.SetCollapsed
struct UWBP_TextChat_ChatWindow_C_SetCollapsed_Params
{
	bool*                                              Collapsed;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.AddChatMessage
struct UWBP_TextChat_ChatWindow_C_AddChatMessage_Params
{
	struct FPUMG_ChatData                              ChatData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.Tick
struct UWBP_TextChat_ChatWindow_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_TextChat_ChatWindow_C_BndEvt__CloseBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.InitializeWidget
struct UWBP_TextChat_ChatWindow_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.HandleInputStateChanged
struct UWBP_TextChat_ChatWindow_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.ExecuteUbergraph_WBP_TextChat_ChatWindow
struct UWBP_TextChat_ChatWindow_C_ExecuteUbergraph_WBP_TextChat_ChatWindow_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_ChatWindow.WBP_TextChat_ChatWindow_C.OnCloseButtonClicked__DelegateSignature
struct UWBP_TextChat_ChatWindow_C_OnCloseButtonClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
