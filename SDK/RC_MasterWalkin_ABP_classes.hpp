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

// AnimBlueprintGeneratedClass MasterWalkin_ABP.MasterWalkin_ABP_C
// 0x0C9D (0x1C8D - 0x0FF0)
class UMasterWalkin_ABP_C : public UKSCharacterAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_77024DFF473B425615CA7799918B7B3A;      // 0x0FF8(0x0030)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_671D76694268C77F0267849205BBC8DD;// 0x1028(0x0150)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8C16CF6F45393DC3B5E6D4A3200477CA;// 0x1178(0x0078)
	struct FAnimNode_RigidBodySkipServer               AnimGraphNode_RigidBodySkipServer_786647924325A426535BDFBA12AE5266;// 0x11F0(0x0560)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DCFE0E27473C5D33A9C9349E9B0F037B;// 0x1750(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2E05D20A4D041FCEEB6A3BAC62287A13;// 0x1770(0x0020)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_42257FE34872DC3B131058B8CBE66581;// 0x1790(0x00A0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F1DDACE34FA4C8956F335398F9FA3D56;// 0x1830(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_FC35CCEF442F67754FA2CB9235481F83;// 0x18E8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_21796F634455234228531FA5D226E9CA;// 0x1910(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_40E218CD4CD794FBFAFE26859F842FAF;// 0x1938(0x00A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_20845DA64EE3C6C93156419521763E56;// 0x19D8(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_322469B14B2F164A8A8D1EB85898CC27;// 0x19F8(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_C49A9A4B4D3F2DE8ED57EAA3421BFAA4;// 0x1B00(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_322085154B543FECA9B522AD64DB695E;// 0x1BB8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D040668D49D2216F94B022A5488EAE88;// 0x1BE0(0x0020)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6C4D2FA8490D302D6F93F2BA7A2E4F45;// 0x1C00(0x0028)
	unsigned char                                      ChildPhysicsAssetEnable;                                  // 0x1C28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x1C29(0x0050) UNKNOWN PROPERTY: SetProperty MasterWalkin_ABP.MasterWalkin_ABP_C.NewVar_1
	struct FVector                                     CharacterScale;                                           // 0x1C80(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      SkinUseCharacterScale;                                    // 0x1C8C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MasterWalkin_ABP.MasterWalkin_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void Update_Skin_Dependent_Variables();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void Set_Skin_Parameters();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_MasterWalkin_ABP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
