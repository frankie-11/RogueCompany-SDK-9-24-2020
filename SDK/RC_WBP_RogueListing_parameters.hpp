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

// Function WBP_RogueListing.WBP_RogueListing_C.SetRogueOwned
struct UWBP_RogueListing_C_SetRogueOwned_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueListing.WBP_RogueListing_C.ResetFavoriteIcons
struct UWBP_RogueListing_C_ResetFavoriteIcons_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnJobHovered
struct UWBP_RogueListing_C_OnJobHovered_Params
{
	class UKSJobItem**                                 JobItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnKeyUp
struct UWBP_RogueListing_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_RogueListing.WBP_RogueListing_C.HandleInputModeChanged
struct UWBP_RogueListing_C_HandleInputModeChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueListing.WBP_RogueListing_C.NavigateBack
struct UWBP_RogueListing_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RogueListing.WBP_RogueListing_C.PopulateRoleFilters
struct UWBP_RogueListing_C_PopulateRoleFilters_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.GetJobButtons
struct UWBP_RogueListing_C_GetJobButtons_Params
{
	TArray<class UWBP_JobGeneralButton_C*>             JobButtons;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_RogueListing.WBP_RogueListing_C.SetRowAndColumn
struct UWBP_RogueListing_C_SetRowAndColumn_Params
{
	class UGridSlot**                                  GridSlot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MaxRowCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueListing.WBP_RogueListing_C.ResetButtonState
struct UWBP_RogueListing_C_ResetButtonState_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.ResetJobList
struct UWBP_RogueListing_C_ResetJobList_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.PopulateJobList
struct UWBP_RogueListing_C_PopulateJobList_Params
{
	TArray<class UPUMG_StoreItem*>                     LoadoutOptions;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_RogueListing.WBP_RogueListing_C.InitializeTickAnimations
struct UWBP_RogueListing_C_InitializeTickAnimations_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimUpdate
struct UWBP_RogueListing_C_OnShowScreenAnimUpdate_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnShowScreenAnimFinished
struct UWBP_RogueListing_C_OnShowScreenAnimFinished_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.StartShowScreenAnim
struct UWBP_RogueListing_C_StartShowScreenAnim_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidget
struct UWBP_RogueListing_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueListing.WBP_RogueListing_C.HandleOnJobSelected
struct UWBP_RogueListing_C_HandleOnJobSelected_Params
{
	class UKSJobItem**                                 SelectedJob;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnShown
struct UWBP_RogueListing_C_OnShown_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.ExternalOnShown
struct UWBP_RogueListing_C_ExternalOnShown_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.InitializeWidgetNavigation
struct UWBP_RogueListing_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnBackPrompt
struct UWBP_RogueListing_C_OnBackPrompt_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.RefreshJobItems
struct UWBP_RogueListing_C_RefreshJobItems_Params
{
};

// Function WBP_RogueListing.WBP_RogueListing_C.HandleOnPurchasedItem
struct UWBP_RogueListing_C_HandleOnPurchasedItem_Params
{
	class UPUMG_StoreItem**                            Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_StoreItemPrice**                       Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueListing.WBP_RogueListing_C.ExecuteUbergraph_WBP_RogueListing
struct UWBP_RogueListing_C_ExecuteUbergraph_WBP_RogueListing_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnJobListReady__DelegateSignature
struct UWBP_RogueListing_C_OnJobListReady__DelegateSignature_Params
{
	TArray<class UWBP_JobGeneralButton_C*>             JobButtons;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_RogueListing.WBP_RogueListing_C.OnJobSelected__DelegateSignature
struct UWBP_RogueListing_C_OnJobSelected__DelegateSignature_Params
{
	class UKSJobItem**                                 JobItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
