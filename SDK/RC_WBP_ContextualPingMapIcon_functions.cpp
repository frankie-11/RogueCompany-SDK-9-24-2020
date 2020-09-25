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

// Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ContextualPingMapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.Construct");

	UWBP_ContextualPingMapIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.HandlePingRemoved
// (BlueprintCallable, BlueprintEvent)

void UWBP_ContextualPingMapIcon_C::HandlePingRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.HandlePingRemoved");

	UWBP_ContextualPingMapIcon_C_HandlePingRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.SetupPingOnReady
// (Event, Public, BlueprintEvent)

void UWBP_ContextualPingMapIcon_C::SetupPingOnReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.SetupPingOnReady");

	UWBP_ContextualPingMapIcon_C_SetupPingOnReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.ExecuteUbergraph_WBP_ContextualPingMapIcon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ContextualPingMapIcon_C::ExecuteUbergraph_WBP_ContextualPingMapIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingMapIcon.WBP_ContextualPingMapIcon_C.ExecuteUbergraph_WBP_ContextualPingMapIcon");

	UWBP_ContextualPingMapIcon_C_ExecuteUbergraph_WBP_ContextualPingMapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
