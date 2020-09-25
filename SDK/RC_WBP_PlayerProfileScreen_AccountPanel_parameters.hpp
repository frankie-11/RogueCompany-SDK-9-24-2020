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

// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.NavigateConfirm
struct UWBP_PlayerProfileScreen_AccountPanel_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.RefreshPlayer
struct UWBP_PlayerProfileScreen_AccountPanel_C_RefreshPlayer_Params
{
	class UPUMG_PlayerInfo**                           playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.PreConstruct
struct UWBP_PlayerProfileScreen_AccountPanel_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.Construct
struct UWBP_PlayerProfileScreen_AccountPanel_C_Construct_Params
{
};

// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.InitializeWidget
struct UWBP_PlayerProfileScreen_AccountPanel_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.GamepadHover
struct UWBP_PlayerProfileScreen_AccountPanel_C_GamepadHover_Params
{
};

// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.GamepadUnhover
struct UWBP_PlayerProfileScreen_AccountPanel_C_GamepadUnhover_Params
{
};

// Function WBP_PlayerProfileScreen_AccountPanel.WBP_PlayerProfileScreen_AccountPanel_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AccountPanel
struct UWBP_PlayerProfileScreen_AccountPanel_C_ExecuteUbergraph_WBP_PlayerProfileScreen_AccountPanel_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
