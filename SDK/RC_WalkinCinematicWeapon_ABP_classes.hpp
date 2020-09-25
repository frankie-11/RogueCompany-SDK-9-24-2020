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

// AnimBlueprintGeneratedClass WalkinCinematicWeapon_ABP.WalkinCinematicWeapon_ABP_C
// 0x04D0 (0x0810 - 0x0340)
class UWalkinCinematicWeapon_ABP_C : public UKSWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_044CD6EC4752238EDA55549CA3C1FD08;      // 0x0348(0x0030)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_30BD693A408454085755E2BF747AEADB;// 0x0378(0x00A0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_1490393940625C4D80F6019770500EC8;// 0x0418(0x0018)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_51AE72E64426FC625AD52CAF31F6E92B;// 0x0430(0x0150)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_DD367B0B483A64E7DA3C6C90BEAD7B82;// 0x0580(0x0018)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_912837564157F91267F2629C5D436433;// 0x0598(0x0150)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_B29F4EB44641F63BDB1AF1A289B70C58;// 0x06E8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_46DB7B43466E212A540D10815529D6E9;// 0x0718(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_92BA09BB4649A72128DD258707D834B0;      // 0x07C8(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass WalkinCinematicWeapon_ABP.WalkinCinematicWeapon_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_WalkinCinematicWeapon_ABP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
