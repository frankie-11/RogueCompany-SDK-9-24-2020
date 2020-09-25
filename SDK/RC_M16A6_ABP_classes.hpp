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

// AnimBlueprintGeneratedClass M16A6_ABP.M16A6_ABP_C
// 0x00B0 (0x03F0 - 0x0340)
class UM16A6_ABP_C : public UKSWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9F7FFB3542F79771D14204BA29F461E9;      // 0x0348(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EC17ABC84FA96AD77C8F9A9CF4D12CB4;// 0x0378(0x0078)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass M16A6_ABP.M16A6_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M16A6_ABP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
