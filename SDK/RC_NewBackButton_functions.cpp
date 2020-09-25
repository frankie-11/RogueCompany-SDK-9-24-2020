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

// Function NewBackButton.NewBackButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNewBackButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewBackButton.NewBackButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UNewBackButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewBackButton.NewBackButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UNewBackButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewBackButton.NewBackButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UNewBackButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewBackButton.NewBackButton_C.BndEvt__WBP_ShearedButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNewBackButton_C::BndEvt__WBP_ShearedButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewBackButton.NewBackButton_C.BndEvt__WBP_ShearedButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UNewBackButton_C_BndEvt__WBP_ShearedButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewBackButton.NewBackButton_C.OnViewChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  LastRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewBackButton_C::OnViewChanged(struct FName* LastRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewBackButton.NewBackButton_C.OnViewChanged");

	UNewBackButton_C_OnViewChanged_Params params;
	params.LastRoute = LastRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewBackButton.NewBackButton_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewBackButton_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewBackButton.NewBackButton_C.InitializeWidget");

	UNewBackButton_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewBackButton.NewBackButton_C.ExecuteUbergraph_NewBackButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewBackButton_C::ExecuteUbergraph_NewBackButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewBackButton.NewBackButton_C.ExecuteUbergraph_NewBackButton");

	UNewBackButton_C_ExecuteUbergraph_NewBackButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewBackButton.NewBackButton_C.BackButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNewBackButton_C::BackButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewBackButton.NewBackButton_C.BackButtonClicked__DelegateSignature");

	UNewBackButton_C_BackButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
