#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Qos.EQosResponseType
enum class EQosResponseType : uint8_t
{
	EQosResponseType__NoResponse   = 0,
	EQosResponseType__Success      = 1,
	EQosResponseType__Failure      = 2,
	EQosResponseType__EQosResponseType_MAX = 3
};


// Enum Qos.EQosCompletionResult
enum class EQosCompletionResult : uint8_t
{
	EQosCompletionResult__Invalid  = 0,
	EQosCompletionResult__Success  = 1,
	EQosCompletionResult__Failure  = 2,
	EQosCompletionResult__Canceled = 3,
	EQosCompletionResult__EQosCompletionResult_MAX = 4
};


// Enum Qos.EQosDatacenterResult
enum class EQosDatacenterResult : uint8_t
{
	EQosDatacenterResult__Invalid  = 0,
	EQosDatacenterResult__Success  = 1,
	EQosDatacenterResult__Incomplete = 2,
	EQosDatacenterResult__EQosDatacenterResult_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Qos.QosPingServerInfo
// 0x0018
struct FQosPingServerInfo
{
	struct FString                                     Address;                                                  // 0x0000(0x0010) (ZeroConstructor)
	int                                                Port;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Qos.QosDatacenterInfo
// 0x0038
struct FQosDatacenterInfo
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     RegionId;                                                 // 0x0010(0x0010) (ZeroConstructor)
	unsigned char                                      bEnabled;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FQosPingServerInfo>                  Servers;                                                  // 0x0028(0x0010) (ZeroConstructor)
};

// ScriptStruct Qos.DatacenterQosInstance
// 0x0068
struct FDatacenterQosInstance
{
	struct FQosDatacenterInfo                          Definition;                                               // 0x0000(0x0038) (Transient)
	EQosDatacenterResult                               Result;                                                   // 0x0038(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                AvgPingMs;                                                // 0x003C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<int>                                        PingResults;                                              // 0x0040(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
	struct FDateTime                                   LastCheckTimestamp;                                       // 0x0058(0x0008) (ZeroConstructor, Transient)
	unsigned char                                      bUsable;                                                  // 0x0060(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct Qos.QosRegionInfo
// 0x0030
struct FQosRegionInfo
{
	struct FText                                       DisplayName;                                              // 0x0000(0x0018)
	struct FString                                     RegionId;                                                 // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      bEnabled;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bVisible;                                                 // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoAssignable;                                          // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Qos.RegionQosInstance
// 0x0040
struct FRegionQosInstance
{
	struct FQosRegionInfo                              Definition;                                               // 0x0000(0x0030) (Transient)
	TArray<struct FDatacenterQosInstance>              DatacenterOptions;                                        // 0x0030(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
