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

// Function GameHUDWidget.GameHUDWidget_C.ShouldVoteBlockMenu
struct UGameHUDWidget_C_ShouldVoteBlockMenu_Params
{
	bool                                               ShouldBlock;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameHUDWidget.GameHUDWidget_C.FlushVoteInput
struct UGameHUDWidget_C_FlushVoteInput_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.ReleasePlayerInputs
struct UGameHUDWidget_C_ReleasePlayerInputs_Params
{
	EInputReleaseType*                                 ReleaseType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameHUDWidget.GameHUDWidget_C.GetFocusableWidgets
struct UGameHUDWidget_C_GetFocusableWidgets_Params
{
	TArray<class UPUMG_Widget*>                        OutWIdgets;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function GameHUDWidget.GameHUDWidget_C.InitializeHUDContent
struct UGameHUDWidget_C_InitializeHUDContent_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.SetSafeFrame
struct UGameHUDWidget_C_SetSafeFrame_Params
{
	float*                                             Scale;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameHUDWidget.GameHUDWidget_C.Add Game Rule Widget
struct UGameHUDWidget_C_Add_Game_Rule_Widget_Params
{
	class UUserWidget**                                Game_Rule_Widget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString*                                    Parent_Widget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function GameHUDWidget.GameHUDWidget_C.InitializeKillCam
struct UGameHUDWidget_C_InitializeKillCam_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.InitializeHudWidgets
struct UGameHUDWidget_C_InitializeHudWidgets_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.InitializeMapWidgets
struct UGameHUDWidget_C_InitializeMapWidgets_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.Construct
struct UGameHUDWidget_C_Construct_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.Map
struct UGameHUDWidget_C_Map_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.InputListeners
struct UGameHUDWidget_C_InputListeners_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.Menu
struct UGameHUDWidget_C_Menu_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.Tick
struct UGameHUDWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameHUDWidget.GameHUDWidget_C.SetListenersActive
struct UGameHUDWidget_C_SetListenersActive_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameHUDWidget.GameHUDWidget_C.HandleKillCamEnabled
struct UGameHUDWidget_C_HandleKillCamEnabled_Params
{
	bool*                                              IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameHUDWidget.GameHUDWidget_C.ShowHUD
struct UGameHUDWidget_C_ShowHUD_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.HideHUD
struct UGameHUDWidget_C_HideHUD_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.ToggleTopBarHUD
struct UGameHUDWidget_C_ToggleTopBarHUD_Params
{
	bool*                                              ShouldShow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameHUDWidget.GameHUDWidget_C.InitializeJobSelectionManager
struct UGameHUDWidget_C_InitializeJobSelectionManager_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.HandleOpenTextChat
struct UGameHUDWidget_C_HandleOpenTextChat_Params
{
	bool*                                              BeginChatCommand;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameHUDWidget.GameHUDWidget_C.OpenTextChatToPlayer
struct UGameHUDWidget_C_OpenTextChatToPlayer_Params
{
	class UPUMG_PlayerInfo**                           Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameHUDWidget.GameHUDWidget_C.Handle Viewport Size Changed
struct UGameHUDWidget_C_Handle_Viewport_Size_Changed_Params
{
	struct FIntPoint*                                  ViewportSize;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameHUDWidget.GameHUDWidget_C.InitializeWidget
struct UGameHUDWidget_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameHUDWidget.GameHUDWidget_C.ToggleTabScreen
struct UGameHUDWidget_C_ToggleTabScreen_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.DebugOnePress
struct UGameHUDWidget_C_DebugOnePress_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.DebugOneRelease
struct UGameHUDWidget_C_DebugOneRelease_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.DebugTwoPress
struct UGameHUDWidget_C_DebugTwoPress_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.DebugTwoRelease
struct UGameHUDWidget_C_DebugTwoRelease_Params
{
};

// Function GameHUDWidget.GameHUDWidget_C.OnChangedInput
struct UGameHUDWidget_C_OnChangedInput_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameHUDWidget.GameHUDWidget_C.ExecuteUbergraph_GameHUDWidget
struct UGameHUDWidget_C_ExecuteUbergraph_GameHUDWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
