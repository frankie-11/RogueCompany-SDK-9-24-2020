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

// Function BP_GameHUDNew.BP_GameHUDNew_C.GetFocusableWidgets
struct ABP_GameHUDNew_C_GetFocusableWidgets_Params
{
	TArray<class UPUMG_Widget*>                        FocusableWidgets;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.GetContextBarWidget
struct ABP_GameHUDNew_C_GetContextBarWidget_Params
{
	class UKSContextBarWidget*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.ToggleWatermarkDisplay
struct ABP_GameHUDNew_C_ToggleWatermarkDisplay_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.GetAsyncWidgetsForString
struct ABP_GameHUDNew_C_GetAsyncWidgetsForString_Params
{
	struct FString*                                    String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<class UUserWidget*>                         UserWidgets;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.SetupJobSelectionManager
struct ABP_GameHUDNew_C_SetupJobSelectionManager_Params
{
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.GetPopupManager
struct ABP_GameHUDNew_C_GetPopupManager_Params
{
	class UPUMG_PopupManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.EvaluateFocus
struct ABP_GameHUDNew_C_EvaluateFocus_Params
{
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.OnLoaded_9A584D3E423F982EA7A073A29FBFC2FD
struct ABP_GameHUDNew_C_OnLoaded_9A584D3E423F982EA7A073A29FBFC2FD_Params
{
	class UClass**                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.ReceiveBeginPlay
struct ABP_GameHUDNew_C_ReceiveBeginPlay_Params
{
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.SetUIFocus
struct ABP_GameHUDNew_C_SetUIFocus_Params
{
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.HandleReturnToHomeClick
struct ABP_GameHUDNew_C_HandleReturnToHomeClick_Params
{
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.OnShowHUD
struct ABP_GameHUDNew_C_OnShowHUD_Params
{
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.OnHideHUD
struct ABP_GameHUDNew_C_OnHideHUD_Params
{
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.Spawn Tutorial Widget
struct ABP_GameHUDNew_C_Spawn_Tutorial_Widget_Params
{
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.OnToggleHUD
struct ABP_GameHUDNew_C_OnToggleHUD_Params
{
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.OnToggleTopBar
struct ABP_GameHUDNew_C_OnToggleTopBar_Params
{
	bool*                                              ShouldShow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.SetHUDVisible
struct ABP_GameHUDNew_C_SetHUDVisible_Params
{
	bool*                                              bVisible;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.CreateGameRuleWidget
struct ABP_GameHUDNew_C_CreateGameRuleWidget_Params
{
	struct FKSWidgetInfoParams*                        WidgetInfoParams;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.BroadcastWidgetMessage
struct ABP_GameHUDNew_C_BroadcastWidgetMessage_Params
{
	struct FName*                                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.BindEventToWidgetMessages
struct ABP_GameHUDNew_C_BindEventToWidgetMessages_Params
{
	struct FScriptDelegate*                            Callback;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.HandleOnPhaseChanged
struct ABP_GameHUDNew_C_HandleOnPhaseChanged_Params
{
	struct FName*                                      NewPhaseName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousPhaseName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.HandleOpenTextChat
struct ABP_GameHUDNew_C_HandleOpenTextChat_Params
{
	bool*                                              BeginChatCommand;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.DisplayWatermark
struct ABP_GameHUDNew_C_DisplayWatermark_Params
{
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.OnAsyncWidgetInfoLoaded
struct ABP_GameHUDNew_C_OnAsyncWidgetInfoLoaded_Params
{
	class UClass**                                     LoadedClass;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString*                                    ParentWidget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class AKSWidgetInfoActor**                         WidgetInfoActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.OpenTextChatToPlayer
struct ABP_GameHUDNew_C_OpenTextChatToPlayer_Params
{
	class UPUMG_PlayerInfo**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.ApplySafeFrameScale
struct ABP_GameHUDNew_C_ApplySafeFrameScale_Params
{
	float*                                             SafeFrameScale;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.WalkinAnim
struct ABP_GameHUDNew_C_WalkinAnim_Params
{
	class AWalkinCinematicCharacter_C**                Player01;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWalkinCinematicCharacter_C**                Player02;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWalkinCinematicCharacter_C**                Player03;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AWalkinCinematicCharacter_C**                Player04;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.ExecuteUbergraph_BP_GameHUDNew
struct ABP_GameHUDNew_C_ExecuteUbergraph_BP_GameHUDNew_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.OnRuleWidgetCreated__DelegateSignature
struct ABP_GameHUDNew_C_OnRuleWidgetCreated__DelegateSignature_Params
{
	class UUserWidget**                                UserWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString*                                    Placement;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.HUDMessage__DelegateSignature
struct ABP_GameHUDNew_C_HUDMessage__DelegateSignature_Params
{
	struct FName*                                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_GameHUDNew.BP_GameHUDNew_C.OnSwimmingChanged__DelegateSignature
struct ABP_GameHUDNew_C_OnSwimmingChanged__DelegateSignature_Params
{
	bool*                                              IsSwimming;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
