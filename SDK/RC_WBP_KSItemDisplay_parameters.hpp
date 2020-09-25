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

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnButtonHovered
struct UWBP_KSItemDisplay_C_OnButtonHovered_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnHoverSound
struct UWBP_KSItemDisplay_C_OnHoverSound_Params
{
};

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_KSItemDisplay_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.PopulateSlot
struct UWBP_KSItemDisplay_C_PopulateSlot_Params
{
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.GamepadHover
struct UWBP_KSItemDisplay_C_GamepadHover_Params
{
};

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.GamepadUnhover
struct UWBP_KSItemDisplay_C_GamepadUnhover_Params
{
};

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UWBP_KSItemDisplay_C_BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.BndEvt__Button_111_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_KSItemDisplay_C_BndEvt__Button_111_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.SetIsActiveState
struct UWBP_KSItemDisplay_C_SetIsActiveState_Params
{
	bool*                                              bIsActive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.ExecuteUbergraph_WBP_KSItemDisplay
struct UWBP_KSItemDisplay_C_ExecuteUbergraph_WBP_KSItemDisplay_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnClick__DelegateSignature
struct UWBP_KSItemDisplay_C_OnClick__DelegateSignature_Params
{
	class UKSItem**                                    PerkItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnUnhover__DelegateSignature
struct UWBP_KSItemDisplay_C_OnUnhover__DelegateSignature_Params
{
};

// Function WBP_KSItemDisplay.WBP_KSItemDisplay_C.OnHover__DelegateSignature
struct UWBP_KSItemDisplay_C_OnHover__DelegateSignature_Params
{
	class UKSItem**                                    KSItem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
