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

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GetSelectedMapId
struct UWBP_CreateCustomGame_C_GetSelectedMapId_Params
{
	int*                                               QueueId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUIMapInfo*                                 MapInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                mapId;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GetQueueImageById
struct UWBP_CreateCustomGame_C_GetQueueImageById_Params
{
	int*                                               QueueId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  QueueImage;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupQueueInfoPanel
struct UWBP_CreateCustomGame_C_SetupQueueInfoPanel_Params
{
	struct FClientQueueInfo*                           ClientQueueInfo;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCreated
struct UWBP_CreateCustomGame_C_OnLobbyCreated_Params
{
	int*                                               QueueId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnLobbyCanceled
struct UWBP_CreateCustomGame_C_OnLobbyCanceled_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetupConfirmation
struct UWBP_CreateCustomGame_C_SetupConfirmation_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ShowConfirmation
struct UWBP_CreateCustomGame_C_ShowConfirmation_Params
{
	int*                                               QueueId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               mapId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.BindConfirmationNavigation
struct UWBP_CreateCustomGame_C_BindConfirmationNavigation_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.GoToLastScreen
struct UWBP_CreateCustomGame_C_GoToLastScreen_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.NavigateBack
struct UWBP_CreateCustomGame_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnKeyDown
struct UWBP_CreateCustomGame_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnPreviousTab
struct UWBP_CreateCustomGame_C_OnPreviousTab_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnNextTab
struct UWBP_CreateCustomGame_C_OnNextTab_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.SetNavigation
struct UWBP_CreateCustomGame_C_SetNavigation_Params
{
	int*                                               NumColumns;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ResetMapSelection
struct UWBP_CreateCustomGame_C_ResetMapSelection_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnMapSelected
struct UWBP_CreateCustomGame_C_OnMapSelected_Params
{
	int*                                               mapId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnTabSelected
struct UWBP_CreateCustomGame_C_OnTabSelected_Params
{
	int*                                               ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Setup Custom Tabs
struct UWBP_CreateCustomGame_C_Setup_Custom_Tabs_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.Construct
struct UWBP_CreateCustomGame_C_Construct_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidget
struct UWBP_CreateCustomGame_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.InitializeWidgetNavigation
struct UWBP_CreateCustomGame_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.CheckIsInCustomMatch
struct UWBP_CreateCustomGame_C_CheckIsInCustomMatch_Params
{
	EPUMG_MatchStatus*                                 MatchStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnButtonsCreated
struct UWBP_CreateCustomGame_C_OnButtonsCreated_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnBackButtonClicked
struct UWBP_CreateCustomGame_C_OnBackButtonClicked_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnHide
struct UWBP_CreateCustomGame_C_OnHide_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.OnShown
struct UWBP_CreateCustomGame_C_OnShown_Params
{
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.PreConstruct
struct UWBP_CreateCustomGame_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CreateCustomGame.WBP_CreateCustomGame_C.ExecuteUbergraph_WBP_CreateCustomGame
struct UWBP_CreateCustomGame_C_ExecuteUbergraph_WBP_CreateCustomGame_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
