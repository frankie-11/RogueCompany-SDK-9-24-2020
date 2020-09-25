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

// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFriendlyLobbyCharacter_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ReceiveTick");

	AFriendlyLobbyCharacter_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.SetLobbyNameplate
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UKSItem**                AvatarItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsLeader                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFriendlyLobbyCharacter_C::SetLobbyNameplate(struct FString* PlayerName, class UKSItem** AvatarItem, bool* IsLeader)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.SetLobbyNameplate");

	AFriendlyLobbyCharacter_C_SetLobbyNameplate_Params params;
	params.PlayerName = PlayerName;
	params.AvatarItem = AvatarItem;
	params.IsLeader = IsLeader;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.HideLobbyNameplate
// (Event, Public, BlueprintEvent)

void AFriendlyLobbyCharacter_C::HideLobbyNameplate()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.HideLobbyNameplate");

	AFriendlyLobbyCharacter_C_HideLobbyNameplate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ShowLobbyNameplate
// (Event, Public, BlueprintEvent)

void AFriendlyLobbyCharacter_C::ShowLobbyNameplate()
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ShowLobbyNameplate");

	AFriendlyLobbyCharacter_C_ShowLobbyNameplate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ExecuteUbergraph_FriendlyLobbyCharacter
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFriendlyLobbyCharacter_C::ExecuteUbergraph_FriendlyLobbyCharacter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ExecuteUbergraph_FriendlyLobbyCharacter");

	AFriendlyLobbyCharacter_C_ExecuteUbergraph_FriendlyLobbyCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
