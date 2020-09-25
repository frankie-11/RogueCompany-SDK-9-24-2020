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

// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.GetWorldPosition
struct UEnemyPingFullMapIcon_C_GetWorldPosition_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.GetPingType
struct UEnemyPingFullMapIcon_C_GetPingType_Params
{
	EKSPingType                                        NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Construct
struct UEnemyPingFullMapIcon_C_Construct_Params
{
};

// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Start Ping
struct UEnemyPingFullMapIcon_C_Start_Ping_Params
{
};

// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Re Ping
struct UEnemyPingFullMapIcon_C_Re_Ping_Params
{
	struct FKSClientShotInfo*                          ShotInfo;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.ExecuteUbergraph_EnemyPingFullMapIcon
struct UEnemyPingFullMapIcon_C_ExecuteUbergraph_EnemyPingFullMapIcon_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.PingExpired__DelegateSignature
struct UEnemyPingFullMapIcon_C_PingExpired__DelegateSignature_Params
{
	unsigned char*                                     Icon_Type;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UniqueId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
