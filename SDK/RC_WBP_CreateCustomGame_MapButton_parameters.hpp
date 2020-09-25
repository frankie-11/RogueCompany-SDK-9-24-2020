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

// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.NavigateConfirm
struct UWBP_CreateCustomGame_MapButton_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.SetMap
struct UWBP_CreateCustomGame_MapButton_C_SetMap_Params
{
	int*                                               mapId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUIMapInfo*                                 MapInfo;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_CreateCustomGame_MapButton_C_BndEvt__Button_195_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_CreateCustomGame_MapButton_C_BndEvt__Button_195_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.InitializeWidget
struct UWBP_CreateCustomGame_MapButton_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadHover
struct UWBP_CreateCustomGame_MapButton_C_GamepadHover_Params
{
};

// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.GamepadUnhover
struct UWBP_CreateCustomGame_MapButton_C_GamepadUnhover_Params
{
};

// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_CreateCustomGame_MapButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnGamepadConfirm
struct UWBP_CreateCustomGame_MapButton_C_OnGamepadConfirm_Params
{
};

// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.ExecuteUbergraph_WBP_CreateCustomGame_MapButton
struct UWBP_CreateCustomGame_MapButton_C_ExecuteUbergraph_WBP_CreateCustomGame_MapButton_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CreateCustomGame_MapButton.WBP_CreateCustomGame_MapButton_C.OnMapSelected__DelegateSignature
struct UWBP_CreateCustomGame_MapButton_C_OnMapSelected__DelegateSignature_Params
{
	int*                                               mapId;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
