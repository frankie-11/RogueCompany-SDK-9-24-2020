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

// Function ActivePerkSlot.ActivePerkSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActivePerkSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivePerkSlot.ActivePerkSlot_C.Construct");

	UActivePerkSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivePerkSlot.ActivePerkSlot_C.HandleOnModTriggered
// (BlueprintCallable, BlueprintEvent)

void UActivePerkSlot_C::HandleOnModTriggered()
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivePerkSlot.ActivePerkSlot_C.HandleOnModTriggered");

	UActivePerkSlot_C_HandleOnModTriggered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ActivePerkSlot.ActivePerkSlot_C.ExecuteUbergraph_ActivePerkSlot
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UActivePerkSlot_C::ExecuteUbergraph_ActivePerkSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ActivePerkSlot.ActivePerkSlot_C.ExecuteUbergraph_ActivePerkSlot");

	UActivePerkSlot_C_ExecuteUbergraph_ActivePerkSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
