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

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetMeleeCustomizeNav
struct UWBP_RogueCustomization_C_SetMeleeCustomizeNav_Params
{
	bool*                                              IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.RegisterGamepadNavigation
struct UWBP_RogueCustomization_C_RegisterGamepadNavigation_Params
{
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.NavigateBack
struct UWBP_RogueCustomization_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetContextBar
struct UWBP_RogueCustomization_C_SetContextBar_Params
{
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.BindSlots
struct UWBP_RogueCustomization_C_BindSlots_Params
{
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetSlots
struct UWBP_RogueCustomization_C_SetSlots_Params
{
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeButtons
struct UWBP_RogueCustomization_C_InitializeButtons_Params
{
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.UpdateEquippedItems
struct UWBP_RogueCustomization_C_UpdateEquippedItems_Params
{
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.SetActiveJob
struct UWBP_RogueCustomization_C_SetActiveJob_Params
{
	class UKSJobItem**                                 JobItem;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeWidget
struct UWBP_RogueCustomization_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticHovered
struct UWBP_RogueCustomization_C_OnCosmeticHovered_Params
{
	struct FCosmeticSlotDetails*                       CosmeticSlotDetail;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_KSCosmeticItemDisplay_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticUnhovered
struct UWBP_RogueCustomization_C_OnCosmeticUnhovered_Params
{
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnCosmeticSelected
struct UWBP_RogueCustomization_C_OnCosmeticSelected_Params
{
	class UWBP_KSCosmeticItemDisplay_C**               CosmeticSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCosmeticSlotDetails*                       CosmeticSlotDetails;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnShown
struct UWBP_RogueCustomization_C_OnShown_Params
{
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.ExternalOnShown
struct UWBP_RogueCustomization_C_ExternalOnShown_Params
{
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.OnBackPrompt
struct UWBP_RogueCustomization_C_OnBackPrompt_Params
{
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.InitializeWidgetNavigation
struct UWBP_RogueCustomization_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.PreConstruct
struct UWBP_RogueCustomization_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.ExecuteUbergraph_WBP_RogueCustomization
struct UWBP_RogueCustomization_C_ExecuteUbergraph_WBP_RogueCustomization_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RogueCustomization.WBP_RogueCustomization_C.GotoCustomizationScreen__DelegateSignature
struct UWBP_RogueCustomization_C_GotoCustomizationScreen__DelegateSignature_Params
{
	class UWBP_KSCosmeticItemDisplay_C**               CosmeticSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
