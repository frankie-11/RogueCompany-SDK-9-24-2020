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

// Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.SetMasteryFrameToLevel
struct UWBP_MercMasteryPortrait_C_SetMasteryFrameToLevel_Params
{
	int*                                               MasteryLevel;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxMasteryLevel;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.OnJobMasteryLevelUpdated
struct UWBP_MercMasteryPortrait_C_OnJobMasteryLevelUpdated_Params
{
};

// Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.SetJobPortraitFromSoftTexture
struct UWBP_MercMasteryPortrait_C_SetJobPortraitFromSoftTexture_Params
{
};

// Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.Set Mastery Frame
struct UWBP_MercMasteryPortrait_C_Set_Mastery_Frame_Params
{
};

// Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.SetPlayerOwner
struct UWBP_MercMasteryPortrait_C_SetPlayerOwner_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C.SetJobInformation
struct UWBP_MercMasteryPortrait_C_SetJobInformation_Params
{
	class UKSJobItem**                                 JobItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
