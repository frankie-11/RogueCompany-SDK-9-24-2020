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

// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.SetInputState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Context_Menu_Prompt_C::SetInputState(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.SetInputState");

	UWBP_Context_Menu_Prompt_C_SetInputState_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Populate
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Context_Menu_Prompt_C::Populate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Populate");

	UWBP_Context_Menu_Prompt_C_Populate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Context_Menu_Prompt_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.PreConstruct");

	UWBP_Context_Menu_Prompt_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Context_Menu_Prompt_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.Construct");

	UWBP_Context_Menu_Prompt_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Context_Menu_Prompt_C::BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWBP_Context_Menu_Prompt_C_BndEvt__WBP_StandardButton_02_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Context_Menu_Prompt_C::BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UWBP_Context_Menu_Prompt_C_BndEvt__WBP_StandardButton_02_C_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.ExecuteUbergraph_WBP_Context_Menu_Prompt
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Context_Menu_Prompt_C::ExecuteUbergraph_WBP_Context_Menu_Prompt(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.ExecuteUbergraph_WBP_Context_Menu_Prompt");

	UWBP_Context_Menu_Prompt_C_ExecuteUbergraph_WBP_Context_Menu_Prompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.OnPromptClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Context_Menu_Prompt_C::OnPromptClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Menu_Prompt.WBP_Context_Menu_Prompt_C.OnPromptClicked__DelegateSignature");

	UWBP_Context_Menu_Prompt_C_OnPromptClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
