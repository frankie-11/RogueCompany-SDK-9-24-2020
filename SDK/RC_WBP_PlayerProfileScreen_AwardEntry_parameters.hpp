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

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetRewardInfo
struct UWBP_PlayerProfileScreen_AwardEntry_C_GetRewardInfo_Params
{
	bool                                               HasReward;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       ItemName;                                                 // (Parm, OutParm)
	struct FText                                       ItemDescription;                                          // (Parm, OutParm)
};

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateBar
struct UWBP_PlayerProfileScreen_AwardEntry_C_UpdateBar_Params
{
	float*                                             BarPerc;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ResetState
struct UWBP_PlayerProfileScreen_AwardEntry_C_ResetState_Params
{
};

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnimInternal
struct UWBP_PlayerProfileScreen_AwardEntry_C_PlayShowAnimInternal_Params
{
};

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnim
struct UWBP_PlayerProfileScreen_AwardEntry_C_PlayShowAnim_Params
{
	float*                                             Delay;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateValue
struct UWBP_PlayerProfileScreen_AwardEntry_C_UpdateValue_Params
{
};

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateIcon
struct UWBP_PlayerProfileScreen_AwardEntry_C_UpdateIcon_Params
{
};

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.SetActivityInstance
struct UWBP_PlayerProfileScreen_AwardEntry_C_SetActivityInstance_Params
{
	class UKSActivityInstance**                        Instance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PreConstruct
struct UWBP_PlayerProfileScreen_AwardEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Construct
struct UWBP_PlayerProfileScreen_AwardEntry_C_Construct_Params
{
};

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Tick
struct UWBP_PlayerProfileScreen_AwardEntry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry
struct UWBP_PlayerProfileScreen_AwardEntry_C_ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
