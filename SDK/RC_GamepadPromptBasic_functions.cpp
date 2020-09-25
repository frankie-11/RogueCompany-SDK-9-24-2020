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

// Function GamepadPromptBasic.GamepadPromptBasic_C.SetPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FButtonPromptData*      Data                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UGamepadPromptBasic_C::SetPrompt(struct FButtonPromptData* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadPromptBasic.GamepadPromptBasic_C.SetPrompt");

	UGamepadPromptBasic_C_SetPrompt_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadPromptBasic.GamepadPromptBasic_C.Populate
// (Private, BlueprintCallable, BlueprintEvent)

void UGamepadPromptBasic_C::Populate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadPromptBasic.GamepadPromptBasic_C.Populate");

	UGamepadPromptBasic_C_Populate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadPromptBasic.GamepadPromptBasic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGamepadPromptBasic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadPromptBasic.GamepadPromptBasic_C.Construct");

	UGamepadPromptBasic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamepadPromptBasic.GamepadPromptBasic_C.ExecuteUbergraph_GamepadPromptBasic
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGamepadPromptBasic_C::ExecuteUbergraph_GamepadPromptBasic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GamepadPromptBasic.GamepadPromptBasic_C.ExecuteUbergraph_GamepadPromptBasic");

	UGamepadPromptBasic_C_ExecuteUbergraph_GamepadPromptBasic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
