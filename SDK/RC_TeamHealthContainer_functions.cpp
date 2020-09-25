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

// Function TeamHealthContainer.TeamHealthContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeamHealthContainer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamHealthContainer.TeamHealthContainer_C.Construct");

	UTeamHealthContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamHealthContainer.TeamHealthContainer_C.UpdateTeammateHealthBars
// (BlueprintCallable, BlueprintEvent)

void UTeamHealthContainer_C::UpdateTeammateHealthBars()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamHealthContainer.TeamHealthContainer_C.UpdateTeammateHealthBars");

	UTeamHealthContainer_C_UpdateTeammateHealthBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamHealthContainer.TeamHealthContainer_C.HandlePlayerSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase**       NewCharacter                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamHealthContainer_C::HandlePlayerSpawn(class AKSCharacterBase** NewCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamHealthContainer.TeamHealthContainer_C.HandlePlayerSpawn");

	UTeamHealthContainer_C_HandlePlayerSpawn_Params params;
	params.NewCharacter = NewCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamHealthContainer.TeamHealthContainer_C.HandlePhaseChnage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NewPhaseName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousPhaseName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamHealthContainer_C::HandlePhaseChnage(struct FName* NewPhaseName, struct FName* PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamHealthContainer.TeamHealthContainer_C.HandlePhaseChnage");

	UTeamHealthContainer_C_HandlePhaseChnage_Params params;
	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamHealthContainer.TeamHealthContainer_C.HandleSetupStart
// (BlueprintCallable, BlueprintEvent)

void UTeamHealthContainer_C::HandleSetupStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamHealthContainer.TeamHealthContainer_C.HandleSetupStart");

	UTeamHealthContainer_C_HandleSetupStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeamHealthContainer.TeamHealthContainer_C.ExecuteUbergraph_TeamHealthContainer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeamHealthContainer_C::ExecuteUbergraph_TeamHealthContainer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeamHealthContainer.TeamHealthContainer_C.ExecuteUbergraph_TeamHealthContainer");

	UTeamHealthContainer_C_ExecuteUbergraph_TeamHealthContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
