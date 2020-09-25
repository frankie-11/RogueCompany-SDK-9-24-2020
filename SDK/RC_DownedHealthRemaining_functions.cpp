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

// Function DownedHealthRemaining.DownedHealthRemaining_C.Unbind Player State
// (Public, BlueprintCallable, BlueprintEvent)

void UDownedHealthRemaining_C::Unbind_Player_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.Unbind Player State");

	UDownedHealthRemaining_C_Unbind_Player_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.StatusTextBind
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UDownedHealthRemaining_C::StatusTextBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.StatusTextBind");

	UDownedHealthRemaining_C_StatusTextBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.OverallColorBind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UDownedHealthRemaining_C::OverallColorBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.OverallColorBind");

	UDownedHealthRemaining_C_OverallColorBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.BarPercentBind
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UDownedHealthRemaining_C::BarPercentBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.BarPercentBind");

	UDownedHealthRemaining_C_BarPercentBind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.Handle Give Up Timer Active
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDownedHealthRemaining_C::Handle_Give_Up_Timer_Active(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.Handle Give Up Timer Active");

	UDownedHealthRemaining_C_Handle_Give_Up_Timer_Active_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDownedHealthRemaining_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.Tick");

	UDownedHealthRemaining_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.PreClearPawn
// (Event, Protected, BlueprintEvent)

void UDownedHealthRemaining_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.PreClearPawn");

	UDownedHealthRemaining_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UDownedHealthRemaining_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.PostSetPawn");

	UDownedHealthRemaining_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.DownStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDownedHealthRemaining_C::DownStateChanged(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.DownStateChanged");

	UDownedHealthRemaining_C_DownStateChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.FadedOutFinished
// (BlueprintCallable, BlueprintEvent)

void UDownedHealthRemaining_C::FadedOutFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.FadedOutFinished");

	UDownedHealthRemaining_C_FadedOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDownedHealthRemaining_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.Construct");

	UDownedHealthRemaining_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDownedHealthRemaining_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.InitializeWidget");

	UDownedHealthRemaining_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.Handle Input State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDownedHealthRemaining_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.Handle Input State Changed");

	UDownedHealthRemaining_C_Handle_Input_State_Changed_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.PostSetPlayerState
// (Event, Protected, BlueprintEvent)

void UDownedHealthRemaining_C::PostSetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.PostSetPlayerState");

	UDownedHealthRemaining_C_PostSetPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.PreClearPlayerState
// (Event, Protected, BlueprintEvent)

void UDownedHealthRemaining_C::PreClearPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.PreClearPlayerState");

	UDownedHealthRemaining_C_PreClearPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.On Character Give Up Allowed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Allowed                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDownedHealthRemaining_C::On_Character_Give_Up_Allowed(bool* Allowed)
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.On Character Give Up Allowed");

	UDownedHealthRemaining_C_On_Character_Give_Up_Allowed_Params params;
	params.Allowed = Allowed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DownedHealthRemaining.DownedHealthRemaining_C.ExecuteUbergraph_DownedHealthRemaining
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDownedHealthRemaining_C::ExecuteUbergraph_DownedHealthRemaining(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DownedHealthRemaining.DownedHealthRemaining_C.ExecuteUbergraph_DownedHealthRemaining");

	UDownedHealthRemaining_C_ExecuteUbergraph_DownedHealthRemaining_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
