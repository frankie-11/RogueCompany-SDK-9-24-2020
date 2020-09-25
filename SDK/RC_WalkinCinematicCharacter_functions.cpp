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

// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.InitBodyApperal
// (Public, BlueprintCallable, BlueprintEvent)

void AWalkinCinematicCharacter_C::InitBodyApperal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.InitBodyApperal");

	AWalkinCinematicCharacter_C_InitBodyApperal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AWalkinCinematicCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.ReceiveBeginPlay");

	AWalkinCinematicCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.Add Body Apparel As Parent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkinnableSkeletalMeshComponent** Skinnable_Mesh_Comonent        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AWalkinCinematicCharacter_C::Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent** Skinnable_Mesh_Comonent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.Add Body Apparel As Parent");

	AWalkinCinematicCharacter_C_Add_Body_Apparel_As_Parent_Params params;
	params.Skinnable_Mesh_Comonent = Skinnable_Mesh_Comonent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.AnimInitialized
// (BlueprintCallable, BlueprintEvent)

void AWalkinCinematicCharacter_C::AnimInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.AnimInitialized");

	AWalkinCinematicCharacter_C_AnimInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.ExecuteUbergraph_WalkinCinematicCharacter
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AWalkinCinematicCharacter_C::ExecuteUbergraph_WalkinCinematicCharacter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.ExecuteUbergraph_WalkinCinematicCharacter");

	AWalkinCinematicCharacter_C_ExecuteUbergraph_WalkinCinematicCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
