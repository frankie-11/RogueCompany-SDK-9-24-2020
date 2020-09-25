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

// Function ExpElement.ExpElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UExpElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpElement.ExpElement_C.Construct");

	UExpElement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpElement.ExpElement_C.WidgetAnimationEvt_SlideIn_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UExpElement_C::WidgetAnimationEvt_SlideIn_K2Node_WidgetAnimationEvent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpElement.ExpElement_C.WidgetAnimationEvt_SlideIn_K2Node_WidgetAnimationEvent_1");

	UExpElement_C_WidgetAnimationEvt_SlideIn_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpElement.ExpElement_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void UExpElement_C::WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpElement.ExpElement_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2");

	UExpElement_C_WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpElement.ExpElement_C.HandleAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UExpElement_C::HandleAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpElement.ExpElement_C.HandleAnimFinished");

	UExpElement_C_HandleAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpElement.ExpElement_C.ExecuteUbergraph_ExpElement
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExpElement_C::ExecuteUbergraph_ExpElement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpElement.ExpElement_C.ExecuteUbergraph_ExpElement");

	UExpElement_C_ExecuteUbergraph_ExpElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpElement.ExpElement_C.OnAnimFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UExpElement_C::OnAnimFinished__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpElement.ExpElement_C.OnAnimFinished__DelegateSignature");

	UExpElement_C_OnAnimFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
