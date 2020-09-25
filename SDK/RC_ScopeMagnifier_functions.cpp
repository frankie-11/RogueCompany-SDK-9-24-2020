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

// Function ScopeMagnifier.ScopeMagnifier_C.OnPlayerHealthChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase**       CharacterBase                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScopeMagnifier_C::OnPlayerHealthChanged(class AKSCharacterBase** CharacterBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.OnPlayerHealthChanged");

	UScopeMagnifier_C_OnPlayerHealthChanged_Params params;
	params.CharacterBase = CharacterBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScopeMagnifier.ScopeMagnifier_C.OnAimStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKSCharacterAimMode*           AimState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScopeMagnifier_C::OnAimStateChanged(EKSCharacterAimMode* AimState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.OnAimStateChanged");

	UScopeMagnifier_C_OnAimStateChanged_Params params;
	params.AimState = AimState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScopeMagnifier.ScopeMagnifier_C.DetermineScope
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         FOV                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScopeMagnifier_C::DetermineScope(float* FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.DetermineScope");

	UScopeMagnifier_C_DetermineScope_Params params;
	params.FOV = FOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScopeMagnifier.ScopeMagnifier_C.HandleInputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputMode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScopeMagnifier_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.HandleInputModeChanged");

	UScopeMagnifier_C_HandleInputModeChanged_Params params;
	params.InputMode = InputMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScopeMagnifier.ScopeMagnifier_C.SetPromptImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScopeMagnifier_C::SetPromptImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.SetPromptImage");

	UScopeMagnifier_C_SetPromptImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScopeMagnifier.ScopeMagnifier_C.Get_PostPromptText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UScopeMagnifier_C::Get_PostPromptText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.Get_PostPromptText_Text_1");

	UScopeMagnifier_C_Get_PostPromptText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScopeMagnifier.ScopeMagnifier_C.Get_PrePromptText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UScopeMagnifier_C::Get_PrePromptText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.Get_PrePromptText_Text_1");

	UScopeMagnifier_C_Get_PrePromptText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ScopeMagnifier.ScopeMagnifier_C.SplitPrompt
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PreText                        (Parm, OutParm, ZeroConstructor)
// struct FString                 PosText                        (Parm, OutParm, ZeroConstructor)

void UScopeMagnifier_C::SplitPrompt(struct FString* PreText, struct FString* PosText)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.SplitPrompt");

	UScopeMagnifier_C_SplitPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PreText != nullptr)
		*PreText = params.PreText;
	if (PosText != nullptr)
		*PosText = params.PosText;
}


// Function ScopeMagnifier.ScopeMagnifier_C.PostSetWeapon
// (Event, Protected, BlueprintEvent)

void UScopeMagnifier_C::PostSetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.PostSetWeapon");

	UScopeMagnifier_C_PostSetWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScopeMagnifier.ScopeMagnifier_C.PreClearWeapon
// (Event, Protected, BlueprintEvent)

void UScopeMagnifier_C::PreClearWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.PreClearWeapon");

	UScopeMagnifier_C_PreClearWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScopeMagnifier.ScopeMagnifier_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScopeMagnifier_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.InitializeWidget");

	UScopeMagnifier_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScopeMagnifier.ScopeMagnifier_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScopeMagnifier_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.Construct");

	UScopeMagnifier_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScopeMagnifier.ScopeMagnifier_C.ExecuteUbergraph_ScopeMagnifier
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScopeMagnifier_C::ExecuteUbergraph_ScopeMagnifier(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScopeMagnifier.ScopeMagnifier_C.ExecuteUbergraph_ScopeMagnifier");

	UScopeMagnifier_C_ExecuteUbergraph_ScopeMagnifier_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
