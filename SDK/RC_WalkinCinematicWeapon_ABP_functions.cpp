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

// Function WalkinCinematicWeapon_ABP.WalkinCinematicWeapon_ABP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UWalkinCinematicWeapon_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicWeapon_ABP.WalkinCinematicWeapon_ABP_C.AnimGraph");

	UWalkinCinematicWeapon_ABP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function WalkinCinematicWeapon_ABP.WalkinCinematicWeapon_ABP_C.ExecuteUbergraph_WalkinCinematicWeapon_ABP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWalkinCinematicWeapon_ABP_C::ExecuteUbergraph_WalkinCinematicWeapon_ABP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicWeapon_ABP.WalkinCinematicWeapon_ABP_C.ExecuteUbergraph_WalkinCinematicWeapon_ABP");

	UWalkinCinematicWeapon_ABP_C_ExecuteUbergraph_WalkinCinematicWeapon_ABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
