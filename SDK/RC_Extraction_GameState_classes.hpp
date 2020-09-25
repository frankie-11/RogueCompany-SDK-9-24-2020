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

// BlueprintGeneratedClass Extraction_GameState.Extraction_GameState_C
// 0x0008 (0x14F8 - 0x14F0)
class AExtraction_GameState_C : public AKSGameState_Extraction
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x14F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Extraction_GameState.Extraction_GameState_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
