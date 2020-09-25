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

// BlueprintGeneratedClass WalkinCinematicCharacter.WalkinCinematicCharacter_C
// 0x0060 (0x36D0 - 0x3670)
class AWalkinCinematicCharacter_C : public AKSLobbyCharacter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x3670(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x3678(0x0008) MISSED OFFSET
	struct FTransform                                  Transform_Reset;                                          // 0x3680(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Character_Name;                                           // 0x36B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Player_Name;                                              // 0x36C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WalkinCinematicCharacter.WalkinCinematicCharacter_C");
		return ptr;
	}


	void InitBodyApperal();
	void ReceiveBeginPlay();
	void Add_Body_Apparel_As_Parent(class USkinnableSkeletalMeshComponent** Skinnable_Mesh_Comonent);
	void AnimInitialized();
	void ExecuteUbergraph_WalkinCinematicCharacter(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
