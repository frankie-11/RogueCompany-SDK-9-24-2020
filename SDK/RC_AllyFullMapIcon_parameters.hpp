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

// Function AllyFullMapIcon.AllyFullMapIcon_C.GetWorldPosition
struct UAllyFullMapIcon_C_GetWorldPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AllyFullMapIcon.AllyFullMapIcon_C.GetWorldYaw
struct UAllyFullMapIcon_C_GetWorldYaw_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AllyFullMapIcon.AllyFullMapIcon_C.ShouldUpdate
struct UAllyFullMapIcon_C_ShouldUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function AllyFullMapIcon.AllyFullMapIcon_C.Construct
struct UAllyFullMapIcon_C_Construct_Params
{
};

// Function AllyFullMapIcon.AllyFullMapIcon_C.Ally State
struct UAllyFullMapIcon_C_Ally_State_Params
{
	class AKSPlayerState**                             PlayerState;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AllyFullMapIcon.AllyFullMapIcon_C.ExecuteUbergraph_AllyFullMapIcon
struct UAllyFullMapIcon_C_ExecuteUbergraph_AllyFullMapIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
