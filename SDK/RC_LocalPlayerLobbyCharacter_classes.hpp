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

// BlueprintGeneratedClass LocalPlayerLobbyCharacter.LocalPlayerLobbyCharacter_C
// 0x001A (0x372A - 0x3710)
class ALocalPlayerLobbyCharacter_C : public ALobbyMainCharacter_C
{
public:
	struct FString                                     PendingPlayerName;                                        // 0x3710(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UKSItem*                                     PendingAvatar;                                            // 0x3720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      PendingIsLeader;                                          // 0x3728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      NeedsToSetNameplate;                                      // 0x3729(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LocalPlayerLobbyCharacter.LocalPlayerLobbyCharacter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
