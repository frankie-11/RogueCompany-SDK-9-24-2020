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

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetupQueueEvents
struct ABP_BrightLobbyHUD_C_SetupQueueEvents_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallRemoveTopViewRoute
struct ABP_BrightLobbyHUD_C_CallRemoveTopViewRoute_Params
{
	bool*                                              ForceTransition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ViewChanged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.CallAddViewRoute
struct ABP_BrightLobbyHUD_C_CallAddViewRoute_Params
{
	struct FName*                                      RouteName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ClearRouteStack;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ViewChanged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SafeFrameSettingApplied
struct ABP_BrightLobbyHUD_C_SafeFrameSettingApplied_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.BindSettingCallbacks
struct ABP_BrightLobbyHUD_C_BindSettingCallbacks_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InternalAddViewRoute
struct ABP_BrightLobbyHUD_C_InternalAddViewRoute_Params
{
	struct FName*                                      RouteName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ClearRouteStack;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject**                                    Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ViewChanged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnAcquisition
struct ABP_BrightLobbyHUD_C_OnAcquisition_Params
{
	class UKSAcquisition**                             Acquisition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetContextBarWidget
struct ABP_BrightLobbyHUD_C_GetContextBarWidget_Params
{
	class UKSContextBarWidget*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SwapViewRoute
struct ABP_BrightLobbyHUD_C_SwapViewRoute_Params
{
	struct FName*                                      RouteName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      SwapTargetRoute;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Remove Top View Route
struct ABP_BrightLobbyHUD_C_Remove_Top_View_Route_Params
{
	bool*                                              ForceTransition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ViewChanged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Add View Route
struct ABP_BrightLobbyHUD_C_Add_View_Route_Params
{
	struct FName*                                      RouteName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ClearRouteStack;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ForceTransition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ViewChanged;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandeEOMResults
struct ABP_BrightLobbyHUD_C_HandeEOMResults_Params
{
	bool*                                              ForceTransition;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetCurrentTransitionRoute
struct ABP_BrightLobbyHUD_C_GetCurrentTransitionRoute_Params
{
	struct FName                                       Current_Route;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetLobbyWidget
struct ABP_BrightLobbyHUD_C_GetLobbyWidget_Params
{
	class UKSLobbyWidget*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Home Screen
struct ABP_BrightLobbyHUD_C_Focus_Home_Screen_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current View Route
struct ABP_BrightLobbyHUD_C_Get_Current_View_Route_Params
{
	struct FName                                       Current_Route;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Focus Sticky Loadout Panel
struct ABP_BrightLobbyHUD_C_Focus_Sticky_Loadout_Panel_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.EvaluateFocus
struct ABP_BrightLobbyHUD_C_EvaluateFocus_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Get Current Loadout Slot
struct ABP_BrightLobbyHUD_C_Get_Current_Loadout_Slot_Params
{
	unsigned char                                      Current_Loadout_Slot;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Cache Current Loadout Slot
struct ABP_BrightLobbyHUD_C_Cache_Current_Loadout_Slot_Params
{
	unsigned char*                                     Loadout_Slot_Edit;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.InitialLobbyAnimStatesBinding
struct ABP_BrightLobbyHUD_C_InitialLobbyAnimStatesBinding_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.TempBootstrapFunctionality
struct ABP_BrightLobbyHUD_C_TempBootstrapFunctionality_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.FallbackLogoutCleanup
struct ABP_BrightLobbyHUD_C_FallbackLogoutCleanup_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetFocusableWidgetContainers
struct ABP_BrightLobbyHUD_C_GetFocusableWidgetContainers_Params
{
	TArray<class UPanelWidget*>                        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Login State Change
struct ABP_BrightLobbyHUD_C_Handle_Login_State_Change_Params
{
	EPUMG_LoginState*                                  Login_State;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.GetPopupManager
struct ABP_BrightLobbyHUD_C_GetPopupManager_Params
{
	class UPUMG_PopupManager*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ReceiveBeginPlay
struct ABP_BrightLobbyHUD_C_ReceiveBeginPlay_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleEndPlayingPreMatch
struct ABP_BrightLobbyHUD_C_HandleEndPlayingPreMatch_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleBeginPlayingPreMatch
struct ABP_BrightLobbyHUD_C_HandleBeginPlayingPreMatch_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleEndPlayingPostMatch
struct ABP_BrightLobbyHUD_C_HandleEndPlayingPostMatch_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleLoginCameraSet
struct ABP_BrightLobbyHUD_C_HandleLoginCameraSet_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleMainLobbyCameraSet
struct ABP_BrightLobbyHUD_C_HandleMainLobbyCameraSet_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Handle Party Invite Received
struct ABP_BrightLobbyHUD_C_Handle_Party_Invite_Received_Params
{
	class UPUMG_PlayerInfo**                           Inviter;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleSettingsKeybind
struct ABP_BrightLobbyHUD_C_HandleSettingsKeybind_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.SetUIFocus
struct ABP_BrightLobbyHUD_C_SetUIFocus_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleOpenTextChat
struct ABP_BrightLobbyHUD_C_HandleOpenTextChat_Params
{
	bool*                                              BeginChatCommand;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OpenTextChatToPlayer
struct ABP_BrightLobbyHUD_C_OpenTextChatToPlayer_Params
{
	class UPUMG_PlayerInfo**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ApplySafeFrameScale
struct ABP_BrightLobbyHUD_C_ApplySafeFrameScale_Params
{
	float*                                             SafeFrameScale;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.OnCustomQueueJoin
struct ABP_BrightLobbyHUD_C_OnCustomQueueJoin_Params
{
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.HandleRewardsReceived
struct ABP_BrightLobbyHUD_C_HandleRewardsReceived_Params
{
	struct FPlayerRewardsSummary*                      PlayerRewardsSummary;                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FScoreboardStats*                           ScoreboardStats;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.ExecuteUbergraph_BP_BrightLobbyHUD
struct ABP_BrightLobbyHUD_C_ExecuteUbergraph_BP_BrightLobbyHUD_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BrightLobbyHUD.BP_BrightLobbyHUD_C.Loadout Slot Change__DelegateSignature
struct ABP_BrightLobbyHUD_C_Loadout_Slot_Change__DelegateSignature_Params
{
	unsigned char*                                     Loadout_Slot_Edit;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
