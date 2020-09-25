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

// Function TeammateHealth.TeammateHealth_C.Construct
struct UTeammateHealth_C_Construct_Params
{
};

// Function TeammateHealth.TeammateHealth_C.HandleHealthChanged
struct UTeammateHealth_C_HandleHealthChanged_Params
{
	class AKSCharacterBase**                           KSCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeammateHealth.TeammateHealth_C.HandleOnDowned
struct UTeammateHealth_C_HandleOnDowned_Params
{
	class AKSPlayerState**                             Player_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeammateHealth.TeammateHealth_C.HandleOnElimated
struct UTeammateHealth_C_HandleOnElimated_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeammateHealth.TeammateHealth_C.HandleOnPlayerSet
struct UTeammateHealth_C_HandleOnPlayerSet_Params
{
	class AKSPlayerState**                             Player_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TeammateHealth.TeammateHealth_C.ResetPlayerHealth
struct UTeammateHealth_C_ResetPlayerHealth_Params
{
};

// Function TeammateHealth.TeammateHealth_C.ExecuteUbergraph_TeammateHealth
struct UTeammateHealth_C_ExecuteUbergraph_TeammateHealth_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
