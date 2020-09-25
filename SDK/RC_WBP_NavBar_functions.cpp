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

// Function WBP_NavBar.WBP_NavBar_C.HandleInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   InKey                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_NavBar_C::HandleInput(struct FKey* InKey, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.HandleInput");

	UWBP_NavBar_C_HandleInput_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function WBP_NavBar.WBP_NavBar_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_NavBar_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.OnKeyUp");

	UWBP_NavBar_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_NavBar.WBP_NavBar_C.SetButtonIndexActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NavBar_C::SetButtonIndexActive(int* ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.SetButtonIndexActive");

	UWBP_NavBar_C_SetButtonIndexActive_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NavBar.WBP_NavBar_C.HandleNavRight
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NavBar_C::HandleNavRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.HandleNavRight");

	UWBP_NavBar_C_HandleNavRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NavBar.WBP_NavBar_C.HandleNavLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NavBar_C::HandleNavLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.HandleNavLeft");

	UWBP_NavBar_C_HandleNavLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NavBar.WBP_NavBar_C.HandleInputStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NavBar_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.HandleInputStateChanged");

	UWBP_NavBar_C_HandleInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NavBar.WBP_NavBar_C.SetupGamepadCallouts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_NavBar_C::SetupGamepadCallouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.SetupGamepadCallouts");

	UWBP_NavBar_C_SetupGamepadCallouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NavBar.WBP_NavBar_C.SetNavButtons
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FNavButtonData>  Buttons                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_NavBar_C::SetNavButtons(TArray<struct FNavButtonData>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.SetNavButtons");

	UWBP_NavBar_C_SetNavButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function WBP_NavBar.WBP_NavBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_NavBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.Construct");

	UWBP_NavBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NavBar.WBP_NavBar_C.OnButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWidget**              ButtonClicked                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_NavBar_C::OnButtonClicked(class UKSWidget** ButtonClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.OnButtonClicked");

	UWBP_NavBar_C_OnButtonClicked_Params params;
	params.ButtonClicked = ButtonClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NavBar.WBP_NavBar_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NavBar_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.InitializeWidget");

	UWBP_NavBar_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NavBar.WBP_NavBar_C.ExecuteUbergraph_WBP_NavBar
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NavBar_C::ExecuteUbergraph_WBP_NavBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.ExecuteUbergraph_WBP_NavBar");

	UWBP_NavBar_C_ExecuteUbergraph_WBP_NavBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NavBar.WBP_NavBar_C.OnButtonsCreated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_NavBar_C::OnButtonsCreated__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.OnButtonsCreated__DelegateSignature");

	UWBP_NavBar_C_OnButtonsCreated__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NavBar.WBP_NavBar_C.OnButtonSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NavBar_C::OnButtonSelected__DelegateSignature(int* ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NavBar.WBP_NavBar_C.OnButtonSelected__DelegateSignature");

	UWBP_NavBar_C_OnButtonSelected__DelegateSignature_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
