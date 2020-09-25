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

// Function BP_GameInstance.BP_GameInstance_C.EndLoading
// (Event, Public, BlueprintEvent)

void UBP_GameInstance_C::EndLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.EndLoading");

	UBP_GameInstance_C_EndLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.BeginLoading
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                mapName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBP_GameInstance_C::BeginLoading(struct FString* mapName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.BeginLoading");

	UBP_GameInstance_C_BeginLoading_Params params;
	params.mapName = mapName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GameInstance_C::ExecuteUbergraph_BP_GameInstance(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameInstance.BP_GameInstance_C.ExecuteUbergraph_BP_GameInstance");

	UBP_GameInstance_C_ExecuteUbergraph_BP_GameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
