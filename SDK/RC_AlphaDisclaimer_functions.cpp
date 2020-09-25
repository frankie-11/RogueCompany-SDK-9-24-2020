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

// Function AlphaDisclaimer.AlphaDisclaimer_C.HideScrollCallout
// (Public, BlueprintCallable, BlueprintEvent)

void UAlphaDisclaimer_C::HideScrollCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.HideScrollCallout");

	UAlphaDisclaimer_C_HideScrollCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.ShowArrows
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlphaDisclaimer_C::ShowArrows(float* Value, float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.ShowArrows");

	UAlphaDisclaimer_C_ShowArrows_Params params;
	params.Value = Value;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlphaDisclaimer_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.Tick");

	UAlphaDisclaimer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlphaDisclaimer_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidget");

	UAlphaDisclaimer_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UAlphaDisclaimer_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidgetNavigation");

	UAlphaDisclaimer_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)

void UAlphaDisclaimer_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.InitializeWidgetButtonListeners");

	UAlphaDisclaimer_C_InitializeWidgetButtonListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollUpPressed
// (BlueprintCallable, BlueprintEvent)

void UAlphaDisclaimer_C::ScrollUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollUpPressed");

	UAlphaDisclaimer_C_ScrollUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollDownPressed
// (BlueprintCallable, BlueprintEvent)

void UAlphaDisclaimer_C::ScrollDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollDownPressed");

	UAlphaDisclaimer_C_ScrollDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollUpReleased
// (BlueprintCallable, BlueprintEvent)

void UAlphaDisclaimer_C::ScrollUpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollUpReleased");

	UAlphaDisclaimer_C_ScrollUpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollDownReleased
// (BlueprintCallable, BlueprintEvent)

void UAlphaDisclaimer_C::ScrollDownReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.ScrollDownReleased");

	UAlphaDisclaimer_C_ScrollDownReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.Handle Input State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlphaDisclaimer_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.Handle Input State Changed");

	UAlphaDisclaimer_C_Handle_Input_State_Changed_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.CalloutTimerFunction
// (BlueprintCallable, BlueprintEvent)

void UAlphaDisclaimer_C::CalloutTimerFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.CalloutTimerFunction");

	UAlphaDisclaimer_C_CalloutTimerFunction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlphaDisclaimer_C::BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UAlphaDisclaimer_C_BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.OnHide
// (Event, Public, BlueprintEvent)

void UAlphaDisclaimer_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.OnHide");

	UAlphaDisclaimer_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.OnShown
// (Event, Public, BlueprintEvent)

void UAlphaDisclaimer_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.OnShown");

	UAlphaDisclaimer_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAlphaDisclaimer_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.Destruct");

	UAlphaDisclaimer_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AlphaDisclaimer.AlphaDisclaimer_C.ExecuteUbergraph_AlphaDisclaimer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAlphaDisclaimer_C::ExecuteUbergraph_AlphaDisclaimer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AlphaDisclaimer.AlphaDisclaimer_C.ExecuteUbergraph_AlphaDisclaimer");

	UAlphaDisclaimer_C_ExecuteUbergraph_AlphaDisclaimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
