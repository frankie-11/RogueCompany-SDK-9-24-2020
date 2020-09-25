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

// Function CinematicCharacterManager.CinematicCharacterManager_C.SpawnCinematicCharacter
// (BlueprintCallable, BlueprintEvent)

void ACinematicCharacterManager_C::SpawnCinematicCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCharacterManager.CinematicCharacterManager_C.SpawnCinematicCharacter");

	ACinematicCharacterManager_C_SpawnCinematicCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CinematicCharacterManager.CinematicCharacterManager_C.DestroyCinematicCharacter
// (BlueprintCallable, BlueprintEvent)

void ACinematicCharacterManager_C::DestroyCinematicCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCharacterManager.CinematicCharacterManager_C.DestroyCinematicCharacter");

	ACinematicCharacterManager_C_DestroyCinematicCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CinematicCharacterManager.CinematicCharacterManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACinematicCharacterManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCharacterManager.CinematicCharacterManager_C.ReceiveBeginPlay");

	ACinematicCharacterManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CinematicCharacterManager.CinematicCharacterManager_C.ExecuteUbergraph_CinematicCharacterManager
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACinematicCharacterManager_C::ExecuteUbergraph_CinematicCharacterManager(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CinematicCharacterManager.CinematicCharacterManager_C.ExecuteUbergraph_CinematicCharacterManager");

	ACinematicCharacterManager_C_ExecuteUbergraph_CinematicCharacterManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
