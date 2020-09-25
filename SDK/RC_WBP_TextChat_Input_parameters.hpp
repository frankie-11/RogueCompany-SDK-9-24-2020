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

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetPromptActionActive
struct UWBP_TextChat_Input_C_SetPromptActionActive_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateGamepadFocus
struct UWBP_TextChat_Input_C_UpdateGamepadFocus_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.HandleInputStateChange
struct UWBP_TextChat_Input_C_HandleInputStateChange_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetEngaged
struct UWBP_TextChat_Input_C_SetEngaged_Params
{
	bool*                                              Engaged;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.UpdateHintText
struct UWBP_TextChat_Input_C_UpdateHintText_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.GetHintText
struct UWBP_TextChat_Input_C_GetHintText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.SetCurrentChannel
struct UWBP_TextChat_Input_C_SetCurrentChannel_Params
{
	EPUMG_ChatChannel*                                 Channel;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPUMG_PlayerInfo**                           PersonalChannelPlayer;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.On_Input_KeyDown
struct UWBP_TextChat_Input_C_On_Input_KeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.PreConstruct
struct UWBP_TextChat_Input_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_TextChat_Input_C_BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.InitializeWidget
struct UWBP_TextChat_Input_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnViewStateChanged
struct UWBP_TextChat_Input_C_OnViewStateChanged_Params
{
	struct FName*                                      CurrentRoute;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousRoute;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EViewManagerLayer*                                 Layer;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature
struct UWBP_TextChat_Input_C_BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UWBP_TextChat_Input_C_BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.ExecuteUbergraph_WBP_TextChat_Input
struct UWBP_TextChat_Input_C_ExecuteUbergraph_WBP_TextChat_Input_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnDownPressed__DelegateSignature
struct UWBP_TextChat_Input_C_OnDownPressed__DelegateSignature_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnUpPressed__DelegateSignature
struct UWBP_TextChat_Input_C_OnUpPressed__DelegateSignature_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnRightPressed__DelegateSignature
struct UWBP_TextChat_Input_C_OnRightPressed__DelegateSignature_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnLeftPressed__DelegateSignature
struct UWBP_TextChat_Input_C_OnLeftPressed__DelegateSignature_Params
{
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnCancelPressed__DelegateSignature
struct UWBP_TextChat_Input_C_OnCancelPressed__DelegateSignature_Params
{
	struct FKey*                                       Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_TextChat_Input.WBP_TextChat_Input_C.OnTabPressed__DelegateSignature
struct UWBP_TextChat_Input_C_OnTabPressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
