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

// BlueprintGeneratedClass MusicAudioPlayer.MusicAudioPlayer_C
// 0x0000 (0x04F8 - 0x04F8)
class AMusicAudioPlayer_C : public AKSAudioPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MusicAudioPlayer.MusicAudioPlayer_C");
		return ptr;
	}


	void PrependStringToEventArray(struct FString* PrependStringIn, TArray<struct FString>* EventNameArrayIn, TArray<struct FString>* EventNameArrayOut);
	TArray<struct FString> ComposeEventNamePriorityArray(struct FString* EventName, class UKSAudioPlayerStateParameterData** CurrentStateParameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
