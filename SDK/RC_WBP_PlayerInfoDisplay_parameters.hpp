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

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateVoiceDisplay
struct UWBP_PlayerInfoDisplay_C_UpdateVoiceDisplay_Params
{
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameFont
struct UWBP_PlayerInfoDisplay_C_SetPlayerNameFont_Params
{
	struct FSlateFontInfo*                             Font;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameColor
struct UWBP_PlayerInfoDisplay_C_SetPlayerNameColor_Params
{
	struct FSlateColor*                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.TogglePartyLeaderIcon
struct UWBP_PlayerInfoDisplay_C_TogglePartyLeaderIcon_Params
{
	bool*                                              ShowLeaderIcon;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceActive
struct UWBP_PlayerInfoDisplay_C_SetVoiceActive_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceTalking
struct UWBP_PlayerInfoDisplay_C_SetVoiceTalking_Params
{
	bool*                                              Talking;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceMuted
struct UWBP_PlayerInfoDisplay_C_SetVoiceMuted_Params
{
	bool*                                              Muted;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.GetStatusColor
struct UWBP_PlayerInfoDisplay_C_GetStatusColor_Params
{
	struct FSlateColor                                 StatusColor;                                              // (Parm, OutParm)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateStatus
struct UWBP_PlayerInfoDisplay_C_UpdateStatus_Params
{
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdatePlayerInfoIcons
struct UWBP_PlayerInfoDisplay_C_UpdatePlayerInfoIcons_Params
{
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateAvatarDisplay
struct UWBP_PlayerInfoDisplay_C_UpdateAvatarDisplay_Params
{
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerInfo
struct UWBP_PlayerInfoDisplay_C_SetPlayerInfo_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceState
struct UWBP_PlayerInfoDisplay_C_SetVoiceState_Params
{
	bool*                                              ShouldShow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMuted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ToggleStatusDisplay
struct UWBP_PlayerInfoDisplay_C_ToggleStatusDisplay_Params
{
	bool*                                              ShowStatus;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.PreConstruct
struct UWBP_PlayerInfoDisplay_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.HandleFilteredNameUpdate
struct UWBP_PlayerInfoDisplay_C_HandleFilteredNameUpdate_Params
{
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnInitialized
struct UWBP_PlayerInfoDisplay_C_OnInitialized_Params
{
};

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ExecuteUbergraph_WBP_PlayerInfoDisplay
struct UWBP_PlayerInfoDisplay_C_ExecuteUbergraph_WBP_PlayerInfoDisplay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
