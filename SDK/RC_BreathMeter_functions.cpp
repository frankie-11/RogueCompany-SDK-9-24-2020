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

// Function BreathMeter.BreathMeter_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBreathMeter_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.Tick");

	UBreathMeter_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BreathMeter.BreathMeter_C.OpenGate
// (BlueprintCallable, BlueprintEvent)

void UBreathMeter_C::OpenGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.OpenGate");

	UBreathMeter_C_OpenGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BreathMeter.BreathMeter_C.CloseGate
// (BlueprintCallable, BlueprintEvent)

void UBreathMeter_C::CloseGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.CloseGate");

	UBreathMeter_C_CloseGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BreathMeter.BreathMeter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBreathMeter_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.Construct");

	UBreathMeter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BreathMeter.BreathMeter_C.UpdateCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBreathMeter_C::UpdateCharacter(class AKSCharacter** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.UpdateCharacter");

	UBreathMeter_C_UpdateCharacter_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BreathMeter.BreathMeter_C.UnbindCharacter
// (BlueprintCallable, BlueprintEvent)

void UBreathMeter_C::UnbindCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.UnbindCharacter");

	UBreathMeter_C_UnbindCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BreathMeter.BreathMeter_C.UpdateBreath
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewBreath                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBreathMeter_C::UpdateBreath(float* NewBreath)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.UpdateBreath");

	UBreathMeter_C_UpdateBreath_Params params;
	params.NewBreath = NewBreath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BreathMeter.BreathMeter_C.ExecuteUbergraph_BreathMeter
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBreathMeter_C::ExecuteUbergraph_BreathMeter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BreathMeter.BreathMeter_C.ExecuteUbergraph_BreathMeter");

	UBreathMeter_C_ExecuteUbergraph_BreathMeter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
