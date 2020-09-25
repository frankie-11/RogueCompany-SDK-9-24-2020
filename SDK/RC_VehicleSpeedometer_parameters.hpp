#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function VehicleSpeedometer.VehicleSpeedometer_C.SetTargetValue
struct UVehicleSpeedometer_C_SetTargetValue_Params
{
	float*                                             TargetValue;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleSpeedometer.VehicleSpeedometer_C.SetValue
struct UVehicleSpeedometer_C_SetValue_Params
{
	float*                                             Speedo;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleSpeedometer.VehicleSpeedometer_C.Tick
struct UVehicleSpeedometer_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function VehicleSpeedometer.VehicleSpeedometer_C.ExecuteUbergraph_VehicleSpeedometer
struct UVehicleSpeedometer_C_ExecuteUbergraph_VehicleSpeedometer_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
