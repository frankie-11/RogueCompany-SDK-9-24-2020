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

// AnimBlueprintGeneratedClass MasterLobbyWeapon_ABP.MasterLobbyWeapon_ABP_C
// 0x08E1 (0x0C21 - 0x0340)
class UMasterLobbyWeapon_ABP_C : public UKSWeaponAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_CCA36C8D442E4A9BDFF71985772DAF2F;      // 0x0348(0x0030)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_2C620A1E4E3359829BBECDBDBC552F58;// 0x0378(0x00A0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_86E4DADB47670851B4EDAAA2C820F4E9;// 0x0418(0x0018)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_04BA68AC4FCC918E7DAD1AB19E6BAB16;// 0x0430(0x0150)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7E26074A4ACE62E029A4B9BD33E33177;// 0x0580(0x0018)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_FAAD96274E514D725C32DFA111394C90;// 0x0598(0x0150)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1CD71E464FA59BCA800B068CDB2E613E;// 0x06E8(0x00A0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_D84F25CD4E9026C4D5A401BBE998757D;// 0x0788(0x00A0)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_33680B574B14E14744D8BF942C9555F4;// 0x0828(0x0018)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_7BEE3FC6437098AFA3419C8C6FB270F5;// 0x0840(0x0150)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3F9D1C16476B68464EDA659F01F61899;// 0x0990(0x0018)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_50BFE91449A925CF24AB79BBB9E7D3A2;// 0x09A8(0x0150)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8175CCA04B5D1452F074B1BEA6646276;// 0x0AF8(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A722CF9A4A616E7BA9E0F99BA9F23C1C;// 0x0B28(0x00B0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E933ED8F43E96A29756BC4B77831F2A7;      // 0x0BD8(0x0048)
	unsigned char                                      Enable_RoguePose;                                         // 0x0C20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MasterLobbyWeapon_ABP.MasterLobbyWeapon_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_MasterLobbyWeapon_ABP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
