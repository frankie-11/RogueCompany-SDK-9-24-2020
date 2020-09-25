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

// Function Blocker.Blocker_C.BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBlocker_C::BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Blocker.Blocker_C.BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");

	UBlocker_C_BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blocker.Blocker_C.Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_Widget**           Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          ClickToClose                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBlocker_C::Bind(class UPUMG_Widget** Widget, bool* ClickToClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blocker.Blocker_C.Bind");

	UBlocker_C_Bind_Params params;
	params.Widget = Widget;
	params.ClickToClose = ClickToClose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blocker.Blocker_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBlocker_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blocker.Blocker_C.InitializeWidget");

	UBlocker_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blocker.Blocker_C.HandleBlockerChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget**            InWidget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBlocker_C::HandleBlockerChange(bool* Show, class UUserWidget** InWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blocker.Blocker_C.HandleBlockerChange");

	UBlocker_C_HandleBlockerChange_Params params;
	params.Show = Show;
	params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Blocker.Blocker_C.ExecuteUbergraph_Blocker
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBlocker_C::ExecuteUbergraph_Blocker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Blocker.Blocker_C.ExecuteUbergraph_Blocker");

	UBlocker_C_ExecuteUbergraph_Blocker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
