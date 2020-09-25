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

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.GetPlatformIcon
struct UWBP_PlayerProfileScreen_C_GetPlatformIcon_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Icon;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.SetPlayerHint
struct UWBP_PlayerProfileScreen_C_SetPlayerHint_Params
{
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ClearPlayerHint
struct UWBP_PlayerProfileScreen_C_ClearPlayerHint_Params
{
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.NavigateBack
struct UWBP_PlayerProfileScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.Construct
struct UWBP_PlayerProfileScreen_C_Construct_Params
{
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnShown
struct UWBP_PlayerProfileScreen_C_OnShown_Params
{
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidget
struct UWBP_PlayerProfileScreen_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.AwardButtonClicked
struct UWBP_PlayerProfileScreen_C_AwardButtonClicked_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.StatsButtonClicked
struct UWBP_PlayerProfileScreen_C_StatsButtonClicked_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.CustomizeButtonClicked
struct UWBP_PlayerProfileScreen_C_CustomizeButtonClicked_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.InitializeWidgetNavigation
struct UWBP_PlayerProfileScreen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.OnBackPrompt
struct UWBP_PlayerProfileScreen_C_OnBackPrompt_Params
{
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.HandleLoginStateChange
struct UWBP_PlayerProfileScreen_C_HandleLoginStateChange_Params
{
	EPUMG_LoginState*                                  LoginState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C.ExecuteUbergraph_WBP_PlayerProfileScreen
struct UWBP_PlayerProfileScreen_C_ExecuteUbergraph_WBP_PlayerProfileScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
