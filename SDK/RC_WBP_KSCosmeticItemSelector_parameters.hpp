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

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.NavigateConfirm
struct UWBP_KSCosmeticItemSelector_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnHoverSound
struct UWBP_KSCosmeticItemSelector_C_OnHoverSound_Params
{
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnClickSound
struct UWBP_KSCosmeticItemSelector_C_OnClickSound_Params
{
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.Construct
struct UWBP_KSCosmeticItemSelector_C_Construct_Params
{
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.InitializeWidget
struct UWBP_KSCosmeticItemSelector_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticHover
struct UWBP_KSCosmeticItemSelector_C_OnCosmeticHover_Params
{
	struct FCosmeticSlotDetails*                       CosmeticDetails;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_KSCosmeticItemDisplay_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticUnhover
struct UWBP_KSCosmeticItemSelector_C_OnCosmeticUnhover_Params
{
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnCosmeticClicked
struct UWBP_KSCosmeticItemSelector_C_OnCosmeticClicked_Params
{
	class UWBP_KSCosmeticItemDisplay_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCosmeticSlotDetails*                       CosmeticSlotDetails;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadHover
struct UWBP_KSCosmeticItemSelector_C_GamepadHover_Params
{
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.GamepadUnhover
struct UWBP_KSCosmeticItemSelector_C_GamepadUnhover_Params
{
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetSlotActive
struct UWBP_KSCosmeticItemSelector_C_SetSlotActive_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.SetItemOwned
struct UWBP_KSCosmeticItemSelector_C_SetItemOwned_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.ExecuteUbergraph_WBP_KSCosmeticItemSelector
struct UWBP_KSCosmeticItemSelector_C_ExecuteUbergraph_WBP_KSCosmeticItemSelector_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnPurchaseItem__DelegateSignature
struct UWBP_KSCosmeticItemSelector_C_OnPurchaseItem__DelegateSignature_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemSelected__DelegateSignature
struct UWBP_KSCosmeticItemSelector_C_OnItemSelected__DelegateSignature_Params
{
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCosmeticSlotDetails*                       CosmeticSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemUnhovered__DelegateSignature
struct UWBP_KSCosmeticItemSelector_C_OnItemUnhovered__DelegateSignature_Params
{
};

// Function WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C.OnItemHovered__DelegateSignature
struct UWBP_KSCosmeticItemSelector_C_OnItemHovered__DelegateSignature_Params
{
	struct FCosmeticSlotDetails*                       CosmeticDetails;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
