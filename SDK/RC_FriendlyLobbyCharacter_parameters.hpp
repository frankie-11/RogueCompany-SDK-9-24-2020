#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ReceiveTick
struct AFriendlyLobbyCharacter_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.SetLobbyNameplate
struct AFriendlyLobbyCharacter_C_SetLobbyNameplate_Params
{
	struct FString*                                    PlayerName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UKSItem**                                    AvatarItem;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsLeader;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.HideLobbyNameplate
struct AFriendlyLobbyCharacter_C_HideLobbyNameplate_Params
{
};

// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ShowLobbyNameplate
struct AFriendlyLobbyCharacter_C_ShowLobbyNameplate_Params
{
};

// Function FriendlyLobbyCharacter.FriendlyLobbyCharacter_C.ExecuteUbergraph_FriendlyLobbyCharacter
struct AFriendlyLobbyCharacter_C_ExecuteUbergraph_FriendlyLobbyCharacter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
