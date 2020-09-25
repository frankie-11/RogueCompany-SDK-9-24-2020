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

// BlueprintGeneratedClass GamePlayerController.GamePlayerController_C
// 0x0009 (0x0C31 - 0x0C28)
class AGamePlayerController_C : public AGamePlayerControllerNoHUD_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C28(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      NewVar_1;                                                 // 0x0C30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GamePlayerController.GamePlayerController_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_GamePlayerController(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
