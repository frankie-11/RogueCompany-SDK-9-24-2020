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

// Function WBP_ShotgunPellet.WBP_ShotgunPellet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ShotgunPellet_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShotgunPellet.WBP_ShotgunPellet_C.Construct");

	UWBP_ShotgunPellet_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShotgunPellet.WBP_ShotgunPellet_C.PlayEliminationAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShotgunPellet_C::PlayEliminationAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShotgunPellet.WBP_ShotgunPellet_C.PlayEliminationAnim");

	UWBP_ShotgunPellet_C_PlayEliminationAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShotgunPellet.WBP_ShotgunPellet_C.ExecuteUbergraph_WBP_ShotgunPellet
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShotgunPellet_C::ExecuteUbergraph_WBP_ShotgunPellet(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShotgunPellet.WBP_ShotgunPellet_C.ExecuteUbergraph_WBP_ShotgunPellet");

	UWBP_ShotgunPellet_C_ExecuteUbergraph_WBP_ShotgunPellet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
