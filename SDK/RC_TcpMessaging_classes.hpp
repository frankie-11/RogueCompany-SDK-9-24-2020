#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TcpMessaging.TcpMessagingSettings
// 0x0030 (0x0058 - 0x0028)
class UTcpMessagingSettings : public UObject
{
public:
	unsigned char                                      EnableTransport;                                          // 0x0028(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     ListenEndpoint;                                           // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             ConnectToEndpoints;                                       // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	int                                                ConnectionRetryDelay;                                     // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TcpMessaging.TcpMessagingSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
