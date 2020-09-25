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

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.TriggerInputAction
struct UGameTouchHUDWidget_C_TriggerInputAction_Params
{
	struct FName*                                      InActionName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EInputEvent>*                          InInputEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.GetWidgetBounds
struct UGameTouchHUDWidget_C_GetWidgetBounds_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   TopLeft;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BottomRight;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.IsPointOverWidget
struct UGameTouchHUDWidget_C_IsPointOverWidget_Params
{
	struct FVector2D*                                  ScreenPoint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsPointOverWidget;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.Construct
struct UGameTouchHUDWidget_C_Construct_Params
{
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.Tick
struct UGameTouchHUDWidget_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnAbility_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
struct UGameTouchHUDWidget_C_BndEvt__BtnAbility_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnAbility_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
struct UGameTouchHUDWidget_C_BndEvt__BtnAbility_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
struct UGameTouchHUDWidget_C_BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
struct UGameTouchHUDWidget_C_BndEvt__BtnWeaponSwap_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnStore_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature
struct UGameTouchHUDWidget_C_BndEvt__BtnStore_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnStore_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature
struct UGameTouchHUDWidget_C_BndEvt__BtnStore_K2Node_ComponentBoundEvent_13_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnScoreboard_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature
struct UGameTouchHUDWidget_C_BndEvt__BtnScoreboard_K2Node_ComponentBoundEvent_14_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnMenu_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature
struct UGameTouchHUDWidget_C_BndEvt__BtnMenu_K2Node_ComponentBoundEvent_16_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnMenu_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature
struct UGameTouchHUDWidget_C_BndEvt__BtnMenu_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.OnHoveredInteractableChanged_Event_1
struct UGameTouchHUDWidget_C_OnHoveredInteractableChanged_Event_1_Params
{
	class AActor**                                     HoverTarget;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnInteract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature
struct UGameTouchHUDWidget_C_BndEvt__BtnInteract_K2Node_ComponentBoundEvent_6_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__BtnInteract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature
struct UGameTouchHUDWidget_C_BndEvt__BtnInteract_K2Node_ComponentBoundEvent_7_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.OnInputStateChanged_Event_1
struct UGameTouchHUDWidget_C_OnInputStateChanged_Event_1_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.BndEvt__OpenMapButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UGameTouchHUDWidget_C_BndEvt__OpenMapButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function GameTouchHUDWidget.GameTouchHUDWidget_C.ExecuteUbergraph_GameTouchHUDWidget
struct UGameTouchHUDWidget_C_ExecuteUbergraph_GameTouchHUDWidget_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
