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

// Function WBP_Toast2.WBP_Toast2_C.DisplayItemUnlock
struct UWBP_Toast2_C_DisplayItemUnlock_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.DisplayMercMasteryLevelUp
struct UWBP_Toast2_C_DisplayMercMasteryLevelUp_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.DisplayChallengeAchievement
struct UWBP_Toast2_C_DisplayChallengeAchievement_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.OnOutroFinished
struct UWBP_Toast2_C_OnOutroFinished_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.OnWaitingFinished
struct UWBP_Toast2_C_OnWaitingFinished_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.OnIntroFinished
struct UWBP_Toast2_C_OnIntroFinished_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.SetRarityTint
struct UWBP_Toast2_C_SetRarityTint_Params
{
	struct FLinearColor*                               RarityBase;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor*                               RarityHighlight;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Toast2.WBP_Toast2_C.Construct
struct UWBP_Toast2_C_Construct_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.PreConstruct
struct UWBP_Toast2_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Toast2.WBP_Toast2_C.ExecuteUbergraph_WBP_Toast2
struct UWBP_Toast2_C_ExecuteUbergraph_WBP_Toast2_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Toast2.WBP_Toast2_C.FinishedOutroAnimation__DelegateSignature
struct UWBP_Toast2_C_FinishedOutroAnimation__DelegateSignature_Params
{
};

// Function WBP_Toast2.WBP_Toast2_C.OnRemoveToastNotification__DelegateSignature
struct UWBP_Toast2_C_OnRemoveToastNotification__DelegateSignature_Params
{
	class UKSWidget**                                  ToastWidget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
