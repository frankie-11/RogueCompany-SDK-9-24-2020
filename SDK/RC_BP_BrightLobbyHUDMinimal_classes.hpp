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

// BlueprintGeneratedClass BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C
// 0x0008 (0x0608 - 0x0600)
class ABP_BrightLobbyHUDMinimal_C : public AKSLobbyHUDNew
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BrightLobbyHUDMinimal.BP_BrightLobbyHUDMinimal_C");
		return ptr;
	}


	void CallRemoveTopViewRoute(bool* ForceTransition, bool* ViewChanged);
	void CallAddViewRoute(struct FName* RouteName, bool* ClearRouteStack, bool* ForceTransition, bool* ViewChanged);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
