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

// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.SetDisableState
struct UWBP_PlayerProfileScreen_StatPanel_C_SetDisableState_Params
{
	bool*                                              IsDisabled;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.NavigateConfirm
struct UWBP_PlayerProfileScreen_StatPanel_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.RefreshStats
struct UWBP_PlayerProfileScreen_StatPanel_C_RefreshStats_Params
{
};

// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.PreConstruct
struct UWBP_PlayerProfileScreen_StatPanel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.Construct
struct UWBP_PlayerProfileScreen_StatPanel_C_Construct_Params
{
};

// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadHover
struct UWBP_PlayerProfileScreen_StatPanel_C_GamepadHover_Params
{
};

// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.GamepadUnhover
struct UWBP_PlayerProfileScreen_StatPanel_C_GamepadUnhover_Params
{
};

// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.OnActivityInstanceChanged
struct UWBP_PlayerProfileScreen_StatPanel_C_OnActivityInstanceChanged_Params
{
	bool*                                              IsLoaded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_StatPanel.WBP_PlayerProfileScreen_StatPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel
struct UWBP_PlayerProfileScreen_StatPanel_C_ExecuteUbergraph_WBP_PlayerProfileScreen_StatPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
