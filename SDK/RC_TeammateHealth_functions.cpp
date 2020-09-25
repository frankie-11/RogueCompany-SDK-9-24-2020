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

// Function TeammateHealth.TeammateHealth_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UTeammateHealth_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.Construct");

	UTeammateHealth_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammateHealth.TeammateHealth_C.HandleHealthChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacterBase**       KSCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeammateHealth_C::HandleHealthChanged(class AKSCharacterBase** KSCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.HandleHealthChanged");

	UTeammateHealth_C_HandleHealthChanged_Params params;
	params.KSCharacter = KSCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammateHealth.TeammateHealth_C.HandleOnDowned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         Player_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeammateHealth_C::HandleOnDowned(class AKSPlayerState** Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.HandleOnDowned");

	UTeammateHealth_C_HandleOnDowned_Params params;
	params.Player_State = Player_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammateHealth.TeammateHealth_C.HandleOnElimated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeammateHealth_C::HandleOnElimated(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.HandleOnElimated");

	UTeammateHealth_C_HandleOnElimated_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammateHealth.TeammateHealth_C.HandleOnPlayerSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         Player_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeammateHealth_C::HandleOnPlayerSet(class AKSPlayerState** Player_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.HandleOnPlayerSet");

	UTeammateHealth_C_HandleOnPlayerSet_Params params;
	params.Player_State = Player_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammateHealth.TeammateHealth_C.ResetPlayerHealth
// (BlueprintCallable, BlueprintEvent)

void UTeammateHealth_C::ResetPlayerHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.ResetPlayerHealth");

	UTeammateHealth_C_ResetPlayerHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TeammateHealth.TeammateHealth_C.ExecuteUbergraph_TeammateHealth
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTeammateHealth_C::ExecuteUbergraph_TeammateHealth(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TeammateHealth.TeammateHealth_C.ExecuteUbergraph_TeammateHealth");

	UTeammateHealth_C_ExecuteUbergraph_TeammateHealth_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
