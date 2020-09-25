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

// Function KillCam.KillCam_C.PostSetPlayerState
// (Event, Protected, BlueprintEvent)

void UKillCam_C::PostSetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCam.KillCam_C.PostSetPlayerState");

	UKillCam_C_PostSetPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCam.KillCam_C.SetPlayerStateUIRelevanceChanged
// (Event, Protected, BlueprintEvent)

void UKillCam_C::SetPlayerStateUIRelevanceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCam.KillCam_C.SetPlayerStateUIRelevanceChanged");

	UKillCam_C_SetPlayerStateUIRelevanceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCam.KillCam_C.ExecuteUbergraph_KillCam
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UKillCam_C::ExecuteUbergraph_KillCam(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCam.KillCam_C.ExecuteUbergraph_KillCam");

	UKillCam_C_ExecuteUbergraph_KillCam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
