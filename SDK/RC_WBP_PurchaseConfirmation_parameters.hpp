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

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GetFullScreenSplashImage
struct UWBP_PurchaseConfirmation_C_GetFullScreenSplashImage_Params
{
	bool                                               SplashFound;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisitionFailed
struct UWBP_PurchaseConfirmation_C_OnAcquisitionFailed_Params
{
	struct FText*                                      ErrorMsg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetPreferredDefaultSkin
struct UWBP_PurchaseConfirmation_C_SetPreferredDefaultSkin_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Set Emote
struct UWBP_PurchaseConfirmation_C_Set_Emote_Params
{
	class UKSItem**                                    EmoteItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.TryHandleRightStickKeyDown
struct UWBP_PurchaseConfirmation_C_TryHandleRightStickKeyDown_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemHoveredGamepad
struct UWBP_PurchaseConfirmation_C_OnBundleItemHoveredGamepad_Params
{
	struct FCosmeticSlotDetails*                       CosmeticSlotDetails;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_KSCosmeticItemDisplay_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnToggleViewMode
struct UWBP_PurchaseConfirmation_C_OnToggleViewMode_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnInputModeChanged
struct UWBP_PurchaseConfirmation_C_OnInputModeChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetSubDetails
struct UWBP_PurchaseConfirmation_C_SetSubDetails_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBundleItemClicked
struct UWBP_PurchaseConfirmation_C_OnBundleItemClicked_Params
{
	class UWBP_KSCosmeticItemDisplay_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCosmeticSlotDetails*                       CosmeticSlotDetails;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateBundleContentsPanel
struct UWBP_PurchaseConfirmation_C_PopulateBundleContentsPanel_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextBundlePage
struct UWBP_PurchaseConfirmation_C_OnNextBundlePage_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousBundlePage
struct UWBP_PurchaseConfirmation_C_OnPreviousBundlePage_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.GoBackToItemDisplay
struct UWBP_PurchaseConfirmation_C_GoBackToItemDisplay_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnViewBundleContents
struct UWBP_PurchaseConfirmation_C_OnViewBundleContents_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyDown
struct UWBP_PurchaseConfirmation_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnKeyUp
struct UWBP_PurchaseConfirmation_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnNextItem
struct UWBP_PurchaseConfirmation_C_OnNextItem_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnPreviousItem
struct UWBP_PurchaseConfirmation_C_OnPreviousItem_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplayModelOrImageForItem
struct UWBP_PurchaseConfirmation_C_DisplayModelOrImageForItem_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ClearModels
struct UWBP_PurchaseConfirmation_C_ClearModels_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetSkinOrRogueModel
struct UWBP_PurchaseConfirmation_C_SetSkinOrRogueModel_Params
{
	class UKSSkinBundle**                              SkinBundle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PopulateItemData
struct UWBP_PurchaseConfirmation_C_PopulateItemData_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnAcquisition
struct UWBP_PurchaseConfirmation_C_OnAcquisition_Params
{
	class UKSAcquisition**                             Acquisition;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPortalOffer
struct UWBP_PurchaseConfirmation_C_PurchaseItemWithPortalOffer_Params
{
	class UPUMG_PortalOffer**                          PortalOffer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PurchaseItemWithPrice
struct UWBP_PurchaseConfirmation_C_PurchaseItemWithPrice_Params
{
	class UPUMG_StoreItemPrice**                       Price;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.DisplaySingleItem
struct UWBP_PurchaseConfirmation_C_DisplaySingleItem_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.NavigateBack
struct UWBP_PurchaseConfirmation_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.PreConstruct
struct UWBP_PurchaseConfirmation_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.Tick
struct UWBP_PurchaseConfirmation_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidget
struct UWBP_PurchaseConfirmation_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnBackPrompt
struct UWBP_PurchaseConfirmation_C_OnBackPrompt_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.InitializeWidgetNavigation
struct UWBP_PurchaseConfirmation_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnShown
struct UWBP_PurchaseConfirmation_C_OnShown_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.OnHide
struct UWBP_PurchaseConfirmation_C_OnHide_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueUp
struct UWBP_PurchaseConfirmation_C_SetScrollValueUp_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.SetScrollValueDown
struct UWBP_PurchaseConfirmation_C_SetScrollValueDown_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ClearScrollValue
struct UWBP_PurchaseConfirmation_C_ClearScrollValue_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateRightFailure
struct UWBP_PurchaseConfirmation_C_FocusGroupNavigateRightFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.FocusGroupNavigateLeftFailure
struct UWBP_PurchaseConfirmation_C_FocusGroupNavigateLeftFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.UpdateScrollPromptVisibility
struct UWBP_PurchaseConfirmation_C_UpdateScrollPromptVisibility_Params
{
};

// Function WBP_PurchaseConfirmation.WBP_PurchaseConfirmation_C.ExecuteUbergraph_WBP_PurchaseConfirmation
struct UWBP_PurchaseConfirmation_C_ExecuteUbergraph_WBP_PurchaseConfirmation_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
