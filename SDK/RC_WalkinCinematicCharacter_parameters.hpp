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

// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.InitBodyApperal
struct AWalkinCinematicCharacter_C_InitBodyApperal_Params
{
};

// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.ReceiveBeginPlay
struct AWalkinCinematicCharacter_C_ReceiveBeginPlay_Params
{
};

// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.Add Body Apparel As Parent
struct AWalkinCinematicCharacter_C_Add_Body_Apparel_As_Parent_Params
{
	class USkinnableSkeletalMeshComponent**            Skinnable_Mesh_Comonent;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.AnimInitialized
struct AWalkinCinematicCharacter_C_AnimInitialized_Params
{
};

// Function WalkinCinematicCharacter.WalkinCinematicCharacter_C.ExecuteUbergraph_WalkinCinematicCharacter
struct AWalkinCinematicCharacter_C_ExecuteUbergraph_WalkinCinematicCharacter_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
