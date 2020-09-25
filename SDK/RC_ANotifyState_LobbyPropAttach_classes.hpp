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

// BlueprintGeneratedClass ANotifyState_LobbyPropAttach.ANotifyState_LobbyPropAttach_C
// 0x0270 (0x02A0 - 0x0030)
class UANotifyState_LobbyPropAttach_C : public UAnimNotifyState
{
public:
	unsigned char                                      Deattach_On_Notify_End;                                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0031(0x000F) MISSED OFFSET
	struct FLobbySkeletalPropInfo                      LobbyWeapon01;                                            // 0x0040(0x0070) (Edit, BlueprintVisible)
	struct FLobbySkeletalPropInfo                      LobbyWeapon02;                                            // 0x00B0(0x0070) (Edit, BlueprintVisible)
	struct FLobbySkeletalPropInfo                      LobbyProp01;                                              // 0x0120(0x0070) (Edit, BlueprintVisible)
	struct FLobbySkeletalPropInfo                      LobbyProp02;                                              // 0x0190(0x0070) (Edit, BlueprintVisible)
	struct FLobbyStaticPropInfo                        LobbyPropStatic01;                                        // 0x0200(0x0050) (Edit, BlueprintVisible)
	struct FLobbyStaticPropInfo                        LobbyPropStatic02;                                        // 0x0250(0x0050) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANotifyState_LobbyPropAttach.ANotifyState_LobbyPropAttach_C");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime);
	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
