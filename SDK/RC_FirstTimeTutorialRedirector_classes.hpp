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

// BlueprintGeneratedClass FirstTimeTutorialRedirector.FirstTimeTutorialRedirector_C
// 0x0000 (0x0038 - 0x0038)
class UFirstTimeTutorialRedirector_C : public UKSActivity_ViewRedirector
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FirstTimeTutorialRedirector.FirstTimeTutorialRedirector_C");
		return ptr;
	}


	class UKSActivityManagerBase* GetRelevantActivityManager(class UKSGameInstance** GameInstance);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
