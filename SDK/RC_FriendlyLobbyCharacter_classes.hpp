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

// BlueprintGeneratedClass FriendlyLobbyCharacter.FriendlyLobbyCharacter_C
// 0x0031 (0x3741 - 0x3710)
class AFriendlyLobbyCharacter_C : public ALobbyMainCharacter_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3710(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                            WidgetNameplate;                                          // 0x3718(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      PendingIsLeader;                                          // 0x3720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UKSItem*                                     PendingAvatar;                                            // 0x3728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     PendingPlayerName;                                        // 0x3730(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      NeedsToSetNameplate;                                      // 0x3740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FriendlyLobbyCharacter.FriendlyLobbyCharacter_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void SetLobbyNameplate(struct FString* PlayerName, class UKSItem** AvatarItem, bool* IsLeader);
	void HideLobbyNameplate();
	void ShowLobbyNameplate();
	void ExecuteUbergraph_FriendlyLobbyCharacter(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
