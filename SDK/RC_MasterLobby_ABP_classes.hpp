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

// AnimBlueprintGeneratedClass MasterLobby_ABP.MasterLobby_ABP_C
// 0x1299 (0x2289 - 0x0FF0)
class UMasterLobby_ABP_C : public UKSCharacterAnimInst
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_277369704611CC1BD6CD14BD4807523D;      // 0x0FF8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A59253D44E03C33323A142AB854B7BCE;// 0x1028(0x0078)
	struct FAnimNode_SequenceSkinned                   AnimGraphNode_SequenceSkinned_11D297664E0EE426BA8BC9B4804DF2FD;// 0x10A0(0x0150)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A8E04B6A44FFEFDC8684AA93318B7D67;// 0x11F0(0x0030)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_19AD10D241057E164F858AAD44278FB8;// 0x1220(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_59BAB124486E6DD2FF2DF788B5D22828;// 0x12D0(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_91C9F7774D063883212B8593F2F5C163;// 0x12F0(0x0020)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B5D25F5C45127E0D2E45868FA42DB7E8;// 0x1310(0x00C0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6295289243A993C010BD0CBF5A6D2F56;// 0x13D0(0x0078)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_A7D8051846F830F5D6A5909F291F71AA;  // 0x1448(0x00F0)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_412A24E84BDC4DF64A7DCABD9788254A;  // 0x1538(0x00F0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_090835764BF91F4D8D08DB83EE80BDFB;// 0x1628(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_29BA77D0456D1138C1984B985B9F1258;// 0x16E0(0x0028)
	unsigned char                                      __CustomProperty_bIsLobby_90FBADB5424A5A00D7B0F4B018D67A66;// 0x1708(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      __CustomProperty_bIsServer_90FBADB5424A5A00D7B0F4B018D67A66;// 0x1709(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FAnimNode_LinkedAnimGraph                   AnimGraphNode_SubInstance_90FBADB5424A5A00D7B0F4B018D67A66;// 0x1710(0x0098)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_274521C14AAF1E0B335A379A3424E46E;      // 0x17A8(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AAC882934EDF8C0E638D44B9E75802C4;// 0x17F0(0x00A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BA5FEC9442A5F11DE97CACA0815B16A4;// 0x1890(0x0020)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_692C9A66463068F0EE9081AF7A8B8A45;// 0x18B0(0x0020)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F157BE3D481737768943ACA208D470D0;// 0x18D0(0x0108)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DB5DBA1043358C9FE7E013BB4B8A7D9E;// 0x19D8(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_37FDA831419D7C6B7304CDB4E2FCE34F;// 0x1A90(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4EE4EF9F47066719AF81DEA978B43566;// 0x1AB8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C37029504CF88FE910461C9A930E9621;// 0x1AE0(0x00A0)
	struct FAnimNode_RigidBodySkipServer               AnimGraphNode_RigidBodySkipServer_A65C4DE64CED165D7F6007B6891670FB;// 0x1B80(0x0560)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7728399348AF66C55B3231ACBE87EDC5;// 0x20E0(0x0020)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_CB48B60C461125739E03C0B4B0585A44;// 0x2100(0x0020)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_FD2015174131D30BBE492DAA1E0CD0C3;// 0x2120(0x00B8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B5E850CB44D07709D9DAB28353A785EB;// 0x21D8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4711F6D04FC24C57AADF58BEB6C4ED55;// 0x2200(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_689D96C242CFA5D8E1BB4C9CED04E150;      // 0x2228(0x0048)
	float                                              R_Prop_Lock_Alpha;                                        // 0x2270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              L_Prop_Lock_Alpha;                                        // 0x2274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsServer;                                                // 0x2278(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      SkinUseCharacterScale;                                    // 0x2279(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CharacterScale;                                           // 0x227C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      ChildPhysicsAssetEnable;                                  // 0x2288(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MasterLobby_ABP.MasterLobby_ABP_C");
		return ptr;
	}


	void AnimGraph(struct FPoseLink* AnimGraph);
	void AnimNotify_Lobby_Unlock_LProp();
	void AnimNotify_Lobby_Unlock_RProp();
	void AnimNotify_Lobby_Lock_LProp();
	void AnimNotify_Lobby_Lock_RProp();
	void BlueprintInitializeAnimation();
	void Set_Skinned_Local_Parameters();
	void ExecuteUbergraph_MasterLobby_ABP(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
