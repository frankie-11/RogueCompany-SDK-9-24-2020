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

// BlueprintGeneratedClass TextTypeEffect.TextTypeEffect_C
// 0x0044 (0x006C - 0x0028)
class UTextTypeEffect_C : public UObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  TextComponent;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       Text;                                                     // 0x0038(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     CursorToken;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ElapsedTime;                                              // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TypeSpeed;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CursorSpeed;                                              // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TextTypeEffect.TextTypeEffect_C");
		return ptr;
	}


	void SetText(struct FText* Text);
	void Tick(float* dt);
	void StartType();
	void ExecuteUbergraph_TextTypeEffect(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
