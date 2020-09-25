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

// Class Party.Chatroom
// 0x0030 (0x0058 - 0x0028)
class UChatroom : public UObject
{
public:
	struct FString                                     CurrentChatRoomId;                                        // 0x0028(0x0010) (ZeroConstructor)
	int                                                MaxChatRoomRetries;                                       // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NumChatRoomRetries;                                       // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.Chatroom");
		return ptr;
	}

};


// Class Party.SocialManager
// 0x0178 (0x01A0 - 0x0028)
class USocialManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	TArray<class USocialToolkit*>                      SocialToolkits;                                           // 0x0048(0x0010) (ZeroConstructor)
	class USocialDebugTools*                           SocialDebugTools;                                         // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0060(0x0002) MISSED OFFSET
	unsigned char                                      bLeavePartyOnDisconnect;                                  // 0x0062(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x13D];                                     // 0x0063(0x013D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialManager");
		return ptr;
	}

};


// Class Party.SocialParty
// 0x0278 (0x02A0 - 0x0028)
class USocialParty : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET
	class UClass*                                      ReservationBeaconClientClass;                             // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      SpectatorBeaconClientClass;                               // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0068(0x0010) MISSED OFFSET
	struct FUniqueNetIdRepl                            OwningLocalUserId;                                        // 0x0078(0x0028)
	struct FUniqueNetIdRepl                            CurrentLeaderId;                                          // 0x00A0(0x0028)
	TMap<struct FUniqueNetIdRepl, class UPartyMember*> PartyMembersById;                                         // 0x00C8(0x0050) (ZeroConstructor)
	unsigned char                                      bEnableAutomaticPartyRejoin;                              // 0x0118(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x77];                                      // 0x0119(0x0077) MISSED OFFSET
	class APartyBeaconClient*                          ReservationBeaconClient;                                  // 0x0190(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0198(0x0008) MISSED OFFSET
	class ASpectatorBeaconClient*                      SpectatorBeaconClient;                                    // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xF8];                                      // 0x01A8(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialParty");
		return ptr;
	}

};


// Class Party.PartyMember
// 0x00C8 (0x00F0 - 0x0028)
class UPartyMember : public UObject
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0028(0x0040) MISSED OFFSET
	class USocialUser*                                 SocialUser;                                               // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0070(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.PartyMember");
		return ptr;
	}

};


// Class Party.SocialToolkit
// 0x01A0 (0x01C8 - 0x0028)
class USocialToolkit : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET
	class USocialUser*                                 LocalUser;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class USocialUser*>                         AllUsers;                                                 // 0x0068(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0078(0x0050) MISSED OFFSET
	class ULocalPlayer*                                LocalPlayerOwner;                                         // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class USocialChatManager*                          SocialChatManager;                                        // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xF0];                                      // 0x00D8(0x00F0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialToolkit");
		return ptr;
	}

};


// Class Party.SocialChatManager
// 0x01F8 (0x0220 - 0x0028)
class USocialChatManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET
	TMap<TWeakObjectPtr<class USocialUser>, class USocialPrivateMessageChannel*> DirectChannelsByTargetUser;                               // 0x0078(0x0050) (ZeroConstructor)
	TMap<struct FString, class USocialChatRoom*>       ChatRoomsById;                                            // 0x00C8(0x0050) (ZeroConstructor)
	TMap<struct FString, class USocialReadOnlyChatChannel*> ReadOnlyChannelsByDisplayName;                            // 0x0118(0x0050) (ZeroConstructor)
	unsigned char                                      bEnableChatSlashCommands;                                 // 0x0168(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	TMap<struct FUniqueNetIdRepl, class USocialGroupChannel*> GroupChannels;                                            // 0x0170(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x60];                                      // 0x01C0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialChatManager");
		return ptr;
	}

};


// Class Party.SocialChatChannel
// 0x00C0 (0x00E8 - 0x0028)
class USocialChatChannel : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x0028(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialChatChannel");
		return ptr;
	}

};


// Class Party.SocialChatRoom
// 0x0010 (0x00F8 - 0x00E8)
class USocialChatRoom : public USocialChatChannel
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00E8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialChatRoom");
		return ptr;
	}

};


// Class Party.SocialDebugTools
// 0x0060 (0x0088 - 0x0028)
class USocialDebugTools : public UObject
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0028(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialDebugTools");
		return ptr;
	}

};


// Class Party.SocialGroupChannel
// 0x0068 (0x0090 - 0x0028)
class USocialGroupChannel : public UObject
{
public:
	class USocialUser*                                 SocialUser;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FUniqueNetIdRepl                            GroupId;                                                  // 0x0030(0x0028)
	struct FText                                       DisplayName;                                              // 0x0058(0x0018)
	TArray<class USocialUser*>                         Members;                                                  // 0x0070(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0080(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialGroupChannel");
		return ptr;
	}

};


// Class Party.SocialPartyChatRoom
// 0x0000 (0x00F8 - 0x00F8)
class USocialPartyChatRoom : public USocialChatRoom
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialPartyChatRoom");
		return ptr;
	}

};


// Class Party.SocialPrivateMessageChannel
// 0x0008 (0x00F0 - 0x00E8)
class USocialPrivateMessageChannel : public USocialChatChannel
{
public:
	class USocialUser*                                 TargetUser;                                               // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialPrivateMessageChannel");
		return ptr;
	}

};


// Class Party.SocialReadOnlyChatChannel
// 0x0000 (0x00E8 - 0x00E8)
class USocialReadOnlyChatChannel : public USocialChatChannel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialReadOnlyChatChannel");
		return ptr;
	}

};


// Class Party.SocialSettings
// 0x0020 (0x0048 - 0x0028)
class USocialSettings : public UObject
{
public:
	TArray<struct FName>                               OssNamesWithEnvironmentIdPrefix;                          // 0x0028(0x0010) (ZeroConstructor, Config)
	int                                                DefaultMaxPartySize;                                      // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bPreferPlatformInvites;                                   // 0x003C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bMustSendPrimaryInvites;                                  // 0x003D(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	float                                              UserListAutoUpdateRate;                                   // 0x0040(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialSettings");
		return ptr;
	}

};


// Class Party.SocialUser
// 0x0140 (0x0168 - 0x0028)
class USocialUser : public UObject
{
public:
	unsigned char                                      UnknownData00[0x140];                                     // 0x0028(0x0140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Party.SocialUser");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
