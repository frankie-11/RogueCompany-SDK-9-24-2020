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

// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetButtonPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ControllerPrompt_C::SetButtonPrompt(struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetButtonPrompt");

	UWBP_ControllerPrompt_C_SetButtonPrompt_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsCancel
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ControllerPrompt_C::SetIsCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsCancel");

	UWBP_ControllerPrompt_C_SetIsCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsConfirm
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ControllerPrompt_C::SetIsConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetIsConfirm");

	UWBP_ControllerPrompt_C_SetIsConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetPromptFromButton
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey*                   Button                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ControllerPrompt_C::SetPromptFromButton(struct FKey* Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetPromptFromButton");

	UWBP_ControllerPrompt_C_SetPromptFromButton_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.UpdateFromSetValues
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_ControllerPrompt_C::UpdateFromSetValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.UpdateFromSetValues");

	UWBP_ControllerPrompt_C_UpdateFromSetValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetInputAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  ActionName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ControllerPrompt_C::SetInputAction(struct FName* ActionName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.SetInputAction");

	UWBP_ControllerPrompt_C_SetInputAction_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ControllerPrompt_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.PreConstruct");

	UWBP_ControllerPrompt_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ControllerPrompt_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.Construct");

	UWBP_ControllerPrompt_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.ExecuteUbergraph_WBP_ControllerPrompt
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ControllerPrompt_C::ExecuteUbergraph_WBP_ControllerPrompt(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ControllerPrompt.WBP_ControllerPrompt_C.ExecuteUbergraph_WBP_ControllerPrompt");

	UWBP_ControllerPrompt_C_ExecuteUbergraph_WBP_ControllerPrompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
