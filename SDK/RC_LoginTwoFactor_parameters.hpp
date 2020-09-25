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

// Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidget
struct ULoginTwoFactor_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Committed
struct ULoginTwoFactor_C_Handle_Text_Committed_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<ETextCommit>*                          CommitMethod;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct ULoginTwoFactor_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LoginTwoFactor.LoginTwoFactor_C.Handle Text Changed
struct ULoginTwoFactor_C_Handle_Text_Changed_Params
{
	struct FText*                                      Text;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function LoginTwoFactor.LoginTwoFactor_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
struct ULoginTwoFactor_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function LoginTwoFactor.LoginTwoFactor_C.Submit Code
struct ULoginTwoFactor_C_Submit_Code_Params
{
};

// Function LoginTwoFactor.LoginTwoFactor_C.InitializeWidgetNavigation
struct ULoginTwoFactor_C_InitializeWidgetNavigation_Params
{
};

// Function LoginTwoFactor.LoginTwoFactor_C.Handle CodeField Gamepad Confirm
struct ULoginTwoFactor_C_Handle_CodeField_Gamepad_Confirm_Params
{
};

// Function LoginTwoFactor.LoginTwoFactor_C.Handle Login Error
struct ULoginTwoFactor_C_Handle_Login_Error_Params
{
	struct FText*                                      MessageText;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function LoginTwoFactor.LoginTwoFactor_C.ExecuteUbergraph_LoginTwoFactor
struct ULoginTwoFactor_C_ExecuteUbergraph_LoginTwoFactor_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
