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

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnRotationTimerTick
struct UWBP_StoreButtonLarge_C_OnRotationTimerTick_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnInputStateChanged
struct UWBP_StoreButtonLarge_C_OnInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.NavigateConfirm
struct UWBP_StoreButtonLarge_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.DisplayStoreItem
struct UWBP_StoreButtonLarge_C_DisplayStoreItem_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Animate;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.SetStoreItems
struct UWBP_StoreButtonLarge_C_SetStoreItems_Params
{
	class UKSStoreSectionItem**                        StoreSection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadUnhover
struct UWBP_StoreButtonLarge_C_GamepadUnhover_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnGamepadConfirm
struct UWBP_StoreButtonLarge_C_OnGamepadConfirm_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature
struct UWBP_StoreButtonLarge_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature
struct UWBP_StoreButtonLarge_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature
struct UWBP_StoreButtonLarge_C_BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.OnComparePressed
struct UWBP_StoreButtonLarge_C_OnComparePressed_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_StoreButtonLarge_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreButtonLarge_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_StoreButtonLarge_C_BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.GamepadHover
struct UWBP_StoreButtonLarge_C_GamepadHover_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Construct
struct UWBP_StoreButtonLarge_C_Construct_Params
{
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.Tick
struct UWBP_StoreButtonLarge_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.InitializeWidget
struct UWBP_StoreButtonLarge_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_StoreButtonLarge.WBP_StoreButtonLarge_C.ExecuteUbergraph_WBP_StoreButtonLarge
struct UWBP_StoreButtonLarge_C_ExecuteUbergraph_WBP_StoreButtonLarge_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
