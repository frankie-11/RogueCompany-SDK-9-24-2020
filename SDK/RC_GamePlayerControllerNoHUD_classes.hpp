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

// BlueprintGeneratedClass GamePlayerControllerNoHUD.GamePlayerControllerNoHUD_C
// 0x0018 (0x0C28 - 0x0C10)
class AGamePlayerControllerNoHUD_C : public AKSPlayerController
{
public:
	class UPlayerControllerThreatComponent_C*          PlayerControllerThreatComponent;                          // 0x0C10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                ControllerAkComponent;                                    // 0x0C18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDefaultEnvironmentListener_C*               DefaultEnvironmentListener;                               // 0x0C20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GamePlayerControllerNoHUD.GamePlayerControllerNoHUD_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
