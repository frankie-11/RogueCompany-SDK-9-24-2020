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

// Function MasterLobby_ABP.MasterLobby_ABP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UMasterLobby_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobby_ABP.MasterLobby_ABP_C.AnimGraph");

	UMasterLobby_ABP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Unlock_LProp
// (BlueprintCallable, BlueprintEvent)

void UMasterLobby_ABP_C::AnimNotify_Lobby_Unlock_LProp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Unlock_LProp");

	UMasterLobby_ABP_C_AnimNotify_Lobby_Unlock_LProp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Unlock_RProp
// (BlueprintCallable, BlueprintEvent)

void UMasterLobby_ABP_C::AnimNotify_Lobby_Unlock_RProp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Unlock_RProp");

	UMasterLobby_ABP_C_AnimNotify_Lobby_Unlock_RProp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Lock_LProp
// (BlueprintCallable, BlueprintEvent)

void UMasterLobby_ABP_C::AnimNotify_Lobby_Lock_LProp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Lock_LProp");

	UMasterLobby_ABP_C_AnimNotify_Lobby_Lock_LProp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Lock_RProp
// (BlueprintCallable, BlueprintEvent)

void UMasterLobby_ABP_C::AnimNotify_Lobby_Lock_RProp()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobby_ABP.MasterLobby_ABP_C.AnimNotify_Lobby_Lock_RProp");

	UMasterLobby_ABP_C_AnimNotify_Lobby_Lock_RProp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UMasterLobby_ABP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobby_ABP.MasterLobby_ABP_C.BlueprintInitializeAnimation");

	UMasterLobby_ABP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.Set Skinned Local Parameters
// (HasOutParms, BlueprintCallable, BlueprintEvent)

void UMasterLobby_ABP_C::Set_Skinned_Local_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobby_ABP.MasterLobby_ABP_C.Set Skinned Local Parameters");

	UMasterLobby_ABP_C_Set_Skinned_Local_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterLobby_ABP.MasterLobby_ABP_C.ExecuteUbergraph_MasterLobby_ABP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMasterLobby_ABP_C::ExecuteUbergraph_MasterLobby_ABP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterLobby_ABP.MasterLobby_ABP_C.ExecuteUbergraph_MasterLobby_ABP");

	UMasterLobby_ABP_C_ExecuteUbergraph_MasterLobby_ABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
