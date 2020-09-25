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

// Function TextTypeEffect.TextTypeEffect_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UTextTypeEffect_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTypeEffect.TextTypeEffect_C.SetText");

	UTextTypeEffect_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextTypeEffect.TextTypeEffect_C.Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         dt                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextTypeEffect_C::Tick(float* dt)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTypeEffect.TextTypeEffect_C.Tick");

	UTextTypeEffect_C_Tick_Params params;
	params.dt = dt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextTypeEffect.TextTypeEffect_C.StartType
// (BlueprintCallable, BlueprintEvent)

void UTextTypeEffect_C::StartType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTypeEffect.TextTypeEffect_C.StartType");

	UTextTypeEffect_C_StartType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextTypeEffect.TextTypeEffect_C.ExecuteUbergraph_TextTypeEffect
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTextTypeEffect_C::ExecuteUbergraph_TextTypeEffect(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTypeEffect.TextTypeEffect_C.ExecuteUbergraph_TextTypeEffect");

	UTextTypeEffect_C_ExecuteUbergraph_TextTypeEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
