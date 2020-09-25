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

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.OnRotationTimerTick
struct UWBP_StoreButtonMedium_C_OnRotationTimerTick_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.NavigateConfirm
struct UWBP_StoreButtonMedium_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.DisplayStoreItem
struct UWBP_StoreButtonMedium_C_DisplayStoreItem_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Animate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.SetStoreItems
struct UWBP_StoreButtonMedium_C_SetStoreItems_Params
{
	class UKSStoreSectionItem**                        StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.Construct
struct UWBP_StoreButtonMedium_C_Construct_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.Tick
struct UWBP_StoreButtonMedium_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.GamepadHover
struct UWBP_StoreButtonMedium_C_GamepadHover_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.GamepadUnhover
struct UWBP_StoreButtonMedium_C_GamepadUnhover_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.OnGamepadConfirm
struct UWBP_StoreButtonMedium_C_OnGamepadConfirm_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature
struct UWBP_StoreButtonMedium_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature
struct UWBP_StoreButtonMedium_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature
struct UWBP_StoreButtonMedium_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature_Params
{
};

// Function WBP_StoreButtonMedium.WBP_StoreButtonMedium_C.ExecuteUbergraph_WBP_StoreButtonMedium
struct UWBP_StoreButtonMedium_C_ExecuteUbergraph_WBP_StoreButtonMedium_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
