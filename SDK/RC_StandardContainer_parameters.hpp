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

// Function StandardContainer.StandardContainer_C.EvaluateHeaderVisibility
struct UStandardContainer_C_EvaluateHeaderVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StandardContainer.StandardContainer_C.EvaluateCloseButtonVisibility
struct UStandardContainer_C_EvaluateCloseButtonVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function StandardContainer.StandardContainer_C.PreConstruct
struct UStandardContainer_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StandardContainer.StandardContainer_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
struct UStandardContainer_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function StandardContainer.StandardContainer_C.ExecuteUbergraph_StandardContainer
struct UStandardContainer_C_ExecuteUbergraph_StandardContainer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function StandardContainer.StandardContainer_C.OnContainerClose__DelegateSignature
struct UStandardContainer_C_OnContainerClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
