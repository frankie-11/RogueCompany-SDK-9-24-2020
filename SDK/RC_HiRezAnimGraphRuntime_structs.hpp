#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_BlendByDedicatedServer
// 0x0028 (0x0038 - 0x0010)
struct FAnimNode_BlendByDedicatedServer : public FAnimNode_Base
{
	struct FPoseLink                                   NotDedicatedServer;                                       // 0x0010(0x0010) (Edit, BlueprintVisible)
	struct FPoseLink                                   DedicatedServer;                                          // 0x0020(0x0010) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_BlendByLOD
// 0x0008 (0x00A0 - 0x0098)
struct FAnimNode_BlendByLOD : public FAnimNode_BlendListBase
{
	int                                                LOD;                                                      // 0x0098(0x0004) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct HiRezAnimGraphRuntime.AnimNode_RigidBodySkipServer
// 0x0000 (0x0560 - 0x0560)
struct FAnimNode_RigidBodySkipServer : public FAnimNode_RigidBody
{
	unsigned char                                      bIsDedicatedServer;                                       // 0x0558(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
