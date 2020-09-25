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

// BlueprintGeneratedClass ExtractionCoop_GameState.ExtractionCoop_GameState_C
// 0x0008 (0x15B0 - 0x15A8)
class AExtractionCoop_GameState_C : public AKSGameState_ExtractionCoop
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x15A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ExtractionCoop_GameState.ExtractionCoop_GameState_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
