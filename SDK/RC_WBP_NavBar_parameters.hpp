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

// Function WBP_NavBar.WBP_NavBar_C.HandleInput
struct UWBP_NavBar_C_HandleInput_Params
{
	struct FKey*                                       InKey;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NavBar.WBP_NavBar_C.OnKeyUp
struct UWBP_NavBar_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_NavBar.WBP_NavBar_C.SetButtonIndexActive
struct UWBP_NavBar_C_SetButtonIndexActive_Params
{
	int*                                               ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NavBar.WBP_NavBar_C.HandleNavRight
struct UWBP_NavBar_C_HandleNavRight_Params
{
};

// Function WBP_NavBar.WBP_NavBar_C.HandleNavLeft
struct UWBP_NavBar_C_HandleNavLeft_Params
{
};

// Function WBP_NavBar.WBP_NavBar_C.HandleInputStateChanged
struct UWBP_NavBar_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NavBar.WBP_NavBar_C.SetupGamepadCallouts
struct UWBP_NavBar_C_SetupGamepadCallouts_Params
{
};

// Function WBP_NavBar.WBP_NavBar_C.SetNavButtons
struct UWBP_NavBar_C_SetNavButtons_Params
{
	TArray<struct FNavButtonData>                      Buttons;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_NavBar.WBP_NavBar_C.Construct
struct UWBP_NavBar_C_Construct_Params
{
};

// Function WBP_NavBar.WBP_NavBar_C.OnButtonClicked
struct UWBP_NavBar_C_OnButtonClicked_Params
{
	class UKSWidget**                                  ButtonClicked;                                            // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_NavBar.WBP_NavBar_C.InitializeWidget
struct UWBP_NavBar_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NavBar.WBP_NavBar_C.ExecuteUbergraph_WBP_NavBar
struct UWBP_NavBar_C_ExecuteUbergraph_WBP_NavBar_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NavBar.WBP_NavBar_C.OnButtonsCreated__DelegateSignature
struct UWBP_NavBar_C_OnButtonsCreated__DelegateSignature_Params
{
};

// Function WBP_NavBar.WBP_NavBar_C.OnButtonSelected__DelegateSignature
struct UWBP_NavBar_C_OnButtonSelected__DelegateSignature_Params
{
	int*                                               ButtonIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
