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

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetItemOwned
struct UWBP_KSCosmeticItemDisplay_C_SetItemOwned_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.NavigateConfirm
struct UWBP_KSCosmeticItemDisplay_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ResetSlot
struct UWBP_KSCosmeticItemDisplay_C_ResetSlot_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetWeaponSlot
struct UWBP_KSCosmeticItemDisplay_C_SetWeaponSlot_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCornerIcon
struct UWBP_KSCosmeticItemDisplay_C_SetCornerIcon_Params
{
	bool*                                              bShowIcon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetCosmeticSlot
struct UWBP_KSCosmeticItemDisplay_C_SetCosmeticSlot_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnClickSound
struct UWBP_KSCosmeticItemDisplay_C_OnClickSound_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHoverSound
struct UWBP_KSCosmeticItemDisplay_C_OnHoverSound_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PopulateSlot
struct UWBP_KSCosmeticItemDisplay_C_PopulateSlot_Params
{
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSJobItem**                                 AssiocatedJobItem;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.Construct
struct UWBP_KSCosmeticItemDisplay_C_Construct_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHovered
struct UWBP_KSCosmeticItemDisplay_C_OnHovered_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonUnhovered
struct UWBP_KSCosmeticItemDisplay_C_OnButtonUnhovered_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.InitializeWidget
struct UWBP_KSCosmeticItemDisplay_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.PreConstruct
struct UWBP_KSCosmeticItemDisplay_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnButtonClicked
struct UWBP_KSCosmeticItemDisplay_C_OnButtonClicked_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadHover
struct UWBP_KSCosmeticItemDisplay_C_GamepadHover_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.GamepadUnhover
struct UWBP_KSCosmeticItemDisplay_C_GamepadUnhover_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallHovered
struct UWBP_KSCosmeticItemDisplay_C_CallHovered_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.CallUnhovered
struct UWBP_KSCosmeticItemDisplay_C_CallUnhovered_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.SetSlotActive
struct UWBP_KSCosmeticItemDisplay_C_SetSlotActive_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.ExecuteUbergraph_WBP_KSCosmeticItemDisplay
struct UWBP_KSCosmeticItemDisplay_C_ExecuteUbergraph_WBP_KSCosmeticItemDisplay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnCosmeticClicked__DelegateSignature
struct UWBP_KSCosmeticItemDisplay_C_OnCosmeticClicked__DelegateSignature_Params
{
	class UWBP_KSCosmeticItemDisplay_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FCosmeticSlotDetails*                       CosmeticSlotDetails;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnUnhover__DelegateSignature
struct UWBP_KSCosmeticItemDisplay_C_OnUnhover__DelegateSignature_Params
{
};

// Function WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C.OnHover__DelegateSignature
struct UWBP_KSCosmeticItemDisplay_C_OnHover__DelegateSignature_Params
{
	struct FCosmeticSlotDetails*                       CosmeticSlotDetails;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_KSCosmeticItemDisplay_C**               Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
