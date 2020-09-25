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

// Function LoginEula.LoginEula_C.ShowArrows
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxValue                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginEula_C::ShowArrows(float* Value, float* MaxValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ShowArrows");

	ULoginEula_C_ShowArrows_Params params;
	params.Value = Value;
	params.MaxValue = MaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.ChangeFontSizeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULoginEula_C::ChangeFontSizeText()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ChangeFontSizeText");

	ULoginEula_C_ChangeFontSizeText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.HandleCalloutSwitcher
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULoginEula_C::HandleCalloutSwitcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.HandleCalloutSwitcher");

	ULoginEula_C_HandleCalloutSwitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoginEula_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.Construct");

	ULoginEula_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginEula_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.Tick");

	ULoginEula_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginEula_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.InitializeWidget");

	ULoginEula_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void ULoginEula_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.InitializeWidgetNavigation");

	ULoginEula_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)

void ULoginEula_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.InitializeWidgetButtonListeners");

	ULoginEula_C_InitializeWidgetButtonListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.ScrollUpPressed
// (BlueprintCallable, BlueprintEvent)

void ULoginEula_C::ScrollUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ScrollUpPressed");

	ULoginEula_C_ScrollUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.ScrollDownPressed
// (BlueprintCallable, BlueprintEvent)

void ULoginEula_C::ScrollDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ScrollDownPressed");

	ULoginEula_C_ScrollDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.ScrollUpReleased
// (BlueprintCallable, BlueprintEvent)

void ULoginEula_C::ScrollUpReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ScrollUpReleased");

	ULoginEula_C_ScrollUpReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.ScrollDownReleased
// (BlueprintCallable, BlueprintEvent)

void ULoginEula_C::ScrollDownReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ScrollDownReleased");

	ULoginEula_C_ScrollDownReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.Handle Input State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginEula_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.Handle Input State Changed");

	ULoginEula_C_Handle_Input_State_Changed_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.SetActiveScrollCallout
// (BlueprintCallable, BlueprintEvent)

void ULoginEula_C::SetActiveScrollCallout()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.SetActiveScrollCallout");

	ULoginEula_C_SetActiveScrollCallout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginEula_C::BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	ULoginEula_C_BndEvt__FormBackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginEula_C::BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	ULoginEula_C_BndEvt__FormNextButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool*                          Checked                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginEula_C::BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature(bool* Checked)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature");

	ULoginEula_C_BndEvt__Checkbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature_Params params;
	params.Checked = Checked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoginEula_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.Destruct");

	ULoginEula_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.OnHide
// (Event, Public, BlueprintEvent)

void ULoginEula_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.OnHide");

	ULoginEula_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.OnShown
// (Event, Public, BlueprintEvent)

void ULoginEula_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.OnShown");

	ULoginEula_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginEula.LoginEula_C.ExecuteUbergraph_LoginEula
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginEula_C::ExecuteUbergraph_LoginEula(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginEula.LoginEula_C.ExecuteUbergraph_LoginEula");

	ULoginEula_C_ExecuteUbergraph_LoginEula_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
