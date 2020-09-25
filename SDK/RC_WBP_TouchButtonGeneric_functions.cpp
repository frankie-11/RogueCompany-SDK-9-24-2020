// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.TriggerInputAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EInputEvent>*      InInputEvent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TouchButtonGeneric_C::TriggerInputAction(TEnumAsByte<EInputEvent>* InInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.TriggerInputAction");

	UWBP_TouchButtonGeneric_C_TriggerInputAction_Params params;
	params.InInputEvent = InInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TouchButtonGeneric_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.PreConstruct");

	UWBP_TouchButtonGeneric_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TouchButtonGeneric_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.Construct");

	UWBP_TouchButtonGeneric_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TouchButtonGeneric_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UWBP_TouchButtonGeneric_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_TouchButtonGeneric_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UWBP_TouchButtonGeneric_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.ExecuteUbergraph_WBP_TouchButtonGeneric
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TouchButtonGeneric_C::ExecuteUbergraph_WBP_TouchButtonGeneric(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C.ExecuteUbergraph_WBP_TouchButtonGeneric");

	UWBP_TouchButtonGeneric_C_ExecuteUbergraph_WBP_TouchButtonGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
