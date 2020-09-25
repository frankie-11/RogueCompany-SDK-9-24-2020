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

// Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyUp
struct UBrightLobbyWidget_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyDown
struct UBrightLobbyWidget_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.SetErrorMessageDT
struct UBrightLobbyWidget_C_SetErrorMessageDT_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeSubWidgets
struct UBrightLobbyWidget_C_UninitializeSubWidgets_Params
{
	class UPanelWidget**                               Container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeSubWidgets
struct UBrightLobbyWidget_C_InitializeSubWidgets_Params
{
	class UPanelWidget**                               Container;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.HidePersistentWidgets
struct UBrightLobbyWidget_C_HidePersistentWidgets_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleMainLobbyCameraSet
struct UBrightLobbyWidget_C_HandleMainLobbyCameraSet_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.HandlePreMatchAnimStarted
struct UBrightLobbyWidget_C_HandlePreMatchAnimStarted_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.UnbindLobbyAnimationHandling
struct UBrightLobbyWidget_C_UnbindLobbyAnimationHandling_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.BindLobbyAnimationHandling
struct UBrightLobbyWidget_C_BindLobbyAnimationHandling_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeKSWidgets
struct UBrightLobbyWidget_C_UninitializeKSWidgets_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeKSWidgets
struct UBrightLobbyWidget_C_InitializeKSWidgets_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.CreateStickyWidgetData
struct UBrightLobbyWidget_C_CreateStickyWidgetData_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.Set Safe Frame
struct UBrightLobbyWidget_C_Set_Safe_Frame_Params
{
	float*                                             Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeWidget
struct UBrightLobbyWidget_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeWidget
struct UBrightLobbyWidget_C_UninitializeWidget_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.OnShown
struct UBrightLobbyWidget_C_OnShown_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleSpecialRouteCases
struct UBrightLobbyWidget_C_HandleSpecialRouteCases_Params
{
	struct FName*                                      CurrentRoute;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      LastRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EViewManagerLayer*                                 Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.Tick
struct UBrightLobbyWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.Handle Viewport Size Changed
struct UBrightLobbyWidget_C_Handle_Viewport_Size_Changed_Params
{
	struct FIntPoint*                                  ViewportSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChat
struct UBrightLobbyWidget_C_HandleOpenTextChat_Params
{
	bool*                                              BeginChatCommand;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeWidgetButtonListeners
struct UBrightLobbyWidget_C_InitializeWidgetButtonListeners_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForCommand
struct UBrightLobbyWidget_C_HandleOpenTextChatForCommand_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForChat
struct UBrightLobbyWidget_C_HandleOpenTextChatForChat_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.OpenTextChatToPlayer
struct UBrightLobbyWidget_C_OpenTextChatToPlayer_Params
{
	class UPUMG_PlayerInfo**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleViewStateChangeStarted
struct UBrightLobbyWidget_C_HandleViewStateChangeStarted_Params
{
	struct FName*                                      CurrentRoute;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      NextRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EViewManagerLayer*                                 Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOnePress
struct UBrightLobbyWidget_C_DebugOnePress_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOneRelease
struct UBrightLobbyWidget_C_DebugOneRelease_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoPress
struct UBrightLobbyWidget_C_DebugTwoPress_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoRelease
struct UBrightLobbyWidget_C_DebugTwoRelease_Params
{
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.ExecuteUbergraph_BrightLobbyWidget
struct UBrightLobbyWidget_C_ExecuteUbergraph_BrightLobbyWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BrightLobbyWidget.BrightLobbyWidget_C.BackButtonClicked__DelegateSignature
struct UBrightLobbyWidget_C_BackButtonClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
