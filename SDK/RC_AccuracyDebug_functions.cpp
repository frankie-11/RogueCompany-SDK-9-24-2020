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

// Function AccuracyDebug.AccuracyDebug_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAccuracyDebug_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccuracyDebug.AccuracyDebug_C.Construct");

	UAccuracyDebug_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccuracyDebug.AccuracyDebug_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAccuracyDebug_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function AccuracyDebug.AccuracyDebug_C.Tick");

	UAccuracyDebug_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccuracyDebug.AccuracyDebug_C.ExecuteUbergraph_AccuracyDebug
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAccuracyDebug_C::ExecuteUbergraph_AccuracyDebug(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AccuracyDebug.AccuracyDebug_C.ExecuteUbergraph_AccuracyDebug");

	UAccuracyDebug_C_ExecuteUbergraph_AccuracyDebug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
