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

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
// 0x0090
struct FLiveLinkSubjectFrameMessage
{
	struct FName                                       SubjectName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          Transforms;                                               // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FLiveLinkCurveElement>               Curves;                                                   // 0x0018(0x0010) (ZeroConstructor)
	struct FLiveLinkMetaData                           MetaData;                                                 // 0x0028(0x0060)
	double                                             Time;                                                     // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
// 0x0028
struct FLiveLinkSubjectDataMessage
{
	struct FLiveLinkRefSkeleton                        RefSkeleton;                                              // 0x0000(0x0020)
	struct FName                                       SubjectName;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkClearSubject
// 0x0008
struct FLiveLinkClearSubject
{
	struct FName                                       SubjectName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
// 0x0001
struct FLiveLinkHeartbeatMessage
{

};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage
// 0x0004
struct FLiveLinkConnectMessage
{
	int                                                LiveLinkVersion;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage
// 0x0040
struct FLiveLinkPongMessage
{
	struct FString                                     ProviderName;                                             // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MachineName;                                              // 0x0010(0x0010) (ZeroConstructor)
	struct FGuid                                       PollRequest;                                              // 0x0020(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                LiveLinkVersion;                                          // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	double                                             CreationPlatformTime;                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPingMessage
// 0x0014
struct FLiveLinkPingMessage
{
	struct FGuid                                       PollRequest;                                              // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	int                                                LiveLinkVersion;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
