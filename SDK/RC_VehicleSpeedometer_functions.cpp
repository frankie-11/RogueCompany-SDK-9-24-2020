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

// Function VehicleSpeedometer.VehicleSpeedometer_C.SetTargetValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TargetValue                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleSpeedometer_C::SetTargetValue(float* TargetValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSpeedometer.VehicleSpeedometer_C.SetTargetValue");

	UVehicleSpeedometer_C_SetTargetValue_Params params;
	params.TargetValue = TargetValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSpeedometer.VehicleSpeedometer_C.SetValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Speedo                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleSpeedometer_C::SetValue(float* Speedo)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSpeedometer.VehicleSpeedometer_C.SetValue");

	UVehicleSpeedometer_C_SetValue_Params params;
	params.Speedo = Speedo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSpeedometer.VehicleSpeedometer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleSpeedometer_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSpeedometer.VehicleSpeedometer_C.Tick");

	UVehicleSpeedometer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSpeedometer.VehicleSpeedometer_C.ExecuteUbergraph_VehicleSpeedometer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleSpeedometer_C::ExecuteUbergraph_VehicleSpeedometer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSpeedometer.VehicleSpeedometer_C.ExecuteUbergraph_VehicleSpeedometer");

	UVehicleSpeedometer_C_ExecuteUbergraph_VehicleSpeedometer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
