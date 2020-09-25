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

// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.GetWorldPosition
struct UEnemyPingMinimapIcon_C_GetWorldPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.Construct
struct UEnemyPingMinimapIcon_C_Construct_Params
{
};

// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.Re Ping
struct UEnemyPingMinimapIcon_C_Re_Ping_Params
{
	struct FKSClientShotInfo*                          ShotInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.UpdateMeetsHeightThreshold
struct UEnemyPingMinimapIcon_C_UpdateMeetsHeightThreshold_Params
{
	bool*                                              bHeight;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDepth;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.ExecuteUbergraph_EnemyPingMinimapIcon
struct UEnemyPingMinimapIcon_C_ExecuteUbergraph_EnemyPingMinimapIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.PingExpired__DelegateSignature
struct UEnemyPingMinimapIcon_C_PingExpired__DelegateSignature_Params
{
	unsigned char*                                     Icon_Type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
