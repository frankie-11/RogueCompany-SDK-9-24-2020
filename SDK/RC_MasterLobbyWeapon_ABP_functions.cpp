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

// Function MasterLobbyWeapon_ABP.MasterLobbyWeapon_ABP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UMasterLobbyWeapon_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobbyWeapon_ABP.MasterLobbyWeapon_ABP_C.AnimGraph");

	UMasterLobbyWeapon_ABP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function MasterLobbyWeapon_ABP.MasterLobbyWeapon_ABP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UMasterLobbyWeapon_ABP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobbyWeapon_ABP.MasterLobbyWeapon_ABP_C.BlueprintInitializeAnimation");

	UMasterLobbyWeapon_ABP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterLobbyWeapon_ABP.MasterLobbyWeapon_ABP_C.ExecuteUbergraph_MasterLobbyWeapon_ABP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMasterLobbyWeapon_ABP_C::ExecuteUbergraph_MasterLobbyWeapon_ABP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobbyWeapon_ABP.MasterLobbyWeapon_ABP_C.ExecuteUbergraph_MasterLobbyWeapon_ABP");

	UMasterLobbyWeapon_ABP_C_ExecuteUbergraph_MasterLobbyWeapon_ABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
