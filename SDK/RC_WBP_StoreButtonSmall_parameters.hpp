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

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.OnRotationTimerTick
struct UWBP_StoreButtonSmall_C_OnRotationTimerTick_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.NavigateConfirm
struct UWBP_StoreButtonSmall_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.DisplayStoreItem
struct UWBP_StoreButtonSmall_C_DisplayStoreItem_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Animate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.SetStoreItems
struct UWBP_StoreButtonSmall_C_SetStoreItems_Params
{
	class UKSStoreSectionItem**                        StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.Construct
struct UWBP_StoreButtonSmall_C_Construct_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.Tick
struct UWBP_StoreButtonSmall_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.GamepadHover
struct UWBP_StoreButtonSmall_C_GamepadHover_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.GamepadUnhover
struct UWBP_StoreButtonSmall_C_GamepadUnhover_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.OnGamepadConfirm
struct UWBP_StoreButtonSmall_C_OnGamepadConfirm_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature
struct UWBP_StoreButtonSmall_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature
struct UWBP_StoreButtonSmall_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature
struct UWBP_StoreButtonSmall_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature_Params
{
};

// Function WBP_StoreButtonSmall.WBP_StoreButtonSmall_C.ExecuteUbergraph_WBP_StoreButtonSmall
struct UWBP_StoreButtonSmall_C_ExecuteUbergraph_WBP_StoreButtonSmall_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
