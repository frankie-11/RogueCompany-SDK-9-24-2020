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

// Function MedDroneMenu.MedDroneMenu_C.Construct
struct UMedDroneMenu_C_Construct_Params
{
};

// Function MedDroneMenu.MedDroneMenu_C.OptionSelected
struct UMedDroneMenu_C_OptionSelected_Params
{
	class AKSPlayerState**                             Selected_Target;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MedDroneMenu.MedDroneMenu_C.BndEvt__OutButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
struct UMedDroneMenu_C_BndEvt__OutButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function MedDroneMenu.MedDroneMenu_C.Close
struct UMedDroneMenu_C_Close_Params
{
	bool*                                              Should_Cancel;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MedDroneMenu.MedDroneMenu_C.InitializeWidgetNavigation
struct UMedDroneMenu_C_InitializeWidgetNavigation_Params
{
};

// Function MedDroneMenu.MedDroneMenu_C.InitializeWidget
struct UMedDroneMenu_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MedDroneMenu.MedDroneMenu_C.Handle Input State Change
struct UMedDroneMenu_C_Handle_Input_State_Change_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function MedDroneMenu.MedDroneMenu_C.ExecuteUbergraph_MedDroneMenu
struct UMedDroneMenu_C_ExecuteUbergraph_MedDroneMenu_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
