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

// Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary");
		return ptr;
	}


	void STATIC_SetAnimationBudgetParameters(class UObject** WorldContextObject, struct FAnimationBudgetAllocatorParameters* InParameters);
	void STATIC_EnableAnimationBudget(class UObject** WorldContextObject, bool* bEnabled);
};


// Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// 0x0020 (0x0B70 - 0x0B50)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0B50(0x0018) MISSED OFFSET
	unsigned char                                      bAutoRegisterWithBudgetAllocator : 1;                     // 0x0B68(0x0001) (Edit, BlueprintVisible BITFIELD: 0101)
	unsigned char                                      bAutoCalculateSignificance : 1;                           // 0x0B68(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bShouldUseActorRenderedFlag : 1;                          // 0x0B68(0x0001) (Edit BITFIELD: 0404)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted");
		return ptr;
	}


	void SetAutoRegisterWithBudgetAllocator(bool* bInAutoRegisterWithBudgetAllocator);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
