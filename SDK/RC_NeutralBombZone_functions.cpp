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

// Function NeutralBombZone.NeutralBombZone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANeutralBombZone_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.ReceiveBeginPlay");

	ANeutralBombZone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NeutralBombZone.NeutralBombZone_C.UpdateZoneMaterial
// (BlueprintCallable, BlueprintEvent)

void ANeutralBombZone_C::UpdateZoneMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.UpdateZoneMaterial");

	ANeutralBombZone_C_UpdateZoneMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NeutralBombZone.NeutralBombZone_C.RoundSetup
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ANeutralBombZone_C::RoundSetup(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.RoundSetup");

	ANeutralBombZone_C_RoundSetup_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NeutralBombZone.NeutralBombZone_C.TeamUpdated
// (Event, Protected, BlueprintEvent)

void ANeutralBombZone_C::TeamUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.TeamUpdated");

	ANeutralBombZone_C_TeamUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NeutralBombZone.NeutralBombZone_C.Activated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANeutralBombZone_C::Activated(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.Activated");

	ANeutralBombZone_C_Activated_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NeutralBombZone.NeutralBombZone_C.BombStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSNeutralBombState*    BombState                      (BlueprintVisible, BlueprintReadOnly, Parm)

void ANeutralBombZone_C::BombStateChanged(struct FKSNeutralBombState* BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.BombStateChanged");

	ANeutralBombZone_C_BombStateChanged_Params params;
	params.BombState = BombState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NeutralBombZone.NeutralBombZone_C.ExecuteUbergraph_NeutralBombZone
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANeutralBombZone_C::ExecuteUbergraph_NeutralBombZone(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NeutralBombZone.NeutralBombZone_C.ExecuteUbergraph_NeutralBombZone");

	ANeutralBombZone_C_ExecuteUbergraph_NeutralBombZone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
