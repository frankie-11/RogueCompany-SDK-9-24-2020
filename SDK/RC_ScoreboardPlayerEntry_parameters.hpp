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

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.GetPlayerState
struct UScoreboardPlayerEntry_C_GetPlayerState_Params
{
	class AKSPlayerState*                              OutPlayerState;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetColors
struct UScoreboardPlayerEntry_C_SetColors_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetStatText
struct UScoreboardPlayerEntry_C_SetStatText_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetPlayerName
struct UScoreboardPlayerEntry_C_SetPlayerName_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetIconsAndIndicators
struct UScoreboardPlayerEntry_C_SetIconsAndIndicators_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetPlayerData
struct UScoreboardPlayerEntry_C_SetPlayerData_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.UpdateVoiceInfo
struct UScoreboardPlayerEntry_C_UpdateVoiceInfo_Params
{
	bool*                                              IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMuted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetMercIcon
struct UScoreboardPlayerEntry_C_SetMercIcon_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.Update
struct UScoreboardPlayerEntry_C_Update_Params
{
	class UKSPersistentPlayerData**                    PlayerData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UScoreboardPlayerEntry_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UScoreboardPlayerEntry_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UScoreboardPlayerEntry_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.DoUnhoverState
struct UScoreboardPlayerEntry_C_DoUnhoverState_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.DoHoverState
struct UScoreboardPlayerEntry_C_DoHoverState_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.InitializeWidget
struct UScoreboardPlayerEntry_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnShown
struct UScoreboardPlayerEntry_C_OnShown_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnNeedUpdatePlayerUI
struct UScoreboardPlayerEntry_C_OnNeedUpdatePlayerUI_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.UninitializeWidget
struct UScoreboardPlayerEntry_C_UninitializeWidget_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.Tick
struct UScoreboardPlayerEntry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.ScheduleUpdate
struct UScoreboardPlayerEntry_C_ScheduleUpdate_Params
{
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.ExecuteUbergraph_ScoreboardPlayerEntry
struct UScoreboardPlayerEntry_C_ExecuteUbergraph_ScoreboardPlayerEntry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnPlayerClicked__DelegateSignature
struct UScoreboardPlayerEntry_C_OnPlayerClicked__DelegateSignature_Params
{
	int64_t*                                           ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerState**                             NewPlayerState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               TeamNum;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              CanReport;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
