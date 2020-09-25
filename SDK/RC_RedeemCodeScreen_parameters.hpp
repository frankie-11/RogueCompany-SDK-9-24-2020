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

// Function RedeemCodeScreen.RedeemCodeScreen_C.UpdateSubmitButtonState
struct URedeemCodeScreen_C_UpdateSubmitButtonState_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.SetErrorMessage
struct URedeemCodeScreen_C_SetErrorMessage_Params
{
	struct FText*                                      ErrorMessage;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnSpamPreventTimeout
struct URedeemCodeScreen_C_OnSpamPreventTimeout_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.GetPaletteColor
struct URedeemCodeScreen_C_GetPaletteColor_Params
{
	struct FName*                                      Color_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowPending
struct URedeemCodeScreen_C_ShowPending_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.EndPending
struct URedeemCodeScreen_C_EndPending_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.NavigateBack
struct URedeemCodeScreen_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowAnim
struct URedeemCodeScreen_C_StartShowAnim_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeTickAnimations
struct URedeemCodeScreen_C_InitializeTickAnimations_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemFinished
struct URedeemCodeScreen_C_ShowCodeRedeemFinished_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.ShowCodeRedeemAnim
struct URedeemCodeScreen_C_ShowCodeRedeemAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.InitHideAnimation
struct URedeemCodeScreen_C_InitHideAnimation_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemFinished
struct URedeemCodeScreen_C_HideCodeRedeemFinished_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.HideCodeRedeemAnim
struct URedeemCodeScreen_C_HideCodeRedeemAnim_Params
{
	float*                                             ElapsedTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ElapsedAlpha;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideAnim
struct URedeemCodeScreen_C_StartHideAnim_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidget
struct URedeemCodeScreen_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetNavigation
struct URedeemCodeScreen_C_InitializeWidgetNavigation_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.Construct
struct URedeemCodeScreen_C_Construct_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.InitializeWidgetButtonListeners
struct URedeemCodeScreen_C_InitializeWidgetButtonListeners_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.SubmitCode
struct URedeemCodeScreen_C_SubmitCode_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.StartShowSequence
struct URedeemCodeScreen_C_StartShowSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.StartHideSequence
struct URedeemCodeScreen_C_StartHideSequence_Params
{
	struct FName*                                      FromRoute;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      ToRoute;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnShown
struct URedeemCodeScreen_C_OnShown_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnHide
struct URedeemCodeScreen_C_OnHide_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCloseButtonClicked
struct URedeemCodeScreen_C_OnCloseButtonClicked_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct URedeemCodeScreen_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeSubmit
struct URedeemCodeScreen_C_OnRedeemCodeSubmit_Params
{
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnRedeemCodeResult
struct URedeemCodeScreen_C_OnRedeemCodeResult_Params
{
	bool*                                              Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Error;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.HandleInputStateChanged
struct URedeemCodeScreen_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextChanged
struct URedeemCodeScreen_C_OnCodeTextChanged_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.OnCodeTextCommit
struct URedeemCodeScreen_C_OnCodeTextCommit_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function RedeemCodeScreen.RedeemCodeScreen_C.ExecuteUbergraph_RedeemCodeScreen
struct URedeemCodeScreen_C_ExecuteUbergraph_RedeemCodeScreen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
