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

// Function WaypointBeaconLarge.WaypointBeaconLarge_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWaypointBeaconLarge_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointBeaconLarge.WaypointBeaconLarge_C.UserConstructionScript");

	AWaypointBeaconLarge_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaypointBeaconLarge.WaypointBeaconLarge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWaypointBeaconLarge_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointBeaconLarge.WaypointBeaconLarge_C.ReceiveBeginPlay");

	AWaypointBeaconLarge_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaypointBeaconLarge.WaypointBeaconLarge_C.SetupBeaconDisplay
// (Event, Public, BlueprintEvent)

void AWaypointBeaconLarge_C::SetupBeaconDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointBeaconLarge.WaypointBeaconLarge_C.SetupBeaconDisplay");

	AWaypointBeaconLarge_C_SetupBeaconDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaypointBeaconLarge.WaypointBeaconLarge_C.ExecuteUbergraph_WaypointBeaconLarge
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWaypointBeaconLarge_C::ExecuteUbergraph_WaypointBeaconLarge(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointBeaconLarge.WaypointBeaconLarge_C.ExecuteUbergraph_WaypointBeaconLarge");

	AWaypointBeaconLarge_C_ExecuteUbergraph_WaypointBeaconLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
