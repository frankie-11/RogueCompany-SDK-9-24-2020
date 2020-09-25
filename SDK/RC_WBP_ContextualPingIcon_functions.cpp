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

// Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ContextualPingIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.Construct");

	UWBP_ContextualPingIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.HandlePingRemoved
// (BlueprintCallable, BlueprintEvent)

void UWBP_ContextualPingIcon_C::HandlePingRemoved()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.HandlePingRemoved");

	UWBP_ContextualPingIcon_C_HandlePingRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.SetupPingOnReady
// (Event, Public, BlueprintEvent)

void UWBP_ContextualPingIcon_C::SetupPingOnReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.SetupPingOnReady");

	UWBP_ContextualPingIcon_C_SetupPingOnReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.ExecuteUbergraph_WBP_ContextualPingIcon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ContextualPingIcon_C::ExecuteUbergraph_WBP_ContextualPingIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ContextualPingIcon.WBP_ContextualPingIcon_C.ExecuteUbergraph_WBP_ContextualPingIcon");

	UWBP_ContextualPingIcon_C_ExecuteUbergraph_WBP_ContextualPingIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
