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

// Function VehicleHealth.VehicleHealth_C.Set Target Value
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TargetValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleHealth_C::Set_Target_Value(float* TargetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleHealth.VehicleHealth_C.Set Target Value");

	UVehicleHealth_C_Set_Target_Value_Params params;
	params.TargetValue = TargetValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleHealth.VehicleHealth_C.Set Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Percent                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleHealth_C::Set_Value(float* Percent)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleHealth.VehicleHealth_C.Set Value");

	UVehicleHealth_C_Set_Value_Params params;
	params.Percent = Percent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleHealth.VehicleHealth_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleHealth_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleHealth.VehicleHealth_C.Tick");

	UVehicleHealth_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleHealth.VehicleHealth_C.ExecuteUbergraph_VehicleHealth
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleHealth_C::ExecuteUbergraph_VehicleHealth(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleHealth.VehicleHealth_C.ExecuteUbergraph_VehicleHealth");

	UVehicleHealth_C_ExecuteUbergraph_VehicleHealth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
