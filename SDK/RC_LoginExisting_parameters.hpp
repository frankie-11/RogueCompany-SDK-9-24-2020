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

// Function LoginExisting.LoginExisting_C.SetCacheErrorMsg
struct ULoginExisting_C_SetCacheErrorMsg_Params
{
};

// Function LoginExisting.LoginExisting_C.UpdatePlayerName
struct ULoginExisting_C_UpdatePlayerName_Params
{
};

// Function LoginExisting.LoginExisting_C.NavigateBack
struct ULoginExisting_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LoginExisting.LoginExisting_C.NavigateConfirm
struct ULoginExisting_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function LoginExisting.LoginExisting_C.SetPlatformSpecificInterface
struct ULoginExisting_C_SetPlatformSpecificInterface_Params
{
};

// Function LoginExisting.LoginExisting_C.HandleLoginError
struct ULoginExisting_C_HandleLoginError_Params
{
	struct FText*                                      ErrorMsg;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginExisting.LoginExisting_C.BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature
struct ULoginExisting_C_BndEvt__PopupButton_C_233_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginExisting.LoginExisting_C.InitializeWidgetNavigation
struct ULoginExisting_C_InitializeWidgetNavigation_Params
{
};

// Function LoginExisting.LoginExisting_C.OnShown
struct ULoginExisting_C_OnShown_Params
{
};

// Function LoginExisting.LoginExisting_C.BndEvt__PasswordField_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature
struct ULoginExisting_C_BndEvt__PasswordField_K2Node_ComponentBoundEvent_25_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature
struct ULoginExisting_C_BndEvt__UsernameField_K2Node_ComponentBoundEvent_36_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginExisting.LoginExisting_C.BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature
struct ULoginExisting_C_BndEvt__UsernameField_K2Node_ComponentBoundEvent_60_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LoginExisting.LoginExisting_C.BndEvt__PasswordField_K2Node_ComponentBoundEvent_63_OnEditableTextBoxChangedEvent__DelegateSignature
struct ULoginExisting_C_BndEvt__PasswordField_K2Node_ComponentBoundEvent_63_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LoginExisting.LoginExisting_C.Handle Input State Changed
struct ULoginExisting_C_Handle_Input_State_Changed_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginExisting.LoginExisting_C.ConfirmClicked
struct ULoginExisting_C_ConfirmClicked_Params
{
};

// Function LoginExisting.LoginExisting_C.OnHide
struct ULoginExisting_C_OnHide_Params
{
};

// Function LoginExisting.LoginExisting_C.BndEvt__PCCreateButton_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature
struct ULoginExisting_C_BndEvt__PCCreateButton_K2Node_ComponentBoundEvent_57_OnClicked__DelegateSignature_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginExisting.LoginExisting_C.InitializeWidget
struct ULoginExisting_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginExisting.LoginExisting_C.BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
struct ULoginExisting_C_BndEvt__AnonLoginButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LoginExisting.LoginExisting_C.BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct ULoginExisting_C_BndEvt__XboxCalloutWrapper_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function LoginExisting.LoginExisting_C.PreConstruct
struct ULoginExisting_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginExisting.LoginExisting_C.OnProfileChangeRequested
struct ULoginExisting_C_OnProfileChangeRequested_Params
{
};

// Function LoginExisting.LoginExisting_C.Gamepad Select Username
struct ULoginExisting_C_Gamepad_Select_Username_Params
{
};

// Function LoginExisting.LoginExisting_C.Gamepad Select Password
struct ULoginExisting_C_Gamepad_Select_Password_Params
{
};

// Function LoginExisting.LoginExisting_C.ExecuteUbergraph_LoginExisting
struct ULoginExisting_C_ExecuteUbergraph_LoginExisting_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
