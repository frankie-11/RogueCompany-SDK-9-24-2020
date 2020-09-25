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

// BlueprintGeneratedClass DefaultEnvironmentListener.DefaultEnvironmentListener_C
// 0x0060 (0x0128 - 0x00C8)
class UDefaultEnvironmentListener_C : public UEnvironmentListenerComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       LevelStateGroup;                                          // 0x00D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, struct FName>                 LevelToStateGroupMap;                                     // 0x00D8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultEnvironmentListener.DefaultEnvironmentListener_C");
		return ptr;
	}


	void OnEnvironmentChanged(struct FName* OldEnvironmentTag);
	void Print_State(bool* Print_to_Screen, bool* Print_to_Log, struct FLinearColor* Text_Color, float* Duration);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DefaultEnvironmentListener(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
