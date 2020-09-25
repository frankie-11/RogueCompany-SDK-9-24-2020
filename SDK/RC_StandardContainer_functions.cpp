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

// Function StandardContainer.StandardContainer_C.EvaluateHeaderVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UStandardContainer_C::EvaluateHeaderVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardContainer.StandardContainer_C.EvaluateHeaderVisibility");

	UStandardContainer_C_EvaluateHeaderVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StandardContainer.StandardContainer_C.EvaluateCloseButtonVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UStandardContainer_C::EvaluateCloseButtonVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardContainer.StandardContainer_C.EvaluateCloseButtonVisibility");

	UStandardContainer_C_EvaluateCloseButtonVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function StandardContainer.StandardContainer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStandardContainer_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardContainer.StandardContainer_C.PreConstruct");

	UStandardContainer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardContainer.StandardContainer_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UStandardContainer_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardContainer.StandardContainer_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UStandardContainer_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardContainer.StandardContainer_C.ExecuteUbergraph_StandardContainer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UStandardContainer_C::ExecuteUbergraph_StandardContainer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardContainer.StandardContainer_C.ExecuteUbergraph_StandardContainer");

	UStandardContainer_C_ExecuteUbergraph_StandardContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandardContainer.StandardContainer_C.OnContainerClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UStandardContainer_C::OnContainerClose__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandardContainer.StandardContainer_C.OnContainerClose__DelegateSignature");

	UStandardContainer_C_OnContainerClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
