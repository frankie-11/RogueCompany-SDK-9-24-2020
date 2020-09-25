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

// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.TriggerInputAction
struct UWBP_TouchButtonGeneric_C_TriggerInputAction_Params
{
	TEnumAsByte<EInputEvent>*                          InInputEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.PreConstruct
struct UWBP_TouchButtonGeneric_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.Construct
struct UWBP_TouchButtonGeneric_C_Construct_Params
{
};

// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
struct UWBP_TouchButtonGeneric_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
struct UWBP_TouchButtonGeneric_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.ExecuteUbergraph_WBP_TouchButtonGeneric
struct UWBP_TouchButtonGeneric_C_ExecuteUbergraph_WBP_TouchButtonGeneric_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
